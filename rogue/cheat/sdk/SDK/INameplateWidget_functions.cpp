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
//		Name   -> Function INameplateWidget.INameplateWidget_C.OnUnhovered
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UINameplateWidget_C::OnUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25068);

	UINameplateWidget_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function INameplateWidget.INameplateWidget_C.OnPossession
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINameplateWidget_C::OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25067);

	UINameplateWidget_C_OnPossession_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function INameplateWidget.INameplateWidget_C.OnHovered
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UINameplateWidget_C::OnHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25066);

	UINameplateWidget_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
