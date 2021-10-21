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
//		Offset -> 0x01857030
//		Name   -> Function NameplateWidget.NameplateWidget_C.Update Visibility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__ForceUpdate__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::Update_Visibility(float bpp__DeltaSeconds__pf, bool bpp__ForceUpdate__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39754);

	UNameplateWidget_C_Update_Visibility_Params params {};
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	params.bpp__ForceUpdate__pf = bpp__ForceUpdate__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856FB0
//		Name   -> Function NameplateWidget.NameplateWidget_C.UpdateColorCorrectionValue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		SlateCore_EColorVisionDeficiency                   bpp__ColorCorrection__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::UpdateColorCorrectionValue(SlateCore_EColorVisionDeficiency bpp__ColorCorrection__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39753);

	UNameplateWidget_C_UpdateColorCorrectionValue_Params params {};
	params.bpp__ColorCorrection__pf = bpp__ColorCorrection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856F90
//		Name   -> Function NameplateWidget.NameplateWidget_C.Unbind Events From PlayerState
//		Flags  -> (Native, Public, BlueprintCallable)
void UNameplateWidget_C::Unbind_Events_From_PlayerState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39752);

	UNameplateWidget_C_Unbind_Events_From_PlayerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856EF0
//		Name   -> Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__ShouldShow__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::Should_Show_Enemy_Nameplate(bool* bpp__ShouldShow__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39751);

	UNameplateWidget_C_Should_Show_Enemy_Nameplate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ShouldShow__pf != nullptr)
		*bpp__ShouldShow__pf = params.bpp__ShouldShow__pf;

}


// Function:
//		Offset -> 0x01856DE0
//		Name   -> Function NameplateWidget.NameplateWidget_C.SetObjectiveMarkerFromGameState
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__ShowObjective__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  bpp__ObjectiveIcon__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__ForceAlways__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::SetObjectiveMarkerFromGameState(bool bpp__ShowObjective__pf, class UTexture2D* bpp__ObjectiveIcon__pf, bool bpp__ForceAlways__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39750);

	UNameplateWidget_C_SetObjectiveMarkerFromGameState_Params params {};
	params.bpp__ShowObjective__pf = bpp__ShowObjective__pf;
	params.bpp__ObjectiveIcon__pf = bpp__ObjectiveIcon__pf;
	params.bpp__ForceAlways__pf = bpp__ForceAlways__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0181D790
//		Name   -> Function NameplateWidget.NameplateWidget_C.SetNamePlateColor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerxState__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::SetNamePlateColor(class AKSPlayerState* bpp__PlayerxState__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39749);

	UNameplateWidget_C_SetNamePlateColor_Params params {};
	params.bpp__PlayerxState__pfT = bpp__PlayerxState__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856D30
//		Name   -> Function NameplateWidget.NameplateWidget_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
// Parameters:
//		bool                                               bpp__IsDesignTime__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::PreConstruct(bool bpp__IsDesignTime__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39748);

	UNameplateWidget_C_PreConstruct_Params params {};
	params.bpp__IsDesignTime__pf = bpp__IsDesignTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856C90
//		Name   -> Function NameplateWidget.NameplateWidget_C.Player Is Blinded
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__IsxBlind__pfT                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::Player_Is_Blinded(bool* bpp__IsxBlind__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39747);

	UNameplateWidget_C_Player_Is_Blinded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__IsxBlind__pfT != nullptr)
		*bpp__IsxBlind__pfT = params.bpp__IsxBlind__pfT;

}


