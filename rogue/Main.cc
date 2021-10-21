#include "hook/hook.hh"

void init_thread()
{
	if (!hook::init()) { return; }
}

BOOL __stdcall DllMain(HMODULE m, DWORD r, LPVOID res)
{
	if (r == DLL_PROCESS_ATTACH)
	{
		init_thread();
	}
	return TRUE;
}