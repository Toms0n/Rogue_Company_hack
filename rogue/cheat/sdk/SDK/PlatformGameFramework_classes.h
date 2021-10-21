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

// Class PlatformGameFramework.DistributionVectorUniformParameter
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UDistributionVectorUniformParameter : public UDistributionVector
{
public:
	struct FName                                       MaxParamName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MinParamName;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultMaxValue;                                           // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultMinValue;                                           // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_BlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPGame_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90);
		return ptr;
	}



	void STATIC_ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent* SkinnedMeshComponent, int MaterialID, int SectionIndex, bool bShow, int LODIndex);
	void STATIC_SetLightingChannels(class UPrimitiveComponent* PrimitiveComponent, const struct FLightingChannels& NewLightingChannels);
	bool STATIC_ServerTravelWithGameMode(class UObject* WorldContextObject, TArray<struct FString> Options, bool bSeamless);
	bool STATIC_ServerTravel(class UObject* WorldContextObject, TArray<struct FString> Options, bool bSeamless, bool bPreserveCurrentOptions);
	bool STATIC_IsSteamClient();
	bool STATIC_IsPlatformType(bool IsConsole, bool IsPC, bool IsMobile);
	bool STATIC_IsPlatform(bool IsXboxOne, bool IsPS4, bool IsSwitch, bool IsWindows, bool IsMac, bool IsLinux, bool IsIOS, bool IsAndroid, bool IsXSX, bool IsPS5);
	bool STATIC_IsGameBit(PlatformGameFramework_EGameBits GameBit);
	bool STATIC_IsAnonymousLogin();
	float STATIC_GetPropertyClampedValue(const struct FPGame_Property& Prop);
	PlatformGameFramework_EGameLocalizationType STATIC_GetGameLocalizationType();
	void STATIC_FrameDelay(class UObject* WorldContextObject, int NumFramesToDelay, const struct FLatentActionInfo& LatentInfo);
	struct FLightingChannels STATIC_ConvertToEngineLightingChannels(const struct FPGame_BlueprintableLightingChannels& BlueprintableLightingChannels);
	struct FPGame_BlueprintableLightingChannels STATIC_ConvertToBlueprintableLightingChannels(const struct FLightingChannels& EngineLightChannels);
	bool STATIC_AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent* InMeshComponent);
	bool STATIC_AreActorTexturesFullyStreamedIn(class AActor* InActor);
};

// Class PlatformGameFramework.PGame_Character
// 0x0048 (FullSize[0x0500] - InheritedSize[0x04B8])
class APGame_Character : public ACharacter
{
public:
	unsigned char                                      UnknownData_ZCGM[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_S3SM[0x8];                                     // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPGame_EffectManagerComponent*               m_EffectManager;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTweenInfo                                  r_TweenInfo;                                               // 0x04D0(0x0014) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FChargeInfo                                 r_ChargeInfo;                                              // 0x04E4(0x001C) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(93);
		return ptr;
	}



	void OnRep_Tween();
	void OnRep_Charge();
};

// Class PlatformGameFramework.PGame_CharacterMovementComponent
// 0x0060 (FullSize[0x06E0] - InheritedSize[0x0680])
class UPGame_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData_AYK2[0x20];                                    // 0x0680(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseTweenWalkingPhysics;                                   // 0x06A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YS58[0x7];                                     // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChargeInfo                                 r_ChargeInfo;                                              // 0x06A8(0x001C) (Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTweenInfo                                  r_TweenInfo;                                               // 0x06C4(0x0014) (Edit, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SBYD[0x8];                                     // 0x06D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(98);
		return ptr;
	}



	void StopTween();
	void StopCharge();
	void StartTween(unsigned char TweenType, const struct FVector& TweenDestination, float TweenTime);
	void StartCharge(unsigned char ChargeType, float ChargeInitialYaw, const struct FVector& ChargeInitialLocation, float ChargeSpeed, float ChargeRange);
	void OnRep_Tween(const struct FTweenInfo& TweenInfo);
	void OnRep_Charge(const struct FChargeInfo& ChargeInfo);
};

