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

// Class KillstreakUINew.GuidedMenuCalloutData
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UGuidedMenuCalloutData : public UObject
{
public:
	struct FText                                       HeaderText;                                                // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGuidedCalloutCardData>              CalloutCards;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1808);
		return ptr;
	}



};

// Class KillstreakUINew.GuidedMenuCalloutsViewRedirector
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGuidedMenuCalloutsViewRedirector : public UPUMG_ViewRedirecter
{
public:
	class UDataTable*                                  GuidedCalloutsTable;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9JI[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1809);
		return ptr;
	}



	void SetNPEGuidedCalloutSeen(KillstreakUINew_EConfigPropertyGuidedCalloutScenes GuidedCalloutScene);
	bool HasSeenNPEGuidedCallout(KillstreakUINew_EConfigPropertyGuidedCalloutScenes GuidedCalloutScene);
};

// Class KillstreakUINew.KSWidget
// 0x0060 (FullSize[0x0518] - InheritedSize[0x04B8])
class UKSWidget : public UPUMG_Widget
{
public:
	bool                                               bIsUIOnlyWidget;                                           // 0x04B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsExclusiveMenuWidget;                                    // 0x04B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FRQA[0x2];                                     // 0x04BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmbientSoundRtpc;                                          // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTickAnimationManager*                       TickAnimations;                                            // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             ViewportEvent;                                             // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bSubstituteKillCamWorld;                                   // 0x04D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSubstituteKillCamOwningPlayer;                            // 0x04D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsKillCamCallbacks;                                    // 0x04DA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTVC[0x1D];                                    // 0x04DB(0x001D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OpacityWhenAiming;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               DoesFadeOutWhenAiming;                                     // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K5FC[0x3];                                     // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AimTransitionProgress;                                     // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SE6T[0x14];                                    // 0x0504(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1810);
		return ptr;
	}



	void UpdateOpacityWhenAiming();
	void UnbindFromViewportSizeChange();
	void TriggerGlobalInvalidate();
	void StopTickAnimation(const struct FName& AnimName);
	void SkipToEndTickAnimation(const struct FName& AnimName);
	bool ShouldUpdateOpacityWhenAiming();
	void SetPositionRTPC();
	void SetAllAnimationsPlaybackSpeed(float PlaybackSpeed);
	void ResumeTickAnimation(const struct FName& AnimName);
	void RemoveTickAnimation(const struct FName& AnimName);
	void PlayTickAnimation(const struct FName& AnimName);
	void PauseTickAnimation(const struct FName& AnimName);
	bool IsInKillCamPlayback();
	void InitializeTickAnimations();
	void HandleAimStateChange(Killstreak_EKSCharacterAimMode NewAimState);
	bool GetTickAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams);
	class APlayerController* GetNormalOwningPlayer();
	class APlayerController* GetKillCamSpectatorController();
	class APlayerController* GetActivePlayerController();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintFinishKillCamPlayback();
	void BindToViewportSizeChange(const struct FScriptDelegate& InViewportEvent);
	void AddTickAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent);
};

// Class KillstreakUINew.KSAccoladeQueueWidget
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UKSAccoladeQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                    // 0x0518(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9GGQ[0x3];                                     // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumInQueue;                                                // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAccoladeReceived;                                        // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAccoladeUpdateMultiplier;                                // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ESBN[0x20];                                    // 0x0540(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1811);
		return ptr;
	}



	void Queue(TArray<struct FAccoladeEventEntry> Accolades);
	void OnAccoladeRemovedFromScreen(const struct FAccoladeDisplayInfo& AccoladeRemoved);
	void HandleOnRoundSetup(const struct FRoundInitState& RoundInitState);
	bool GetNext(struct FAccoladeDisplayInfo* Accolade);
	void ClearAccoladeQueue();
};

// Class KillstreakUINew.KSAcquisitionModal
// 0x0058 (FullSize[0x0570] - InheritedSize[0x0518])
class UKSAcquisitionModal : public UKSWidget
{
public:
	class UDataTable*                                  HeaderOverridesTable;                                      // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int, struct FText>                            HeaderOverridesFromJson;                                   // 0x0520(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1812);
		return ptr;
	}



	struct FText GetHeaderText(class UKSAcquisition* Acquisitition);
	class UKSAcquisitionManager* GetAcquisitionManager();
};

// Class KillstreakUINew.KSActiveBonusesWidget
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSActiveBonusesWidget : public UKSWidget
{
public:
	class UDataTable*                                  EventLookupTable;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1813);
		return ptr;
	}



	void GetBonusAppliedToLastMatch(TArray<struct FKSLimitedTimeEventMetadataRow>* ActiveEvents);
};

// Class KillstreakUINew.KSPawnWidget
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSPawnWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData_X8ZR[0x20];                                    // 0x0518(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1814);
		return ptr;
	}



	void SetPlayerStateUIRelevanceChanged();
	void SetPawn(class AKSCharacter* NewPawn);
	void PreClearPlayerState();
	void PreClearPawn();
	void PostSetPlayerState();
	void PostSetPawn();
	void OnBoundPlayerStateDestroyed(class AActor* DestroyedActor);
	void OnBoundPawnDestroyed(class AActor* DestroyedActor);
	class AKSPlayerState* GetPlayerState();
	class AKSCharacterBase* GetPawnBase();
	class AKSCharacter* GetPawn();
};

// Class KillstreakUINew.KSPawnInventoryWidget
// 0x0070 (FullSize[0x05A8] - InheritedSize[0x0538])
class UKSPawnInventoryWidget : public UKSPawnWidget
{
public:
	TMap<struct FKSEquipmentId, class UKSWeaponComponentWidget*> EquipmentWidgets;                                          // 0x0538(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XULF[0x20];                                    // 0x0588(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1815);
		return ptr;
	}



	bool RemoveWidgetFor(class UKSWeaponComponent* InWeaponComponent);
	class UKSWeaponComponentWidget* GetWidgetForWeaponComponent(class UKSWeaponComponent* InWeaponComponent);
	void EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment);
	void EquipmentEndActive(class UKSWeaponComponent* InactiveEquipment);
	void EquipmentBecomeActive(class UKSWeaponComponent* ActiveEquipment);
	void EquipmentAdded(class UKSWeaponComponent* AddedEquipment);
	class UKSWeaponComponentWidget* CreateWeaponComponentWidgetFor(class UObject* WorldContextObject, class UKSWeaponComponent* InWeaponComponent, class UClass* WidgetClass, class APlayerController* OwningPlayer);
};

// Class KillstreakUINew.KSActiveWeaponComponentWidget
// 0x0038 (FullSize[0x05E0] - InheritedSize[0x05A8])
class UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget
{
public:
	int                                                ActiveWeaponSlot;                                          // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WA12[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       EquipPointsToIgnore;                                       // 0x05B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bDelayClearUntilNextTick;                                  // 0x05D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RW7R[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UKSWeaponComponent>           WeakActiveWeaponComponentPtr;                              // 0x05D4(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z175[0x4];                                     // 0x05DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1816);
		return ptr;
	}



	void PreClearActiveWeaponComponent();
	void PostSetActiveWeaponComponent();
	class UKSWeaponComponent* GetActiveWeaponComponent();
};

// Class KillstreakUINew.KSActivity_ViewRedirector
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKSActivity_ViewRedirector : public UPUMG_ViewRedirecter
{
public:
	unsigned char                                      ActivitiesToCheck[0x10];                                   // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1817);
		return ptr;
	}



	class UKSActivityManagerBase* GetRelevantActivityManager(class UKSGameInstance* GameInstance);
};

// Class KillstreakUINew.KSActivityProgress_ViewRedirector
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UKSActivityProgress_ViewRedirector : public UKSActivity_ViewRedirector
{
public:
	TArray<int>                                        ActivityProgressMilestone;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ActivityProgressMilestoneSetting;                          // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IncrementActivityProgressBeforeCheck;                      // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SE9H[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1818);
		return ptr;
	}



};

// Class KillstreakUINew.KSAimAssistDebugWidget
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UKSAimAssistDebugWidget : public UUserWidget
{
public:
	bool                                               bDrawAimAssistBoundary;                                    // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawHeadAimCorrectionBoundary;                            // 0x0239(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawMagnetismDebug;                                       // 0x023A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawTargetInfo;                                           // 0x023B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QOHT[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1819);
		return ptr;
	}



	class AKSPlayerController* GetOwningKSPlayer();
	class UKSAimAssistComponent* GetAimAssistComponent();
};

// Class KillstreakUINew.KSMapIconWidgetBase
// 0x00E0 (FullSize[0x0318] - InheritedSize[0x0238])
class UKSMapIconWidgetBase : public UUserWidget
{
public:
	bool                                               bDoesIconRotate;                                           // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RALU[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MarkerAnchorHeight;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightThreshold;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9XY[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CachedRawMetersAway;                                       // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UniqueId;                                                  // 0x024C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AKSPlayerState>               CreatingPlayer;                                            // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EDisplayType                            ParentMapDisplayType;                                      // 0x0258(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMY7[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       AssociatedActor;                                           // 0x025C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      AssociatedObject;                                          // 0x0264(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultLocation;                                           // 0x026C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lifespan;                                                  // 0x0278(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKSMapWidgetBase>             ParentMapWidget;                                           // 0x027C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenMargins;                                             // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CenterPercentageWidth;                                     // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CenterPercentageHeight;                                    // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpacityWhenAiming;                                         // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoesFadeOutWhenAiming;                                     // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFEG[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AimTransitionOpacity;                                      // 0x029C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     IconOffset;                                                // 0x02A0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q4VP[0x18];                                    // 0x02AC(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HoverDelaySeconds;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UF9J[0x18];                                    // 0x02C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMapIconWidgetReady;                                      // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMapIconWidgetRemove;                                     // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bIsWidgetPool;                                             // 0x0300(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0B8P[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WidgetPoolName;                                            // 0x0308(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1820);
		return ptr;
	}



	void UpdateScreenRegion();
	void UpdateOpacityWhenAiming();
	void UpdateMetersAway(int Meters);
	void UpdateMeetsHeightThreshold(bool bHeight, bool bDepth);
	UMG_ESlateVisibility Update();
	bool ShouldUpdateOpacityWhenAiming();
	bool ShouldUpdateHover();
	bool ShouldUpdate();
	void SetScreenRegion(KillstreakUINew_EIconMarkerScreenRegion ScreenRegion);
	void SetLifeSpan(float InLifespan);
	void SetDisplayInfo(int InUniqueId, class AKSPlayerState* InCreatingPlayer, Killstreak_EDisplayType InParentMapDisplayType, class AActor* InAssociatedActor, class UObject* InAssociatedObject, const struct FVector& InDefaultLocation, float InLifespan);
	void SetArrowAngle(float Angle);
	void ResetDisplayInfo();
	void OnUnhoverTimerComplete();
	void OnHoverTimerComplete();
	void OnHoverStateChanged(KillstreakUINew_EIconHoverState NewHoverState);
	void OnAssociatedActorDestroyed(class AActor* Actor);
	void OnAimStateChanged(Killstreak_EKSCharacterAimMode NewAimState, float NewAimTransitionOffset);
	void IsScreenRegion(bool* InsideCenter, bool* InsideMargins);
	bool IsInCenteredScreenRect(float PositionX, float PositionY, float XMargin, float YMargin);
	bool IsHovering();
	void HandleMapIconWidgetHide();
	float GetWorldYaw();
	struct FVector GetWorldPosition();
	KillstreakUINew_EIconHoverState GetHoverState();
	float GetEdgeArrowAngleBase(float Angle);
	float GetDistanceToIcon();
	void GetArrowPosition(bool IsIconVisible, float Angle, struct FVector2D* ArrowPosition);
};

// Class KillstreakUINew.KSAllyMarkerWidget
// 0x0058 (FullSize[0x0370] - InheritedSize[0x0318])
class UKSAllyMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class UWidget*                                     ArrowWidget;                                               // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     NameOrStatusWidget;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DownedSectionWidget;                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameModeModActivationChanged;                            // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QU70[0x20];                                    // 0x0350(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1821);
		return ptr;
	}



	void View_SetSelfPingIcon(Killstreak_EPingType PingType, Killstreak_EPingMessage PingMessage);
	void View_SetRevivePercent(float PercentValue);
	void View_SetNameText(const struct FText& NameText);
	void View_SetMode(KillstreakUINew_EAllyMarkerState AllyMarkerState, bool HasObjective, bool HasSelfPing);
	void View_SetJob(class UKSJobItem* Job);
	void View_SetHealthPercent(float PercentValue);
	void View_AcknowledgeSelfPing(class AKSPlayerState* AcknowledingPlayer);
	bool ShouldShowAllyMarkerWidget();
	void SetPlayerName();
	void SetMarkerPlayerState(class AKSPlayerState* pPlayerState);
	bool IsOwningPlayer();
	void HandleUIRelevantChanged(class AKSPlayerState* InPlayerState);
	void HandleRemoveSelfPing(class AKSPlayerState* PingingPlayer);
	void HandlePlayerModActivated(class UKSPlayerMod_Activated* ActivatedMod, bool Active);
	void HandlePlayerDown(const struct FCombatEventInfo& CombatEventInfo, int ExpBonus);
	void HandlePlayerDeath(const struct FCombatEventInfo& DeathInfo);
	void HandleOnJobChanged();
	void HandleObjectiveStateChanged();
	void HandleChangeSelfPing(class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	void HandleAddSelfPing(class AKSPlayerState* PingingPlayer, Killstreak_EPingType PingType, Killstreak_EPingMessage PingMessage);
	bool GetPingIconByType(Killstreak_EPingType PingType);
	bool GetPingIconByMessage(Killstreak_EPingMessage PingMessage);
	bool GetPingColorByType(Killstreak_EPingType PingType, struct FLinearColor* PingColor);
	struct FVector2D GetArrowPositionFromAngleBlueprint(float Angle);
	bool FindRowByType(Killstreak_EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(Killstreak_EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void ChangeOwnerContentVisibility(bool bVisible);
};

// Class KillstreakUINew.KSAlphaDisclaimer
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSAlphaDisclaimer : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1822);
		return ptr;
	}



	bool STATIC_LoadAlphaDisclaimerText(struct FString* SaveText);
};

// Class KillstreakUINew.KSWeaponWidget
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSWeaponWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData_HBHR[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1823);
		return ptr;
	}



	void SetOwningWeapon(class AKSWeapon* InWeapon);
	void PreClearWeapon();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void OnOwningWeaponDestroyed(class AActor* DestroyedWeapon);
	class AKSWeapon* GetOwningWeapon();
};

// Class KillstreakUINew.KSAmmoWidget
// 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
class UKSAmmoWidget : public UKSWeaponWidget
{
public:
	int                                                CachedAmmoInClip;                                          // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedClipSize;                                            // 0x0524(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedInReserve;                                           // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CachedIsReloading;                                         // 0x052C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MMCU[0x13];                                    // 0x052D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1824);
		return ptr;
	}



	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve);
};

// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UKSAnnouncementQueuedMessageWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnEndDisplay;                                              // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FAnnouncementData                           AnnouncementData;                                          // 0x0528(0x0038) (Edit, BlueprintVisible, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1825);
		return ptr;
	}



	void DisplayAnnouncement();
};

// Class KillstreakUINew.KSAnnouncementQueueWidget
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSAnnouncementQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                    // 0x0518(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6GQM[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReadyForNextAnnouncement;                                // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_62IC[0x10];                                    // 0x0530(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1826);
		return ptr;
	}



	void Queue(const struct FAnnouncementData& Announcement);
	bool GetNext(struct FAnnouncementData* Announcement);
	void ClearAnnoucementQueue();
};

// Class KillstreakUINew.KSTeamWidget
// 0x0030 (FullSize[0x0548] - InheritedSize[0x0518])
class UKSTeamWidget : public UKSWidget
{
public:
	bool                                               bTrackPersistentPlayerData;                                // 0x0518(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTrackRelevantPlayerStates;                                // 0x0519(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0XRI[0x2];                                     // 0x051A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AKSTeamState>                 TeamState;                                                 // 0x051C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RWXG[0x24];                                    // 0x0524(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1827);
		return ptr;
	}



	void SetTeam(class AKSTeamState* NewTeam);
	void PreClearTeam();
	void PostSetTeam();
	void PlayerStateRemovedFromTeam(class AKSPlayerState* RemovedPlayerState);
	void PlayerStateAddedToTeam(class AKSPlayerState* AddedPlayerState);
	void PersistentPlayerRemovedFromTeam(class UKSPersistentPlayerData* RemovedPersistentPlayer);
	void PersistentPlayerAddedToTeam(class UKSPersistentPlayerData* AddedPersistentPlayer);
	void OnBoundTeamDestroyed(class AActor* DestroyedTeam);
	class AKSTeamState* GetTeam();
};

// Class KillstreakUINew.KSAutoTeamWidget
// 0x0008 (FullSize[0x0550] - InheritedSize[0x0548])
class UKSAutoTeamWidget : public UKSTeamWidget
{
public:
	KillstreakUINew_EKSAutoTeamType                    AutoTeamType;                                              // 0x0548(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K7FV[0x3];                                     // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamNumber;                                                // 0x054C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1828);
		return ptr;
	}



	void TeamAddedToGameState(class AKSTeamState* InTeam);
	void SetAutoTeamConfig(KillstreakUINew_EKSAutoTeamType InAutoTeamType, int InTeamNum);
};

// Class KillstreakUINew.KSBoostInventoryWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSBoostInventoryWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1829);
		return ptr;
	}



};

// Class KillstreakUINew.KSBoostInventoryItemWidget
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSBoostInventoryItemWidget : public UKSWidget
{
public:
	struct FAccountConsumableDetails                   CurrentItemDetails;                                        // 0x0518(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1830);
		return ptr;
	}



	void View_SetFromItem(const struct FAccountConsumableDetails& ItemDetails);
	void ShowBoostPopup();
	void SetItem(const struct FAccountConsumableDetails& ItemDetails);
	void PlayBoostConfirmationSound();
	void OnActivateBoostConfirm();
	void OnActivateBoostCancel();
};

// Class KillstreakUINew.KSChallengeEntryCardBase
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSChallengeEntryCardBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData_U4MT[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1831);
		return ptr;
	}



	void SetChallengeData(class UKSActivityInstance* ActivityInstance);
	void DisplayRewardItems(TArray<struct FTierRewardItemData> RewardItems);
	void ApplyRerollAvailable(bool CanReroll);
	void ApplyLayoutType(KillstreakUINew_EChallengeEntryCardState CardState);
	void ApplyChallengeProgress(int Progress, int ProgressTotal);
	void ApplyChallengeDescription(const struct FText& DescText);
};

// Class KillstreakUINew.KSChatDataFactory
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UKSChatDataFactory : public UPUMG_ChatDataFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1832);
		return ptr;
	}



};

// Class KillstreakUINew.KSComponentReticleWidgetBase
// 0x0020 (FullSize[0x0600] - InheritedSize[0x05E0])
class UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget
{
public:
	float                                              ShrinkAnimationTime;                                       // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMaxScale;                                   // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMinScale;                                   // 0x05E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotMinScaleSqDist;                                 // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bGrenadeCooking;                                           // 0x05F0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInADS;                                                    // 0x05F1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCachedBlockIconVisible;                                   // 0x05F2(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W8X8[0x1];                                     // 0x05F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CachedWeaponAccuracy;                                      // 0x05F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CachedReticleOffset;                                       // 0x05F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0CIR[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1833);
		return ptr;
	}



	void ViewedPawnInstigatedDamageNotify(const struct FCombatEventInfo& DamageInfo);
	void UpdateReticleOffset(float OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void CalculateReticleOffset(float DeltaTime);
	void CalculateBlockedShotIcon();
};

// Class KillstreakUINew.ContextActionData
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UContextActionData : public UObject
{
public:
	unsigned char                                      UnknownData_Y7G1[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RowName;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       FormatAdditive;                                            // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FContextAction                              RowData;                                                   // 0x0050(0x0058) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnContextAction;                                           // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnCycleAction;                                             // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnHoldActionUpdate;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnHoldReleaseAction;                                       // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40IJ[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1834);
		return ptr;
	}



	void TriggerHoldReleaseContextAction(KillstreakUINew_EContextPromptHoldReleaseState Status);
	void TriggerCycleContextActionPrev();
	void TriggerCycleContextActionNext();
	void TriggerCycleContextAction(bool bNext);
	void TriggerContextAction();
	void StartTriggerHoldAction();
	void ClearTriggerHoldAction();
};

// Class KillstreakUINew.KSContextBarWidget
// 0x0078 (FullSize[0x0590] - InheritedSize[0x0518])
class UKSContextBarWidget : public UKSWidget
{
public:
	struct FName                                       GlobalRouteName;                                           // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ContextActionDT;                                           // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FName, struct FRouteContextInfo>       RouteContextInfoMap;                                       // 0x0528(0x0050) (Protected, NativeAccessSpecifierProtected)
	struct FName                                       ActiveRoute;                                               // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               OverrideRouteStack;                                        // 0x0580(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1835);
		return ptr;
	}



	void UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute);
	void SetPrompts(const struct FName& Route, TArray<struct FName> ContextNames);
	void SetPromptHoldReleaseAction(const struct FName& Route, const struct FName& ContextName, const struct FScriptDelegate& UpdateCallback, const struct FScriptDelegate& EventCallback);
	void SetPromptCycleAction(const struct FName& Route, const struct FName& ContextName, const struct FScriptDelegate& EventCallback);
	void SetPromptAction(const struct FName& Route, const struct FName& ContextName, const struct FScriptDelegate& EventCallback);
	void SetPrompt(const struct FName& Route, const struct FName& ContextName, const struct FText& FormatAdditive);
	void SetInputActions(TArray<class UContextActionData*> ActionData);
	void SetActiveRoute(const struct FName& Route);
	bool RemoveOverrideRoute(const struct FName& Route);
	void RefreshContextBar();
	void PushOverrideRoute(const struct FName& Route);
	struct FName PopOverrideRoute();
	struct FName GetCurrentContextRoute();
	void ClearPrompt(const struct FName& Route, const struct FName& ContextName);
	void ClearOverrideRouteStack();
	void ClearAllPrompts(const struct FName& Route);
};