// Function:
//		Offset -> 0x0181D100
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnUnhovered
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UNameplateWidget_C::OnUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39746);

	UNameplateWidget_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856C00
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnSettingsApplied
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       bpp__SettingName__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnSettingsApplied(const struct FName& bpp__SettingName__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39745);

	UNameplateWidget_C_OnSettingsApplied_Params params {};
	params.bpp__SettingName__pf = bpp__SettingName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856B30
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnPossession
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39744);

	UNameplateWidget_C_OnPossession_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856AA0
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPlayerUINeedsUpdate(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39743);

	UNameplateWidget_C_OnPlayerUINeedsUpdate_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856A10
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPlayerDownedChanged_Event(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39742);

	UNameplateWidget_C_OnPlayerDownedChanged_Event_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856940
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnModRemoved
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSPlayerMod*                                bpp__Mod__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSPlayerModInstance*                        bpp__ModInstance__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnModRemoved(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39741);

	UNameplateWidget_C_OnModRemoved_Params params {};
	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856870
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnModAdded
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSPlayerMod*                                bpp__Mod__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSPlayerModInstance*                        bpp__ModInstance__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnModAdded(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39740);

	UNameplateWidget_C_OnModAdded_Params params {};
	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018567E0
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsEnabled__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnKillCamEnabled(bool bpp__IsEnabled__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39739);

	UNameplateWidget_C_OnKillCamEnabled_Params params {};
	params.bpp__IsEnabled__pf = bpp__IsEnabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B589B0
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnHovered
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UNameplateWidget_C::OnHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39738);

	UNameplateWidget_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856750
//		Name   -> Function NameplateWidget.NameplateWidget_C.OnDead
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnDead(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39737);

	UNameplateWidget_C_OnDead_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58E10
//		Name   -> Function NameplateWidget.NameplateWidget_C.Manual Tick
//		Flags  -> (Native, Public, BlueprintCallable)
void UNameplateWidget_C::Manual_Tick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39736);

	UNameplateWidget_C_Manual_Tick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018566C0
//		Name   -> Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf__const                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::Handle_Overheal_Changed(class AKSCharacterBase* bpp__Character__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39735);

	UNameplateWidget_C_Handle_Overheal_Changed_Params params {};
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018566A0
//		Name   -> Function NameplateWidget.NameplateWidget_C.Handle Job Changed
//		Flags  -> (Native, Public, BlueprintCallable)
void UNameplateWidget_C::Handle_Job_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39734);

	UNameplateWidget_C_Handle_Job_Changed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856600
//		Name   -> Function NameplateWidget.NameplateWidget_C.HandleObjectiveStateChanged
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
void UNameplateWidget_C::HandleObjectiveStateChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39733);

	UNameplateWidget_C_HandleObjectiveStateChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856570
//		Name   -> Function NameplateWidget.NameplateWidget_C.HandleNameChanged
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__InKSPlayerState__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::HandleNameChanged(class AKSPlayerState* bpp__InKSPlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39732);

	UNameplateWidget_C_HandleNameChanged_Params params {};
	params.bpp__InKSPlayerState__pf = bpp__InKSPlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018564A0
//		Name   -> Function NameplateWidget.NameplateWidget_C.HandleModActivationChanged
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSPlayerMod_Activated*                      bpp__ActivatedxMod__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__Active__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::HandleModActivationChanged(class UKSPlayerMod_Activated* bpp__ActivatedxMod__pfT, bool bpp__Active__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39731);

	UNameplateWidget_C_HandleModActivationChanged_Params params {};
	params.bpp__ActivatedxMod__pfT = bpp__ActivatedxMod__pfT;
	params.bpp__Active__pf = bpp__Active__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856400
//		Name   -> Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveRegistered
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
void UNameplateWidget_C::HandleGameObjectiveRegistered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39730);

	UNameplateWidget_C_HandleGameObjectiveRegistered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856360
//		Name   -> Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveChanged
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
void UNameplateWidget_C::HandleGameObjectiveChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39729);

	UNameplateWidget_C_HandleGameObjectiveChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018562E0
//		Name   -> Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_6
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::ExecuteUbergraph_NameplateWidget_6(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39728);

	UNameplateWidget_C_ExecuteUbergraph_NameplateWidget_6_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856130
