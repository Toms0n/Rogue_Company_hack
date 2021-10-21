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

// WidgetBlueprintGeneratedClass WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C
// 0x02C8 (FullSize[0x07E0] - InheritedSize[0x0518])
class UWBP_RewardsTrackMeter_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              SegmentContainer;                                          // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     SpacerL;                                                   // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     SpacerR;                                                   // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RewardsTrackMeterSegment_C*             WBP_RewardsTrackBarSegment;                                // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RewardsTrackMeterSegment_C*             WBP_RewardsTrackBarSegment_106;                            // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerProgression                          Progression;                                               // 0x0548(0x0170) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentTierIndex;                                          // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G9Q7[0x4];                                     // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLevelUpEvent;                                            // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLevelDownEvent;                                          // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                                 BaseColor;                                                 // 0x06E0(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                                 IncreaseColor;                                             // 0x0708(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                                 DecreaseColor;                                             // 0x0730(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UAkAudioEvent*                               PlayRankProgressionSFX;                                    // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               StopRankProgressionSFX;                                    // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                                 BackgroundColor;                                           // 0x0768(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              Clamped_Base_Pct;                                          // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Clamped_Delta_Pct;                                         // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 BonusIncreaseColor;                                        // 0x0798(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnLerpUpdate;                                              // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              AnimTimeInitial;                                           // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              AnimTimeFinal;                                             // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                NumSegments;                                               // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                PageIndex;                                                 // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(81326);
		return ptr;
	}



	void Create_Segments();
	void Set_From_Activity_Instance(class UKSActivityInstance* Progression, int Starting_Tier);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_RewardsTrackMeter(int EntryPoint);
	void OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage);
	void OnLevelDownEvent__DelegateSignature(int NewLevel);
	void OnLevelUpEvent__DelegateSignature(int NewLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