// Class KillstreakUINew.KSContextMenu
// 0x0050 (FullSize[0x0568] - InheritedSize[0x0518])
class UKSContextMenu : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnContextOptionsUpdated;                                   // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnReportPlayer;                                            // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	KillstreakUINew_EPlayerContextMenuContext          MenuContext;                                               // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowReportPlayer;                                        // 0x0539(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HOXC[0x6];                                     // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSPlayerInfo*                               CurrentPlayerInfo;                                         // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UKSContextMenuButton*>                ContextMenuButtons;                                        // 0x0548(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EViewSide                          MenuViewSide;                                              // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OT4F[0x3];                                     // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CachedQueuedOrInMatch;                                     // 0x055C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCachedReportedPlayer;                                     // 0x0560(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OGRO[0x7];                                     // 0x0561(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1836);
		return ptr;
	}



	void SetOptionsVisibility();
	struct FVector2D SetMenuPosition(class UKSWidget* WidgetToMove, const struct FMargin& WidgetPadding, KillstreakUINew_EViewSide side, float menuWidth, float menuHeight);
	void SetCurrentPlayerInfo(class UKSPlayerInfo* playerinfo);
	void RemoveContextMenuButton(class UKSContextMenuButton* ContextButton);
	bool OnOptionSelected(KillstreakUINew_EPlayerContextOptions ContextOption);
	void HandleOnQueueStatusChange(PlatformUMG_EPUMG_MatchStatus QueueStatus);
	class UPUMG_QueueDataFactory* GetQueueDataFactory();
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSContextMenuButton* GetContextButtonByEnum(KillstreakUINew_EPlayerContextOptions ContextOption);
	void ClearAllContextMenuButton();
	void AddContextMenuButton(class UKSContextMenuButton* ContextButton);
};

// Class KillstreakUINew.KSContextMenuButton
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSContextMenuButton : public UKSWidget
{
public:
	KillstreakUINew_EPlayerContextOptions              ContextOption;                                             // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OGD1[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1837);
		return ptr;
	}



	void SetContextOption(KillstreakUINew_EPlayerContextOptions Context);
	void HandleVisibility(bool isVisibility);
	void HandleActive(bool IsActive);
	KillstreakUINew_EPlayerContextOptions GetContextOption();
};

// Class KillstreakUINew.KSContextualPingMarkerWidget
// 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
class UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnPingRemovedCalled;                                       // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPingChangedCalled;                                       // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FPingInfo                                   CurrentPingInfo;                                           // 0x0338(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	class UKSPingManager*                              PingManager;                                               // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1838);
		return ptr;
	}



	void SetupPingOnReady();
	void SetPingInfo(const struct FPingInfo& PingInfoVal);
	void OnPingUnhovered(int PingId, class AKSPlayerState* PingingPlayer);
	void OnPingHovered(int PingId, class AKSPlayerState* PingingPlayer);
	void OnInitializePing();
	bool IsInvisiblePingType(Killstreak_EPingType PingType);
	void HandleOnContextualPingRemoved(int PingId, class AKSPlayerState* PingingPlayer);
	void HandleOnContextualPingChanged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	float GetPingLifeSpan(Killstreak_EPingType PingType);
	bool GetPingIconByType(Killstreak_EPingType PingType);
	bool GetPingIconByMessage(Killstreak_EPingMessage PingMessage);
	bool GetPingColorByType(Killstreak_EPingType PingType, struct FLinearColor* PingColor);
	bool FindRowByType(Killstreak_EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(Killstreak_EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
};

// Class KillstreakUINew.KSCosmeticItemSelectorWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSCosmeticItemSelectorWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1839);
		return ptr;
	}



};

// Class KillstreakUINew.KSCosmeticSlotDetails
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UKSCosmeticSlotDetails : public UObject
{
public:
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  AssociatedJobItem;                                         // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EMercCosmeticSlot                       MercCosmeticSlot;                                          // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponSlot                             WeaponSlot;                                                // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRCQ[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SlotPosition;                                              // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NavigatedFromNews;                                         // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9RXU[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1840);
		return ptr;
	}



};

// Class KillstreakUINew.KSCustomizationSelection
// 0x0030 (FullSize[0x0548] - InheritedSize[0x0518])
class UKSCustomizationSelection : public UKSWidget
{
public:
	unsigned char                                      UnknownData_GQJS[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRogueCustomizationRelatedInfo>      RogueCustomizationRelatedInfos;                            // 0x0520(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<Killstreak_EMercCosmeticSlot>               ActiveCosmeticSlots;                                       // 0x0530(0x0010) (BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TabIndex;                                                  // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0XTM[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1841);
		return ptr;
	}



	void TabRight();
	void TabLeft();
	void SetWingSuitAsset(class UKSWeaponAsset* WingSuit);
	void PurchaseAndEquip(Killstreak_EMercCosmeticSlot SlotType, int SlotPosition, class UKSJobItem* JobItem, class UPUMG_StoreItem* StoreItem);
	void PromptEquipAllForCosmetic(class UKSItem* CosmeticItem, Killstreak_EMercCosmeticSlot SlotType, int SlotPosition);
	void OnEquipAllComplete(bool bSuccess);
	bool IsItemOwned(class UPlatformInventoryItem* Item);
	void GetWingSuitItems(TArray<class UPUMG_StoreItem*>* StoreItems);
	class UKSWeaponAsset* GetWingSuitAsset();
	void GetWeaponSlotItems(Killstreak_EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<class UPUMG_StoreItem*>* StoreItems);
	bool GetWeaponItem(Killstreak_EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, class UKSWeaponAsset** Weapon);
	void GetSkinItemsForJobItem(class UKSJobItem* JobItem, TArray<class UPUMG_StoreItem*>* StoreItems);
	class UKSScrollBox* GetScrollBoxForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	struct FRogueCustomizationRelatedInfo GetRogueCustomizationRelatedInfoForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	void GetRadialMenuItems(TArray<class UPUMG_StoreItem*>* StoreItems, const struct FName& Tag);
	class UKSNavTabWidget* GetNavTabForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	class UKSStoreItemHelper* GetItemHelper();
	class UKSSortableGridPanel* GetItemContainerForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	void GetCosmeticItemsForSlot(Killstreak_EMercCosmeticSlot SlotType, Killstreak_EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<class UPUMG_StoreItem*>* StoreItems);
	TArray<class UKSCosmeticItemSelectorWidget*> GetCosmeticItemSelectorsForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	class UKSSortableGridPanel* GetActiveSortableGridPanel();
	class UKSScrollBox* GetActiveScrollBox();
	struct FRogueCustomizationRelatedInfo GetActiveRogueCustomizationRelatedInfo();
	class UKSNavTabWidget* GetActiveNavTab();
	Killstreak_EMercCosmeticSlot GetActiveCosmeticSlot();
	TArray<class UKSCosmeticItemSelectorWidget*> GetActiveCosmeticItemSelectors();
	void ForceSetTabIndex(int NewTabIndex);
	void ClearCosmeticItemsForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot);
	void ChangeToNewTab();
	void AddRogueCustomizationRelatedInfo(int NewSwitcherIndex, Killstreak_EMercCosmeticSlot NewCosmeticSlot, class UKSNavTabWidget* NewNavTab, class UKSScrollBox* NewScrollBox, class UKSSortableGridPanel* NewSortableGridPanel);
	void AddCosmeticItemsForCosmeticSlot(Killstreak_EMercCosmeticSlot CheckCosmeticSlot, TArray<class UKSCosmeticItemSelectorWidget*> NewCosmeticItems);
};

// Class KillstreakUINew.KSDailyChallengeViewBase
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSDailyChallengeViewBase : public UKSWidget
{
public:
	float                                              ChallengeTimerRefreshRate;                                 // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5J3Y[0xC];                                     // 0x051C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1842);
		return ptr;
	}



	void UpdateChallenges();
	void InitializeChallengeDisplays();
	void HandlePlayerChallengesReady();
	void HandlePlayerChallengesChanged();
	void HandleDailyChallengeTimerRefreshed();
	TArray<class UKSActivityInstance*> GetDisplayingChallenges();
	void DisplayChallengeTimeRemaining(int TimeRemainingSeconds);
	void DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish);
};

// Class KillstreakUINew.KSDataSocialCategory
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UKSDataSocialCategory : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPlayersUpdated;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHeaderUpdated;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMessageUpdated;                                          // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIFT[0x78];                                    // 0x0058(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSDataSocialPlayer*>                 SortedPlayerList;                                          // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1843);
		return ptr;
	}



	bool TryConsumeOpenOnUpdate();
	void SetOpenOnUpdate(bool Value);
	void SetMessageText(bool bProcessing, const struct FText& MessageText);
	void SetHeaderText(const struct FText& Header);
	int Num();
	bool IsProcessing();
	TArray<class UKSDataSocialPlayer*> GetPlayerList();
	struct FText GetMessageText();
	struct FText GetHeaderText();
	unsigned char BP_GetSectionValue();
};

// Class KillstreakUINew.KSDataSocialPlayer
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UKSDataSocialPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnDataUpdate;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UKSPlayerInfo*                               Info;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1844);
		return ptr;
	}



	void KSSocialPlayerUpdate__DelegateSignature(class UKSPlayerInfo* playerinfo);
	bool IsValid();
	class UKSPlayerInfo* GetPlayerInfo();
};

// Class KillstreakUINew.KSDebugMenu
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSDebugMenu : public UKSWidget
{
public:
	TArray<struct FDebugMenuCommandInfo>               DebugCommands;                                             // 0x0518(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1845);
		return ptr;
	}



	bool GetSubmenu(const struct FDebugMenuCommandInfo& BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu);
	void GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands);
	KillstreakUINew_EConsoleCommandParamType GetParamTypeForSubCommand(const struct FString& BaseCommandString);
};

// Class KillstreakUINew.KSDownloadProgressWidget
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
class UKSDownloadProgressWidget : public UUserWidget
{
public:
	float                                              UpdatePeriod;                                              // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMarkedFinished;                                           // 0x023C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IYFP[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeUntilNextUpdate;                                       // 0x0240(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AI8Q[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1846);
		return ptr;
	}



	void UpdateFinished();
	void UpdatedDownloadProgress(float Progress, float Total, float Eta, bool bSupportsEta);
};

// Class KillstreakUINew.KSEditableTextBox
// 0x0010 (FullSize[0x0A40] - InheritedSize[0x0A30])
class UKSEditableTextBox : public UEditableTextBox
{
public:
	struct FScriptDelegate                             OnKeyDown;                                                 // 0x0A30(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1848);
		return ptr;
	}



};

// Class KillstreakUINew.KSViewedPawnWidget
// 0x0010 (FullSize[0x0548] - InheritedSize[0x0538])
class UKSViewedPawnWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData_2RG5[0x10];                                    // 0x0538(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1849);
		return ptr;
	}



};

// Class KillstreakUINew.KSEliminationMessageWidget
// 0x0000 (FullSize[0x0548] - InheritedSize[0x0548])
class UKSEliminationMessageWidget : public UKSViewedPawnWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1850);
		return ptr;
	}



	void ShowMessageForTakenDown(class AKSPlayerState* Instigator, bool IsElimination);
	void ShowMessageForTakedown(class AKSPlayerState* Victim, bool IsElimination);
	void ShowMessageForAssist(class AKSPlayerState* Victim, bool IsElimination);
	void OnPlayerDownReceived(const struct FCombatEventInfo& EventInfo, int ExpBonus);
	void OnPlayerDeathReceived(const struct FCombatEventInfo& EventInfo);
	void OnPlayerAssistReceived(const struct FAssistInfo& EventInfo);
	void ClearMessages();
};

// Class KillstreakUINew.KSEmailCollection_ViewRedirector
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UKSEmailCollection_ViewRedirector : public UKSActivityProgress_ViewRedirector
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1851);
		return ptr;
	}



};

// Class KillstreakUINew.KSEmailCollectionWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSEmailCollectionWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1852);
		return ptr;
	}



	void SubmitEmailAddress(const struct FString& EmailAddress);
	void OnSubmitEmailResponseNative(bool bSuccess);
	void OnSubmitEmailResponse(bool Success);
	bool IsValidEmailAddress(const struct FString& EmailAddress);
	struct FText GetPrepopulatedEmail();
	struct FText GetEULAText();
	void DismissPopup();
};

// Class KillstreakUINew.KSEMODataFactory
// 0x00E8 (FullSize[0x0120] - InheritedSize[0x0038])
class UKSEMODataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData_PYLI[0x14];                                    // 0x0038(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               haveRecieveMatchReport;                                    // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PPW5[0xB3];                                    // 0x004D(0x00B3) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRewardsRecieved;                                         // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnProgressionRecieved;                                     // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1853);
		return ptr;
	}



	void SetupTestData(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp, int WeaponMasteryCount, int WeaponMasteryLevels, bool CategoryMasteryCanLevel, int MilestonesPerWeapon, int BonusPoints);
	bool IsLocalPlayer(int64_t PlayerId);
	void HandlePlayerRewardsEventTokens();
	void HandlePlayerRewards(const struct FPlayerRewardsSummary& PlayerRewardSummary, bool bFakeTestData);
	void HandleEOMDetail();
	struct FScoreboardStats GetScoreboardStats();
	struct FPlayerRewardsSummary GetPlayerRewardsSummary();
	int GetLastMatchQueueId();
	bool FindReputationProgressionActivity(class UKSActivityInstance** ReputationProgressionActivity);
	bool FindRankedProgressionActivity(class UKSActivityInstance** RankedProgressionActivity);
	bool FindPlayerXpProgressionActivity(class UKSActivityInstance** PlayerXpProgressionActivity);
	bool FindMiniBattlePassProgressionActivity(class UKSActivityInstance** MiniBattlePassProgressionActivity);
	bool FindBattlePassProgressionActivity(class UKSActivityInstance** BattlePassProgressionActivity);
	void ComputeEOMResults();
};

// Class KillstreakUINew.KSEnemyDetectedWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSEnemyDetectedWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1854);
		return ptr;
	}



};

// Class KillstreakUINew.KSEquipAllData
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UKSEquipAllData : public UObject
{
public:
	class UKSItem*                                     CosmeticItem;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HeaderText;                                                // 0x0030(0x0018) (BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FText                                       DescText;                                                  // 0x0048(0x0018) (BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EquipAllCompletedCallback;                                 // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TEnumAsByte<KillstreakUINew_EEquipAllType>         EquipType;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4EU[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SlotType;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotPosition;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4P1[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAsset*                              WeaponToEquipTo;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1855);
		return ptr;
	}



};

// Class KillstreakUINew.KSEquipAllWidget
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSEquipAllWidget : public UKSWidget
{
public:
	class UKSEquipAllData*                             EquipAllData;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1856);
		return ptr;
	}



	void OnEquipAll();
	void CancelEquipAll();
};

// Class KillstreakUINew.KSEventBuyThroughScreenBase
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSEventBuyThroughScreenBase : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1857);
		return ptr;
	}



};

// Class KillstreakUINew.KSExpDisplayWidget
// 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
class UKSExpDisplayWidget : public UKSViewedPawnWidget
{
public:
	bool                                               bIsWaitingForNextQueue;                                    // 0x0548(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4VH9[0x17];                                    // 0x0549(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1858);
		return ptr;
	}



	void QueueExpDisplays(const struct FExpDisplayInfo& ExpInfo);
	void NativeHandleDisplayExpInfo();
	bool GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo);
	void DisplayExpInfo();
};

// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UKSFloatTickLerpWidgetBase : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnLerpComplete;                                            // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              LerpTime;                                                  // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LerpPower;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0L4B[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1859);
		return ptr;
	}



	void SetTargetValue(float Value);
	void SetLerpTime(float Time);
	void SetLerpPower(float Power);
	bool IsLerping();
	float GetCurrentValue();
	void ForceCurrentValue(float Value);
	void DisplayForValue(float Value);
};

// Class KillstreakUINew.KSFriendDataFactory
// 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
class UKSFriendDataFactory : public UPUMG_FriendDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnUpdateRecentlyPlayedPlayers;                             // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1860);
		return ptr;
	}



	void OnEOMRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats);
	void KSUpdateRecentlyPlayedPlayers__DelegateSignature(class UKSFriendDataFactory* Source);
	TArray<class UPUMG_PlayerInfo*> GetSuggestedFriends_Info();
	TArray<class UKSPlayerInfo*> GetPlayersPlayedWithThisClientSession_Info();
	TArray<class UPUMG_PlayerInfo*> GetPendingFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetOnlineFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriendRequests_Info();
};

// Class KillstreakUINew.KSFubarPopupWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSFubarPopupWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1861);
		return ptr;
	}



	void ReceiveFubar(Killstreak_EFubarDisplayReason Reason);
	int GetSecondsToShutdown();
	void DisplayFubar(Killstreak_EFubarDisplayReason Reason);
};

// Class KillstreakUINew.KSMapWidgetBase
// 0x0120 (FullSize[0x0638] - InheritedSize[0x0518])
class UKSMapWidgetBase : public UKSWidget
{
public:
	Killstreak_EDisplayType                            MapDisplayType;                                            // 0x0518(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWasVisible;                                               // 0x0519(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J9V3[0x6];                                     // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           LastUpdateFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMapIconWidgetConfig>                MapIconWidgetsToPool;                                      // 0x0528(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UKSMapIconWidgetPool*>                MapIconWidgetPool;                                         // 0x0538(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UKSMapIconWidgetBase*>                MapIconWidgetPoolShown;                                    // 0x0548(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1KZP[0x50];                                    // 0x0558(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AKSPlayerState*, class UKSMapIconWidgetBase*> PlayerIconMap;                                             // 0x05A8(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LSCA[0x38];                                    // 0x05F8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AbsoluteRotation;                                          // 0x0630(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CanBeScrambled;                                            // 0x0631(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsScrambled;                                               // 0x0632(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAffectedByScramble;                                       // 0x0633(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HWE9[0x4];                                     // 0x0634(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1862);
		return ptr;
	}



	void UpdateIcon(class UKSMapIconWidgetBase* Icon);
	struct FVector2D ToIconRenderCoords(const struct FVector2D& MapCoords);
	float ToIconRenderAngle(float PlayerAngle);
	void TickCachedTransform();
	void SetScrambleState(bool Scrambled);
	void RemoveWidgetFromLoaderById(int InId);
	void OnScrambleStateChanged(bool Scrambled);
	void OnReceiveDisplayWidgetInfo(const struct FDisplayInfo& DisplayInfo);
	void OnGameStateSet(class AGameStateBase* GameStateBase);
	bool IsOnMap(const struct FVector2D& MapCoords);
	void HandleMoveToWidgetPool(class UKSMapIconWidgetBase* MapIconWidget);
	void HandleDisplayFromWidgetPool(class UKSMapIconWidgetBase* MapIconWidget, const struct FDisplayInfo& DisplayInfo);
	class UKSMapIconWidgetBase* GrabMapIconWidget(const struct FString& WidgetPoolName);
	float GetDistanceToIcon(class UKSMapIconWidgetBase* Icon);
	class APawn* GetCachedViewedPawn();
	struct FTransform GetCachedTransform();
	void DisplayToMapWidget(class UKSMapIconWidgetBase* MapIcon);
	class UKSMapIconWidgetBase* CreateNewIconWidget(class UClass* WidgetClass, int UniqueId, class AKSPlayerState* CreatingPlayer, Killstreak_EDisplayType ParentMapDisplayType, class AActor* AssociatedActor, class UObject* AssociatedObject, const struct FVector& DefaultLocation, float Lifespan);
	void CreateMapIconWidgetPool(const struct FMapIconWidgetConfig& MapIconWidgetConfig);
};

// Class KillstreakUINew.KSFullMapWidget
// 0x0018 (FullSize[0x0650] - InheritedSize[0x0638])
class UKSFullMapWidget : public UKSMapWidgetBase
{
public:
	class AActor*                                      MinimapRendererActor;                                      // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimapWidth;                                              // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4X3[0xC];                                     // 0x0644(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1863);
		return ptr;
	}



};

// Class KillstreakUINew.KSHUDCommon
// 0x0078 (FullSize[0x0618] - InheritedSize[0x05A0])
class AKSHUDCommon : public APUMG_HUD
{
public:
	struct FScriptMulticastDelegate                    OnPreferredSiteUpdated;                                    // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                          // 0x05B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsDataFactory*                      SettingsFactory;                                           // 0x05B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSChatDataFactory*                          ChatDataFactory;                                           // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSPartyDataFactory*                         PartyDataFactory;                                          // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSNPEDataFactory*                           NPEDataFactory;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSPlayerDataFactory*                        PlayerDataFactory;                                         // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisplayWatermark;                                         // 0x05E0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TJG3[0x3];                                     // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WatermarkAlpha;                                            // 0x05E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetLeft;                                       // 0x05E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetTop;                                        // 0x05EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetRight;                                      // 0x05F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetBottom;                                     // 0x05F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WatermarkChangePositionTime;                               // 0x05F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CLQ2[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ColorPaletteDT;                                            // 0x0600(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  FontPaletteDT;                                             // 0x0608(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsColorOptionsAsset*                CrosshairColorOptions;                                     // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1864);
		return ptr;
	}



	void UIX_ReportServer();
	void TestChallengeNotification();
	void ShowErrorPopup(const struct FText& ErrorMsg);
	bool ShouldShowCrossplayIconForPlayerState(class AKSPlayerState* PlayerState);
	bool ShouldShowCrossplayIconForPlayer(int64_t PlayerId);
	void SetPreferredSiteId(int SiteId);
	void PrintToLog(const struct FText& InText);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void OnInvalidVoucherAcquisition(class UPUMG_StoreItem* StoreItem);
	bool MutePlayer(int64_t PlayerId, bool Mute);
	void LogErrorMessage(const struct FText& ErrorMsg);
	bool IsSamePortalAsLocalPlayer(int64_t PlayerId);
	bool IsMuted(int64_t PlayerId);
	void HandleOpenTextChat(bool BeginChatCommand);
	void HandleControllerDisconnect();
	class UKSUISessionManager* GetUISessionManager();
	void GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap);
	class UKSSettingsDataFactory* GetSettingsDataFactory();
	bool GetPreferredSiteId(int* OutSiteId);
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSNPEDataFactory* GetNPEDataFactory();
	class UKSMercManager* GetMercManager();
	class UPUMG_LoginDataFactory* GetLoginDataFactory();
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	class UKSStoreItemHelper* GetItemHelper();
	bool GetFont(const struct FName& FontName, struct FSlateFontInfo* ReturnFont);
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	class UKSContextBarWidget* GetContextBarWidget();
	bool GetColor(const struct FName& ColorName, struct FLinearColor* ReturnColor);
	class UKSChatDataFactory* GetChatDataFactory();
	class UKSAcquisitionManager* GetAcquisitionManager();
	void EvaluateFocus();
	void DisplayWatermark();
	void ConfirmReportServer();
	void ApplySafeFrameScale(float SafeFrameScale);
};

