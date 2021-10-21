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

// BlueprintGeneratedClass TrendedKick.TrendedKick_C
// 0x0014 (FullSize[0x003C] - InheritedSize[0x0028])
class UTrendedKick_C : public UKickbackModule
{
public:
	TArray<struct FKickTrendProfile>                   KickTrendProfiles;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                TrendRepeatIndex;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44581);
		return ptr;
	}



	float GetMaximumHorizontalKick();
	float GetMaximumVerticalKick();
	void GetCurrentTrendProfile(int ShotIndex, struct FKickTrendProfile* TrendProfile);
	struct FInterpCurveVector2D MakeKickbackInstance(int ShotIndex, float AbsoluteMaxDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
