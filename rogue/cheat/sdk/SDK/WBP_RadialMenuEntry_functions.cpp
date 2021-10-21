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
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetHoverOverlay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsShowingHover                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuEntry_C::SetHoverOverlay(bool IsShowingHover)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56189);

	UWBP_RadialMenuEntry_C_SetHoverOverlay_Params params {};
	params.IsShowingHover = IsShowingHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetDisabled
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuEntry_C::SetDisabled(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56188);

	UWBP_RadialMenuEntry_C_SetDisabled_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowBigText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuEntry_C::ShowBigTextInsteadOfIcon(bool ShowBigText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56187);

	UWBP_RadialMenuEntry_C_ShowBigTextInsteadOfIcon_Params params {};
	params.ShowBigText = ShowBigText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RadialMenuEntry_C::SetEmpty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56186);

	UWBP_RadialMenuEntry_C_SetEmpty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                LinearColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuEntry_C::SetIconColor(const struct FLinearColor& LinearColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56185);

	UWBP_RadialMenuEntry_C_SetIconColor_Params params {};
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RadialMenuEntry_C::SetIconFromSoftTexture()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56184);

	UWBP_RadialMenuEntry_C_SetIconFromSoftTexture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShowSmallText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuEntry_C::Set_IconAndName(class UKSItem* Item, bool ShowSmallText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56183);

	UWBP_RadialMenuEntry_C_Set_IconAndName_Params params {};
	params.Item = Item;
	params.ShowSmallText = ShowSmallText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuEntry_C::SetRotation(float Angle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56182);

	UWBP_RadialMenuEntry_C_SetRotation_Params params {};
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RadialMenuEntry_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56181);

	UWBP_RadialMenuEntry_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuEntry_C::ExecuteUbergraph_WBP_RadialMenuEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56180);

	UWBP_RadialMenuEntry_C_ExecuteUbergraph_WBP_RadialMenuEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