//		Name   -> Function NameplateWidget.NameplateWidget_C.Destruct
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
void UNameplateWidget_C::Destruct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39727);

	UNameplateWidget_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856110
//		Name   -> Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
//		Flags  -> (Native, Public, BlueprintCallable)
void UNameplateWidget_C::Deferred_Player_State_Open()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39726);

	UNameplateWidget_C_Deferred_Player_State_Open_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59FE0
//		Name   -> Function NameplateWidget.NameplateWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
void UNameplateWidget_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39725);

	UNameplateWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856080
//		Name   -> Function NameplateWidget.NameplateWidget_C.CheckMods
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::CheckMods(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39724);

	UNameplateWidget_C_CheckMods_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0181D5F0
//		Name   -> Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf__const                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::CharacterHealthChange(class AKSCharacterBase* bpp__Character__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39723);

	UNameplateWidget_C_CharacterHealthChange_Params params {};
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39722);

	UNameplateWidget_C_OnUIRelevantPlayerStateChanged__DelegateSignature_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerModActivationChange__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UKSPlayerMod_Activated*                      bpp__ActivatedMod__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__Active__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPlayerModActivationChange__DelegateSignature(class UKSPlayerMod_Activated* bpp__ActivatedMod__pf, bool bpp__Active__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39721);

	UNameplateWidget_C_OnPlayerModActivationChange__DelegateSignature_Params params {};
	params.bpp__ActivatedMod__pf = bpp__ActivatedMod__pf;
	params.bpp__Active__pf = bpp__Active__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPlayerEliminated__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39720);

	UNameplateWidget_C_OnPlayerEliminated__DelegateSignature_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnPlayerDownedChanged__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39719);

	UNameplateWidget_C_OnPlayerDownedChanged__DelegateSignature_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnModRemoved__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UKSPlayerMod*                                bpp__Mod__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSPlayerModInstance*                        bpp__ModInstance__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnModRemoved__DelegateSignature(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39718);

	UNameplateWidget_C_OnModRemoved__DelegateSignature_Params params {};
	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnModAdded__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UKSPlayerMod*                                bpp__Mod__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSPlayerModInstance*                        bpp__ModInstance__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnModAdded__DelegateSignature(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39717);

	UNameplateWidget_C_OnModAdded__DelegateSignature_Params params {};
	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnLocalSettingSaved__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       bpp__SettingName__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnLocalSettingSaved__DelegateSignature(const struct FName& bpp__SettingName__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39716);

	UNameplateWidget_C_OnLocalSettingSaved__DelegateSignature_Params params {};
	params.bpp__SettingName__pf = bpp__SettingName__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateTeamChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__KSPlayerState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnKSPlayerStateTeamChanged__DelegateSignature(class AKSPlayerState* bpp__KSPlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39715);

	UNameplateWidget_C_OnKSPlayerStateTeamChanged__DelegateSignature_Params params {};
	params.bpp__KSPlayerState__pf = bpp__KSPlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__KSPlayerState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnKSPlayerStateNameChanged__DelegateSignature(class AKSPlayerState* bpp__KSPlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39714);

	UNameplateWidget_C_OnKSPlayerStateNameChanged__DelegateSignature_Params params {};
	params.bpp__KSPlayerState__pf = bpp__KSPlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnKillCamEnabled__DelegateSignature(bool bpp__bEnabled__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39713);

	UNameplateWidget_C_OnKillCamEnabled__DelegateSignature_Params params {};
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
void UNameplateWidget_C::OnJobChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39712);

	UNameplateWidget_C_OnJobChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNameplateWidget_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39711);

	UNameplateWidget_C_OnHealthChanged__DelegateSignature_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction NameplateWidget.NameplateWidget_C.OnGameObjectiveChanged__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
void UNameplateWidget_C::OnGameObjectiveChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39710);

	UNameplateWidget_C_OnGameObjectiveChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