// Class KillstreakUINew.KSGameHUDNew
// 0x00A8 (FullSize[0x06C0] - InheritedSize[0x0618])
class AKSGameHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData_S0CF[0x8];                                     // 0x0618(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AimAssistDebugWidgetClass;                                 // 0x0620(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UUserWidget>                  AimAssistDebugWidget;                                      // 0x0628(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FDataTableInfo>                      BaseAssetDataTables;                                       // 0x0630(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicSkinTable*                           AssetDataTableManager;                                     // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMultiSkinObject*                            SkinObject;                                                // 0x0648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSHUDStateTracker*                          HUDStateTracker;                                           // 0x0650(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NUR9[0x50];                                    // 0x0658(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHudFubarDel;                                             // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7LC[0x8];                                     // 0x06B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1865);
		return ptr;
	}



	void UIX_ReturnLobby();
	void ToggleAimAssistDebug();
	void SetHUDVisible(bool bVisible);
	void ReturnToHome();
	void OnViewedPlayerStateModRemoved(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance);
	void OnViewedPlayerStateModAdded(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance);
	void OnViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void OnToggleHUD();
	void OnAssetDataTableManagerChanged();
	void NetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkLagState> LagType);
	bool IsPlayerMuted(class AKSPlayerState* KSPlayerState);
	bool IsPlayerInVoiceChannel(class AKSPlayerState* KSPlayerState);
	void HandleLoginStateChange(PlatformUMG_EPUMG_LoginState LoginState);
	void HandleFubar(Killstreak_EFubarDisplayReason Reason);
	class UKSHUDStateTracker* GetHUDStateTracker();
};

// Class KillstreakUINew.KSGameInfoOverlayBase
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSGameInfoOverlayBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData_XUDL[0x28];                                    // 0x0518(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1866);
		return ptr;
	}



	void ToggleTopHUDBar(bool bShow);
	void OnHeaderChanged(const struct FText& Header);
	void HandlePlayerStateReady(class AKSPlayerState* PlayerState);
};

// Class KillstreakUINew.KSGamepadPromptWidget
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSGamepadPromptWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData_PNWN[0x10];                                    // 0x0518(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1867);
		return ptr;
	}



	void SetContext(const struct FButtonPromptContext& PromptContext);
	void PushContext(const struct FButtonPromptContext& PromptContext);
	bool PopContext(struct FButtonPromptContext* OutContext);
	void ClearAllContext();
	void ApplyContext(const struct FButtonPromptContext& Context);
};

// Class KillstreakUINew.KSHealthWidget
// 0x0020 (FullSize[0x0558] - InheritedSize[0x0538])
class UKSHealthWidget : public UKSPawnWidget
{
public:
	float                                              CachedHealth;                                              // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedArmor;                                               // 0x053C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedMaxHealth;                                           // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedOverheal;                                            // 0x0544(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K8Z6[0x10];                                    // 0x0548(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1868);
		return ptr;
	}



	void OverhealChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange);
	void OnOverhealChanged(float OldOverheal, float NewOverheal, bool bAnimatedChange);
	void OnHealthChanged(float OldHealth, float OldMaxHealth, float NewHealth, float NewMaxHealth, bool bAnimatedChange);
	void OnArmorChanged(float OldArmor, float NewArmor);
	void HealthChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange);
	void HandlePawnOverhealChange(class AKSCharacterBase* Character);
	void HandlePawnHealthChange(class AKSCharacterBase* Character);
};

// Class KillstreakUINew.KSHudEditableWidget
// 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
class UKSHudEditableWidget : public UBorder
{
public:
	struct FName                                       WidgetName;                                                // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanScale;                                                 // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSetOpacity;                                            // 0x0281(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeInvisible;                                           // 0x0282(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKYZ[0x5];                                     // 0x0283(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSHudEditor*                                HudEditor;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1870);
		return ptr;
	}



	void HandleLayoutSaved();
};

// Class KillstreakUINew.KSSettingsInfoBase
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UKSSettingsInfoBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSettingPreviewChanged;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bIsAutoApplied;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAutoSaved;                                              // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_60N3[0x86];                                    // 0x004A(0x0086) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               TextOptions;                                               // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnTextOptionsChanged;                                      // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StepValue;                                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRoundValue;                                               // 0x00FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NVD7[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RoundToNearest;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPercent;                                                // 0x0104(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SGB4[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1871);
		return ptr;
	}



	void UpdateTextOptions(TArray<struct FText> NewOptions);
	bool SetPreviewValueInt(int inInt);
	bool SetPreviewValueFloat(float InFloat);
	bool SetPreviewValueBool(bool InBool);
	bool SetDesiredValueKeyBind(const struct FKSKeyBind& InKeyBind);
	bool SetDesiredValueInt(int inInt);
	bool SetDesiredValueFloat(float InFloat);
	bool SetDesiredValueBool(bool InBool);
	bool SaveKeyBindValue(const struct FKSKeyBind& InKeyBind);
	bool SaveIntValue(int inInt);
	bool SaveFloatValue(float InFloat);
	bool SaveBoolValue(bool InBool);
	void Save();
	float RoundToNearestValueFloat(float ValueToRound);
	void RevertSettingToDefault();
	void Revert();
	void ResetPreview();
	void OnValueKeyBindSaved(const struct FKSKeyBind& SavedKeyBind);
	void OnValueKeyBindApplied(const struct FKSKeyBind& AppliedKeyBind);
	void OnValueIntSaved(int SavedInt);
	void OnValueIntApplied(int AppliedInt);
	void OnValueFloatSaved(float SavedFloat);
	void OnValueFloatApplied(float AppliedFloat);
	void OnValueBoolSaved(bool SavedBool);
	void OnValueBoolApplied(bool AppliedBool);
	bool IsValidValueKeyBind(const struct FKSKeyBind& InKey);
	bool IsValidValueInt(int inInt);
	bool IsValidValueFloat(float InFloat);
	bool IsValidValueBool(bool InBool);
	bool IsDirty();
	void InitializeValue();
	struct FKSKeyBind GetValueKeyBind();
	int GetValueInt();
	float GetValueFloat();
	bool GetValueBool();
	TArray<struct FText> GetTextOptions();
	struct FText GetTextOption(int Index);
	float GetStep();
	KillstreakUINew_EKSSettingType GetSettingType();
	float GetRoundToNearest();
	bool GetRound();
	int GetPreviewValueInt();
	float GetPreviewValueFloat();
	bool GetPreviewValueBool();
	int GetNumTextOptions();
	float GetMin();
	float GetMax();
	class AKSHUDCommon* GetKSHUD();
	bool GetIsPercent();
	struct FKSKeyBind GetDirtyValueKeyBind();
	int GetDirtyValueInt();
	float GetDirtyValueFloat();
	bool GetDirtyValueBool();
	struct FKSKeyBind FixupInvalidKeyBind(const struct FKSKeyBind& InKey);
	int FixupInvalidInt(int inInt);
	float FixupInvalidFloat(float InFloat);
	bool FixupInvalidBool(bool InBool);
	bool CanRevert();
	bool ApplyPreviewIntValue(int inInt);
	bool ApplyPreviewFloatValue(float InFloat);
	bool ApplyPreviewBoolValue(bool InBool);
	void ApplyPreview();
	bool ApplyKeyBindValue(const struct FKSKeyBind& InKeyBind);
	bool ApplyIntValue(int inInt);
	bool ApplyFloatValue(float InFloat);
	bool ApplyBoolValue(bool InBool);
	void Apply();
};

// Class KillstreakUINew.KSHudEditorSettingsInfo
// 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
class UKSHudEditorSettingsInfo : public UKSSettingsInfoBase
{
public:
	struct FVector2D                                   InRange;                                                   // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   OutRange;                                                  // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSHudEditableWidget*                        ActiveWidget;                                              // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1872);
		return ptr;
	}



	void SetStepValue(float InStepValue);
	void SetRoundToNearest(float InRoundToNearest);
	void SetRound(bool bInRoundValue);
	void SetMinValue(float InMinValue);
	void SetMaxValue(float InMaxValue);
	void SetIsPercent(bool bInIsPercent);
	void AddTextOption(const struct FText& InTextOption);
};

// Class KillstreakUINew.KSEditorPropertiesPanel
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSEditorPropertiesPanel : public UKSWidget
{
public:
	TArray<class UKSHudEditorSettingsInfo*>            SettingsInfoList;                                          // 0x0518(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSHudEditableWidget*                        SelectedHudEditableWidget;                                 // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1873);
		return ptr;
	}



	void SetSelectedHudEditableWidget(class UKSHudEditableWidget* NewWidget);
	void SetOpacityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewOpacity);
	void SetButtonVisibilityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, bool bNewVisibility);
	void SetButtonScaleEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewScale);
	void CreateWidgetSettingsInfoForSettingsWidget(class UKSSettingsWidget* InSettingsWidget, const struct FName& InPropertyName, const struct FVector2D& NewInRange, const struct FVector2D& NewOutRange, bool bInIsPercent, float InMinValue, float InMaxValue, float InStepValue, float InRoundToNearest, TArray<struct FText> InTextOptions);
};

// Class KillstreakUINew.KSHudEditor
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSHudEditor : public UKSWidget
{
public:
	class UKSHudEditableWidget*                        CurrentHighlightedWidget;                                  // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSEditorPropertiesPanel*                    EditorPropertiesPanel;                                     // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       DefaultHighlightedWidgetName;                              // 0x0528(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1874);
		return ptr;
	}



	bool TryToExit();
	void SaveLayout();
	void RevertToSavedLayout();
	void RevertToDefaultLayout();
};

// Class KillstreakUINew.KSHudEditorSettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UKSHudEditorSettings : public UObject
{
public:
	unsigned char                                      UnknownData_YSCY[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsLayoutDirty;                                            // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LYW5[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHudEditableData>                    HudEditableData;                                           // 0x0040(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1875);
		return ptr;
	}



	void UpdateHudEditablePosition(class UKSHudEditableWidget* InWidget, const struct FVector2D& InAbsolutePosition);
	void SaveLayout();
	void OnSettingsSaved__DelegateSignature();
	class UKSHudEditorSettings* STATIC_Get();
};

// Class KillstreakUINew.KSHUDStateTracker
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UKSHUDStateTracker : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHUDMatchPhaseChanged;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PhaseTime;                                                 // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMatchPhase                                 TrackedCurrentMatchPhase;                                  // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HU6X[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1876);
		return ptr;
	}



	void PollMatchPhase();
	void HandleUpdatedMatchPhase(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void HandleGameStateBeginPlay(class AKSGameState* GameState);
};

// Class KillstreakUINew.KSInfoActorWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSInfoActorWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1877);
		return ptr;
	}



	bool SetInfoActor(class AKSWidgetInfoActor* InfoActor);
};

// Class KillstreakUINew.KSInputManager
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UKSInputManager : public UPUMG_InputManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1878);
		return ptr;
	}



};

// Class KillstreakUINew.KSInspectPlayerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSInspectPlayerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1879);
		return ptr;
	}



	void UnbindEventFromInspectPlayerChanged(const struct FScriptDelegate& Callback);
	class AKSPlayerState* GetInspectPlayerState();
	void BindEventToInspectPlayerChanged(const struct FScriptDelegate& Callback);
};

// Class KillstreakUINew.KSJobSelectorWidget
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSJobSelectorWidget : public UKSWidget
{
public:
	bool                                               bAutoBindJobSelector;                                      // 0x0518(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWaitForPlayerToBecomeRelevant;                            // 0x0519(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToTasksChangedEvent;                                  // 0x051A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToPendingTasksChangedEvent;                           // 0x051B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToPersonalTaskChangedEvent;                           // 0x051C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToChoicesChangedEvent;                                // 0x051D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToTaskCompletedEvent;                                 // 0x051E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToAllPersonalTasksCompletedEvent;                     // 0x051F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBindToEndJobSelectionEvent;                               // 0x0520(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PUAM[0x3];                                     // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AKSJobSelector>               JobSelector;                                               // 0x0524(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MKL1[0x14];                                    // 0x052C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1880);
		return ptr;
	}



	void TasksChanged();
	void TaskCompleted(const struct FJobSelectionTask& CompletedTask);
	void SetJobSelector(class AKSJobSelector* InNewSelector);
	void SetBindToTasksChanged(bool bEnable);
	void SetBindToTaskCompleted(bool bEnable);
	void SetBindToPersonalTaskChanged(bool bEnable);
	void SetBindToPendingTasksChanged(bool bEnable);
	void SetBindToEndJobSelection(bool bEnable);
	void SetBindToChoicesChanged(bool bEnable);
	void SetBindToAllPersonalTasksCompleted(bool bEnable);
	void PreClearJobSelector();
	void PostSetJobSelector();
	void PersonalTaskChanged();
	void PendingTasksChanged();
	void OnBoundJobSelectorDestroyed(class AActor* DestroyedActor);
	void JobSelectorAddedToOwner(class AKSJobSelector* NewSelector);
	class AKSJobSelector* GetJobSelector();
	void EndJobSelection();
	void ChoicesChanged(TArray<class UKSJobItem*> RemovedChoices, TArray<class UKSJobItem*> AddedOrUpdatedChoices);
	void AllPersonalTasksCompleted();
};

// Class KillstreakUINew.KSJobSelectBanWidget
// 0x0010 (FullSize[0x0550] - InheritedSize[0x0540])
class UKSJobSelectBanWidget : public UKSJobSelectorWidget
{
public:
	TArray<struct FJobSelectionTask>                   CachedBanTasks;                                            // 0x0540(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1881);
		return ptr;
	}



	void BansChanged();
};

// Class KillstreakUINew.KSJobSelectCaptainStatusWidget
// 0x0070 (FullSize[0x05B0] - InheritedSize[0x0540])
class UKSJobSelectCaptainStatusWidget : public UKSJobSelectorWidget
{
public:
	struct FJobSelectionTask                           CachedCaptainTask;                                         // 0x0540(0x0048) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	class UKSPersistentPlayerData*                     CachedCaptainPlayerData;                                   // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKSPersistentPlayerId                       CachedCaptainId;                                           // 0x0590(0x0010) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K46G[0x10];                                    // 0x05A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1882);
		return ptr;
	}



	void CaptainTaskChanged();
};

// Class KillstreakUINew.KSJobSelectChoiceGridWidget
// 0x0070 (FullSize[0x05B0] - InheritedSize[0x0540])
class UKSJobSelectChoiceGridWidget : public UKSJobSelectorWidget
{
public:
	class UGridPanel*                                  GridPanel;                                                 // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ChoiceWidgetClass;                                         // 0x0548(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PaddingWidgetClass;                                        // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                GridWidth;                                                 // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XYS6[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSJobSelectionChoiceWidget*>         ActiveChoiceWidgets;                                       // 0x0560(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUserWidget*>                         ActivePaddingWidgets;                                      // 0x0570(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnChoiceWidgetHovered;                                     // 0x0580(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChoiceWidgetUnhovered;                                   // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChoiceGridRebuilt;                                       // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1883);
		return ptr;
	}



	bool SortActiveChoiceWidgets(class UKSJobSelectionChoiceWidget* LHS, class UKSJobSelectionChoiceWidget* RHS);
	void SetGridPanel(class UGridPanel* InGridPanel);
};

// Class KillstreakUINew.KSJobSelectionChoiceWidget
// 0x0040 (FullSize[0x0580] - InheritedSize[0x0540])
class UKSJobSelectionChoiceWidget : public UKSJobSelectorWidget
{
public:
	unsigned char                                      UnknownData_P282[0x20];                                    // 0x0540(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UButton*>                             HitTargets;                                                // 0x0560(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSJobItem*                                  LocalJob;                                                  // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P7AU[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1884);
		return ptr;
	}



	void SetJob(class UKSJobItem* Job);
	Killstreak_ECanCompleteTaskResult RequestSelect();
	void RemoveCombinedHitTarget(class UButton* InButton);
	class UKSJobItem* GetJob();
	struct FJobSelectionChoice GetChoiceData();
	void CombinedUnhover();
	void CombinedHover();
	void ChoiceOrJobChanged();
	void AddCombinedHitTarget(class UButton* InButton);
};

// Class KillstreakUINew.KSJobSelectionPlayerStatusWidget
// 0x0070 (FullSize[0x05B0] - InheritedSize[0x0540])
class UKSJobSelectionPlayerStatusWidget : public UKSJobSelectorWidget
{
public:
	TArray<struct FJobSelectionTask>                   CachedCompletedTasks;                                      // 0x0540(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FJobSelectionTask                           CachedActiveTask;                                          // 0x0550(0x0048) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bCachedActiveTaskPendingComplete;                          // 0x0598(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CAMQ[0x7];                                     // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSPersistentPlayerData*                     PlayerData;                                                // 0x05A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NK1R[0x8];                                     // 0x05A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1885);
		return ptr;
	}



	void SetPlayerByPlayerState(class AKSPlayerState* InPlayerState);
	void SetPlayerByPersistentData(class UKSPersistentPlayerData* InPlayerData);
	void SetPlayerById(const struct FKSPersistentPlayerId& InPlayerId);
	void PreClearPlayerData();
	void PostSetPlayerData();
	void PlayerTasksChanged();
	bool HasLockedInAJob(class UKSJobItem** OutJob);
	bool HasActiveTask();
	struct FText GetSelectionStatusText();
	class UKSJobItem* GetSelectionStatusJob();
	struct FKSPersistentPlayerId GetPlayerId();
	class UKSPersistentPlayerData* GetPersistentPlayerData();
};

// Class KillstreakUINew.KSJobSelectionWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSJobSelectionWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1886);
		return ptr;
	}



	void GetJobItems();
	class UKSStoreItemHelper* GetItemHelper();
	class UPUMG_StoreItem* GetAdOffer();
};

// Class KillstreakUINew.KSJobSelectOverallStatusWidget
// 0x0078 (FullSize[0x05B8] - InheritedSize[0x0540])
class UKSJobSelectOverallStatusWidget : public UKSJobSelectorWidget
{
public:
	struct FText                                       CachedDisplayText;                                         // 0x0540(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	struct FPGame_ReplicatedTimerId                    CachedDisplayTimerId;                                      // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	PlatformGameFramework_EPGame_ReplicateTimerState   CachedTimerState;                                          // 0x0559(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U3G6[0x6];                                     // 0x055A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FJobSelectionTask                           CachedPrimaryTask;                                         // 0x0560(0x0048) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	float                                              TimerUpdatePeriod;                                         // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BCTI[0xC];                                     // 0x05AC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1887);
		return ptr;
	}



	struct FText STATIC_GetCountdownFormattedText(float SecondsRemaining, bool bShowHours, bool bShowTenthsOfSecond, bool bAllowNegative);
	void DisplayTimerChanged();
	void DisplayTextChanged();
};

// Class KillstreakUINew.KSKillCardWidget
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSKillCardWidget : public UKSWidget
{
public:
	float                                              DisplayDuration;                                           // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O1V2[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1888);
		return ptr;
	}



	void ShowPlayerAndMessage(class AKSPlayerState* PlayerState, const struct FText& Message);
	void ClearMessage(bool UseAnimations);
};

// Class KillstreakUINew.KSLobbyHUDNew
// 0x0098 (FullSize[0x06B0] - InheritedSize[0x0618])
class AKSLobbyHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData_LDI7[0x10];                                    // 0x0618(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMinuteTimerUpdate;                                       // 0x0628(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9TFZ[0x10];                                    // 0x0638(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSQueueDataFactory*                         QueueDataFactory;                                          // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSFriendDataFactory*                        FriendDataFactory;                                         // 0x0650(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSPlayerQueryDataFactory*                   PlayerQueryDataFactory;                                    // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSEMODataFactory*                           EMODataFactory;                                            // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSPlayerWhoDataFactory*                     PlayerWhoDataFactory;                                      // 0x0668(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UKSMediaPlayerWidget>         CurrentMediaPlayerWidget;                                  // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TMJ4[0x8];                                     // 0x0678(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTriggerBlockerChange;                                    // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LobbyWidgetReady;                                          // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZJX[0x4];                                     // 0x06A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoadingScreenFadeInDelay;                                  // 0x06A4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              LoadingScreenFadeInDuration;                               // 0x06A8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6N4Y[0x4];                                     // 0x06AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1889);
		return ptr;
	}



	void TransitionCamera(const struct FName& CameraTag, float BlendTime);
	void ToggleDisablePartyLobbyCharacters(bool Disable);
	void TestSetStoreRotationOverride(const struct FString& DateTime);
	void TestPostMatchLobby(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp, int WeaponMasteryCount, int WeaponMasteryLevels, bool CategoryMasteryCanLevel, int MilestonesPerWeapon);
	void TestEventGrandPrizeAcquisition();
	void TestBattlePassAcquisition(int StartTier, int EndTier);
	void ShowPopupConfirmation(const struct FText& Message, KillstreakUINew_ESocialMessageType MessageType);
	void ResetLobbyCharactersByIndex(TArray<Killstreak_ELobbyCharacterIndex> IndicesToReset);
	void ResetLobbyCharacters();
	void OnStoreVendorsLoaded(int GroupId, TArray<int> VendorIds);
	void OnNotEnoughCurrency(class UPUMG_StorePurchaseRequest* PurchaseRequest);
	void NotifyViewStateChange(const struct FName& NewRoute, const struct FName& PreviousRoute);
	bool IsPlayerMuted(class UPUMG_PlayerInfo* PlayerData);
	void HandleSpecificPartyIdDataUpdated(int64_t PlayerId);
	void HandleSpecificPartyDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	void HandleSpecificPartyDataAdded(const struct FPUMG_PartyMemberData& PartyMember);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember, int MemberIndex);
	void HandlePartyEmoteMessageReceived(class UPUMG_PlayerInfo* Sender);
	void HandlePartyDataUpdated();
	void HandleMatchStatusUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus);
	void HandleLoginUserChange();
	void HandleLoginStateChange(PlatformUMG_EPUMG_LoginState LoginState);
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPlayerQueryDataFactory* GetPlayerQueryDataFactory();
	class UKSLobbyWidget* GetLobbyWidget();
	bool GetLobbyCharacterByPosition(Killstreak_ELobbyCharacterIndex CharacterIndex, class AKSLobbyCharacter** LobbyCharacter);
	class UKSQueueDataFactory* GetKSQueueDataFactory();
	class UKSJsonDataFactory* GetJsonDataFactory();
	bool GetJobSelectPreviewActorByPosition(Killstreak_ELobbyCharacterIndex CharacterIndex, class AKSJobSelectPreviewActor_Lobby** PreviewActor);
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEMODataFactory* GetEMODataFactory();
	class UKSItem* GetDefaultPlayerAccountItem(Killstreak_EPlayerAccountSlot ItemSlot);
	bool GetCharacterIndexFromPartyIndex(int PartyMemberIndex, Killstreak_ELobbyCharacterIndex* OutCharIndex);
	void ForceMinuteTimerUpdate();
	void ForceEulaAccept();
	void CreateInitialPlayerLoadout();
	void CheckForVoucherRedemption();
	void CheckForExistingPenaltyTime();
};

// Class KillstreakUINew.KSLobbyNameplateWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSLobbyNameplateWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1890);
		return ptr;
	}



	void SetupRankedManager();
	void RefreshRankedData();
};

