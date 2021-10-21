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
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ShouldShowNewBadge
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ShowNewBadge                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_JobGeneralButton_C::ShouldShowNewBadge(bool* ShowNewBadge)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86450);

	UWBP_JobGeneralButton_C_ShouldShowNewBadge_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowNewBadge != nullptr)
		*ShowNewBadge = params.ShowNewBadge;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.IsJobOwned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               owned                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_JobGeneralButton_C::IsJobOwned(bool* owned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86449);

	UWBP_JobGeneralButton_C_IsJobOwned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (owned != nullptr)
		*owned = params.owned;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UpdateOwnershipDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_JobGeneralButton_C::UpdateOwnershipDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86448);

	UWBP_JobGeneralButton_C_UpdateOwnershipDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_JobGeneralButton_C::DisplayFavoriteStatus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86447);

	UWBP_JobGeneralButton_C_DisplayFavoriteStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_JobGeneralButton_C::PopulateJobButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86446);

	UWBP_JobGeneralButton_C_PopulateJobButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_JobGeneralButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86445);

	UWBP_JobGeneralButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86444);

	UWBP_JobGeneralButton_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86443);

	UWBP_JobGeneralButton_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverFavoriteSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnHoverFavoriteSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86442);

	UWBP_JobGeneralButton_C_OnHoverFavoriteSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickFavoriteSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnClickFavoriteSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86441);

	UWBP_JobGeneralButton_C_OnClickFavoriteSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86440);

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_JobGeneralButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86439);

	UWBP_JobGeneralButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_JobGeneralButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86438);

	UWBP_JobGeneralButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86437);

	UWBP_JobGeneralButton_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_JobGeneralButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86436);

	UWBP_JobGeneralButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_JobGeneralButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86435);

	UWBP_JobGeneralButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86434);

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86433);

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_JobGeneralButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86432);

	UWBP_JobGeneralButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86431);

	UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86430);

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86429);

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86428);

	UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86427);

	UWBP_JobGeneralButton_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_JobGeneralButton_C::ExecuteUbergraph_WBP_JobGeneralButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86426);

	UWBP_JobGeneralButton_C_ExecuteUbergraph_WBP_JobGeneralButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnFavorited__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86425);

	UWBP_JobGeneralButton_C_OnFavorited__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_JobGeneralButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86424);

	UWBP_JobGeneralButton_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_JobGeneralButton_C::OnHovered__DelegateSignature(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86423);

	UWBP_JobGeneralButton_C_OnHovered__DelegateSignature_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_JobGeneralButton_C::OnClicked__DelegateSignature(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86422);

	UWBP_JobGeneralButton_C_OnClicked__DelegateSignature_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
