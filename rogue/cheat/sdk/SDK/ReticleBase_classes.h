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

// WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
class UReticleBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      LoneDot;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              LowAmmoThreshold;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CriticallyLowAmmoThreshold;                                // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSSettingsColorOptionsAsset*                SettingsColorOptionAsset;                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45327);
		return ptr;
	}



	void Set_Reticle_Color(const struct FLinearColor& Color);
	void On_Reticle_Color_Changed();
	void Set_Reticle_Width(int Width);
	void Set_Reticle_Height(int Height);
	void On_Reticle_Width_Changed();
	void On_Reticle_Height_Changed();
	void On_Reticle_Dimension_Changed();
	void ChangeReticleSize();
	void GetAmmoState(class UKSWeaponComponent* NewParam, KillstreakUINew_EAmmoState* Return_Value);
	void HitConfirm();
	void ForceADS(bool Active);
	void GrenadeCook(bool Active, float TickPeriod);
	void ChangeADS(bool Active);
	void KillConfirm();
	void Headshot();
	void UpdateOffset(float Offset);
	void OnInitialized();
	void ExecuteUbergraph_ReticleBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