// Class KillstreakUINew.KSLobbyWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSLobbyWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1891);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginExistingBase
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSLoginExistingBase : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1892);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginInventoryCheckViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSLoginInventoryCheckViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1893);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginInventoryCheck
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSLoginInventoryCheck : public UKSWidget
{
public:
	unsigned char                                      UnknownData_A6LM[0x10];                                    // 0x0518(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1894);
		return ptr;
	}



	void CancelLogin();
};

// Class KillstreakUINew.KSLoginProcessRewardsViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSLoginProcessRewardsViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1895);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginProcessRewards
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSLoginProcessRewards : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1896);
		return ptr;
	}



	void ProcessAccountRewards();
};

// Class KillstreakUINew.KSTabValidator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSTabValidator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1897);
		return ptr;
	}



	bool IsValidTab();
};

// Class KillstreakUINew.KSLoginRewardsTabValidator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSLoginRewardsTabValidator : public UKSTabValidator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1898);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginRewardsModalViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSLoginRewardsModalViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1899);
		return ptr;
	}



};

// Class KillstreakUINew.KSLoginRewardsModal
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSLoginRewardsModal : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnLoginRewardsReady;                                       // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FLoginRewardItem>                    LoginRewardItems;                                          // 0x0528(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                nDefaultItemsPerRow;                                       // 0x0538(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TDUV[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1900);
		return ptr;
	}



	void UIX_AttemptClaimReward();
	void HandlePlayerChallengesReady();
	TArray<struct FLoginRewardItem> GrabLoginRewardsFromActivityInstance(class UKSActivityInstance* ActivityInstance);
	int GetNumberOfItemsToDisplay();
	int GetLoginRewardProgressCount();
	TArray<struct FLoginRewardItem> GetLoginRewardItems();
	struct FText GetLoginEventTimeRemaining();
};

// Class KillstreakUINew.KSLootSiteIconWidget
// 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
class UKSLootSiteIconWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1901);
		return ptr;
	}



};

// Class KillstreakUINew.KSLootSiteMarkerWidget
// 0x0020 (FullSize[0x0338] - InheritedSize[0x0318])
class UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxDisplayDistance;                                        // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bViewedPawnHasEndedFreeFall;                               // 0x0324(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_86AA[0x3];                                     // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Killstreak_ELootSiteRarity>                 TagsToHide;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1902);
		return ptr;
	}



};

// Class KillstreakUINew.KSLowAmmoAlertWidget
// 0x0020 (FullSize[0x0600] - InheritedSize[0x05E0])
class UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget
{
public:
	float                                              LowAmmoThreshold;                                          // 0x05E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_ELowAmmoState                      CachedLowAmmoState;                                        // 0x05E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E224[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAmmoStateChangedDel;                                     // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_99DY[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1903);
		return ptr;
	}



	KillstreakUINew_ELowAmmoState GetAmmoState();
	KillstreakUINew_ELowAmmoState CalcAmmoState();
	void AmmoStateChanged();
};

// Class KillstreakUINew.KSMapIconWidgetPool
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UKSMapIconWidgetPool : public UObject
{
public:
	struct FString                                     PoolType;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSMapIconWidgetBase*>                MapIconWidgets;                                            // 0x0038(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1904);
		return ptr;
	}



	class UKSMapIconWidgetBase* GetMapIconWidget();
	void AddMapIconWidget(class UKSMapIconWidgetBase* MapIconWidget);
};

// Class KillstreakUINew.KSMarkerDisplayBase
// 0x0088 (FullSize[0x06C0] - InheritedSize[0x0638])
class UKSMarkerDisplayBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData_GG77[0x8];                                     // 0x0638(0x0008) Fix Super Size
	unsigned char                                      UnknownData_BWDS[0x80];                                    // 0x0640(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1905);
		return ptr;
	}



	bool GetScreenPositionForMarker(const struct FVector& TargetLocation, float AnchorHeight, float MarginX, float MarginY, struct FVector2D* ScreenLocation);
};

// Class KillstreakUINew.KSDataMassInviteBase
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UKSDataMassInviteBase : public UObject
{
public:
	struct FText                                       Title;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FText                                       ButtonLabel;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnShouldShow;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnClose;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1906);
		return ptr;
	}



};

// Class KillstreakUINew.KSDataIndividualInviteSetup
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UKSDataIndividualInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnGetIsSelected;                                           // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnSelect;                                                  // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1907);
		return ptr;
	}



	class UKSDataIndividualInviteSetup* SetCallbacks(const struct FScriptDelegate& GetIsSelected, const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Close);
	KillstreakUINew_EKSInviteSelectResult KSInviteSelect__DelegateSignature(class UKSPlayerInfo* playerinfo);
	bool KSInviteGetIsSelected__DelegateSignature(class UKSPlayerInfo* playerinfo);
};

// Class KillstreakUINew.KSDataBatchInviteSetup
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UKSDataBatchInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnSelect;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1908);
		return ptr;
	}



	class UKSDataBatchInviteSetup* SetCallbacks(const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Cancel);
	void KSBatchSelect__DelegateSignature(TArray<class UKSPlayerInfo*> playerinfo);
};

// Class KillstreakUINew.KSMassInviteModal
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSMassInviteModal : public UKSWidget
{
public:
	TArray<class UKSPlayerInfo*>                       SelectedPlayers;                                           // 0x0518(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSDataMassInviteBase*                       RouteData;                                                 // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1909);
		return ptr;
	}



	bool UpdateRouteData();
	KillstreakUINew_EKSInviteSelectResult SelectPlayer(class UKSPlayerInfo* Player);
	void RequestFriends(const struct FScriptDelegate& OnReceivePlayers);
	void KSInviteReceivePlayers__DelegateSignature(TArray<class UKSPlayerInfo*> Players);
	bool GetShouldSelect(class UKSPlayerInfo* Player);
	void CloseScreen(KillstreakUINew_EKSInviteCloseAction CloseAction);
};

// Class KillstreakUINew.KSMatchInvitationModal
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UKSMatchInvitationModal : public UKSWidget
{
public:
	struct FName                                       RouteName;                                                 // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F8LR[0x8];                                     // 0x0520(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                InvitationExpireTimeout;                                   // 0x0528(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KZF1[0x20];                                    // 0x0530(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1910);
		return ptr;
	}



	void OnInvitationExpired();
	void HandleReceivePlayerName(class UPUMG_PlayerInfo* playerinfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	float GetInvitationTotalTimeToExpire();
	float GetInvitationTimeRemaining();
	void DeclineInvite();
	void CloseScreen();
	void AcceptInviteDefault();
	void AcceptInvite(int MapId);
};

// Class KillstreakUINew.KSMatchResult
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UKSMatchResult : public UKSWidget
{
public:
	unsigned char                                      UnknownData_BZFU[0xC];                                     // 0x0518(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FinalResultEndTime;                                        // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoundResultAnnoucement                     RoundResultAnnoucement;                                    // 0x0528(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                pTeamNum;                                                  // 0x0548(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                pOpposeTeamNum;                                            // 0x054C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                pTeamScore;                                                // 0x0550(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                pOpposeTeamScore;                                          // 0x0554(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsEndOfMatch;                                             // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMatchEndedInSurrender;                                    // 0x0559(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RFXW[0x6];                                     // 0x055A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1911);
		return ptr;
	}



	void UpdateRoundBaseScore(class AKSGameState_RoundGame* pGameState);
	void UpdateResultStatus(Killstreak_EGameResult Result, struct FText* Status);
	void ProcessResultAnnoucement(Killstreak_EGameResult Result);
	void HandleResultReceived(const struct FRoundResultAnnoucement& ResultAnnoucement);
	void HandleEndOfMatch();
	void GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName);
	void GetSurrenderText(struct FText* pSurrenderText);
};

// Class KillstreakUINew.KSMediaPlayerWidget
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UKSMediaPlayerWidget : public UKSWidget
{
public:
	class UDataTable*                                  MediaPlayerPlaylistEntries;                                // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J6IL[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bOnlyWatchFirstEntry;                                      // 0x0530(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Z8P[0x1F];                                    // 0x0531(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1912);
		return ptr;
	}



	void UIX_SkipEntry();
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent);
	void OnEndLoadingMedia();
	void OnBeginLoadingMedia();
	bool IsCurrentEntrySkippable();
};

// Class KillstreakUINew.KSMilestoneCompletedSummary
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UKSMilestoneCompletedSummary : public UObject
{
public:
	TArray<struct FKSMilestoneCompletedSummaryEntry>   MilestoneEntries;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSWeaponAsset*>                      WeaponKeys;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UKSWeaponAsset*, int>                   WeaponXpCounts;                                            // 0x0048(0x0050) (BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1913);
		return ptr;
	}



	bool GetMilestoneEntriesForWeapon(class UKSWeaponAsset* Weapon, TArray<struct FKSMilestoneCompletedSummaryEntry>* OutMilestoneEntries);
};

// Class KillstreakUINew.KSMilestoneCompletedScreen
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UKSMilestoneCompletedScreen : public UKSWidget
{
public:
	class UKSWeaponProgressMeter*                      WeaponMasteryMeter;                                        // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              PopulatedWeapon;                                           // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSMilestoneCompletedSummary*                CurrentMilestoneData;                                      // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3TRQ[0x20];                                    // 0x0530(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1914);
		return ptr;
	}



	void StartAnimSequence();
	void ShowNextWeapon();
	void PopulateMilestoneData(TArray<struct FKSMilestoneCompletedSummaryEntry> MilestonesForWeapon);
	void PopulateFromWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleSkipContextAction();
	void HandleCurrentWeaponDismissed();
	void DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap);
};

// Class KillstreakUINew.KSMinimapWidgetBase
// 0x0018 (FullSize[0x0650] - InheritedSize[0x0638])
class UKSMinimapWidgetBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData_M9XA[0x4];                                     // 0x0638(0x0004) Fix Super Size
	float                                              BackgroundWidth;                                           // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EMinimapWidgetClampStyle           ClampStyle;                                                // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S7XP[0xF];                                     // 0x0641(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1915);
		return ptr;
	}



	void UpdateMapMaterialTransform(class UMaterialInstanceDynamic* MapMaterial, float NormalizedX, float NormalizedY, float Rotation, float Scale);
};

// Class KillstreakUINew.KSModelViewer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSModelViewer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1916);
		return ptr;
	}



	void STATIC_ViewModelByName(class UObject* WorldContextObject, const struct FName& InTargetItem, class UDataTable* InDataTable);
	void STATIC_ViewModelAttachment(class UObject* WorldContextObject, class UKSWeaponAttachment* InAttachment, const struct FName& InSpawnOnActorName, unsigned char Slot);
	void STATIC_ViewModel(class UObject* WorldContextObject, class UKSItem* InItem, const struct FName& InSpawnOnActorName, Killstreak_EWeaponStateNew DefaultWeaponState, bool InScaleToFitTargetActor, const struct FRotator& InDefaultRotation, bool InBindControllerToSpawner);
	void STATIC_UnbindControllerFromSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName);
	void STATIC_UnbindAllControllersFromSpawners(class UObject* WorldContextObject);
	void STATIC_TriggerReactiveAttachment(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	void STATIC_SetAnimation(class UObject* WorldContextObject, class UAnimSequence* InAnim, const struct FName& InSpawnOnActorName, bool bLooping);
	void STATIC_HideModelAttachment(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, unsigned char Slot);
	bool STATIC_HasReactiveAttachment(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	struct FText STATIC_GetReactiveAttachmentStateDescription(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	class UAkAudioEvent* STATIC_GetModelSoundFromDatatable(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, const struct FName& RowName);
	void STATIC_ClearModelAttachments(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	void STATIC_ClearModel(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	bool STATIC_BindDelForWeaponModelSet(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, const struct FScriptDelegate& InEventCallback);
	void STATIC_BindControllerToSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName);
};

// Class KillstreakUINew.KSModWidget_DetectEnemy
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSModWidget_DetectEnemy : public UKSWidget
{
public:
	unsigned char                                      UnknownData_TLKA[0x18];                                    // 0x0518(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1917);
		return ptr;
	}



	void OnDetectChanged(class UKSModInst_DetectEnemy* DetectEnemyModInst, bool bIsDetectingEnemy);
	class UHorizontalBox* GetIconBox();
};

// Class KillstreakUINew.KSModWidgetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSModWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1918);
		return ptr;
	}



	bool RemoveModInstance(class UKSPlayerModInstance* InInstance);
	bool AddModInstance(class UKSPlayerModInstance* InInstance);
};

// Class KillstreakUINew.KSNavTabWidget
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSNavTabWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnNavTabSelected;                                          // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavTabUnselected;                                        // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                               bSelected;                                                 // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5L6J[0x6];                                     // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       NavText;                                                   // 0x0540(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1919);
		return ptr;
	}



	void UnselectNavTab();
	void SetSelected(bool bNewSelected);
	void SetDisabled(bool bNewDisabled);
	void SelectNavTab();
	bool IsSelected();
	bool IsDisabled();
};

// Class KillstreakUINew.KSNewsRotatorData
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UKSNewsRotatorData : public UKSJsonData
{
public:
	class UTexture2DDynamic*                           Image;                                                     // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Header;                                                    // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // 0x0080(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	KillstreakUINew_ENewsActions                       PanelAction;                                               // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OR18[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActionDetails;                                             // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1920);
		return ptr;
	}



};

// Class KillstreakUINew.KSNewsRotatorWidget
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSNewsRotatorWidget : public UKSWidget
{
public:
	struct FString                                     JsonSection;                                               // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimePerSection;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SKTF[0x4];                                     // 0x052C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1921);
		return ptr;
	}



	bool ShouldShowPanel(class UKSNewsRotatorData* Panel);
	void OnNewsPanelClicked(class UKSNewsRotatorData* Panel);
	void OnJsonChanged();
	TArray<class UKSNewsRotatorData*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};

// Class KillstreakUINew.KSNewStartMenuData
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UKSNewStartMenuData : public UKSJsonData
{
public:
	class UTexture2DDynamic*                           Image;                                                     // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1922);
		return ptr;
	}



};

// Class KillstreakUINew.KSNewStartMenuWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSNewStartMenuWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1923);
		return ptr;
	}



	bool IsNewsAvailable();
	class UKSJsonDataFactory* GetJsonDataFactory();
};

// Class KillstreakUINew.KSNPEDataFactory
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UKSNPEDataFactory : public UPUMG_DataFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1924);
		return ptr;
	}



	void UIX_ClaimTutorialActivity();
	void UIX_ClaimRegionSelectedActivity();
	void SkipTutorial();
	bool ShouldForceTutorial();
	void QueueTutorial();
	bool HasClaimedActivity(const struct FGameplayTag& ActivityTag);
	class UKSQueueDataFactory* GetQueueDataFactory();
	void ClaimActivity(const struct FGameplayTag& ActivityTag);
};

// Class KillstreakUINew.KSOverlayTabHubRouteData
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UKSOverlayTabHubRouteData : public UObject
{
public:
	struct FName                                       RedirectViewName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1925);
		return ptr;
	}



};

// Class KillstreakUINew.KSOverlayTabHubBase
// 0x0080 (FullSize[0x0598] - InheritedSize[0x0518])
class UKSOverlayTabHubBase : public UKSWidget
{
public:
	class UDataTable*                                  ViewsTable;                                                // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ViewNames;                                                 // 0x0520(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       CurrentViewName;                                           // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DO86[0x50];                                    // 0x0538(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MyViewRouteName;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y3QT[0x8];                                     // 0x0590(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1926);
		return ptr;
	}



	void SetFocusToView();
	void SetFocusToTabs();
	void SelectViewAndShow(const struct FName& ViewName);
	void OnViewFocused();
	void OnTabsFocused();
	struct FName GetLandingView();
	class UPUMG_Widget* GetCurrentViewWidget();
	TArray<class UPUMG_Widget*> GetAllViews();
	void CreateAllViews();
	void ClearAllViews();
	void ChangeView(const struct FName& ViewName);
	void AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo);
};

// Class KillstreakUINew.KSPartyDataFactory
// 0x0028 (FullSize[0x01D0] - InheritedSize[0x01A8])
class UKSPartyDataFactory : public UPUMG_PartyDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnEmoteMessageReceived;                                    // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E23[0x18];                                    // 0x01B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1927);
		return ptr;
	}



	void SetSelectedQueueId(int QueueId);
	void PlayEmoteInParty(class UKSEmote* Emote);
	int GetSelectedQueueId();
	int GetPartyMinimumLevel();
	int GetHighestDeserterPenaltySeconds();
	bool CanPartyQueueForRanked(const struct FString& RankedSeasonKey);
	void BroadcastPartyInvitationError(const struct FText& InvitationError);
};

// Class KillstreakUINew.KSPartyManagerWidgetBase
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSPartyManagerWidgetBase : public UKSWidget
{
public:
	TArray<struct FPUMG_PartyMemberData>               CachedDisplayedPartyMembers;                               // 0x0518(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1928);
		return ptr;
	}



	void RefreshFromPartyData();
	void HandlePartyMemberUpdateByName(const struct FText& PlayerName);
	void HandlePartyMemberUpdateByInfo(class UPUMG_PlayerInfo* playerinfo);
	void HandlePartyMemberUpdateById(int64_t PlayerId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& MemberData);
	class UPUMG_PlayerInfo* GetSuggestedInvite();
	class UKSPartyDataFactory* GetPartyDataFactory();
	TArray<struct FPUMG_PartyMemberData> GetCachedDisplayedPartyMembers();
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers);
	void ApplyEmptyPartyData();
};

// Class KillstreakUINew.KSPerkTreeBase
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSPerkTreeBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPerkHovered;                                             // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPerkSelected;                                            // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPerkUnlockRequest;                                       // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UWidget*                                     HoverTarget;                                               // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KB5Q[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1929);
		return ptr;
	}



	void SetCursorLerping(bool bLerping);
	void RefreshEdge(class UKSPerkTreeEdgeBase* Edge, int column, int Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap);
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> InitializeNodes();
	void HandleTreeNodeSelected(class UKSPerkTreeNodeBase* SelectedNode, const struct FCustomLoadoutItem& SelectedPerk, bool bAlreadyEquipped);
	void HandleTreeNodeHovered(class UKSPerkTreeNodeBase* HoveredNode, const struct FCustomLoadoutItem& HoveredPerk);
	class UWidget* GetHoverCursor();
	class UKSPerkTreeNodeBase* GetDefaultFocusNode();
	void BindNode(class UKSPerkTreeNodeBase* TreeNode);
};

// Class KillstreakUINew.KSPerkTreeEdgeBase
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSPerkTreeEdgeBase : public UKSWidget
{
public:
	bool                                               bTopEnabled;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeftEnabled;                                              // 0x0519(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDiagonalEnabled;                                          // 0x051A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBackDiagonalEnabled;                                      // 0x051B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AccentColor;                                               // 0x051C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGTH[0x4];                                     // 0x052C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1930);
		return ptr;
	}



	void SetViewByState(const struct FKSPerkTreeEdgeInfo& EdgeInfo);
};

// Class KillstreakUINew.KSPerkTreeNodeBase
// 0x0060 (FullSize[0x0578] - InheritedSize[0x0518])
class UKSPerkTreeNodeBase : public UKSWidget
{
public:
	unsigned char                                      AssignedPerk[0x28];                                        // 0x0518(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FScriptMulticastDelegate                    OnTreeNodeHovered;                                         // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTreeNodeSelected;                                        // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestPerkPurchase;                                     // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                               bIsPlaceholder;                                            // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EPerkTreeNodeState                 NodeState;                                                 // 0x0571(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LO68[0x6];                                     // 0x0572(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1931);
		return ptr;
	}



	void SetNodeState(KillstreakUINew_EPerkTreeNodeState NewNodeState);
	void RefreshView();
	KillstreakUINew_EPerkTreeNodeState GetNodeState();
};

// Class KillstreakUINew.KSPersistentDataTeamBarWidget
// 0x0018 (FullSize[0x0568] - InheritedSize[0x0550])
class UKSPersistentDataTeamBarWidget : public UKSAutoTeamWidget
{
public:
	int                                                HoldReapply;                                               // 0x0550(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bWantsRepply;                                              // 0x0554(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_13W3[0x3];                                     // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSPersistentPlayerData*>             TeamPlayerData;                                            // 0x0558(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1932);
		return ptr;
	}



	bool SortPlayerData(class UKSPersistentPlayerData* LHS, class UKSPersistentPlayerData* RHS);
	void ApplyPlayerDataChildWidgets(TArray<class UKSPersistentPlayerData*> OrderedData);
};

// Class KillstreakUINew.KSViewedActiveWeaponWidget
// 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
class UKSViewedActiveWeaponWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData_W2YV[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1933);
		return ptr;
	}



};

// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// 0x0118 (FullSize[0x0648] - InheritedSize[0x0530])
class UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      PendingAmmoWidgetClass[0x28];                              // 0x0530(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UClass*                                      LoadedAmmoWidgetClass;                                     // 0x0558(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G3OK[0xE8];                                    // 0x0560(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1934);
		return ptr;
	}



	void SetActiveAmmoWidget(class UClass* NewWidgetClass, class AKSWeapon* NewWeapon);
	class UKSAmmoWidget* GetActiveAmmoWidget();
	void ClearActiveAmmoWidget();
};

// Class KillstreakUINew.KSPlayerAwardsPanelWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSPlayerAwardsPanelWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1935);
		return ptr;
	}



	void GetSortedRecentlyProgressedData(TArray<struct FPlayerAwardsPanelData> AwardData, TArray<struct FPlayerAwardsPanelData>* RecentlyProgressedData);
	void GetActivityAwardData(TArray<struct FPlayerAwardsPanelData>* AwardData);
};

// Class KillstreakUINew.KSPlayerCardModuleBase
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSPlayerCardModuleBase : public UKSWidget
{
public:
	class UPUMG_PlayerInfo*                            AssignedPlayerInfo;                                        // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_225R[0x8];                                     // 0x0520(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1936);
		return ptr;
	}



	void View_SetPlayer(class UPUMG_PlayerInfo* playerinfo, Killstreak_EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending);
	void OnPlayerUpdate(class UPUMG_PlayerInfo* playerinfo, Killstreak_EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending);
	void HandlePlayerDataUpdated(class UPUMG_PlayerInfo* playerinfo);
};

// Class KillstreakUINew.KSPlayerCosmeticWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSPlayerCosmeticWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1937);
		return ptr;
	}



	void GetItemsForSlot(Killstreak_EPlayerAccountSlot SlotType);
};

// Class KillstreakUINew.KSPlayerDataFactory
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UKSPlayerDataFactory : public UPUMG_PlayerDataFactory
{
public:
	class UKSPlayerStatsManager*                       PlayerStatsManager;                                        // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnPlayerLevelChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1938);
		return ptr;
	}



	bool ShouldDisplayRankedLevel();
	void HandlePlayerRankIncremented(class UKSActivityInstance* ActivityInstance, int Count);
	void HandlePlayerRankChanged(class UKSActivityInstance* Activity, int Tier, int Count);
	void HandlePlayerLevelIncremented(class UKSActivityInstance* ActivityInstance, int Count);
	void HandlePlayerLevelChanged(class UKSActivityInstance* Activity, int Tier, int Count);
	int GetRankedLevel();
	float GetPlayerLevelPercent();
	int GetPlayerLevel();
	int GetPlayerId();
	class UKSCurrency* GetCurrencyItemByItemId(int CurrencyItemId);
	int GetCurrencyCountByItemId(int CurrencyItemId);
};

