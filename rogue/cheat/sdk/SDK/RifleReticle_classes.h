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

// WidgetBlueprintGeneratedClass RifleReticle.RifleReticle_C
// 0x00A8 (FullSize[0x0300] - InheritedSize[0x0258])
class URifleReticle_C : public UReticleBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            GaugeFade;                                                 // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                                    AmmoProgress;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Center_Dot;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CenterDot_Image;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CenterDot_Image_2;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      circle_ammo_replenish;                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      circle_progress;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cirlce_progress_bg;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      reddot;                                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReticleHair_C*                          WBP_ReticleHair_Bottom;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReticleHair_C*                          WBP_ReticleHair_Left;                                      // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReticleHair_C*                          WBP_ReticleHair_Right;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReticleHair_C*                          WBP_ReticleHair_Top;                                       // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                GrenadeTickTimer;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetScaleThreshold;                                      // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MagazineOffset;                                            // 0x02D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LowAmmoThreshold_0_1;                                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EReticleType                            ReticleType;                                               // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RYPV[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinOffset;                                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusAmmo;                                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusAmmoTime;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                AmmoColor;                                                 // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45439);
		return ptr;
	}



	void HandleBonusAmmo(unsigned char AmmoChange, unsigned char AmmoInClip, bool IsBonusAmmo);
	void Set_Reticle_Color(const struct FLinearColor& Color);
	void Set_Reticle_Height(int Height);
	void Set_Reticle_Width(int Width);
	void ChangeReticleSizeInternal(int Center_Dot_Index, int Crosshair_Index);
	void ChangeReticleSize();
	void HideAmmoProgressCircle(bool IsADS);
	void IsValidWeaponType(class UKSWeaponComponent* NewParam1, bool* IsValidWeaponType);
	void ShouldHideAmmoGauge(class UKSWeaponComponent* Weapon, bool* bShouldHideAmmoGauge);
	void UpdateReticleDisplay(float InOffset);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateOffset(float Offset);
	void ChangeADS(bool Active);
	void UpdateAmmoGauge(class UKSWeaponComponent* Weapon, unsigned char AmmoChange, bool BonusAmmo);
	void UpdateMagazineOffset(const struct FVector2D& NewOffset);
	void ExecuteUbergraph_RifleReticle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
