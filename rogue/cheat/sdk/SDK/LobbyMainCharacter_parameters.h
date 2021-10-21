#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnGenderChanged
struct ALobbyMainCharacter_C_OnGenderChanged_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeNameplate
struct ALobbyMainCharacter_C_InitializeNameplate_Params
{
	class UNewWBP_LobbyNameplate_C*                    Nameplate;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start
struct ALobbyMainCharacter_C_Randomize_Lobby_Idle_anim_start_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array
struct ALobbyMainCharacter_C_Make_Lobby_Fidget_Keyword_Array_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation
struct ALobbyMainCharacter_C_Parse_Lobby_Fidget_Animation_Params
{
	TArray<struct FName>                               LobbyFidgetKeywordArray;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	Killstreak_EKSLobbyCharacterAnimationPose          Lobby_Character_Animation_Pose;                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater
struct ALobbyMainCharacter_C_Get_Montage_Position_of_Lobby_Characater_Params
{
	float                                              Position;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel
struct ALobbyMainCharacter_C_Init_Body_Apparel_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc
struct ALobbyMainCharacter_C_LobbyWeapon01_Timeline__FinishedFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc
struct ALobbyMainCharacter_C_LobbyWeapon01_Timeline__UpdateFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc
struct ALobbyMainCharacter_C_LobbyWeapon02_Timeline__FinishedFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc
struct ALobbyMainCharacter_C_LobbyWeapon02_Timeline__UpdateFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc
struct ALobbyMainCharacter_C_LobbyProp01_Timeline__FinishedFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc
struct ALobbyMainCharacter_C_LobbyProp01_Timeline__UpdateFunc_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7
struct ALobbyMainCharacter_C_OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MontageInstanceID;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7
struct ALobbyMainCharacter_C_OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MontageInstanceID;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7
struct ALobbyMainCharacter_C_OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MontageInstanceID;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7
struct ALobbyMainCharacter_C_OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MontageInstanceID;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7
struct ALobbyMainCharacter_C_OnCompleted_AA177F3D4F176F58A7691D84D8C329C7_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MontageInstanceID;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect
struct ALobbyMainCharacter_C_StopRightPropEffect_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect
struct ALobbyMainCharacter_C_PlayRightPropEffect_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MaterialParameter;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 FloatCurve;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect
struct ALobbyMainCharacter_C_StopLeftPropEffect_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect
struct ALobbyMainCharacter_C_PlayLeftPropEffect_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MaterialParameter;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 FloatCurve;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect
struct ALobbyMainCharacter_C_StopScenePropEffect_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect
struct ALobbyMainCharacter_C_PlayScenePropEffect_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MaterialParameter;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 FloatCurve;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay
struct ALobbyMainCharacter_C_ReceiveBeginPlay_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent
struct ALobbyMainCharacter_C_Add_Body_Apparel_As_Parent_Params
{
	class USkinnableSkeletalMeshComponent*             Skinnable_Mesh_Component;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage
struct ALobbyMainCharacter_C_PlayLobbyCharacterMontage_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage
struct ALobbyMainCharacter_C_StopLobbyCharacterMontage_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation
struct ALobbyMainCharacter_C_InitializeLobbyCharacterAnimation_Params
{
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.UpdateSilhouette
struct ALobbyMainCharacter_C_UpdateSilhouette_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter
struct ALobbyMainCharacter_C_ExecuteUbergraph_LobbyMainCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
