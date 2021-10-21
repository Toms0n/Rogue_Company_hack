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
//		Name   -> Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EViewSide                          side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIKSContextMenuTarget_C::OnContextMenuOpen(KillstreakUINew_EViewSide side)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62175);

	UIKSContextMenuTarget_C_OnContextMenuOpen_Params params {};
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UIKSContextMenuTarget_C::OnContextMenuClose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62174);

	UIKSContextMenuTarget_C_OnContextMenuClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
