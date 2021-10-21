#include "hook.hh"
#include "../gui/imgui.h"
#include "../gui/imgui_impl_win32.h"
#include "../gui/imgui_impl_dx11.h"
#include "../menu/font_def.hh"
#include "../utils/xor.hh"
#include "../menu/menu.hh"
#include "../cheat/player/base.hh"
#include "../cheat/aimbot/base.hh"

#pragma region d3d11_stuff
ID3D11RenderTargetView* rtv;
ID3D11DeviceContext* device_context;
ID3D11Device* device;
HRESULT(*origina_present)(IDXGISwapChain* swap_chain, UINT sync, UINT flags) = nullptr;
#pragma endregion d3d11_stuff

#pragma region help_stuff
inline HWND hwnd;
inline WNDPROC wnd_proc;
constexpr int menu_key = VK_HOME;
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
#pragma endregion help_stuff

void input_thread()
{
	if (GetAsyncKeyState(menu_key) & 0x1) {
		menu::is_opened = !(menu::is_opened);
	}
	if (menu::bone) {
		player::bone();
	}
	if(menu::name){
		player::name();
	}
	if(menu::distance){
		player::distance();
	}
	if(menu::aimbot){
		aimbot_s::aimbot();
	}
}

HRESULT hook::present_hook(IDXGISwapChain* swap_chain, UINT sync, UINT flags)
{
	if (!device)
	{
		if (SUCCEEDED(swap_chain->GetDevice(__uuidof(ID3D11Device), reinterpret_cast<void**>(&device))))
		{
			swap_chain->GetDevice(__uuidof(device), reinterpret_cast<void**>(&device));
			device->GetImmediateContext(&device_context);
		}

		DXGI_SWAP_CHAIN_DESC dscd;
		swap_chain->GetDesc(&dscd);
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		(void)io;
		io.WantCaptureMouse || io.WantTextInput || io.WantCaptureKeyboard;
		hwnd = dscd.OutputWindow;
		if (!hwnd)
		{
			hwnd = FindWindowW(xor_w(L"UnrealWindow"), xor_w(L"Rogue Company  "));
			if (!hwnd)
				hwnd = GetForegroundWindow();
		}
		wnd_proc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hook::WndProc)));
		ImGui_ImplWin32_Init(hwnd);
		ImGui_ImplDX11_Init(device, device_context);
		custom_font->basic();
		custom_font->logo();
		ImGui_ImplDX11_CreateDeviceObjects();
		io.ImeWindowHandle = hwnd;
	}
	if (rtv == nullptr)
	{
		ID3D11Texture2D* back_buffer = nullptr;
		swap_chain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<LPVOID*>(&back_buffer));
		device->CreateRenderTargetView(back_buffer, nullptr, &rtv);
		back_buffer->Release();
	}
	else
		device_context->OMSetRenderTargets(1, &rtv, nullptr);
	ImGui_ImplWin32_NewFrame();
	ImGui_ImplDX11_NewFrame();
	ImGui::NewFrame();
	input_thread();
	menu::render();
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return origina_present(swap_chain, sync, flags);
}

void hook::steam_hook(long long address, long long function, long long* original)
{
	static uintptr_t hook_address;
	if (!hook_address)
		hook_address = sig_scan(xor_a("GameOverlayRenderer64.dll"), xor_a("48 ? ? ? ? 57 48 83 EC 30 33 C0"));

	const auto hook = ((__int64(__fastcall*)(__int64 address, __int64 function, __int64* original, __int64 last_arg))(
		hook_address));
	hook(static_cast<long long>(address), static_cast<long long>(function), original, static_cast<long long>(1));
}

bool hook::init()
{
	if (!GetModuleHandleA(xor_a("GameOverlayRenderer64.dll")))
	{
		MessageBoxA(nullptr, xor_a("SteamOverlayRenderer64.dll Not Loaded!"), xor_a("Fatal Error"), MB_ICONERROR);
		exit(0);
	}
	if (const uintptr_t steam_dxgi_present_scene = sig_scan(
		xor_a("GameOverlayRenderer64.dll"), xor_a("48 89 6C 24 18 48 89 74 24 20 41 56 48 83 EC 20 41 8B E8")))
		hook::steam_hook(steam_dxgi_present_scene, reinterpret_cast<long long>(present_hook),
			reinterpret_cast<long long*>(&origina_present));
}

LRESULT hook::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg) {
	case WM_MOUSEMOVE:
		wnd_stuff::cursor_x = static_cast<short>(lParam);
		wnd_stuff::cursor_x = static_cast<short>(lParam >> 16);
		break;
	case WM_LBUTTONDOWN:
		wnd_stuff::pressed_key[VK_LBUTTON] = true;
		break;
	case WM_LBUTTONUP:
		wnd_stuff::pressed_key[VK_LBUTTON] = false;
		break;
	case WM_RBUTTONDOWN:
		wnd_stuff::pressed_key[VK_RBUTTON] = true;
		break;
	case WM_RBUTTONUP:
		wnd_stuff::pressed_key[VK_RBUTTON] = false;
		break;
	case WM_MBUTTONDOWN:
		wnd_stuff::pressed_key[VK_MBUTTON] = true;
		break;
	case WM_MBUTTONUP:
		wnd_stuff::pressed_key[VK_MBUTTON] = false;
		break;
	case WM_XBUTTONDOWN:
	{
		const UINT button = GET_XBUTTON_WPARAM(wParam);
		if (button == XBUTTON1)
		{
			wnd_stuff::pressed_key[VK_XBUTTON1] = true;
		}
		else if (button == XBUTTON2)
		{
			wnd_stuff::pressed_key[VK_XBUTTON2] = true;
		}
		break;
	}
	case WM_XBUTTONUP:
	{
		const UINT button = GET_XBUTTON_WPARAM(wParam);
		if (button == XBUTTON1)
		{
			wnd_stuff::pressed_key[VK_XBUTTON1] = false;
		}
		else if (button == XBUTTON2)
		{
			wnd_stuff::pressed_key[VK_XBUTTON2] = false;
		}
		break;
	}
	case WM_KEYDOWN:
		wnd_stuff::pressed_key[wParam] = true;
		break;
	case WM_KEYUP:
		wnd_stuff::pressed_key[wParam] = false;
		break;
	default: break;
	}
	if (menu::is_opened && ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	return CallWindowProc(wnd_proc, hWnd, msg, wParam, lParam);
}