// Class KillstreakUINew.KSPlayerHealthSegmentBase
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSPlayerHealthSegmentBase : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1939);
		return ptr;
	}



	void View_SetResidualValue(float PercentValue);
	void View_SetResidualColor(const struct FLinearColor& Color);
	void View_SetMainValue(float PercentValue, bool bCanTriggerPulse);
	void View_SetMainColor(const struct FLinearColor& Color);
	void View_PlayEmptiedPulse();
	void View_PlayDamagePulse(const struct FLinearColor& PeakColor, const struct FLinearColor& BaseColor);
};

// Class KillstreakUINew.KSViewedTargetHealthWidget
// 0x0010 (FullSize[0x0568] - InheritedSize[0x0558])
class UKSViewedTargetHealthWidget : public UKSHealthWidget
{
public:
	unsigned char                                      UnknownData_OR9N[0x10];                                    // 0x0558(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1940);
		return ptr;
	}



};

// Class KillstreakUINew.KSPlayerHealthWidgetBase
// 0x0030 (FullSize[0x0598] - InheritedSize[0x0568])
class UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget
{
public:
	struct FPlayerHealthMeterState                     CurrentHealthMeterState;                                   // 0x0568(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4O1[0x18];                                    // 0x0580(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1941);
		return ptr;
	}



	void View_SetResidualPercent(float ResidualPercent);
	void View_SetResidualMode(bool IsHealing);
	void View_SetResidualAlpha(float ResidualAlpha);
	void View_SetHealthTextValue(float HealthValue, float OverhealValue);
	void View_SetHealthPercent(float HealthPercent);
	void View_SetHealthMode(bool IsDowned, bool IsOverhealed);
	void View_PlayDamagePulse();
	void View_OnDeathStateChanged();
	void OnJobChanged(class UKSJobItem* Job);
	void OnHealthMeterStateChanged();
	void OnHealthDecreased();
	void HandlePlayerDownedChanged(class AKSPlayerState* pKSPlayerState);
	void HandleJobChanged();
	void HandleDeathStateChanged();
};

// Class KillstreakUINew.JobSelectionEntryDetails
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UJobSelectionEntryDetails : public UObject
{
public:
	struct FJobSelectionEntry                          JobEntry;                                                  // 0x0028(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowIfUnowned;                                            // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63EG[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1942);
		return ptr;
	}



	bool IsSelf();
	bool IsOwned();
	struct FText GetJobName();
	class UKSJobItem* GetJobItem();
};

// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// 0x0050 (FullSize[0x0568] - InheritedSize[0x0518])
class UKSPlayerJobSelectWidgetBase : public UKSWidget
{
public:
	class UKSJobSelectionManager*                      JobSelectionManager;                                       // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSJobSelectionComponent*                    JobSelectionComponent;                                     // 0x0520(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UJobSelectionEntryDetails*>           JobDetailEntries;                                          // 0x0528(0x0010) (BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EPlayerSelectionState              CurrentPlayerSelectionState;                               // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6WFO[0x7];                                     // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UJobSelectionEntryDetails*>           EnemyJobDetailsEntries;                                    // 0x0540(0x0010) (BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UKSJobSelectionComponent>     BoundEnemyJobSelectionComponent;                           // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UKSJobSelectionComponent>     BoundLocalJobSelectionComponent;                           // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TLY[0x8];                                     // 0x0560(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1943);
		return ptr;
	}



	bool UIX_RequestJobSelect(class UJobSelectionEntryDetails* JobEntry, Killstreak_EJobSelectionState RequestedState);
	void OnResetSelection();
	void OnPlayerSelectionStateChanged(KillstreakUINew_EPlayerSelectionState NewState);
	void OnJobEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam);
	void OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam);
	void HandleTeamAddedToMatch(class AKSTeamState* NewTeam);
	void HandleNewJobSelectionComponent(class UKSJobSelectionComponent* NewJobSelectionComponent);
	void HandleJobSelectionManagerReady(class UKSJobSelectionManager* JobSelectionManager);
	void HandleJobSelectionInitialized();
	void HandleJobEntryStateChangedForEnemies(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryStateChanged(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAddedForEnemies(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAdded(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAcknowledge(int ItemId, bool bSuccess, Killstreak_EJobSelectionState RequestState);
	class UKSJobSelectionComponent* GetJobSelectionComponent();
	class UKSJobItem* GetJobItemById(int JobItemId);
	void BindListenersForTeam(class AKSTeamState* Team);
};

// Class KillstreakUINew.KSPlayerQueryDataFactory
// 0x0118 (FullSize[0x0150] - InheritedSize[0x0038])
class UKSPlayerQueryDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData_MVIF[0x100];                                   // 0x0038(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CheckTimerHandle;                                          // 0x0138(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I0BR[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1944);
		return ptr;
	}



	bool QueryPlayersByNameWithProfiles(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	bool QueryPlayersByName(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	void OnTimeoutCheck();
	struct FText GetQueriedName(const struct FKSPlayerQueryHandle& InHandle);
	struct FText STATIC_GetPlayerQueryErrorMessage(KillstreakUINew_EKSPlayerQueryError Error);
	void CancelQuery(struct FKSPlayerQueryHandle* InHandle);
};

// Class KillstreakUINew.KSPlayerShopWidgetBase
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSPlayerShopWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData_ER2N[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerShop*                               PlayerShop;                                                // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXCA[0x8];                                     // 0x0528(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1945);
		return ptr;
	}



	void TriggerDisplayUpdate(bool ForceUpdate);
	void ShopItemChanged(const struct FShopItem& ChangedItem);
	void SetShopState(bool IsOpen);
	void SetShopContent();
	void SetPromptShow(bool ShouldShowPrompt);
	void SetCashValue(int CashValue);
	void PurchaseAcknowledge(Killstreak_EShopItemType ShopItemType);
	bool IsShopOfferingMastered(class UKSItem* KSItem);
	void HandleTeamsFlipped();
	void HandleShopOpened(class AKSPlayerShop* KSPlayerShop);
	void HandleShopOfferingsChanged(Killstreak_EShopItemType ShopItemType, TArray<struct FPrimaryOffering> Offerings);
	void HandleShopItemChanged(const struct FShopItem& ChangedItem);
	void HandleShopClosed(class AKSPlayerShop* KSPlayerShop);
	void HandleShopAvailabilityChanged(class AKSPlayerShop* KSPlayerShop);
	void HandlePurchaseAcknowledged(Killstreak_EShopItemType ShopItemType, bool bSuccess);
	void HandleCashChanged(int cash, int Delta);
	void CheckForValidPlayerState();
};

// Class KillstreakUINew.KSPlayerWhoDataFactory
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UKSPlayerWhoDataFactory : public UPUMG_PlayerWhoDataFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1946);
		return ptr;
	}



	void ClearSearchResults();
};

// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// 0x0078 (FullSize[0x0390] - InheritedSize[0x0318])
class UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData_5W74[0x78];                                    // 0x0318(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1947);
		return ptr;
	}



	void ViewShowTeamCelebration(class AKSTeamState* TeamState);
	void ViewSetCaptureProgress(float ProgressPercent);
	void ViewApplyTimerValue(float TimerSeconds);
	void ViewApplyTimerPrioritiesChanged();
	void ViewApplyObjectiveProgress(float TimerSeconds, float TotalTimerSeconds);
	bool ShouldHideObjectiveIcon();
	void SetView(const struct FKSPointObjectiveMarkerViewState& ViewState);
	void SetTeamColorsForState(TMap<KillstreakUINew_EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors);
	bool SetTeamColorForState(KillstreakUINew_EPointObjectiveMarkerTeamState ObjectiveState, const struct FLinearColor& StateColor);
	void SetMarkerTimerType(Killstreak_EGameTimerType NewMarkerTimerType);
	bool IsInTimerState();
	bool IsInProgressState();
	bool IsInMatchTimerState();
	bool IsInLockedState();
	bool IsInCountdownState();
	bool IsInContestedState();
	bool IsInCapturedState();
	void HandleTeamCelebration(class AKSTeamState* TeamState);
	void HandlePhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void HandleObjectiveUnregistered();
	void HandleObjectiveStateChanged();
	void HandleMarkerTimerPrioritiesChanged();
	Killstreak_EKSPriority GetMarkerTimerPriority();
	struct FKSPointObjectiveMarkerViewState GetCurrentViewState();
	void GetAssociatedPOI();
	void GetAssociatedObjective();
	bool DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam);
};

// Class KillstreakUINew.KSPortalOffersWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSPortalOffersWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1948);
		return ptr;
	}



	TArray<class UPUMG_StoreItem*> GetPortalOfferItems();
	class UKSStoreItemHelper* GetItemHelper();
};

// Class KillstreakUINew.KSProfileRogueStatsWidget
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSProfileRogueStatsWidget : public UKSWidget
{
public:
	TArray<class UClass*>                              DisplayedPlayerStats;                                      // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              DisplayedRogueStats;                                       // 0x0528(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1949);
		return ptr;
	}



	TArray<int64_t> GetActiveJobIds();
};

// Class KillstreakUINew.KSProgressionTallyWidget
// 0x0170 (FullSize[0x0688] - InheritedSize[0x0518])
class UKSProgressionTallyWidget : public UKSWidget
{
public:
	struct FPlayerProgression                          PlayerProgressionData;                                     // 0x0518(0x0170) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1950);
		return ptr;
	}



	void SetPlayerProgressionData(const struct FPlayerProgression& PlayerProgression);
	void GetPlayerProgressionBreakdown(int* BaseXP, int* EventBonusXP, int* WinBonusXP, int* BackfillBonusXP, int* MiscGainedXP);
	struct FProgressionTallyMiscXPInfo GetMiscXPInfo();
};

// Class KillstreakUINew.KSProgressMeterWidgetBase
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSProgressMeterWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData_PQE5[0x20];                                    // 0x0518(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1951);
		return ptr;
	}



	void SetDeltaAnimationParams(float BasePercent, float DeltaPercent, float AnimTime);
	void PlayDeltaAnimation(float StartDelay);
	void OnDeltaAnimationTicked();
	void OnDeltaAnimationStarted();
	void OnDeltaAnimationFinished(bool bLevelChange);
	bool IsPlayingDeltaAnimation();
	void EnableDeltaAnimation();
	void ApplyMeterPercentages_Raw(float BasePercent, float DeltaPercent);
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent);
};

// Class KillstreakUINew.KSPurchaseData
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UKSPurchaseData : public UObject
{
public:
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchaseQuantity;                                          // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQMT[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    PurchaseCompletedCallback;                                 // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1952);
		return ptr;
	}



};

// Class KillstreakUINew.KSStoreItemWithPurchaseData
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UKSStoreItemWithPurchaseData : public UKSPurchaseData
{
public:
	class UKSEquipOnAcquisitionData*                   EquipOnPurchase;                                           // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1953);
		return ptr;
	}



};

// Class KillstreakUINew.KSStoreItemWithWeaponData
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UKSStoreItemWithWeaponData : public UKSPurchaseData
{
public:
	class UKSWeaponAsset*                              AssociatedWeaponAsset;                                     // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1954);
		return ptr;
	}



};

// Class KillstreakUINew.KSPurchaseConfirmationWidget
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSPurchaseConfirmationWidget : public UKSWidget
{
public:
	class UPUMG_StoreItem*                             PurchaseItem;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PurchaseQuantity;                                          // 0x0520(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G4X5[0x4];                                     // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSPurchaseData*                             PurchaseRequestData;                                       // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1955);
		return ptr;
	}



	bool TryChangePurchaseQuantity(int QuantityChangeAmount);
	bool SubmitPurchaseWithAdditionalCurrency();
	void SetupEquipOnPurchase(class UKSEquipOnAcquisitionData* EquipOnPurchaseData);
	void PromptAlreadyPurchasing();
	void OnPurchaseComplete(bool bCompletedPurchase);
	class UKSStoreItemHelper* GetStoreItemHelper();
	class UKSStoreItemWithPurchaseData* GetAdditionalCurrencyPurchaseData();
	bool CanChangePurchaseQuantity(int QuantityChangeAmount);
};

// Class KillstreakUINew.KSPurchaseModal
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSPurchaseModal : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1956);
		return ptr;
	}



	void SetupBindings();
	void HandleShowPurchaseModal(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price);
	class UPUMG_StoreItemHelper* GetStoreItemHelper();
};

// Class KillstreakUINew.KSQueueDataFactory
// 0x0098 (FullSize[0x02A8] - InheritedSize[0x0210])
class UKSQueueDataFactory : public UPUMG_QueueDataFactory
{
public:
	unsigned char                                      UnknownData_J4YF[0x10];                                    // 0x0210(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSetQueueId;                                              // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueueErrorRelevantStateChanged;                          // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                ChunksInstallingQueueId;                                   // 0x0240(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultQueueId;                                            // 0x0244(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetQueueInputState;                                      // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TArray<int64_t>                                    PreviousCustomMatchMemberIds;                              // 0x0258(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SelectedQueueId;                                           // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeoutForSwitchFromShelteredToMainQueue;                  // 0x026C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWaitingOnLeaveForShelteredSwitch;                         // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWaitingOnJoinForShelteredSwitch;                          // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CDRY[0x2];                                     // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxRetriesForAlternateQueue;                               // 0x0274(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeBetweenRetriesForAlternateQueue;                       // 0x0278(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R502[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumRetriesForAlternateQueue;                               // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8U83[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapDetail>                          MapInfos;                                                  // 0x0288(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  QueueDetailDataTable;                                      // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CGXW[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1957);
		return ptr;
	}



	TArray<struct FClientQueueInfo> SortQueues(TArray<struct FClientQueueInfo> ClientCachedQueueInfo, bool IsAlphanumerical);
	bool SetSelectedQueueId(int QueueId);
	void SetPreviousCustomMatchMemberIds(TArray<int64_t> PreviousMembers);
	void RetryJoinAlternateQueue(int QueueId);
	bool QualifiesForShelteredMM(int QueueId, const struct FClientQueueInfo& QueueInfo, bool* RetryFlag);
	bool QualifiesForMercyMatch(int QueueId, const struct FClientQueueInfo& QueueInfo, bool* RetryFlag);
	bool QualifiesForForcedBots(int QueueId, const struct FClientQueueInfo& QueueInfo, bool* RetryFlag);
	void PopulateMapInfos();
	void OnPartyMemberUpdate(const struct FPUMG_PartyMemberData& Member);
	void OnPartyMemberEvent(int64_t PlayerId);
	void OnPartyEvent();
	void OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	bool JoinSelectedQueue();
	bool IsTutorialQueue(int QueueId);
	bool IsRankedQueue(int QueueId);
	bool IsQueueAvailableOnPlatform(const struct FPUMG_ClientQueueInfo& QueueInfo);
	bool IsCustomSpectateEnabled();
	void HandleShelteredMMTimeout(int QueueId);
	void HandleShelteredMMSwitchFinish(bool bSendNotify, bool bClearTimer);
	void HandleShelteredMMQueueSwitch(int QueueId);
	int GetSelectedShelteredQueueId();
	int GetSelectedQueueId();
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* InClientQueueInfo);
	int GetPenaltyTime();
	class UKSActivity* GetMercyMatchConsecutiveLossesActivity();
	class UKSActivity* GetMatchesPlayedActivity();
	bool GetMapRotationsByQueueId(int QueueId, TArray<int>* MapIds);
	bool GetMapInfoById(int MapId, struct FMapDetail* MapDetail);
	TArray<struct FClientQueueInfo> GetCustomQueues();
	bool GetCurrentCustomMatchInfo(struct FClientQueueInfo* InClientQueueInfo);
	bool STATIC_FormatQueueJoinErrorMessage(const struct FClientQueueInfo& Queue, KillstreakUINew_EKSQueueJoinError Error, struct FText* OutErrorMessage);
	KillstreakUINew_EKSQueueJoinError CheckQueueJoinableById(int QueueId);
	KillstreakUINew_EKSQueueJoinError CheckQueueJoinable(const struct FClientQueueInfo& Queue);
};

// Class KillstreakUINew.KSQueuedMessageWidget
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSQueuedMessageWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData_08CU[0x18];                                    // 0x0518(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1958);
		return ptr;
	}



	void QueueMessage(const struct FText& Message);
	bool GetNextMessage(struct FText* Message);
};

// Class KillstreakUINew.KSQueueWidgetBase
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSQueueWidgetBase : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1959);
		return ptr;
	}



	void UpdateQueueSelection();
	void UpdateQueuePermissions();
	bool UIX_AttemptRejoinMatch();
	bool UIX_AttemptLeaveMatch();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetCurrentlySelectedQueue(int QueueId);
	void ReceiveMatchStatusUpdate(PlatformUMG_EPUMG_MatchStatus CurrentMatchStatus);
	void OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue);
	void OnQueueStateUpdate(PlatformUMG_EPUMG_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionUpdate(bool CanQueue);
	void OnControlQueuePermissionUpdate(bool CanControl);
	bool IsValidQueue(int QueueId);
	void HandleSelectedQueueIdSet();
	void HandlePartyMemberRemoved(int64_t PartyMemberId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	void HandleMatchStatusUpdate(PlatformUMG_EPUMG_MatchStatus MatchStatus);
	void HandleConfirmLeaveQueue();
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	void GetQueuePermissions(bool* CanControl, bool* CanQueue);
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
};

// Class KillstreakUINew.KSQueueTimerWidgetBase
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSQueueTimerWidgetBase : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData_4BP7[0x10];                                    // 0x0518(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1960);
		return ptr;
	}



	void OnUpdateQueueTimerState(KillstreakUINew_EQueueTimerState State);
	void OnUpdateQueueTime(float TimeSecs);
	float GetQueueTime_TotalSecs();
	int GetQueueTime_PartSecs();
	int GetQueueTime_PartMins();
	int GetQueueTime_PartHours();
	KillstreakUINew_EQueueTimerState GetCurrentTimerState();
};

// Class KillstreakUINew.KSQuickPlay
// 0x0100 (FullSize[0x0618] - InheritedSize[0x0518])
class UKSQuickPlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedQueueChanged;                                    // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               CanCurrentlyJoinQueue;                                     // 0x0528(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanControlQueue;                                           // 0x0529(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EOC[0x2];                                     // 0x052A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DefaultSelectedQueueId;                                    // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ChunksInstallingQueueId;                                   // 0x0530(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HDFA[0x14];                                    // 0x0534(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ReadyForQueueing;                                          // 0x0548(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4NDL[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClientQueueInfo                            CurrentSelectedQueue;                                      // 0x0550(0x00C8) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1961);
		return ptr;
	}



	void UpdateQueuePermissions();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	TArray<struct FQueueSection> SortQueueSections(TArray<struct FQueueSection> QueueSections);
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetDefaultSelectedQueue(struct FClientQueueInfo* NewSelectedQueue);
	bool SetCurrentlySelectedQueue(int QueueId);
	void ReceiveMatchStatusUpdate(PlatformUMG_EPUMG_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionChanged(bool CanQueue);
	void OnControlQueuePermissionChanged(bool CanControl);
	bool IsValidQueue(int QueueId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	KillstreakUINew_EQueueType GetQueueTypeFromName(const struct FName& QueueType);
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	int GetDefaultSelectedQueueId();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
	bool CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo);
	bool CheckForCustomQueues(TArray<struct FClientQueueInfo>* CustomMatchQueueInfo);
};

// Class KillstreakUINew.KSQuickPlayWidget
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSQuickPlayWidget : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData_2K9H[0x18];                                    // 0x0518(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1962);
		return ptr;
	}



	void UpdateState();
	void SetIsPendingQueueUpdate(bool IsPending);
	void OnUpdateQuickPlayState(KillstreakUINew_EQuickPlayQueueState QueueState);
	void OnUpdateQuickPlayCanPlay(bool CanPlay);
	void OnUpdateQueueTimeElapsed(float TimeElapsed);
	void OnUpdatePenaltyTimeLeft(int TimeLeft);
	bool IsPendingQueueUpdate();
	void HandleOnPlayerProgressInitialized(class UKSActivityInstance* ActivityInstance, int Count);
	KillstreakUINew_EQuickPlayQueueState GetSelectedQueueState();
	bool GetGameModeDisplayName(struct FText* GameModeDisplayName);
	KillstreakUINew_EQuickPlayQueueState GetCurrentQuickPlayState();
};

// Class KillstreakUINew.KSRadialSelectionWidgetBase
// 0x00B0 (FullSize[0x05C8] - InheritedSize[0x0518])
class UKSRadialSelectionWidgetBase : public UKSWidget
{
public:
	TArray<struct FGameplayTag>                        EmoteSlots;                                                // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        QuipSlots;                                                 // 0x0528(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        CommunicationSlots;                                        // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        SpraySlots;                                                // 0x0548(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               AdditionalInputsToDisableOnOpen;                           // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<Killstreak_EMercCosmeticSlot>               RadialMenuCosmeticSlots;                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCycleBetweenMenusEnabled;                                 // 0x0578(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SW98[0x8];                                     // 0x0579(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Killstreak_ERadialWheelActivationMode              RadialWheelActivationMode;                                 // 0x0581(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LSLL[0x36];                                    // 0x0582(0x0036) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1963);
		return ptr;
	}



	void UpdateLastSelectedIndex(int NewIndex);
	void UpdateLastHoveredIndex(int NewHoveredIndex);
	void TraceSelectionCursor(float Radius, float Angle);
	void ShowSelector();
	void SetupForRadialWheelMode();
	void RadialOptionUnhover();
	void RadialOptionSelected(int Index);
	void RadialOptionHovered(int Index);
	void OpenSpecifiedRadialMenu(Killstreak_EMercCosmeticSlot CosmeticSlot);
	void OnRadialMenuUseLastSelection(Killstreak_EMercCosmeticSlot ButtonCosmeticSlot);
	void OnRadialMenuReleased(Killstreak_EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold);
	void OnRadialMenuPressed(Killstreak_EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold);
	void OnRadialMenuForceClosed();
	void OnCycleMenusRight();
	void OnCycleMenusLeft();
	void OnCycledMenus(bool bCycledRight);
	void OnCinematicSubLevelEnabled(const struct FString& CinematicSubLevelName);
	void OnCinematicSubLevelDisabled(const struct FString& CinematicSubLevelName);
	bool IsSelectorVisible();
	bool IsSelectorActive();
	bool IsLobbyHUD();
	bool IsInFullControlMode();
	bool IsInEmoteOnlyMode();
	bool IsCycleBetweenMenusEnabled();
	void InitializeTracking();
	void HideSelector();
	void HandleOnShowPopup();
	void HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> NewInputState);
	float GetWheelSize();
	Killstreak_ERadialWheelActivationMode GetRadialWheelActivationMode();
	bool GetPingIconByType(Killstreak_EPingType PingType);
	bool GetPingIconByMessage(Killstreak_EPingMessage PingMessage);
	bool GetPingColorByType(Killstreak_EPingType PingType, struct FLinearColor* PingColor);
	int GetOptionsCount();
	int GetLastSelectedIndexForCosmeticSlot(Killstreak_EMercCosmeticSlot CosmeticSlot);
	int GetLastHoveredIndex();
	Killstreak_EMercCosmeticSlot GetInitialRadialMenu();
	TArray<struct FGameplayTag> GetGameplayTagsForCosmeticSlot(Killstreak_EMercCosmeticSlot CosmeticSlot);
	float GetDeadZone();
	Killstreak_EMercCosmeticSlot GetContiguousCosmeticSlotMenu(bool bRightSide);
	Killstreak_EMercCosmeticSlot GetActiveCosmeticSlotMenu();
	bool FindRowByType(Killstreak_EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(Killstreak_EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void DummyFunction();
	void ChangeToNewRadialMenu();
	void ButtonClicked();
	void BackPressed();
	bool ActivateRadialMenuItem(int Index, class AKSPlayerController* PlayerController);
};

// Class KillstreakUINew.KSRankChangeWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSRankChangeWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1964);
		return ptr;
	}



	struct FPlayerProgression FormatProgressionData(const struct FPlayerProgression& ProgressionData);
};