// Class PlatformGameFramework.PGame_CheatComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPGame_CheatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(99);
		return ptr;
	}



	void TestFubarRewardPostLogin();
	void TestFubarRewardPosted();
	void TestFubar();
	void ServerTestFubarRewardPostLogin();
	void ServerTestFubarRewardPosted();
	void ServerTestFubar();
	void ServerExecCall(const struct FString& request);
	void ServerExec(const struct FString& request);
	void Logout();
	void gmJoinQueue(int QueueId);
	void gmCommand(const struct FString& request);
	void gmC(const struct FString& request);
	void ForceCrash();
	void DumpAnimationStats();
	void CustomForceStart();
};

// Class PlatformGameFramework.PGame_CombatLogVisualizer
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class APGame_CombatLogVisualizer : public AActor
{
public:
	struct FString                                     LogFileName;                                               // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(100);
		return ptr;
	}



	void Visualize();
	void LoadCombatLog();
	void ClearVisualization();
};

// Class PlatformGameFramework.PGame_EffectManagerComponent
// 0x02D0 (FullSize[0x0380] - InheritedSize[0x00B0])
class UPGame_EffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_YP87[0x28];                                    // 0x00B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPGame_PersistentEffectRepDataContainer     r_ReplicatedEffectData;                                    // 0x00D8(0x0120) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPGame_EffectManagerPropertyContainer       r_ReplicatedProperties;                                    // 0x01F8(0x0170) (Edit, Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FKKS[0x18];                                    // 0x0368(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(101);
		return ptr;
	}



	void OnRep_EffectData();
	void InstantEffectBroadcast(const struct FPGame_InstantEffectRepData& repData);
	int GetPropertyValueIntFromBlueprint(int PropertyId);
	float GetPropertyValueFromBlueprint(int PropertyId);
	class UPGame_EffectGroupPersistent* GetDefaultEffectGroupForPersistentRepData(const struct FPGame_PersistentEffectRepData& repData);
	class UPGame_EffectGroupInstant* GetDefaultEffectGroupForInstantRepData(const struct FPGame_InstantEffectRepData& repData);
	class UPGame_EffectAttachment* CreatePersistentAttachment(const struct FPGame_PersistentEffectRepData& repData);
	void CreateInstantAttachment(const struct FPGame_InstantEffectRepData& repData);
};

// Class PlatformGameFramework.PGame_EffectAttachment
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPGame_EffectAttachment : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(102);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_EffectGroup
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UPGame_EffectGroup : public UObject
{
public:
	struct FGameplayTagContainer                       m_EffectGroupTypes;                                        // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       m_BehaviorCategories;                                      // 0x0048(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UPGame_Effect*>                       m_Effects;                                                 // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      m_AttachmentClass;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(103);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_EffectGroupPersistent
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class UPGame_EffectGroupPersistent : public UPGame_EffectGroup
{
public:
	struct FGameplayTag                                m_StackingCategory;                                        // 0x0080(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformGameFramework_EEffectGroupApplicationRule  m_ApplicationRule;                                         // 0x0088(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6TG[0x3];                                     // 0x0088(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      m_nMaxStackCount;                                          // 0x008C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               m_bApplyInstantOnInterval;                                 // 0x008D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               m_bApplyStackOnInterval;                                   // 0x008E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGNL[0x1];                                     // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              m_fStartDuration;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              m_fDuration;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              m_fIntervalDuration;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              m_fApplicationStrength;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(104);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_EffectGroupInstant
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UPGame_EffectGroupInstant : public UPGame_EffectGroup
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(105);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_Effect
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UPGame_Effect : public UObject
{
public:
	struct FPGame_Property                             m_Property;                                                // 0x0028(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               m_bApplyOnInternal;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJLV[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(106);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_Effectable
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPGame_Effectable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(107);
		return ptr;
	}



	int GetIntPropertyValue(int propIdInt);
	float GetFloatPropertyValue(int propIdInt);
};

// Class PlatformGameFramework.PGame_EffectSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPGame_EffectSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(108);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_GameInstance
// 0x00B8 (FullSize[0x0250] - InheritedSize[0x0198])
class UPGame_GameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData_4JSG[0x50];                                    // 0x0198(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastSonyMatchId;                                           // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCLK[0x40];                                    // 0x01F8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bStartHotfixProcessingOnUpdateAppSettings;                 // 0x0238(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G4QA[0x17];                                    // 0x0239(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(110);
		return ptr;
	}



	void ProvideSonyMatchFeedback(bool bReviewTeamOnly);
	bool HasValidSonyMatch();
	void EndLoadingScreen(class UWorld* World);
	void BeginLoadingScreen(const struct FString& mapName);
};

