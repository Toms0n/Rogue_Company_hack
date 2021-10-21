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
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatarFromPath
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSoftObjectPath                             Icon_Path                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Avatar_C::SetAvatarFromPath(const struct FSoftObjectPath& Icon_Path)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55989);

	UWBP_PlayerIdentity_Avatar_C_SetAvatarFromPath_Params params {};
	params.Icon_Path = Icon_Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIdentity_Avatar_C::SetAvatar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55988);

	UWBP_PlayerIdentity_Avatar_C_SetAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
