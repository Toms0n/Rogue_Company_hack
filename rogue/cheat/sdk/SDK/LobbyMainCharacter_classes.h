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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C
// 0x00A3 (FullSize[0x3EB3] - InheritedSize[0x3E10])
class ALobbyMainCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x3E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<Engine_ETimelineDirection>             LobbyProp01_Timeline__Direction_311B7F8B46533A11B70CFAA92E9DA987; // 0x3E18(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4RJL[0x7];                                     // 0x3E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LobbyProp01_Timeline;                                      // 0x3E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LobbyWeapon02_Timeline__Direction_6E3E791441C09FAF955C7099C1934001; // 0x3E28(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2JUH[0x7];                                     // 0x3E29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LobbyWeapon02_Timeline;                                    // 0x3E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LobbyWeapon01_Timeline__Direction_A9FF0C36405CB79CE4A5609C33E7F935; // 0x3E38(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N1WS[0x7];                                     // 0x3E39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LobbyWeapon01_Timeline;                                    // 0x3E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LobbyFidgetKeywordArray;                                   // 0x3E48(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z2TG[0x8];                                     // 0x3E58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform_Reset;                                           // 0x3E60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Lobby_Anim_total_duration;                                 // 0x3E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ME3H[0x4];                                     // 0x3E94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Lobby_Anim_timer;                                          // 0x3E98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop_montage;                                              // 0x3EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EUPO[0x3];                                     // 0x3EA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NewVar_1;                                                  // 0x3EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EKSLobbyCharacterAnimationPose          Lobby_Character_Animation_Pose;                            // 0x3EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_137B[0x3];                                     // 0x3EA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Lobby_Anim_Starting_Time;                                  // 0x3EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasInitializedNameplate;                                   // 0x3EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Emote;                                                     // 0x3EB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Emote_Queued;                                              // 0x3EB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54554);
		return ptr;
	}



	void OnGenderChanged();
	void InitializeNameplate(class UNewWBP_LobbyNameplate_C* Nameplate);
	void Randomize_Lobby_Idle_anim_start();
	void Make_Lobby_Fidget_Keyword_Array();
	void Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, Killstreak_EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose);
	void Get_Montage_Position_of_Lobby_Characater(float* Position);
	void Init_Body_Apparel();
	void LobbyWeapon01_Timeline__FinishedFunc();
	void LobbyWeapon01_Timeline__UpdateFunc();
	void LobbyWeapon02_Timeline__FinishedFunc();
	void LobbyWeapon02_Timeline__UpdateFunc();
	void LobbyProp01_Timeline__FinishedFunc();
	void LobbyProp01_Timeline__UpdateFunc();
	void OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void StopRightPropEffect();
	void PlayRightPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void StopLeftPropEffect();
	void PlayLeftPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void StopScenePropEffect();
	void PlayScenePropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component);
	void PlayLobbyCharacterMontage();
	void StopLobbyCharacterMontage();
	void InitializeLobbyCharacterAnimation();
	void UpdateSilhouette(float DeltaSeconds);
	void ExecuteUbergraph_LobbyMainCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