// Class PlatformGameFramework.PGame_GameModeBase
// 0x00C0 (FullSize[0x03C8] - InheritedSize[0x0308])
class APGame_GameModeBase : public AGameMode
{
public:
	unsigned char                                      UnknownData_WSWB[0x80];                                    // 0x0308(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PersistentMapSuffix;                                       // 0x0388(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FString>                             SublevelSuffixes;                                          // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FString>                             HighMemorySublevelSuffixes;                                // 0x03A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FString>                             LowMemorySublevelSuffixes;                                 // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(114);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_GameMode
// 0x00D0 (FullSize[0x0498] - InheritedSize[0x03C8])
class APGame_GameMode : public APGame_GameModeBase
{
public:
	unsigned char                                      UnknownData_A78I[0x18];                                    // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAutoEnableCombatLog;                                      // 0x03E0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUploadCombatLogOverride;                                  // 0x03E1(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MLF1[0x4E];                                    // 0x03E2(0x004E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bFubarForCPUFramerate;                                     // 0x0430(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFubarForPacketLoss;                                       // 0x0431(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PTVC[0x2];                                     // 0x0432(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FubarShutdownWaitTimeoutTime;                              // 0x0434(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RUV5[0x8];                                     // 0x0438(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SonyActivityId;                                            // 0x0440(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SonyMatchOwnerNetTimeout;                                  // 0x0450(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J5TZ[0x4];                                     // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPGame_SonyMatchData                        SonyMatchData;                                             // 0x0458(0x0018) (Protected, NativeAccessSpecifierProtected)
	TArray<uint32_t>                                   SonyIneligibleMatchOwners;                                 // 0x0470(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L5DT[0x8];                                     // 0x0480(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPGame_InactivePlayerStateEntry>     PGame_InactivePlayerArray;                                 // 0x0488(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(115);
		return ptr;
	}



	void OnFubarShutdownTimeout();
	void InactivePlayerStateDestroyed(class AActor* InActor);
	void FinalShutdown();
	void FinalizeMatchEnded();
};

// Class PlatformGameFramework.PGame_GameState
// 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
class APGame_GameState : public AGameState
{
public:
	struct FString                                     r_SonyMatchIdForPlayerFeedback;                            // 0x0290(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(118);
		return ptr;
	}



	void OnRep_SonyMatchIdForPlayerFeedback();
};

// Class PlatformGameFramework.PGame_LandingPanelJSONHandler
// 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
class UPGame_LandingPanelJSONHandler : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHandlerObjectReady;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJsonDownloaded;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJsonReady;                                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnImagesDownloaded;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IN1[0xB8];                                    // 0x0068(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UTexture2DDynamic*>     mapFilePathToTexture;                                      // 0x0120(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(119);
		return ptr;
	}



	void RequestNewJson();
};

