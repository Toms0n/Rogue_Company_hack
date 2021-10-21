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
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BindToLoadouts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponProgressButton_C::BindToLoadouts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78886);

	UWBP_WeaponProgressButton_C_BindToLoadouts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.UpdateFavoriteWeaponStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponProgressButton_C::UpdateFavoriteWeaponStatus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78885);

	UWBP_WeaponProgressButton_C_UpdateFavoriteWeaponStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetVisualProperties
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponProgressButton_C::SetVisualProperties()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78884);

	UWBP_WeaponProgressButton_C_SetVisualProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetIsMasteredDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponProgressButton_C::SetIsMasteredDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78883);

	UWBP_WeaponProgressButton_C_SetIsMasteredDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponProgressButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78882);

	UWBP_WeaponProgressButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78881);

	UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78880);

	UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponProgressButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78879);

	UWBP_WeaponProgressButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponProgressButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78878);

	UWBP_WeaponProgressButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78877);

	UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayWeapon
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              DisplayedWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponProgressButton_C::DisplayWeapon(class UKSWeaponAsset* DisplayedWeapon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78876);

	UWBP_WeaponProgressButton_C_DisplayWeapon_Params params {};
	params.DisplayedWeapon = DisplayedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponProgressButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78875);

	UWBP_WeaponProgressButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayCosmetic
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAttachment*                         Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponProgressButton_C::DisplayCosmetic(class UKSWeaponAttachment* Cosmetic)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78874);

	UWBP_WeaponProgressButton_C_DisplayCosmetic_Params params {};
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__SubButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78873);

	UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__SubButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78872);

	UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__SubButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78819);

	UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78818);

	UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78817);

	UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayMasteryProgress
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressTotal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponProgressButton_C::DisplayMasteryProgress(int MasteryLevel, int LevelProgressCount, int LevelProgressTotal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78816);

	UWBP_WeaponProgressButton_C_DisplayMasteryProgress_Params params {};
	params.MasteryLevel = MasteryLevel;
	params.LevelProgressCount = LevelProgressCount;
	params.LevelProgressTotal = LevelProgressTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78815);

	UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78814);

	UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponProgressButton_C::BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78813);

	UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.ExecuteUbergraph_WBP_WeaponProgressButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponProgressButton_C::ExecuteUbergraph_WBP_WeaponProgressButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78812);

	UWBP_WeaponProgressButton_C_ExecuteUbergraph_WBP_WeaponProgressButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.OnFavoriteSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponProgressButton_C::OnFavoriteSelected__DelegateSignature(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78811);

	UWBP_WeaponProgressButton_C_OnFavoriteSelected__DelegateSignature_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
