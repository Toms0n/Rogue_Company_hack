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
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80502);

	UWBP_BattlepassTransitionBanner_C_SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80501);

	UWBP_BattlepassTransitionBanner_C_SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.EndTransitionAnimationEarly
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::EndTransitionAnimationEarly()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80500);

	UWBP_BattlepassTransitionBanner_C_EndTransitionAnimationEarly_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.DisplayAcquiredTier
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::DisplayAcquiredTier(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80499);

	UWBP_BattlepassTransitionBanner_C_DisplayAcquiredTier_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_PremiumUnlocked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlepassTransitionBanner_C::PlayAnimation_PremiumUnlocked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80498);

	UWBP_BattlepassTransitionBanner_C_PlayAnimation_PremiumUnlocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierPremium
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::PlayAnimation_NewTierPremium()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80497);

	UWBP_BattlepassTransitionBanner_C_PlayAnimation_NewTierPremium_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierFree
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::PlayAnimation_NewTierFree()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80496);

	UWBP_BattlepassTransitionBanner_C_PlayAnimation_NewTierFree_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Premium
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlepassTransitionBanner_C::UpdateColors_Premium()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80495);

	UWBP_BattlepassTransitionBanner_C_UpdateColors_Premium_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Free
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlepassTransitionBanner_C::UpdateColors_Free()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80494);

	UWBP_BattlepassTransitionBanner_C_UpdateColors_Free_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlepassTransitionBanner_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80493);

	UWBP_BattlepassTransitionBanner_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80492);

	UWBP_BattlepassTransitionBanner_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsPremium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::MakeColorsPremium()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80491);

	UWBP_BattlepassTransitionBanner_C_MakeColorsPremium_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_NewTier
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::SetBannerText_NewTier()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80490);

	UWBP_BattlepassTransitionBanner_C_SetBannerText_NewTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_PremiumUnlocked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::SetBannerText_PremiumUnlocked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80489);

	UWBP_BattlepassTransitionBanner_C_SetBannerText_PremiumUnlocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsFree
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::MakeColorsFree()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80488);

	UWBP_BattlepassTransitionBanner_C_MakeColorsFree_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80487);

	UWBP_BattlepassTransitionBanner_C_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationStarted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80486);

	UWBP_BattlepassTransitionBanner_C_OnAnimationStarted_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80485);

	UWBP_BattlepassTransitionBanner_C_SequenceEvent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80484);

	UWBP_BattlepassTransitionBanner_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.ExecuteUbergraph_WBP_BattlepassTransitionBanner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlepassTransitionBanner_C::ExecuteUbergraph_WBP_BattlepassTransitionBanner(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80483);

	UWBP_BattlepassTransitionBanner_C_ExecuteUbergraph_WBP_BattlepassTransitionBanner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.TransitionFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_BattlepassTransitionBanner_C::TransitionFinished__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80482);

	UWBP_BattlepassTransitionBanner_C_TransitionFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
