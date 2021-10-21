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
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnGenderChanged
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ALobbyMainCharacter_C::OnGenderChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54585);

	ALobbyMainCharacter_C_OnGenderChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeNameplate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNewWBP_LobbyNameplate_C*                    Nameplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::InitializeNameplate(class UNewWBP_LobbyNameplate_C* Nameplate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54584);

	ALobbyMainCharacter_C_InitializeNameplate_Params params {};
	params.Nameplate = Nameplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ALobbyMainCharacter_C::Randomize_Lobby_Idle_anim_start()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54583);

	ALobbyMainCharacter_C_Randomize_Lobby_Idle_anim_start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ALobbyMainCharacter_C::Make_Lobby_Fidget_Keyword_Array()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54582);

	ALobbyMainCharacter_C_Make_Lobby_Fidget_Keyword_Array_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FName>                               LobbyFidgetKeywordArray                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		Killstreak_EKSLobbyCharacterAnimationPose          Lobby_Character_Animation_Pose                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, Killstreak_EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54581);

	ALobbyMainCharacter_C_Parse_Lobby_Fidget_Animation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyFidgetKeywordArray != nullptr)
		*LobbyFidgetKeywordArray = params.LobbyFidgetKeywordArray;
	if (Lobby_Character_Animation_Pose != nullptr)
		*Lobby_Character_Animation_Pose = params.Lobby_Character_Animation_Pose;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::Get_Montage_Position_of_Lobby_Characater(float* Position)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54580);

	ALobbyMainCharacter_C_Get_Montage_Position_of_Lobby_Characater_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::Init_Body_Apparel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54579);

	ALobbyMainCharacter_C_Init_Body_Apparel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54578);

	ALobbyMainCharacter_C_LobbyWeapon01_Timeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyWeapon01_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54577);

	ALobbyMainCharacter_C_LobbyWeapon01_Timeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54576);

	ALobbyMainCharacter_C_LobbyWeapon02_Timeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyWeapon02_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54575);

	ALobbyMainCharacter_C_LobbyWeapon02_Timeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyProp01_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54574);

	ALobbyMainCharacter_C_LobbyProp01_Timeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALobbyMainCharacter_C::LobbyProp01_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54573);

	ALobbyMainCharacter_C_LobbyProp01_Timeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MontageInstanceID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54572);

	ALobbyMainCharacter_C_OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7_Params params {};
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MontageInstanceID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54571);

	ALobbyMainCharacter_C_OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7_Params params {};
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MontageInstanceID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54570);

	ALobbyMainCharacter_C_OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7_Params params {};
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MontageInstanceID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54569);

	ALobbyMainCharacter_C_OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7_Params params {};
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MontageInstanceID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54568);

	ALobbyMainCharacter_C_OnCompleted_AA177F3D4F176F58A7691D84D8C329C7_Params params {};
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::StopRightPropEffect()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54567);

	ALobbyMainCharacter_C_StopRightPropEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       MaterialParameter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 FloatCurve                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::PlayRightPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54566);

	ALobbyMainCharacter_C_PlayRightPropEffect_Params params {};
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::StopLeftPropEffect()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54565);

	ALobbyMainCharacter_C_StopLeftPropEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       MaterialParameter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 FloatCurve                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::PlayLeftPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54564);

	ALobbyMainCharacter_C_PlayLeftPropEffect_Params params {};
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::StopScenePropEffect()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54563);

	ALobbyMainCharacter_C_StopScenePropEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       MaterialParameter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 FloatCurve                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::PlayScenePropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54562);

	ALobbyMainCharacter_C_PlayScenePropEffect_Params params {};
	params.Duration = Duration;
	params.MaterialParameter = MaterialParameter;
	params.FloatCurve = FloatCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALobbyMainCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54561);

	ALobbyMainCharacter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkinnableSkeletalMeshComponent*             Skinnable_Mesh_Component                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54560);

	ALobbyMainCharacter_C_Add_Body_Apparel_As_Parent_Params params {};
	params.Skinnable_Mesh_Component = Skinnable_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::PlayLobbyCharacterMontage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54559);

	ALobbyMainCharacter_C_PlayLobbyCharacterMontage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::StopLobbyCharacterMontage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54558);

	ALobbyMainCharacter_C_StopLobbyCharacterMontage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ALobbyMainCharacter_C::InitializeLobbyCharacterAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54557);

	ALobbyMainCharacter_C_InitializeLobbyCharacterAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.UpdateSilhouette
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::UpdateSilhouette(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54556);

	ALobbyMainCharacter_C_UpdateSilhouette_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyMainCharacter_C::ExecuteUbergraph_LobbyMainCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54555);

	ALobbyMainCharacter_C_ExecuteUbergraph_LobbyMainCharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