// Class KillstreakUINew.KSRankedUnlockedViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSRankedUnlockedViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1965);
		return ptr;
	}



};

// Class KillstreakUINew.KSRedeemCodeScreenBase
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSRedeemCodeScreenBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData_S43Q[0x18];                                    // 0x0518(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1966);
		return ptr;
	}



	void RedeemCode(const struct FString& Code);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool Success, const struct FText& Error);
	bool IsPendingServerReply();
};

// Class KillstreakUINew.KSRegionSelectModalViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSRegionSelectModalViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1967);
		return ptr;
	}



};

// Class KillstreakUINew.KSRegionSelectModal
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSRegionSelectModal : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1968);
		return ptr;
	}



};

// Class KillstreakUINew.KSRelatedRogueEntry
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSRelatedRogueEntry : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1969);
		return ptr;
	}



	void DisplayLocked(bool bLocked);
	void DisplayJob(class UKSJobItem* JobItem);
};

// Class KillstreakUINew.KSRelatedRoguesGroup
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSRelatedRoguesGroup : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1970);
		return ptr;
	}



	void PopulateForWeaponOwnership(class UKSWeaponAsset* WeaponAsset);
	void PopulateForWeaponCategoryByWeapon(class UKSWeaponAsset* WeaponAsset);
	void PopulateForWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void PopulateForWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	TArray<class UKSRelatedRogueEntry*> GetEntries();
	void DisplayWeaponCategoryLabel();
	void DisplayNone();
	void DisplayIndividualWeaponLabel();
	class UKSRelatedRogueEntry* CreateAndAddEntry();
	void ClearEntries();
};

// Class KillstreakUINew.KSReticleWidgetBase
// 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
class UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget
{
public:
	float                                              ShrinkAnimationTime;                                       // 0x0530(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMaxScale;                                   // 0x0534(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMinScale;                                   // 0x0538(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlockedShotMinScaleSqDist;                                 // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bGrenadeCooking;                                           // 0x0540(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInADS;                                                    // 0x0541(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCachedBlockIconVisible;                                   // 0x0542(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1WC9[0x1];                                     // 0x0543(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CachedWeaponAccuracy;                                      // 0x0544(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CachedReticleOffset;                                       // 0x0548(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FIFQ[0x4];                                     // 0x054C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1971);
		return ptr;
	}



	void UpdateReticleOffset(float OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void CalculateReticleOffset(float DeltaTime);
	void CalculateBlockedShotIcon();
};

// Class KillstreakUINew.KSRewardsTrackMeterSegmentBase
// 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
class UKSRewardsTrackMeterSegmentBase : public UKSProgressMeterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1972);
		return ptr;
	}



	void UpdateFromRewardTier(const struct FActivityTier& ActivityTier, int ActivityCount);
	struct FLinearColor GetStandardBackgroundColor();
	struct FLinearColor GetPremiumBackgroundColor();
	struct FLinearColor GetBattlePassPremiumColor();
	struct FLinearColor GetBattlePassFreeColor();
	void ApplySegmentProgress(float ProgressPercent);
	void ApplySegmentMeterColor(const struct FLinearColor& MeterColor);
	void ApplySegmentLabel(const struct FText& LabelText);
	void ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor);
};

// Class KillstreakUINew.KSRewardsTrackWidgetBase
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSRewardsTrackWidgetBase : public UKSWidget
{
public:
	int                                                MaxPageCount;                                              // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentPage;                                               // 0x051C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UKSWidget*>                           ItemButtons;                                               // 0x0520(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSAcquisition*                              Acquisition;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1973);
		return ptr;
	}



	void UpdateMaxPageCount(int RewardCount);
	void SetCurrentPageFromIndex(int Index);
};

// Class KillstreakUINew.KSRogueDetailsWidget
// 0x00B0 (FullSize[0x05C8] - InheritedSize[0x0518])
class UKSRogueDetailsWidget : public UKSWidget
{
public:
	class UKSWeaponHubHelper*                          WeaponHubHelper;                                           // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G20[0x40];                                    // 0x0520(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RogueDetailsScreen;                                        // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      ViewedJobItem[0x28];                                       // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ContextBar[0x28];                                          // 0x0590(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      GuidedMenuCalloutRedirectorClass;                          // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGuidedMenuCalloutsViewRedirector*           GuidedMenuCalloutRedirector;                               // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1974);
		return ptr;
	}



	void ShowGuidedCallout(const struct FName& CalloutName);
	void SetCurrentTabSelectable(bool bIsSelectable);
	void OnCurrentJobChanged(class UKSJobItem* JobItem, bool bFromShowEvent);
	void OnBackButtonPressed();
	class UPUMG_StoreItem* GetStoreItemForJob(class UKSJobItem* JobItem);
	class UKSStoreItemHelper* GetItemHelper();
	void CycleJob(bool bForward);
};

// Class KillstreakUINew.KSRogueMasteryWidget
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSRogueMasteryWidget : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1975);
		return ptr;
	}



	void GetSectionData(class UKSActivityInstance* ActivityInstance, TArray<struct FMasterySectionData>* SectionData);
	void GetMasteryRewardsForTier(const struct FActivityTier& Tier, TArray<struct FMasteryRewardData>* Rewards);
};

// Class KillstreakUINew.KSScreenLogWidget
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSScreenLogWidget : public UKSWidget
{
public:
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1976);
		return ptr;
	}



};

// Class KillstreakUINew.KSScreenMarkerWidgetBase
// 0x0010 (FullSize[0x0328] - InheritedSize[0x0318])
class UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase
{
public:
	bool                                               bHideWhenOffscreen;                                        // 0x0318(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X0QZ[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   OffscreenMargins;                                          // 0x031C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5E62[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1977);
		return ptr;
	}



};

// Class KillstreakUINew.KSScrollBox
// 0x0000 (FullSize[0x0888] - InheritedSize[0x0888])
class UKSScrollBox : public UScrollBox
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1979);
		return ptr;
	}



	float GetViewFraction();
};

// Class KillstreakUINew.KSSettingsContainer
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSSettingsContainer : public UKSWidget
{
public:
	TArray<class UKSSettingsWidget*>                   SettingsWidgets;                                           // 0x0518(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsPreview*                          AssociatePreviewWidget;                                    // 0x0528(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsContainerConfigAsset*             ContainerConfigAsset;                                      // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1980);
		return ptr;
	}



	void OnShowSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnHideSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnContainerConfigSet();
	struct FText GetWidgetContainerTitle();
	class UKSSettingsPreview* GetWidgetContainerPreview();
	struct FText GetWidgetContainerDescription();
	TArray<class UKSSettingsWidget*> GetSettingsWidgets();
	void AddSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void AddPreviewWidget(class UKSSettingsPreview* PreviewWidget);
};

// Class KillstreakUINew.KSSettingsColorOptionsAsset
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UKSSettingsColorOptionsAsset : public UDataAsset
{
public:
	TArray<struct FColorOptions>                       ColorOptions;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1981);
		return ptr;
	}



};

// Class KillstreakUINew.KSSettingsContainerConfigAsset
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UKSSettingsContainerConfigAsset : public UDataAsset
{
public:
	bool                                               bIsAvailableOffline;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequires120HzDisplay;                                     // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSAllowedPlatformTypes                     AllowedPlatformTypes;                                      // 0x0032(0x000A) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSRequiredInputTypes                       RequiredInputTypes;                                        // 0x003C(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OL4[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RequiredExperiment;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSSwitchDockedModeSetting                  SwitchDockedModeSetting;                                   // 0x0050(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUsePreview;                                               // 0x0052(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPI1[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PreviewWidget;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSSettingsWidgetConfig>             WidgetConfigs;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SettingName;                                               // 0x0070(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 SettingNameByPlatform;                                     // 0x0088(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SettingDescription;                                        // 0x00D8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 SettingDescriptionByPlatform;                              // 0x00F0(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1982);
		return ptr;
	}



	struct FText GetSettingName();
	struct FText GetSettingDescription();
};

// Class KillstreakUINew.KSSettingsSectionConfigAsset
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UKSSettingsSectionConfigAsset : public UDataAsset
{
public:
	TArray<struct FKSSettingsGroupConfig>              SettingsGroups;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Heading;                                                   // 0x0040(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                         // 0x0058(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1983);
		return ptr;
	}



	struct FText GetHeading();
};

// Class KillstreakUINew.KSSettingsPageConfigAsset
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UKSSettingsPageConfigAsset : public UDataAsset
{
public:
	TArray<class UKSSettingsSectionConfigAsset*>       SettingsSectionConfigs;                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       PageName;                                                  // 0x0040(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                         // 0x0058(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1984);
		return ptr;
	}



	struct FText GetPageName();
};

// Class KillstreakUINew.KSSettingsMenuConfigAsset
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UKSSettingsMenuConfigAsset : public UDataAsset
{
public:
	TArray<class UKSSettingsPageConfigAsset*>          SettingsPageConfigs;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1985);
		return ptr;
	}



};

// Class KillstreakUINew.KSSettingsDataFactory
// 0x02D8 (FullSize[0x03B0] - InheritedSize[0x00D8])
class UKSSettingsDataFactory : public UPUMG_SettingsDataFactory
{
public:
	unsigned char                                      UnknownData_YRW9[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSettingsReceivedFromPlayerAccount;                       // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZ20[0xA0];                                    // 0x00F0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKeyBindSettingsApplied;                                  // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeyBindSettingsSaved;                                    // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FKSSettingPropertyId>                BoolSettingPropertyIds;                                    // 0x01B0(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WDZF[0x50];                                    // 0x01C0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKSSettingPropertyId>                IntSettingPropertyIds;                                     // 0x0210(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K03N[0x50];                                    // 0x0220(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKSSettingPropertyId>                FloatSettingPropertyIds;                                   // 0x0270(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MSHP[0xB0];                                    // 0x0280(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      KSSettingsMenuConfigAssetSoftObjectPtr[0x28];              // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UKSSettingsMenuConfigAsset*                  KSSettingsMenuConfigAsset;                                 // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDKS[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDisplayLanguageApplied;                                  // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDisplayLanguageSaved;                                    // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenResolutionApplied;                                 // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenResolutionSaved;                                   // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1986);
		return ptr;
	}



	bool SetSelectedRegion(int SiteId);
	void SaveSettings();
	void SaveSettingAsInt(const struct FName& Name);
	void SaveSettingAsFloat(const struct FName& Name);
	void SaveSettingAsBool(const struct FName& Name);
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	void RevertScreenResolution();
	void RevertPlayerPreferences();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	bool IsUserLoggedIn();
	bool GetSettingAsInt_Legacy(const struct FName& Name, int* OutInt);
	bool GetSettingAsFloat_Legacy(const struct FName& Name, float* OutFloat);
	bool GetSettingAsBool_Legacy(const struct FName& Name, bool* OutBool);
	int GetSelectedRegion();
	struct FIntPoint GetScreenResolution();
	class UKSPlayerInput* GetKSPlayerInput();
	void GetDefaultKSInputActionKeys(const struct FName& Name, Killstreak_EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetDefaultInputAxisKeys(const struct FName& Name, Killstreak_EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys);
	void GetDefaultInputActionKeys(const struct FName& Name, Killstreak_EKSInputType InputType, TArray<struct FKey>* OutKeys);
	void GetCustomKSInputActionKeys(const struct FName& Name, Killstreak_EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetCustomInputAxisKeys(const struct FName& Name, Killstreak_EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys);
	void GetCustomInputActionKeys(const struct FName& Name, Killstreak_EKSInputType InputType, TArray<struct FKey>* OutKeys);
	struct FString GetCurrentLanguage();
	TArray<struct FString> GetAvailableLanguages();
	void BindSettingCallbacks_Legacy(const struct FName& Name, const struct FSettingDelegateStruct& SettingDelegateStruct);
	void ApplySettingAsInt(const struct FName& Name, int Value);
	void ApplySettingAsFloat(const struct FName& Name, float Value);
	void ApplySettingAsBool(const struct FName& Name, bool Value);
	void ApplyScreenResolution(const struct FIntPoint& ScreenResolution);
	void ApplyLanguage(const struct FString& LanguageCulture);
};

// Class KillstreakUINew.KSSettingsGroup
// 0x0030 (FullSize[0x0548] - InheritedSize[0x0518])
class UKSSettingsGroup : public UKSWidget
{
public:
	TArray<class UKSSettingsContainer*>                SettingsContainers;                                        // 0x0518(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SettingsContainerClass;                                    // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKSSettingsGroupConfig                      GroupConfig;                                               // 0x0530(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1987);
		return ptr;
	}



	void OnShowContainer(class UKSSettingsContainer* SettingsContainer);
	void OnHideContainer(class UKSSettingsContainer* SettingsContainer);
	void OnGroupConfigSet();
	TArray<class UKSSettingsContainer*> GetSettingsContainers();
	void AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
};

// Class KillstreakUINew.KSSettingsInfo_Binding
// 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
class UKSSettingsInfo_Binding : public UKSSettingsInfoBase
{
public:
	struct FKSKeyBindInfo                              PrimaryKeyBindInfo;                                        // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FKSKeyBindInfo                              GamepadKeyBindInfo;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1988);
		return ptr;
	}



	void OnSettingsReceivedFromPlayerAccount();
	void OnKeyBindingsSaved(const struct FName& Name);
	void OnKeyBindingsApplied(const struct FName& Name);
};

// Class KillstreakUINew.KSSettingsInfo_Brightness
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UKSSettingsInfo_Brightness : public UKSSettingsInfoBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1989);
		return ptr;
	}



	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};

// Class KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UKSSettingsInfo_ConsolePerformanceMode : public UKSSettingsInfoBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1990);
		return ptr;
	}



	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};

// Class KillstreakUINew.KSSettingsInfo_Generic
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class UKSSettingsInfo_Generic : public UKSSettingsInfoBase
{
public:
	KillstreakUINew_EKSSettingType                     KSSettingType;                                             // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BMI9[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JCRZ[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1991);
		return ptr;
	}



	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};

// Class KillstreakUINew.KSSettingsInfo_CrosshairColor
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UKSSettingsInfo_CrosshairColor : public UKSSettingsInfo_Generic
{
public:
	class UKSSettingsColorOptionsAsset*                ColorOptions;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1992);
		return ptr;
	}



};

// Class KillstreakUINew.KSSettingsInfo_GamepadIconSet
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UKSSettingsInfo_GamepadIconSet : public UKSSettingsInfoBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1993);
		return ptr;
	}



};

// Class KillstreakUINew.KSSettingsInfo_MuteAudio
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UKSSettingsInfo_MuteAudio : public UKSSettingsInfoBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1994);
		return ptr;
	}



};

// Class KillstreakUINew.KSSettingsInfo_Region
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UKSSettingsInfo_Region : public UKSSettingsInfoBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1995);
		return ptr;
	}



	void OnPreferredSiteUpdated();
};

// Class KillstreakUINew.KSSettingsInfo_Resolution
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class UKSSettingsInfo_Resolution : public UKSSettingsInfoBase
{
public:
	unsigned char                                      UnknownData_XEHM[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1996);
		return ptr;
	}



	void OnScreenResolutionSaved(const struct FIntPoint& SavedScreenResolution);
	void OnScreenResolutionApplied(const struct FIntPoint& AppliedScreenResolution);
};

// Class KillstreakUINew.KSSettingsMenu
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSSettingsMenu : public UKSWidget
{
public:
	struct FKSSettingsState                            SettingsState;                                             // 0x0518(0x0005) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N5NW[0x3];                                     // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSSettingsPage*>                     SettingsPages;                                             // 0x0520(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SettingsPageClass;                                         // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsMenuConfigAsset*                  MenuConfigAsset;                                           // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1997);
		return ptr;
	}



	void RevertSettings();
	void RebuildNavigation();
	void OnShowPage(class UKSSettingsPage* SettingsPage);
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage(class UKSSettingsPage* SettingsPage);
	void OnConfirmExit(bool ShouldSaveSettings);
	TArray<class UKSSettingsPage*> GetSettingsPages();
	void ConfirmRevertSettings();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget(class UKSSettingsPage* SettingsPage);
};

// Class KillstreakUINew.KSSettingsPage
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSSettingsPage : public UKSWidget
{
public:
	TArray<class UKSSettingsSection*>                  SettingsSections;                                          // 0x0518(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SettingsSectionClass;                                      // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsPageConfigAsset*                  PageConfigAsset;                                           // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1998);
		return ptr;
	}



	void OnShowSection(class UKSSettingsSection* SettingsSection);
	void OnPageConfigSet();
	void OnHideSection(class UKSSettingsSection* SettingsSection);
	TArray<class UKSSettingsSection*> GetSettingsSections();
	class UScrollBox* GetScrollBox();
	void AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection);
};

// Class KillstreakUINew.KSSettingsPreview
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSSettingsPreview : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPreviewValueChanged;                                     // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UKSSettingsInfoBase*                         SettingsInfo;                                              // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1999);
		return ptr;
	}



	void HandleOnValueChanged(bool ChangedExternally);
	void HandleOnPreviewValueChanged();
};

// Class KillstreakUINew.KSSettingsSection
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSSettingsSection : public UKSWidget
{
public:
	TArray<class UKSSettingsGroup*>                    SettingsGroups;                                            // 0x0518(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SettingsGroupClass;                                        // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsSectionConfigAsset*               SectionConfigAsset;                                        // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2000);
		return ptr;
	}



	void OnShowGroup(class UKSSettingsGroup* SettingsGroup);
	void OnSectionConfigSet();
	void OnHideGroup(class UKSSettingsGroup* SettingsGroup);
	TArray<class UKSSettingsGroup*> GetSettingsGroups();
	void AddSettingsGroupWidget(class UKSSettingsGroup* SettingsGroup);
};

// Class KillstreakUINew.KSSettingsWidget
// 0x0058 (FullSize[0x0570] - InheritedSize[0x0518])
class UKSSettingsWidget : public UKSWidget
{
public:
	struct FKSSettingsWidgetConfig                     WidgetConfig;                                              // 0x0518(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FText                                       WidgetContainerTitle;                                      // 0x0528(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       WidgetContainerDescription;                                // 0x0540(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bHasPreview;                                               // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7H8Q[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSSettingsPreview*                          WidgetContainerPreviewWidget;                              // 0x0560(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSSettingsInfoBase*                         SettingsInfo;                                              // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2001);
		return ptr;
	}



	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerPreviewSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached);
	bool IsSaved();
	bool IsApplied();
	bool HasPreview();
	bool CanGamepadNavigate();
	void ApplySetting();
};

// Class KillstreakUINew.KSShopItemButtonBase
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UKSShopItemButtonBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnShopSelection;                                           // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShopViewItemDetails;                                     // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemViewDetails;                                         // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	Killstreak_EShopItemType                           ActiveShopSlot;                                            // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4UVG[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2002);
		return ptr;
	}



	class UButton* GetHitTarget();
	void DisplayShopItem(const struct FShopItem& ShopItem, bool IsAffordable, bool IsToggleSlot, bool IsSwapDisplay);
	void ButtonUnhovered();
	void ButtonReleased();
	void ButtonPressed();
	void ButtonHovered();
	void ButtonClicked();
};

// Class KillstreakUINew.KSSideNavigationOverlay
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UKSSideNavigationOverlay : public UKSWidget
{
public:
	unsigned char                                      UnknownData_MGRK[0x10];                                    // 0x0518(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2003);
		return ptr;
	}



	void HandleNavigateRight();
	void HandleNavigateLeft();
	void DisplayRightPreviewText(const struct FText& PreviewText);
	void DisplayLeftPreviewText(const struct FText& PreviewText);
	void BroadcastNavigationAction(int SideDirection);
};

// Class KillstreakUINew.KSSocialPanelBase
// 0x0060 (FullSize[0x0578] - InheritedSize[0x0518])
class UKSSocialPanelBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataReady;                                               // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerCardClicked;                                       // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSocialHeaderClicked;                                     // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UTreeView*                                   TreeView;                                                  // 0x0548(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSSocialOverlay*                            DataSource;                                                // 0x0550(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4RIL[0x10];                                    // 0x0558(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                            // 0x0568(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2004);
		return ptr;
	}



	void UpdateListData();
	void SetupTreeView(class UTreeView* List);
	void SetDataSource(class UKSSocialOverlay* Source);
	void OnDataChange(TArray<KillstreakUINew_EKSSocialOverlaySection> Sections);
	class UTreeView* GetTreeView();
	void GetSubListFromData(class UObject* Source, TArray<class UObject*>* Out_List);
	class UKSSocialOverlay* GetDataSource();
};

// Class KillstreakUINew.KSSocialFriendsPanel
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class UKSSocialFriendsPanel : public UKSSocialPanelBase
{
public:
	TArray<class UKSDataSocialCategory*>               CategoryData;                                              // 0x0578(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKSSocialOverlay*                            Parent;                                                    // 0x0588(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2005);
		return ptr;
	}



};

