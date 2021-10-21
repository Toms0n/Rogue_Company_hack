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

// WidgetBlueprintGeneratedClass WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C
// 0x02F9 (FullSize[0x0831] - InheritedSize[0x0538])
class UWBP_ProgressEarnedBar_C : public UKSProgressMeterWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnLevelDown;                                               // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnLevelUp;                                                 // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                              BarBackground;                                             // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BarBackgroundImage;                                        // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LevelUpAnimBar;                                            // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ProgressBarBase;                                           // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              ProgressBarFill;                                           // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              ProgressBarFill_Bonus;                                     // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      xp_base;                                                   // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      xp_base_tip;                                               // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      xp_progress;                                               // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      xp_progress_bonus;                                         // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerProgression                          Progression;                                               // 0x05A0(0x0170) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentTierIndex;                                          // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CY9G[0x4];                                     // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLevelUpEvent;                                            // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLevelDownEvent;                                          // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                                 BaseColor;                                                 // 0x0738(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                                 IncreaseColor;                                             // 0x0760(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                                 DecreaseColor;                                             // 0x0788(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UAkAudioEvent*                               PlayRankProgressionSFX;                                    // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               StopRankProgressionSFX;                                    // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                                 BackgroundColor;                                           // 0x07C0(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              Clamped_Base_Pct;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Clamped_Delta_Pct;                                         // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 BonusIncreaseColor;                                        // 0x07F0(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnLerpUpdate;                                              // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              AnimTimeInitial;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              AnimTimeFinal;                                             // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ShowGradientTip;                                           // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54898);
		return ptr;
	}



	void GetProgressionFinalTier(int* Final_Tier_Index);
	void IsProgressionIncreasing(bool* Return_Value);
	void IsOnFirstTier(bool* FinalTier);
	void OnLevelDownAnimCompleted();
	void IsOnFinalTier(bool* FinalTier);
	void Set_Fill_Colors();
	void OnLevelUpAnimCompleted();
	void InitializeAnimForTier(int Tier_Index, bool* IsValid);
	void SetProgressionData(const struct FPlayerProgression& Progression);
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent);
	void OnDeltaAnimationStarted();
	void OnDeltaAnimationTicked();
	void OnDeltaAnimationFinished(bool bLevelChange);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_ProgressEarnedBar(int EntryPoint);
	void OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage);
	void OnLevelDownEvent__DelegateSignature(int NewLevel);
	void OnLevelUpEvent__DelegateSignature(int NewLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
