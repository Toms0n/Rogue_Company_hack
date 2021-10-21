#include "addr.hh"

void addr::setup_sdk()
{
	const uintptr_t base_address = (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)));
	u_world = reinterpret_cast<CG::UWorld**>(base_address + 0x6691C28);
	CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x654F2B8);
	CG::FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(base_address + 0x6523040);
	bone = base_address + 0x370D350;
}