// Class PlatformGameFramework.PGame_PlayerController
// 0x0128 (FullSize[0x06B0] - InheritedSize[0x0588])
class APGame_PlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_T6D2[0xD0];                                    // 0x0588(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SonyMatchId;                                               // 0x0658(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     SonyActivityId;                                            // 0x0668(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	PlatformGameFramework_ESonyMatchState              SonyMatchState;                                            // 0x0678(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	PlatformGameFramework_ESonyMatchState              QueuedSonyMatchState;                                      // 0x0679(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsSonyMatchOwner;                                         // 0x067A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsEligibleSonyMatchOwner;                                 // 0x067B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsExclusiveSonyMatchOwner;                                // 0x067C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TUJ9[0x13];                                    // 0x067D(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      m_CheatComponentClass;                                     // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPGame_CheatComponent*                       r_CheatComponent;                                          // 0x0698(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSerializedMctsNetId                        r_ReplicatedNetId;                                         // 0x06A0(0x0008) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InputComponentClass;                                       // 0x06A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(122);
		return ptr;
	}



	void ServerUpdateSonyMatchOwnerEligibility(bool bIsEligible);
	void ServerUpdateSonyMatchData(const struct FString& InMatchId);
	void ClientUpdateSonyMatchData(const struct FString& InMatchId, const struct FString& InActivityId);
	void ClientGameFubared(PlatformGameFramework_EFubarReason Reason);
	void ClientCheckSonyMatchOwnerEligibility();
};

// Class PlatformGameFramework.PGame_PlayerInputDefault
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPGame_PlayerInputDefault : public UObject
{
public:
	bool                                               bRestrictInvalidInputType;                                 // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WMW[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(123);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_PlayerInput
// 0x0040 (FullSize[0x1330] - InheritedSize[0x12F0])
class UPGame_PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData_MF66[0x20];                                    // 0x12F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KeyMouseSwitchDelta;                                       // 0x1310(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CJ6H[0x4];                                     // 0x1314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GamepadSwitchDelta;                                        // 0x1318(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1PDC[0x14];                                    // 0x131C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_HierarchicalInputComponent
// 0x0060 (FullSize[0x0198] - InheritedSize[0x0138])
class UPGame_HierarchicalInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_APMH[0x60];                                    // 0x0138(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(127);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_PlayerState
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class APGame_PlayerState : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(129);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_PositionHistoryComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UPGame_PositionHistoryComponent : public UActorComponent
{
public:
	PlatformGameFramework_EPositionHistoryRecordMode   PositionRecordMode;                                        // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ExtrapolateFromLastEntry;                                  // 0x00B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoPopulateOnBeginPlay;                                  // 0x00B2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J6K7[0x15];                                    // 0x00B3(0x0015) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPrimitivePriority>                  TrackedPrimitives;                                         // 0x00C8(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2CYF[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(130);
		return ptr;
	}



	void RemoveTrackedPrimitive(class UPrimitiveComponent* InPrimitive);
	void AddTrackedPrimitive(class UPrimitiveComponent* InPrimitive, int Priority);
};

// Class PlatformGameFramework.PGame_ShippingConsole
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UPGame_ShippingConsole : public UShippingConsole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(135);
		return ptr;
	}



};

// Class PlatformGameFramework.PGame_WorldSettings
// 0x0030 (FullSize[0x03D0] - InheritedSize[0x03A0])
class APGame_WorldSettings : public AWorldSettings
{
public:
	TArray<class UClass*>                              ActorsToAlwaysSpawn;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FString>                             HighMemorySublevelSuffixes;                                // 0x03B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LowMemorySublevelSuffixes;                                 // 0x03C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(137);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTComposite_ParallelSequence
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UPGameBTComposite_ParallelSequence : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(141);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTComposite_Random
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UPGameBTComposite_Random : public UBTCompositeNode
{
public:
	TArray<float>                                      Probabilities;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(142);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTComposite_Random_Selector
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UPGameBTComposite_Random_Selector : public UPGameBTComposite_Random
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(143);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTComposite_Random_Sequence
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UPGameBTComposite_Random_Sequence : public UPGameBTComposite_Random
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(144);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTTask_AlwaysReturn
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UPGameBTTask_AlwaysReturn : public UBTTaskNode
{
public:
	TEnumAsByte<AIModule_EBTNodeResult>                AlwaysReturn;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXYH[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(146);
		return ptr;
	}



};

// Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UPGameBTTask_ClearBlackboardKey : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(148);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
