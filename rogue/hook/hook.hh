#pragma once
#include "../utils/sig_scan.hh"
#include "../utils/vec2.hh"
#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

class hook
{
public:
	static HRESULT present_hook(IDXGISwapChain* swap_chain, UINT sync, UINT flags);
	static void steam_hook(__int64 address, __int64 function, __int64* original);
	static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	static bool init();
};

class wnd_stuff
{
public:
	inline static int cursor_x, cursor_y = {};
	inline static bool pressed_key[256] = {};
public:
	static c_vec get_cursor_pos()
	{
		return c_vec(cursor_x, cursor_y);
	}

	static bool custom_keys(int vKey)
	{
		return pressed_key[vKey] == 1 ? true : false;
	}
};

inline auto wnd = new wnd_stuff;