// Class KillstreakUINew.KSSocialOverlay
// 0x00A0 (FullSize[0x05B8] - InheritedSize[0x0518])
class UKSSocialOverlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataChanged;                                             // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                            // 0x0528(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2ANJ[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TWeakObjectPtr<class UKSPlayerInfo>, KillstreakUINew_EKSSocialOverlaySection> PlayerCategoryMap;                                         // 0x0540(0x0050) (NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UKSPlayerInfo>>        PlayersToUpdate;                                           // 0x0590(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WCPH[0x8];                                     // 0x05A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSDataSocialPlayer*>                 UnusedEntries;                                             // 0x05A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2006);
		return ptr;
	}



	void RepopulateAll();
	void PlayTransition(class UWidgetAnimation* Animation, bool TransitionOut);
	void OnRecentlyPlayedChange(class UKSFriendDataFactory* Source);
	void HandleUpdatePlayers();
	TArray<class UKSDataSocialCategory*> GetData();
	class UKSDataSocialCategory* GetCategory(KillstreakUINew_EKSSocialOverlaySection Category);
	TArray<class UKSDataSocialCategory*> GetCategories(TArray<KillstreakUINew_EKSSocialOverlaySection> Categories);
};

// Class KillstreakUINew.KSSocialSearchPanel
// 0x0048 (FullSize[0x05C0] - InheritedSize[0x0578])
class UKSSocialSearchPanel : public UKSSocialPanelBase
{
public:
	struct FScriptMulticastDelegate                    OnOpen;                                                    // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OE6E[0x28];                                    // 0x0598(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2007);
		return ptr;
	}



	void OnSearchTimeout();
	void OnSearchStart(const struct FText& SearchTerm);
	void OnSearchComplete(const struct FText& SearchTerm, const struct FText& Error, TArray<class UKSDataSocialPlayer*> Results);
	void OnOverlayClosed();
	bool IsSearching();
	struct FText GetActiveSearchTerm();
	void DoSearch(const struct FText& SearchTerm);
};

// Class KillstreakUINew.KSSocialWidgetBase
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSSocialWidgetBase : public UKSWidget
{
public:
	class UKSPartyDataFactory*                         CachedPartyDataFactory;                                    // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2008);
		return ptr;
	}



	void SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends);
	void SearchPlayerName(const struct FString& PlayerName);
	void OnFriendRequestsUpdated();
	void HandleSearchByNameResultsUpdated();
	void HandlePartyDataUpdated();
	void HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData);
	void HandleFriendDataUpdated();
	TArray<class UPUMG_PlayerInfo*> GetSortedFriends();
	TArray<class UPUMG_PlayerInfo*> GetSearchResults();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	void ClearSearchResults();
};

// Class KillstreakUINew.KSSortableGridPanel
// 0x0018 (FullSize[0x0170] - InheritedSize[0x0158])
class UKSSortableGridPanel : public UGridPanel
{
public:
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ORP7[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                                // 0x015C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z05F[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2010);
		return ptr;
	}



	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
	class UGridSlot* AddChildAutoLayout(class UWidget* Content);
};

// Class KillstreakUINew.KSSortableVerticalBox
// 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
class UKSSortableVerticalBox : public UVerticalBox
{
public:
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                                // 0x0138(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2012);
		return ptr;
	}



	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
};

// Class KillstreakUINew.KSStorePanelItem
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UKSStorePanelItem : public UObject
{
public:
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisplaySaleTag;                                            // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenSeen;                                               // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_36EO[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CustomBannerText;                                          // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2013);
		return ptr;
	}



	bool IsOnSale();
};

// Class KillstreakUINew.KSStoreSectionItem
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UKSStoreSectionItem : public UObject
{
public:
	TArray<class UKSStorePanelItem*>                   StorePanelItems;                                           // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                column;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Row;                                                       // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<KillstreakUINew_EStoreItemWidgetType>  WidgetType;                                                // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_33BD[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSStorePanelItem*                           CurrentlyViewedItem;                                       // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2014);
		return ptr;
	}



	bool HasUnseenItems();
};

// Class KillstreakUINew.KSStoreSection
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UKSStoreSection : public UObject
{
public:
	TArray<class UKSStoreSectionItem*>                 SectionItems;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Killstreak_EStoreSectionTypes>         SectionType;                                               // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M03D[0x27];                                    // 0x0039(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2015);
		return ptr;
	}



	bool HasUnseenItems();
	struct FText GetSectionHeader();
	int GetSecondsRemaining();
};

// Class KillstreakUINew.KSStoreWidget
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSStoreWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData_NNAE[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2016);
		return ptr;
	}



	void OnVendorsReceived(int GroupId, TArray<int> VendorIds);
	void OnPricePointsReveived();
	void OnPortalOffersReceived();
	bool HasAllRequiredStoreInformation();
	int GetStoreRotationSecondsRemaining();
	TArray<class UKSStoreSection*> GetStoreLayout();
	class UKSStoreItemHelper* GetStoreItemHelper();
};

// Class KillstreakUINew.KSTargetMarkerWidget
// 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
class UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnTargetChanged;                                           // 0x0328(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnModUsed;                                                 // 0x0338(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      CurrentTarget;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSModInst_Activated*                        TargetModInst;                                             // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      Targeter[0x10];                                            // 0x0358(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_4PFP[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2017);
		return ptr;
	}



	void UpdateCharge(class UKSModInst_Activated* ModInst);
	void TryApplyViewState(KillstreakUINew_ETargetMarkerViewState ViewState, bool bForce);
	void ReceiveNewTarget(class AActor* NewTarget);
	void OnGamepadSelectedChanged(int NewSelectionIndex);
	KillstreakUINew_ETargetMarkerViewState GetCurrentViewState();
	void BindTargetModInst();
	void ApplyViewState(KillstreakUINew_ETargetMarkerViewState ViewState);
};

// Class KillstreakUINew.KSTextChatWidget
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSTextChatWidget : public UKSWidget
{
public:
	TArray<Killstreak_EMercCosmeticSlot>               RadialMenuItemsToShowInChat;                               // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ActiveChatChannelsDirty;                                   // 0x0528(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JJAH[0x7];                                     // 0x0529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChannels;                                        // 0x0530(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentChatChannelIndex;                                   // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E11G[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCurrentChatChannelChanged;                               // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2018);
		return ptr;
	}



	void Whisper(const struct FString& PlayerName, const struct FString& Message);
	void Unblock(const struct FString& PlayerName);
	void UIX_SubmitTextInput(const struct FString& Message);
	void UIX_SendMessageToPlayer(const struct FString& Message, int64_t PlayerId);
	void UIX_SendMessageToChannel(const struct FString& Message, PlatformUMG_EPUMG_ChatChannel Channel);
	void UIX_MarkMessageAsRead(int MessageIndex);
	void UIX_ExecuteChatCommandLine(const struct FString& CommandLine);
	void ToggleDND();
	void ShowTextChat();
	bool SetChatChannelToPlayer(int64_t PlayerId);
	bool SetChatChannel(PlatformUMG_EPUMG_ChatChannel Channel, int64_t PersonalChannelPlayerId);
	void Reply(const struct FString& Message);
	void ProcessMessageOnClient(const struct FText& Message, PlatformUMG_EPUMG_ChatChannel Channel);
	void PreviousChatChannel();
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void OpenTextChat(bool BeginChatCommand);
	void NextChatChannel();
	bool IsActiveChatChannel(PlatformUMG_EPUMG_ChatChannel Channel);
	void HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage);
	void HandleChatMessageRead(const struct FPUMG_ChatData& ReadMessage);
	void HandleChatChannelLeft(PlatformUMG_EPUMG_ChatChannel Channel);
	void HandleChatChannelJoined(PlatformUMG_EPUMG_ChatChannel Channel);
	struct FPUMG_ActiveChatChannelData GetCurrentChatChannel();
	class UKSChatDataFactory* GetChatDataFactory();
	TArray<struct FPUMG_ActiveChatChannelData> GetActiveChatChannels();
	bool CanChatInChannel(PlatformUMG_EPUMG_ChatChannel Channel);
	void Block(const struct FString& PlayerName);
};

// Class KillstreakUINew.KSToastNotificationWidgetBase
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSToastNotificationWidgetBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnToastReceived;                                           // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                MaxToastNotification;                                      // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentToastCount;                                         // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBusy;                                                    // 0x0530(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HL5H[0x7];                                     // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FToastData>                          ToastQueue;                                                // 0x0538(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FToastData>                          PostMatchToasts;                                           // 0x0548(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2019);
		return ptr;
	}



	void TestDisplayChallengeNotification();
	void StoreToastQueue(const struct FToastData& ToastNotification);
	void ShowToastNotification();
	void OnWeaponMilestoneCompleted(class UKSActivityInstance* Activity, int Tier, int Count);
	void OnToastNotificationReceived(const struct FToastData& ToastData);
	void OnChallengeCompleted(class UKSActivityInstance* Activity);
	void OnAwardsCompleted(class UKSActivityInstance* Activity);
	void NotifyToastShown();
	void NotifyToastHidden();
	void HandlePartyMemberPromoted(int64_t PlayerId);
	void HandlePartyMemberLeftGeneric();
	void HandlePartyMemberLeft(const struct FPUMG_PartyMemberData& PartyMemberData);
	void HandlePartyMemberKick(int64_t PlayerId);
	void HandlePartyMemberAdded(const struct FPUMG_PartyMemberData& PartyMemberData);
	void HandlePartyLocalPlayerLeft();
	void HandlePartyInviteSent(const struct FText& PlayerName);
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived(class UPUMG_PlayerInfo* PartyInviter);
	void HandlePartyInviteError(const struct FText& PlayerName);
	void HandlePartyInviteAccepted();
	void HandlePartyDisbanded();
	void HandleFriendRejected(const struct FText& PlayerName);
	void HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData);
	void HandleFriendAddSuccess(const struct FString& PlayerName);
	void HandleFriendAdded(const struct FText& PlayerName);
	class UKSWeaponMasteryManager* GetWeaponMasteryManager();
	TArray<struct FToastData> GetPostMatchToasts();
	class UKSPlayerChallengesManager* GetPlayerChallengesManager();
	class UKSAwardsManager* GetPlayerAwardsManager();
	class UKSPartyDataFactory* GetPartyDataFactory();
	bool GetNext(struct FToastData* NextToastNotification);
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEventChallengesManager* GetEventChallengesManager();
	class UKSBattlePassProgressionManager* GetBattlePassProgressionManager();
	void CreatePlayerLevelUpToasts(class UKSActivityInstance* PlayerLevelActivityInstance, const struct FActivityTier& TierObtained);
	void CreateMiniBattlePassTierUnlockToasts(class UKSActivityInstance* MiniBattlePassActivityInstance, const struct FActivityTier& TierObtained);
	void CreateMercMasteryLevelUpToasts(class UKSActivityInstance* MercMasteryActivityInstance, const struct FActivityTier& TierObtained);
	void CreateEventChallengeCompleteToasts(class UKSActivityInstance* EventChallengeActivityInstance);
	void CreateBoostActivationToastBySpentItem(class UPlatformInventoryItem* SpentItem);
	void CreateBoostActivationToastByAcquisition(class UPUMG_StoreItem* AcquisitionItem);
	void ClearPostMatchQueue();
	void ClearNotificationQueue();
};

// Class KillstreakUINew.KSTopBarStatusIconInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSTopBarStatusIconInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2020);
		return ptr;
	}



	void UnbindEventFromTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback);
	bool IsInTopBarStatusIconShowingState();
	class UTexture2D* GetTopBarStatusIconTexture();
	void BindEventToTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback);
};

// Class KillstreakUINew.KSTouchHudWidget
// 0x0050 (FullSize[0x0568] - InheritedSize[0x0518])
class UKSTouchHudWidget : public UKSWidget
{
public:
	bool                                               bAlwaysShowQuickMelee;                                     // 0x0518(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInEditMode;                                             // 0x0519(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XR29[0x6];                                     // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAsset_Melee*                        QuickMeleeWeaponAsset;                                     // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     MyFireWidget;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     MyMeleeWidget;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     MyGrenadeWidget;                                           // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     MyQuickMeleeWidget;                                        // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      MyAimDownSightsWidget;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AimDownSightsEnableIcon;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AimDownSightsCancelIcon;                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     MyPingWidget;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2021);
		return ptr;
	}



	void UpdateQuickMeleeRadius();
	void UpdatePrimaryWeaponButton();
	void SetWidgetIconTexture(class UWidget* Widget, const struct FSoftObjectPath& Texture);
};

// Class KillstreakUINew.KSTreeView
// 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
class UKSTreeView : public UTreeView
{
public:
	TWeakObjectPtr<class APUMG_HUD>                    MyHud;                                                     // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2025);
		return ptr;
	}



	void UninitializeWidget();
	void NavigateSelectItem(class UObject* Item);
	bool IsItemExpanded(class UObject* Item);
	void InitializeWidget();
	int GetNumItemsInLayout();
	bool BP_GetEntryWidgetFromItem(class UObject* Item, class UUserWidget** OutWidget);
};

// Class KillstreakUINew.KSUIBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2026);
		return ptr;
	}



	bool STATIC_UIX_ReportPlayer(class UObject* WorldContextObject, const struct FReportPlayerParams& Params);
	struct FReportPlayerParams STATIC_SetupReportPlayerFromScoreboardStats(int64_t PlayerId, const struct FScoreboardStats& State, class APUMG_HUD* InHud);
	struct FReportPlayerParams STATIC_SetupReportPlayerFromGameState(int64_t PlayerId, class AKSGameState* State);
	void STATIC_SetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController, bool ShouldHide);
	void STATIC_ResetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void STATIC_RegisterGridNavigation(class UPUMG_Widget* ParentWidget, int FocusGroup, TArray<class UWidget*> NavWidgets, int GridWidth, bool NavToLastElementOnDown);
	bool STATIC_MapCountToActivityTier(float InCount, const struct FActivityTier& ActivityTier, float* CountWithinTier, float* PercentWithinTier);
	struct FText STATIC_Key_GetShortDisplayName(const struct FKey& Key);
	bool STATIC_IsPlayerRelevant(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, bool bLockedInOnly);
	bool STATIC_IsNewJob(int RogueID);
	bool STATIC_IsInsideMargins(class UObject* WorldContextObject, const struct FVector2D& Translation, const struct FVector2D& Margins);
	bool STATIC_IsInCenteredScreenRect(float PositionX, float PositionY, float MarginX, float MarginY);
	bool STATIC_IsExperimentActive(KillstreakUINew_EExperimentalFeatureName Feature);
	struct FText STATIC_GetTextByPlatform(const struct FText& DefaultText, TMap<struct FString, struct FText> PlatformTexts);
	class UKSStoreItemHelper* STATIC_GetStoreItemHelper(class UObject* WorldContextObject);
	Killstreak_EJobSelectionState STATIC_GetSelectionStateForPlayer(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState);
	bool STATIC_GetQueueName(struct FText* DisplayNameText);
	bool STATIC_GetQueueDisplayName(struct FText* DisplayNameText, class UObject* WorldContextObject);
	bool STATIC_GetPlayerSelectInfo(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, struct FPlayerJobSelectInfo* PlayerSelectInfo);
	class UPUMG_PlayerInfo* STATIC_GetPlayerInfoById(class APUMG_HUD* HUD, int64_t PlayerId);
	bool STATIC_GetPingIconByType(class UDataTable* ContextualPingTypesDT, Killstreak_EPingType PingType);
	bool STATIC_GetPingIconByMessage(class UDataTable* ContextualPingMessagesDT, Killstreak_EPingMessage PingMessage);
	bool STATIC_GetPingColorByType(class UDataTable* ContextualPingTypesDT, Killstreak_EPingType PingType, struct FLinearColor* PingColor);
	int STATIC_GetNewJobId();
	class UPUMG_PlayerInfo* STATIC_GetLocalPlayerInfo(class APUMG_HUD* HUD);
	struct FKey STATIC_GetKeyForBinding(class APlayerController* PlayerController, const struct FName& Binding, bool SecondaryKey, bool FallbackToDefault, bool IsGamepadDoubleTap);
	class UKSItem* STATIC_GetItemById(int ItemId);
	class UKSWeaponAsset* STATIC_GetHeroPrimaryWeapon();
	TArray<int> STATIC_GetDigitsFromInt(int Value);
	void STATIC_GetCurrentRogueMasteryLevel(class UKSActivityInstance* ActivityInstance, int* MasteryLevel, int* CurrentXPProgress, int* XPRequiredForLevel);
	class UKSContextBarWidget* STATIC_GetContextBar(class APUMG_HUD* HUD);
	class UKSWeaponAsset* STATIC_FindWeaponForAttachment(class UObject* WorldContextObject, class UKSWeaponAttachment* WeaponAttachment);
	bool STATIC_FindContextualPingTypesRowByType(class UDataTable* ContextualPingTypesDT, Killstreak_EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool STATIC_FindContextualPingMessagesRowByMessage(class UDataTable* ContextualPingMessagesDT, Killstreak_EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	bool STATIC_DistanceToClosestScreenEdge(class UObject* WorldContextObject, const struct FVector2D& Location, float* OutDistX, float* OutDistY);
	Killstreak_EJobSelectionState STATIC_DetermineEntryLocalSelectionState(const struct FJobSelectionEntry& Entry);
	class UKSSettingsWidget* STATIC_CreateSettingsWidgetWithConfig(class APUMG_HUD* HUD, const struct FKSSettingsWidgetConfig& SettingsWidgetConfig);
	class UKSSettingsWidget* STATIC_CreateSettingsWidget(class APUMG_HUD* HUD, class UClass* SettingsWidgetClass);
	class UKSSettingsPreview* STATIC_CreateSettingsPreview(class APUMG_HUD* HUD, class UClass* SettingsPreviewClass);
	int STATIC_CompareStrings(const struct FString& LeftString, const struct FString& RightString);
	void STATIC_ClearKeyboardFocus();
	bool STATIC_CanReportServer(class UObject* WorldContextObject);
	bool STATIC_CanPlayerSelectEntry(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState);
};

// Class KillstreakUINew.KSUISoundLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSUISoundLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2027);
		return ptr;
	}



};

// Class KillstreakUINew.KSGenericSoundLibrary
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UKSGenericSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               BackToScreenSound;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ErrorSound;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScreenTransitionSound;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2028);
		return ptr;
	}



};

// Class KillstreakUINew.KSButtonSoundLibrary
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UKSButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ButtonClicked;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ButtonHovered;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ButtonUnhovered;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2029);
		return ptr;
	}



};

// Class KillstreakUINew.KSScrollButtonSoundLibrary
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UKSScrollButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ScrollClicked;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollHovered;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollUnhovered;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollingSound;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2030);
		return ptr;
	}



};

// Class KillstreakUINew.KSShopSoundLibrary
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UKSShopSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ShopOpen;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ShopClose;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PurchaseSucceeded;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PurchaseFailed;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2031);
		return ptr;
	}



};

// Class KillstreakUINew.KSToastSoundLibrary
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UKSToastSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               FriendToast;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PartyToast;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ErrorToast;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               InfoToast;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2032);
		return ptr;
	}



};

// Class KillstreakUINew.CommonVendorHelper
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommonVendorHelper : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2033);
		return ptr;
	}



	int STATIC_GetVendorIDFromEnum(KillstreakUINew_EKSVendorTypes VendorType);
};

// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// 0x0010 (FullSize[0x05F0] - InheritedSize[0x05E0])
class UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData_2857[0x10];                                    // 0x05E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2034);
		return ptr;
	}



};

// Class KillstreakUINew.KSViewedActiveGadgetWidget
// 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
class UKSViewedActiveGadgetWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData_T0DZ[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2035);
		return ptr;
	}



};

// Class KillstreakUINew.KSViewedActiveMedPackWidget
// 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
class UKSViewedActiveMedPackWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData_YMFO[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2036);
		return ptr;
	}



};

// Class KillstreakUINew.KSViewedItemLabel
// 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
class UKSViewedItemLabel : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData_TB53[0x8];                                     // 0x0548(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UpdateViewLimitPosition;                                   // 0x0550(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XQNY[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ViewLimitPosition;                                         // 0x0554(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AMV1[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2037);
		return ptr;
	}



	void UpdateLabelPosition();
	void UnbindToViewportResizeEvent();
	void TriggerLabelPositionUpdate();
	void OnLabelShow();
	void OnLabelHide();
	class UImage* GetViewLimitImage();
	class AActor* GetTrackedActor();
	class UCanvasPanel* GetOutermostCanvasPanel();
	bool GetOnScreenPositionForLabel(class APlayerController* Player, class AActor* InActor, struct FBox2D* OutBounds);
	class UCanvasPanel* GetLabelCanvasPanel();
	void BindToViewportResizeEvent();
};

// Class KillstreakUINew.KSViewedPawnDamageDisplay
// 0x0090 (FullSize[0x05D8] - InheritedSize[0x0548])
class UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget
{
public:
	float                                              StackingWait;                                              // 0x0548(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TetherToEventLocation;                                     // 0x054C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K1J0[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxNumDamageWidgetsOnScreen;                               // 0x0550(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DIB5[0x4];                                     // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                DamageNumberContainer;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FSpecialDamageColors>   SpecialDamageTypes;                                        // 0x0560(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UDamageNumberDisplayWidget*>          CurrentDamageNumbersOnScreen;                              // 0x05B0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UDamageNumberDisplayWidget*>          DamageNumbersPool;                                         // 0x05C0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y8L8[0x8];                                     // 0x05D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2038);
		return ptr;
	}



	void PrimeDamageNumbersWidgetPool();
	void HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void HandleInstigateDamageNotify(const struct FCombatEventInfo& DamageInfo);
	void HandleAnimationCompleted(class UDamageNumberDisplayWidget* DamageNumberWidget);
	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void ClearDamageNumbersOnScreen();
};

// Class KillstreakUINew.DamageNumberDisplayWidget
// 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
class UDamageNumberDisplayWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnNumberAnimationComplete;                                 // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class AActor*                                      DamageTarget;                                              // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     InitialDamageLocation;                                     // 0x0250(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TetherToEventLocation;                                     // 0x025C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VGFQ[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageAmount;                                              // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EDamageBaseType                    DamageBaseType;                                            // 0x0264(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EDamageFlourishType                DamageFlourishType;                                        // 0x0265(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EDamageModifier                    DamageModifier;                                            // 0x0266(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	KillstreakUINew_EDamageTargetType                  DamageTargetType;                                          // 0x0267(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DelayBeforeAnimation;                                      // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StackWaitTime;                                             // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               PlayingNumberAnimation;                                    // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K6DC[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VerticalWorldOffset;                                       // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ChangePosition;                                            // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JCZS[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2039);
		return ptr;
	}



	void SetDisplayInformation(class AActor* InTargetActor, bool InTetherToEventLocation, float InDamageAmount, bool InIsSpecialDamage, const struct FSpecialDamageColors& InDamageColors, bool InIsLethal, bool InIsHeadshot, float InDelayWindow, float InStackWait, bool InArmorHit, bool InDamageReduced, bool InDamageResisted, bool InDamageShielded);
	void SetContentVisibility(bool IsVisible);
	void PlayNumberAnimation();
	bool PlayerIsBlinded();
	void OnDisplaySpecialDamageInfo(float CurrentDamageAmount, const struct FSpecialDamageColors& DamageColors, bool bChangePosition);
	void OnDisplayInformationReset();
	bool IsDisplayStacking();
};

