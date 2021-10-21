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

// WidgetBlueprintGeneratedClass WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C
// 0x0058 (FullSize[0x0590] - InheritedSize[0x0538])
class UWBP_RewardsTrackMeterSegment_C : public UKSRewardsTrackMeterSegmentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BarBackgroundFill;                                         // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1;                                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MeterBase;                                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MeterGlow;                                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     MeterSpacer;                                               // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     ProgressBarColor;                                          // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ProgressBarContainer;                                      // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SegmentLabel;                                              // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     ShearSpacerL;                                              // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     ShearSpacerR;                                              // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(81346);
		return ptr;
	}



	struct FLinearColor GetStandardBackgroundColor();
	struct FLinearColor GetPremiumBackgroundColor();
	struct FLinearColor GetBattlePassPremiumColor();
	struct FLinearColor GetBattlePassFreeColor();
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent);
	void ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor);
	void ApplySegmentLabel(const struct FText& LabelText);
	void ApplySegmentMeterColor(const struct FLinearColor& MeterColor);
	void ExecuteUbergraph_WBP_RewardsTrackMeterSegment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
