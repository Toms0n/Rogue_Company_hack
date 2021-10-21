// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00AD7BA0
//		Name   -> Function Hotfix.OnlineHotfixManager.StartHotfixProcess
//		Flags  -> (Native, Public, BlueprintCallable)
void UOnlineHotfixManager::StartHotfixProcess()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10083);

	UOnlineHotfixManager_StartHotfixProcess_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