// Class KillstreakUINew.KSViewedPawnInventoryWidget
// 0x0038 (FullSize[0x05E0] - InheritedSize[0x05A8])
class UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget
{
public:
	struct FPlayerInventorySlot                        ActiveInventoryItem;                                       // 0x05A8(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CDPP[0x20];                                    // 0x05C0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2040);
		return ptr;
	}



	void OnUpdatedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	void OnRemovedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	void OnActivePawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	int GetSlotIndex(const struct FGameplayTag& EquipPoint);
};

// Class KillstreakUINew.KSViewedPawnModsWidget
// 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
class UKSViewedPawnModsWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData_7MLY[0x18];                                    // 0x0548(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2041);
		return ptr;
	}



	void OnViewedPawnModAdded(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance);
	class UOverlay* GetOverlay();
};

// Class KillstreakUINew.KSViewRedirector_LocalSetting
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UKSViewRedirector_LocalSetting : public UPUMG_ViewRedirecter
{
public:
	struct FName                                       LocalActionName;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2042);
		return ptr;
	}



	bool DoesLocalSettingApply(class APUMG_HUD* HUD);
};

// Class KillstreakUINew.KSViewRedirector_OpeningCinematic
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UKSViewRedirector_OpeningCinematic : public UPUMG_ViewRedirecter
{
public:
	class UDataTable*                                  MediaPlayerDataTable;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2043);
		return ptr;
	}



};

// Class KillstreakUINew.KSVoiceActivityWidget
// 0x0070 (FullSize[0x0588] - InheritedSize[0x0518])
class UKSVoiceActivityWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    VoiceAccountNamePairsUpdated;                              // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantAdded;                                     // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantRemoved;                                   // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantUpdated;                                   // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceAudioStateChange;                                     // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LR6I[0x20];                                    // 0x0568(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2044);
		return ptr;
	}



	void OnVoiceParticipantUpdated(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void OnVoiceParticipantRemoved(const struct FString& AccountId);
	void OnVoiceParticipantAdded(const struct FString& AccountId);
	struct FString GetVoiceIdByPlayerId(int64_t PlayerId);
	class AKSPlayerState* GetPlayerStateByVoiceId(const struct FString& VoiceId);
	int64_t GetPlayerIdByVoiceId(const struct FString& VoiceId);
};

// Class KillstreakUINew.KSVoucherAcquisition
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class UKSVoucherAcquisition : public UKSWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2045);
		return ptr;
	}



	bool RedeemVouchers(TArray<class UPUMG_StoreItem*> VoucherItems);
	void GetVoucherAcquisitions(TArray<class UPUMG_StoreItem*>* VoucherItems, TArray<class UPUMG_StoreItem*>* PurchaseItems);
	void DisplayVoucherRedemptionFailed();
};

// Class KillstreakUINew.KSWeaponCategoryButton
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UKSWeaponCategoryButton : public UKSWidget
{
public:
	unsigned char                                      WeaponCategory[0x28];                                      // 0x0518(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_8LVT[0x10];                                    // 0x0540(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2046);
		return ptr;
	}



	void OnWeaponCategorySelected();
	class UKSWeaponCategoryAsset* GetWeaponCategory();
	void DisplayWeaponCategory(class UKSWeaponCategoryAsset* DisplayedCategory);
	void DisplayMasteryProgress(int ProgressCount, int ProgressTotal);
	void BroadcastWeaponCategoryPreview();
};

// Class KillstreakUINew.KSWeaponCategoryScreen
// 0x0068 (FullSize[0x0580] - InheritedSize[0x0518])
class UKSWeaponCategoryScreen : public UKSWidget
{
public:
	class UKSWeaponProgressMeter*                      CategoryMasteryMeter;                                      // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSRelatedRoguesGroup*                       RelatedRogues;                                             // 0x0520(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     WeaponUnlockTooltipDisplay;                                // 0x0528(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  WeaponCountText;                                           // 0x0530(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEHS[0x30];                                    // 0x0538(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponCategoryAsset*                      PopulatedCategory;                                         // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSWeaponAsset*                              HoveredWeapon;                                             // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VSY9[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2047);
		return ptr;
	}



	void RefreshWidgetNavigation();
	void PopulateFromViewRouteData();
	void OnWeaponPopulationFinished();
	void HandleWeaponSelected(class UKSWeaponAsset* SelectedWeapon);
	void HandleWeaponPreview(class UKSWeaponAsset* PreviewWeapon);
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleCustomizeAction();
	void HandleBackContextAction();
	TArray<class UKSWeaponProgressButton*> GetWeaponProgressButtons();
	int GetPopulatedWeaponCount();
	void FX_OnViewMasteryRewards();
	void FX_OnCustomizeContextAction();
	void DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	class UKSWeaponProgressButton* CreateAndAddWeaponEntry();
	void ClearWeaponPreview();
	void ClearWeaponEntries();
	void AddWrapCustomizationViewRoute(class UKSWeaponAsset* WeaponAsset);
	void AddMasteryRewardsViewRoute();
};

// Class KillstreakUINew.KSWeaponComponentWidget
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSWeaponComponentWidget : public UKSWidget
{
public:
	TWeakObjectPtr<class UKSWeaponComponent>           WeaponComponent;                                           // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKSEquipmentId                              EquipmentId;                                               // 0x0520(0x0004) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y71K[0x14];                                    // 0x0524(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2048);
		return ptr;
	}



	void SetOwningWeaponComponent(class UKSWeaponComponent* InWeaponComponent);
	void PreClearWeaponComponent();
	void PostSetWeaponComponent();
	void OnEndActiveWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	bool IsWeaponComponentActive();
	class UKSWeaponComponent* GetWeaponComponent();
};

// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// 0x0020 (FullSize[0x0558] - InheritedSize[0x0538])
class UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget
{
public:
	int                                                CachedAmmoInClip;                                          // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedClipSize;                                            // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedInReserve;                                           // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CachedIsReloading;                                         // 0x0544(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WMVA[0x13];                                    // 0x0545(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2049);
		return ptr;
	}



	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve);
	bool IsReloading();
	int GetClipSize();
	int GetAmmoInReserve();
	int GetAmmoInClip();
};

// Class KillstreakUINew.KSWeaponDetailScreen
// 0x0070 (FullSize[0x0588] - InheritedSize[0x0518])
class UKSWeaponDetailScreen : public UKSWidget
{
public:
	class UKSWeaponProgressMeter*                      WeaponMasteryMeter;                                        // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSRelatedRoguesGroup*                       RelatedRogues;                                             // 0x0520(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSideNavigationOverlay*                    SideNavigationOverlay;                                     // 0x0528(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponMilestoneDisplay*                   WeaponMilestones;                                          // 0x0530(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponStatsPanel*                         WeaponStatsPanel;                                          // 0x0538(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              PopulatedWeaponAsset;                                      // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O7AI[0x30];                                    // 0x0548(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DesiredEquipSound;                                         // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayedWeaponEquipSound;                                   // 0x0580(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFO4[0x7];                                     // 0x0581(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2050);
		return ptr;
	}



	void PopulateFromWeaponAsset(class UKSWeaponAsset* WeaponAsset, bool FromSideNav);
	void PopulateFromViewRouteData();
	void InitiateLockedMilestonesPurchase();
	bool HasLockedMilestones();
	void HandleWeaponPreview(class UKSWeaponAsset* WeaponAsset);
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleSideNavigation(int SideDirection);
	void HandleCustomizeContextAction();
	void HandleBackContextAction();
	void FX_OnViewMasteryRewards();
	void FX_OnCustomizeContextAction();
	void DisplayWeapon(class UKSWeaponAsset* WeaponAsset, class UKSWeaponCategoryAsset* WeaponCategory);
	void DisplayEquippedWrap(class UKSWeaponAttachment* EquippedWrap);
	void ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap);
	void AddWrapCustomizationViewRoute();
	void AddMasteryRewardsViewRoute();
};

// Class KillstreakUINew.KSWeaponHubBase
// 0x0030 (FullSize[0x0548] - InheritedSize[0x0518])
class UKSWeaponHubBase : public UKSWidget
{
public:
	class UKSWeaponProgressMeter*                      TotalWeaponMasteryMeter;                                   // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSRelatedRoguesGroup*                       RelatedRogues;                                             // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XLC[0x20];                                    // 0x0528(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2051);
		return ptr;
	}



	void HandleWeaponCategoryPreview(class UKSWeaponCategoryAsset* WeaponCategory);
	void HandleBackContextAction();
	TArray<class UKSWeaponCategoryButton*> GetWeaponCategoryButtons();
	void FX_OnViewMasteryRewards();
	void AddMasteryRewardsViewRoute();
};

// Class KillstreakUINew.KSWeaponHubHelper
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKSWeaponHubHelper : public UObject
{
public:
	class UDataTable*                                  WeaponCategoryDetailsTable;                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponMasteryManager*                     WeaponMasteryManager;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2052);
		return ptr;
	}



	TArray<class UKSWeaponAsset*> GetWeaponsForCategory(const struct FGameplayTag& WeaponCategoryTag, class UKSJobItem* JobItem);
	bool GetWeaponCategoryDetailsByTag(const struct FGameplayTag& CategoryTag, struct FWeaponCategoryDetails* OutDetails);
	bool GetWeaponCategoryDetails(const struct FName& WeaponCategoryName, struct FWeaponCategoryDetails* OutDetails);
	TArray<class UKSJobItem*> GetJobsForWeaponId(int WeaponId);
	TArray<class UKSJobItem*> GetJobsForWeaponCategory(const struct FName& WeaponCategoryName);
	int GetAvailableWeaponCountInCategory(const struct FGameplayTag& CategoryTag, class UKSJobItem* JobItem);
};

// Class KillstreakUINew.KSWeaponMasteryLevelUpSummary
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKSWeaponMasteryLevelUpSummary : public UObject
{
public:
	TArray<struct FKSWeaponMasteryLevelUpSummaryEntry> MasteryEntries;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2053);
		return ptr;
	}



	void SwapEntryToTop(class UPrimaryDataAsset* InMasteryAsset);
	bool HasEntries();
	bool ContainsMasteryEntry(class UPrimaryDataAsset* InMasteryAsset);
};

// Class KillstreakUINew.KSWeaponMasteryLevelUpScreen
// 0x0058 (FullSize[0x0570] - InheritedSize[0x0518])
class UKSWeaponMasteryLevelUpScreen : public UKSWidget
{
public:
	struct FKSWeaponMasteryLevelUpSummaryEntry         PopulatedEntry;                                            // 0x0518(0x0048) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FName                                       ViewActorName;                                             // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_34MG[0x8];                                     // 0x0568(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2054);
		return ptr;
	}



	void ShowNextEntry();
	void PopulateForLevelUpEntry(const struct FKSWeaponMasteryLevelUpSummaryEntry& LevelUpEntry);
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleCurrentWeaponDismissed();
};

// Class KillstreakUINew.KSWeaponMasteryRewardsScreen
// 0x0058 (FullSize[0x0570] - InheritedSize[0x0518])
class UKSWeaponMasteryRewardsScreen : public UKSRogueMasteryWidget
{
public:
	Killstreak_EKSWeaponMasteryType                    CurrentDisplayedMasteryType;                               // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3KJR[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSActivityInstance*                         CurrentProgressActivityInstance;                           // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSWeaponAsset*                              PopulatedWeaponAsset;                                      // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSWeaponCategoryAsset*                      PopulatedWeaponCategory;                                   // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UJ3X[0x38];                                    // 0x0538(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2055);
		return ptr;
	}



	void UpdateReactiveStateDescription();
	void SelectTierForCurrentProgress();
	void SelectTierByNumber(int TierNumber);
	void SelectTierByIndex(int TierIndex);
	void SelectTier(const struct FActivityTier& ActivityTier);
	void SelectPrevTier();
	void SelectNextTier();
	void PostChangeRewardPreview();
	void PopulateRewardTiers();
	void PopulateFromWeaponsMaster();
	void PopulateFromWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void PopulateFromWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void PopulateFromViewRouteData();
	void OnCurrentProgressActivityInstanceUpdated();
	struct FMasteryRewardData MakeMasteryRewardData(const struct FTierRewardItemData& RewardItem);
	void HandleWeaponModelSet();
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleTriggerReactiveContextAction();
	void HandleBackContextAction();
	class UKSWeaponCategoryAsset* GetWeaponCategoryFromXP(class UKSActivity* CategoryActivity);
	void GetRewardTiers(TArray<struct FActivityTier>* OutRewardTiers);
	float GetRegularTiersProgress();
	float GetPrestigeTierProgress();
	struct FName GetModelViewerActorName();
	void DisplayWeaponsMaster();
	void DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void DisplayRewardTier(const struct FActivityTier& SelectedTier);
	void DisplayReactiveStateDescription(const struct FText& DescText);
	void DisplayActivityProgress(int Level, int LevelProgressCount, int LevelProgressTotal);
	void ConfigureLobbyCamera();
	void ClearReactiveStateDescription();
};

// Class KillstreakUINew.KSWeaponMilestoneDisplay
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSWeaponMilestoneDisplay : public UKSWidget
{
public:
	class UKSWeaponAsset*                              PopulatedWeaponAsset;                                      // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2056);
		return ptr;
	}



	void PopulateFromWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void GetMilestoneEntries(TArray<class UKSWeaponMilestoneEntry*>* Entries);
};

// Class KillstreakUINew.KSWeaponMilestoneEntry
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UKSWeaponMilestoneEntry : public UKSWidget
{
public:
	class UKSActivityInstance*                         PopulatedMilestoneInstance;                                // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2057);
		return ptr;
	}



	void PopulateFromMilestoneActivity(class UKSActivityInstance* MilestoneInstance);
	void DisplayMilestoneActivity(class UKSActivityInstance* MilestoneInstance);
	void DisplayEmpty();
};

// Class KillstreakUINew.KSWeaponProgressButton
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSWeaponProgressButton : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnWeaponPreview;                                           // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWeaponSelected;                                          // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWeaponUnhovered;                                         // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bOnCosmeticNavToDetails;                                   // 0x0548(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1N5[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2058);
		return ptr;
	}



	void SetWeaponAsset(class UKSWeaponAsset* InWeaponAsset);
	void OnCosmeticClicked();
	class UKSWeaponAsset* GetWeaponAsset();
	void DisplayWeapon(class UKSWeaponAsset* DisplayedWeapon);
	void DisplayMasteryProgress(int MasteryLevel, int LevelProgressCount, int LevelProgressTotal);
	void DisplayCosmetic(class UKSWeaponAttachment* Cosmetic);
	void BroadcastWeaponUnhovered();
	void BroadcastWeaponSelected();
	void BroadcastWeaponPreview();
};

// Class KillstreakUINew.KSWeaponProgressMeter
// 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
class UKSWeaponProgressMeter : public UKSWidget
{
public:
	Killstreak_EKSWeaponMasteryType                    CurrentMasteryType;                                        // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_82RV[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSActivityInstance*                         CurrentMasteryInstance;                                    // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3B2[0x10];                                    // 0x0528(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAsset*                              PopulatedWeaponAsset;                                      // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2059);
		return ptr;
	}



	void PopulateProgressReward(class UKSActivityInstance* ProgressInstance);
	void PopulateFromWeaponsMaster();
	void PopulateFromWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void PopulateFromWeapon(class UKSWeaponAsset* WeaponAsset);
	TArray<struct FText> GetItemTypeTexts(TArray<struct FTierRewardItemData> RewardItems);
	void DisplayWeaponsMaster();
	void DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void DisplayWeapon(class UKSWeaponAsset* WeaponAsset);
	void DisplayProgressReward(const struct FWeaponMasteryRewardDisplayData& RewardDisplayData);
	void DisplayProgress(int MasteryLevel, int LevelProgressCount, int LevelProgressTotal);
	void DisplayAltDescription(const struct FText& DescriptionText);
	void ClearProgressReward();
	void BroadcastGoToRewardDetails();
};

// Class KillstreakUINew.KSWeaponStatsPanel
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UKSWeaponStatsPanel : public UKSWidget
{
public:
	unsigned char                                      UnknownData_3VOZ[0x20];                                    // 0x0518(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2060);
		return ptr;
	}



	void UpdateStatCount(int NewStatCount);
	void UpdateStatAtIndex(int WidgetIndex, const struct FItemDisplayStat& WeaponStat, const struct FItemDisplayStat& UpgradeStat);
	void UpdateSideNavigation(bool PrevLevelEnabled, bool NextLevelEnabled);
	void SetOpenedState(bool IsOpen);
	void SetBaseWeapon(class UKSWeaponAsset* InWeaponAsset);
	void RemoveStatWidget();
	bool PopulateWeaponLevel(int TierLevel);
	bool PopulatePrevWeaponLevel();
	bool PopulateNextWeaponLevel();
	bool GetOpenedState();
	int GetCurrentStatCount();
	void DisplayWeaponInfo(int Level, class UKSWeaponAsset* LevelWeapon);
	void DisplayOpenedState(bool IsOpen);
	void AddStatWidget();
};

// Class KillstreakUINew.KSWhatsNewModalViewRedirector
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKSWhatsNewModalViewRedirector : public UPUMG_ViewRedirecter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2061);
		return ptr;
	}



};

// Class KillstreakUINew.KSWhatsNewPanel
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UKSWhatsNewPanel : public UKSJsonData
{
public:
	struct FText                                       Header;                                                    // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FSubPanel>                           SubPanels;                                                 // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_ESubPanelAlignment                 Alignment;                                                 // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QP56[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BgBoxOpacity;                                              // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                           Image;                                                     // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2062);
		return ptr;
	}



};

// Class KillstreakUINew.KSWhatsNewModal
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UKSWhatsNewModal : public UKSWidget
{
public:
	int                                                maxPanelCount;                                             // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PW3S[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSWhatsNewPanel*>                    StoredPanels;                                              // 0x0520(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2063);
		return ptr;
	}



	void UpdateWhatsNewPanels();
	void OnJsonChanged();
	TArray<class UKSWhatsNewPanel*> GetPanelData();
	int GetMaxPanelCount();
	class UKSJsonDataFactory* GetJsonDataFactory();
};

// Class KillstreakUINew.KSWrapCustomizationContext
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UKSWrapCustomizationContext : public UObject
{
public:
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         SelectedWrap;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             SelectedStoreItem;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2064);
		return ptr;
	}



};

// Class KillstreakUINew.KSWrapCustomizationScreen
// 0x0060 (FullSize[0x0578] - InheritedSize[0x0518])
class UKSWrapCustomizationScreen : public UKSWidget
{
public:
	class UKSWeaponAsset*                              PopulatedWeaponAsset;                                      // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSWeaponAttachment*                         PreviewedWeaponWrap;                                       // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPUMG_StoreItem*                             PreviewedStoreItem;                                        // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KBK5[0x48];                                    // 0x0530(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2065);
		return ptr;
	}



	void UpdateReactiveStateDescription();
	void SetActionButtonText(const struct FText& DescText);
	void RemoveLastWrapEntry();
	void RefreshWidgetNavigation();
	void PromptEquipAllForCosmetic();
	void PreviewWeaponWrap(class UKSWeaponAttachment* WeaponWrap, class UPUMG_StoreItem* StoreItem);
	void PopulateFromWrapCustomizationContext(class UKSWrapCustomizationContext* WrapContext);
	void PopulateFromViewRouteData();
	void OnWrapPopulationFinished();
	void OnPurchaseAndEquipComplete(bool bSuccess);
	void OnEquipButtonClicked();
	void OnEquipAllComplete(bool bSuccess);
	void HandleWrapEntryPurchaseFlow(class UKSWeaponAttachment* WrapAttachment, class UPUMG_StoreItem* StoreItem);
	void HandleWrapEntryPreview(class UKSWeaponAttachment* WrapAttachment, class UPUMG_StoreItem* StoreItem);
	void HandleWrapEntryEquip(class UKSWeaponAttachment* WrapAttachment);
	void HandleWeaponModelSet();
	void HandleViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void HandleTriggerReactiveContextAction();
	void HandleLoadoutChanged(class UPUMG_Loadout* Loadout);
	void HandleBackContextAction();
	int GetWrapEntryCount();
	bool GetWrapEntryByWeaponAttachment(class UKSWeaponAttachment* WeaponAttachment, class UKSWrapSelectionEntry** OutWrapEntry);
	bool GetWrapEntry(int Index, class UKSWrapSelectionEntry** OutWrapEntry);
	class UKSWrapSelectionEntry* GetOrCreateWrapEntry(int Index);
	struct FName GetModelViewerActorName();
	void EquipWeaponWrap(class UKSWeaponAttachment* WeaponWrap);
	void DisplayWrapInfo(class UKSWeaponAttachment* WeaponWrap);
	void DisplayWeaponInfo(class UKSWeaponAsset* WeaponAsset, class UKSWeaponCategoryAsset* WeaponCategory);
	void DisplayReactiveStateDescription(const struct FText& DescText);
	class UKSWrapSelectionEntry* CreateAndAddWrapEntry();
	void ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap);
	void ClearReactiveStateDescription();
	void ClearEquippedWeaponWrap();
	void ClearEntries();
};

// Class KillstreakUINew.KSWrapSelectionEntry
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UKSWrapSelectionEntry : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnWrapEquip;                                               // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWrapPreview;                                             // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStoreWrapSelect;                                         // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DIK[0x10];                                    // 0x0548(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2066);
		return ptr;
	}



	void PopulateEntry(class UKSWeaponAttachment* WeaponAttachment, class UPUMG_StoreItem* StoreItem, bool IsEquipped);
	class UKSWeaponAttachment* GetPopulatedWeaponAttachment();
	class UPUMG_StoreItem* GetPopulatedStoreItem();
	void DisplayWrap(class UKSWeaponAttachment* WeaponAttachment);
	void DisplaySelected(bool IsSelected);
	void DisplayEquipped(bool IsEquipped);
	void BroadcastWrapPreview();
	void BroadcastWrapEquip();
	void BroadcastStoreWrapSelect();
	void BroadcaseWrapClicked();
};

// Class KillstreakUINew.TickAnimationManager
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UTickAnimationManager : public UObject
{
public:
	TMap<struct FName, struct FTickAnimationParams>    AnimsByName;                                               // 0x0028(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2067);
		return ptr;
	}



	void StopAnimation(const struct FName& AnimName);
	void SkipToEndAnimation(const struct FName& AnimName);
	void ResumeAnimation(const struct FName& AnimName);
	void RemoveAnimation(const struct FName& AnimName);
	void PlayAnimation(const struct FName& AnimName);
	void PauseAnimation(const struct FName& AnimName);
	bool GetAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams);
	void ApplyTick(float DeltaTime);
	void AddAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
