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

// DynamicClass Master_WeaponComponent.Master_WeaponComponent_C
// 0x0BF0 (FullSize[0x1228] - InheritedSize[0x0638])
class UMaster_WeaponComponent_C : public UKSWeaponComponent
{
public:
	bool                                               Is_ADS;                                                    // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WC7B[0x3];                                     // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Owner_Fire_Section;                                        // 0x063C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7DST[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Owner_1p_ADS_Fire_Section;                                 // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Deattach_Slot_Name;                                        // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Attach_Slot_Name;                                          // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MIrror_Attach_Slot_Name;                                   // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Weapon_Fire_Sound_ID;                                      // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Weapon_Fire_Sound_Interrupts;                              // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FQNA[0x3];                                     // 0x0675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               Weapon_Casing_Sound;                                       // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Equip_Sound;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed_of_Sound;                                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Echo_Max_Distance;                                         // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                            Echo_Directions;                                           // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Echo_Sound_Location;                                       // 0x06A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EBJI[0x4];                                     // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Muzzle_Flash_3p;                                           // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Muzzle_Flash_1p;                                           // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MuzzleSocketName;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Cartridge_Ejection_Attach_Name;                            // 0x06C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitDecalInfo                               Default_Decal_Info;                                        // 0x06D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TEnumAsByte<Engine_EPhysicalSurface>, struct FHitDecalInfo> Physical_Decal_Materials;                                  // 0x06F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Tracer_Template;                                           // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Next_Tracer_Time;                                          // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum_Tracer_Delay;                                      // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Maximum_Tracer_Delay;                                      // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Shot_Count;                                                // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 Tracer_Mesh;                                               // 0x0760(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Tracer_Frequency;                                          // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               Decal_Physical_Surface;                                    // 0x076C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJSR[0x3];                                     // 0x076D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Decal_Location;                                            // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AWU[0x4];                                     // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Temp_Mesh_Material_Override;                               // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CountedShotsLeft;                                          // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7BB[0x4];                                     // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _1P_ADS_Camera_Shake;                                      // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Owner_3p_Fire_Section;                                     // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Counter;                                                   // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMO2[0x4];                                     // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AOS_Camera_Shake;                                          // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      _3P_Camera_Shake;                                          // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CountedMagSize;                                            // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSecondaryWeapon;                                        // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Pistol;                                                 // 0x07C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Dual_Guns;                                              // 0x07C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldSpawnTracers;                                        // 0x07C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldHaveBulletFX;                                        // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldHaveBulletSpangs;                                    // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasFiredByOwner;                                          // 0x07CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XLSF[0x1];                                     // 0x07CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MagazineDropBone;                                          // 0x07CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mirror_Reload_Enabled;                                     // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TR9A[0x3];                                     // 0x07D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Mirror_MagazineDropBone;                                   // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DropBoneOnWeapon;                                          // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TrackingMagDropBone;                                       // 0x07E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHQ2[0xE];                                     // 0x07E2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  DropMagSpawnTransformOveride;                              // 0x07F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DropBonePreviousPosition;                                  // 0x0820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DropBoneVelocity;                                          // 0x082C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DropVelocityOverride;                                      // 0x0838(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Gun_Holstered;                                          // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DropMultipleMags;                                          // 0x0845(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Drop_Multiple_Mags_Velocity_Inheritance_Override;          // 0x0846(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OC0[0x1];                                     // 0x0847(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMultiMagDropInfo>                   MultiMagArray;                                             // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Maintain_Holster;                                          // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Shotgun;                                                // 0x0859(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEA9[0x2];                                     // 0x085A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Target_Shell_Housing_Spin;                                 // 0x085C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Missing_Shell_Count;                                       // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Interp_Speed;                                              // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VsWorldAlphaDiff;                                          // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastUpdatedAlpha;                                          // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Prevent_Vs_World_Active;                                   // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Vs_World_Force_Reset_Delay;                             // 0x0879(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FWF[0x2];                                     // 0x087A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Vs_World_Reset_Delay_Time;                                 // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Able_to_Magdrop_;                                          // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Force_Holster_Mantle;                                      // 0x0881(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Force_Holster_Zipline;                                     // 0x0882(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Scope_Mesh_Scale;                                          // 0x0883(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scope_Scale_Alpha;                                         // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Hide_Materials_Array;                                      // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Vcol_Hide_Needed;                                       // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWT6[0x7];                                     // 0x0899(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSetScopeScaleAlpha;                                      // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetRevolverChamberRotate;                                // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                              CosmeticShotTraceDist;                                     // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOXI[0x4];                                     // 0x08C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleSystemComponent*>            CartridgeEjectParticles;                                   // 0x08C8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            _1PMuzzleFlashParticles;                                   // 0x08D8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            _3pMuzzleFlashParticles;                                   // 0x08E8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPlayADSFire;                                        // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKCH[0x3];                                     // 0x08F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ADSFirePlayPosition;                                       // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AOSFirePlayPosition;                                       // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSFireDelay;                                              // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetLobbyState;                                           // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                               DropMagazineLockout;                                       // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACCT[0x7];                                     // 0x0919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _3P_Camera_Shake_Hi;                                       // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FireCameraModifier;                                        // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFullFireRepData>                    QueuedAimData;                                             // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          ValidHits_Event;                                           // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Should_Play_Impact_Sound;                                  // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Should_Hide_On_Holster;                                    // 0x0951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFireAudioMode_EFireAudioMode                      FireAudioMode;                                             // 0x0952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowNewShotAudio;                                         // 0x0953(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Post_Reload_Delay_Period;                                  // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Folded_Stock;                                              // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AK88[0x3];                                     // 0x0959(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Stock_Rotation;                                            // 0x095C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Stock_alt_Rotation;                                        // 0x0968(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Multi_Stage_Reload_Lockout;                                // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KB6[0x3];                                     // 0x0975(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ViewPawnForwardDir;                                        // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ViewPawnLeftDir;                                           // 0x0984(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastBulletMissTime;                                        // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopingFireAudioCheckTriggerDelay;                         // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoopingFireAudioFadeOutDuration;                           // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFirstShot;                                               // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPlayerControlled;                                        // 0x099D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Lunging_Active;                                            // 0x099E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ADL[0x1];                                     // 0x099F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleSystemComponent*>            _1PAuxMuzzleFlashParticles;                                // 0x09A0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            _3pAuxMuzzleFlashParticles;                                // 0x09B0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldPlayBlockedImpactSound;                              // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSUG[0x7];                                     // 0x09C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Revolving_timer;                                           // 0x09C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Eval_Target_Shell_Housing_Spin;                            // 0x09D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ShouldComputeCosmeticHits;                                 // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               On_Init_Hide_Magazine;                                     // 0x09DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_laser_sight;                                           // 0x09DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CIP[0x1];                                     // 0x09DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    Reticle_Material;                                          // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            RetrieveCombatState;                                       // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QKC[0x7];                                     // 0x09E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Post_Reload_Timer;                                         // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         Old_State;                                                 // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2AP[0x3];                                     // 0x09F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TracerStartPointLocalToOwner;                              // 0x09FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerMinimumOffsetLocallyViewed;                          // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerMaximumOffsetLocallyViewed;                          // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerMinimumOffsetNPC;                                    // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerMaximumOffsetNPC;                                    // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Combat_State_Change_Time;                                  // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mirror_Deattach_Slot_Active;                               // 0x0A1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2J9[0x3];                                     // 0x0A1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Mirror_Deattach_Slot_Name;                                 // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScopeWidgetClass;                                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ScopeWidgetActor;                                          // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetShieldActive;                                         // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TEnumAsByte<Killstreak_EGamepadTriggerType>        PS5_Trigger_Type;                                          // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PS5_Trigger_Start_Position;                                // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PS5_Trigger_Stop_Position;                                 // 0x0A4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PS5_Trigger_Haptic_Strength;                               // 0x0A4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Disable_Alternate_Mirroring;                               // 0x0A4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OHTE[0x3];                                     // 0x0A4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentFirePlayPosition;                                   // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZBJ[0x4];                                     // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Tracer_Particle_System;                                    // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Friendly_Tracer_Material;                                  // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Enemy_Tracer_MaterialInst;                                 // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewVar_1;                                                  // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_bBlockingHit_2;                         // 0x0A71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VD5[0x6];                                     // 0x0A72(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_2;                              // 0x0A78(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start_2;                                // 0x0A88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End_2;                                  // 0x0A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_bBlockingHit;                           // 0x0AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HUDD[0x7];                                     // 0x0AA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits;                                // 0x0AA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start;                                  // 0x0AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End;                                    // 0x0AC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                    // 0x0AD0(0x0088) (Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable;                                        // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_BreakHitResult_bBlockingHit;                      // 0x0B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_BreakHitResult_bInitialOverlap;                   // 0x0B61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZD1[0x2];                                     // 0x0B62(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CallFunc_BreakHitResult_Time;                              // 0x0B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakHitResult_Distance;                          // 0x0B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_Location;                          // 0x0B6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                       // 0x0B78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                            // 0x0B84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                      // 0x0B90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2PN9[0x4];                                     // 0x0B9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                           // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                          // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                      // 0x0BB0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                       // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_BreakHitResult_HitItem;                           // 0x0BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_BreakHitResult_FaceIndex;                         // 0x0BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_TraceStart;                        // 0x0BC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_TraceEnd;                          // 0x0BD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_BreakHitResult_bBlockingHit_2;                    // 0x0BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_BreakHitResult_bInitialOverlap_2;                 // 0x0BE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLUQ[0x2];                                     // 0x0BE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CallFunc_BreakHitResult_Time_2;                            // 0x0BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakHitResult_Distance_2;                        // 0x0BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_Location_2;                        // 0x0BEC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint_2;                     // 0x0BF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_Normal_2;                          // 0x0C04(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal_2;                    // 0x0C10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTJF[0x4];                                     // 0x0C1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat_2;                         // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      CallFunc_BreakHitResult_HitActor_2;                        // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent_2;                    // 0x0C30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName_2;                     // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_BreakHitResult_HitItem_2;                         // 0x0C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_BreakHitResult_FaceIndex_2;                       // 0x0C44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_TraceStart_2;                      // 0x0C48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_BreakHitResult_TraceEnd_2;                        // 0x0C54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitDecalInfo                               CallFunc_Get_Decal_Material_Decal_Info;                    // 0x0C60(0x0028) (Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_bBlockingHit_3;                         // 0x0C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9C8B[0x7];                                     // 0x0C89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_3;                              // 0x0C90(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start_3;                                // 0x0CA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End_3;                                  // 0x0CAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFullFireRepData                            K2Node_CustomEvent_Data;                                   // 0x0CB8(0x0068) (Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_Blocking_Hit;                           // 0x0D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEAX[0x7];                                     // 0x0D21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Out_Hits;                               // 0x0D28(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start_4;                                // 0x0D38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End_4;                                  // 0x0D44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_Allow_Spangs;                           // 0x0D50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_Allow_Tracers;                          // 0x0D51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_Allow_Decals;                           // 0x0D52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SR5W[0x5];                                     // 0x0D53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          CallFunc_Filter_Cosmetic_Hit_Results_Filtered_Hit_Results; // 0x0D58(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           K2Node_DynamicCast_AsPlayer_Controller;                    // 0x0D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                               // 0x0D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_32P3[0x7];                                     // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSDefaultAimTargetingModule*                K2Node_DynamicCast_AsKSDefault_Aim_Targeting_Module;       // 0x0D78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                             // 0x0D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RDIE[0x3];                                     // 0x0D81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CallFunc_IsWallMarkerActive_WallLocation;                  // 0x0D84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits;                                   // 0x0D90(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start_5;                                // 0x0DA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End_5;                                  // 0x0DAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits_2;                                 // 0x0DB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Trace_End;                              // 0x0DC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                      // 0x0DD4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                    // 0x0DE4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaSeconds;                                 // 0x0DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                    // 0x0DF8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_OldState;                                     // 0x0E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_NewState;                                     // 0x0E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                              // 0x0E0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAX8[0x5];                                     // 0x0E0B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFullFireRepData                            K2Node_Event_Data;                                         // 0x0E10(0x0068) (Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          K2Node_CustomEvent_Hits_3;                                 // 0x0E78(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                            // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_199A[0x3];                                     // 0x0E89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CallFunc_GetAnimMontage_Priority;                          // 0x0E8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_2;                        // 0x0E90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable;                            // 0x0E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_bBlockingHit_4;                         // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEXX[0x7];                                     // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          K2Node_CustomEvent_OutHits_4;                              // 0x0EA0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_Start_6;                                // 0x0EB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_CustomEvent_End_6;                                  // 0x0EBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable;                             // 0x0EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVSL[0x4];                                     // 0x0ECC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item;                                   // 0x0ED0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetBool_Priority;                                 // 0x0ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6G1E[0x4];                                     // 0x0EDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFullFireRepData                            K2Node_CustomEvent_Fire_Data;                              // 0x0EE0(0x0068) (Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;            // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetBool_Priority_2;                               // 0x0F50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKO1[0x4];                                     // 0x0F54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       K2Node_CustomEvent_ViewPawn;                               // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            K2Node_CustomEvent_NewState;                               // 0x0F60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RBM[0x7];                                     // 0x0F61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_2;          // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_3;          // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_4;          // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable;                                         // 0x0F80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable_2;                           // 0x0F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_2;                                 // 0x0F88(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                    // 0x0F90(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority;                           // 0x0FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_2;                         // 0x0FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_3;                         // 0x0FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_3;                        // 0x0FAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CallFunc_Get_Player_1P_Fire_Montage_Montage;               // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_4;                        // 0x0FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_5;                        // 0x0FBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkinnableSkeletalMeshComponent*             K2Node_Event_SkinnableSkelComp;                            // 0x0FC0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                      // 0x0FC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable_3;                           // 0x0FD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable_2;                          // 0x0FDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                    // 0x0FE0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable_4;                           // 0x0FF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3XF[0x4];                                     // 0x0FF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_3;                                 // 0x0FF8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable_3;                          // 0x1000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                    // 0x1004(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9A71[0x4];                                     // 0x1014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                    // 0x1018(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_3;                            // 0x1028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENV2[0x3];                                     // 0x1029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Temp_int_Loop_Counter_Variable_4;                          // 0x102C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Temp_object_Variable;                                      // 0x1030(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable_5;                           // 0x1040(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6G6V[0x4];                                     // 0x1044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_4;                                 // 0x1048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 K2Node_Event_EndPlayReason;                                // 0x1050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2EHI[0x7];                                     // 0x1051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacterFoundation*                      K2Node_CustomEvent_KillerCharacter;                        // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacterFoundation*                      K2Node_CustomEvent_KilledCharacter;                        // 0x1060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_4;                            // 0x1068(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0Z1[0x7];                                     // 0x1069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 K2Node_CustomEvent_NewController;                          // 0x1070(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerController*                         K2Node_DynamicCast_AsKSPlayer_Controller;                  // 0x1078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                             // 0x1080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3F6H[0x3];                                     // 0x1081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                  // 0x1084(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7J68[0x4];                                     // 0x1094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_3;                                    // 0x1098(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                  // 0x10A8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable_5;                          // 0x10B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetBool_Priority_3;                               // 0x10BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_6;                        // 0x10C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_7;                        // 0x10C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_5;          // 0x10C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_6;          // 0x10D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_8;                        // 0x10D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_9;                        // 0x10DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                        // 0x10E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3131[0x3];                                     // 0x10E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CallFunc_GetBool_Priority_4;                               // 0x10E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                K2Node_Select_Default;                                     // 0x10E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_10;                       // 0x10F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_11;                       // 0x10F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_12;                       // 0x10F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_13;                       // 0x10FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_7;          // 0x1100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_8;          // 0x1108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_14;                       // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM4E[0x4];                                     // 0x1114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  CallFunc_GetMaterials_ReturnValue;                         // 0x1118(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_15;                       // 0x1128(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQSV[0x4];                                     // 0x112C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          CallFunc_Array_Get_Item_5;                                 // 0x1130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterial_Instance_Dynamic;            // 0x1138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                             // 0x1140(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQKW[0x3];                                     // 0x1141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Temp_int_Variable_2;                                       // 0x1144(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_9;          // 0x1148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_End_Reload_Weapon_Cancelled_A_Reload;             // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PK2J[0x7];                                     // 0x1151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_10;         // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Array_Index_Variable_6;                           // 0x1160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DF6[0x4];                                     // 0x1164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item_6;                                 // 0x1168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_3;                                       // 0x1170(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_4;                         // 0x1174(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                      // 0x1178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4GK[0x7];                                     // 0x1179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                K2Node_Select_Default_2;                                   // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Temp_object_Variable_2;                                    // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                      // 0x1190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            K2Node_CustomEvent_OldCombatState;                         // 0x1191(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            K2Node_CustomEvent_NewCombatState;                         // 0x1192(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KG6K[0x5];                                     // 0x1193(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  K2Node_Select_Default_3;                                   // 0x1198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                    // 0x11A0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                  // 0x11B0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_4;                                    // 0x11C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_11;         // 0x11D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                    // 0x11D8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_12;         // 0x11E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                    // 0x11F0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                    // 0x1200(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	class UKSWeaponAnimInstance*                       K2Node_DynamicCast_AsKSWeapon_Anim_Instance;               // 0x1210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                             // 0x1218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_27WK[0x3];                                     // 0x1219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Temp_int_Loop_Counter_Variable_6;                          // 0x121C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                CallFunc_Get_Player_3P_Fire_Montage_Montage;               // 0x1220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25610);
		return ptr;
	}



	void OnSetShieldActive__DelegateSignature(bool bpp__ShieldIsActive__pf);
	void OnSetScopeScaleAlpha__DelegateSignature(float bpp__NewxAlpha__pfT);
	void OnSetRevolverChamberRotate__DelegateSignature(const struct FRotator& bpp__NewxRevolverxChamberxRotator__pfTTT);
	void OnSetLobbyState__DelegateSignature(bool bpp__LobbyxState__pfT);
	void Update_Tracer_Start_Point();
	void Update_Fire_Anim_on_MIrror_Pose_Changed();
	void Update_Combat_State(Killstreak_ECombatState bpp__NewState__pf);
	void UpdateMagDropBoneVelocity(float bpp__DeltaTime__pf, int bpp__Index__pf);
	void UpdateAimDownSightsBlurValues();
	void TryDisableCameraModifier(class UClass* bpp__CameraxModifier__pfT, int bpp__PlayerxIndex__pfT, bool* bpp__Found__pf);
	void SyncComputeCosmeticHits(const struct FFullFireRepData& bpp__FireData__pf, TArray<struct FHitResult>* bpp__Hits__pf);
	void Spawn_Tracers_Simple(TArray<struct FHitResult>* bpp__Hits__pf, const struct FVector& bpp__TracexEnd__pfT);
	void Spawn_Tracer(const struct FVector& bpp__EndPoint__pf);
	void Spawn_Spangs_and_Decals(const struct FFullFireRepData& bpp__Data__pf__const, TArray<struct FHitResult>* bpp__Hits__pf, struct FFullFireRepData* bpp__OutxData__pfT);
	void SpawnTracers(TArray<struct FHitResult>* bpp__Hits__pf, TArray<struct FFullFireRepData>* bpp__AimData__pf);
	void SpawnSpangs(TArray<struct FHitResult>* bpp__Hits__pf);
	void SpawnDecals(TArray<struct FHitResult>* bpp__Hits__pf);
	void ShouldPlayFireAnim1P(bool* bpp__Playx1PxFire__pfTT);
	void Set_Scope_Scale_Alpha(float bpp__NewxAlpha__pfT);
	void Set_Revolver_Chamber_Rotate(const struct FRotator& bpp__TargetxRotator__pfT, bool bpp__ResetxRotation__pfT);
	void Set_Muzzle_Flash_Emitter_and_Offset();
	void Setup_Tracers();
	void Setup_Character_Mirror_Anims();
	void Setup_Character_Anim_Init_Callback();
	void SetupMultiPrimary();
	void SetUIWidget();
	class UAnimMontage* Select_Weapon_Reload_Montage(bool bpp__IsxQuickxReload__pfTT);
	void Select_Character_Reload_Montage(class UAnimMontage** bpp__ReloadMontage__pf, class UAnimMontage** bpp__QuickReloadMontage__pf);
	void Retrieve_Weapon();
	void Reticle_Rotate();
	void Reset_Variables_at_Start_of_Firing_Instance();
	void Reload_Weapon();
	void Reload_Cooldown_Weapon();
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> bpp__EndPlayReason__pf);
	void ReceiveBeginPlay();
	void Pre_Fire_Weapon();
	void Prepare_Next_Tracer_Spawn();
	void Post_Fire_Weapon();
	void Play_Weapon_Reload_animation(float bpp__PlayRate__pf, bool bpp__IsxQuickxReload__pfTT);
	void Play_Reload_MultiStage(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT);
	void Play_Reload_Logic(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickReloadxMontage__pfT, bool bpp__IsxMultixStagexReloadx__pfTTTzy);
	void Play_Reload_Base(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT);
	void Play_Post_Reload();
	void Play_Fire_Tail_Sound(AkAudio_EAkCallbackType bpp__CallbackxType__pfT, class UAkCallbackInfo* bpp__CallbackxInfo__pfT);
	void Play_Fire_Camera_Shakes(bool bpp__LocalOnly__pf, class UClass* bpp__PrimaryxShake__pfT, class UClass* bpp__HiFreqxShake__pfT);
	void Play_Casing_Sound();
	void Play_Bullet_Impact_SFX(const struct FHitResult& bpp__HitResult__pf);
	void PlayInvalidFireSound();
	void PlayFireSound(const struct FAimData& bpp__InputPin__pf__const);
	void PlayEmptyFireAudio();
	void On_Cosmetic_Trace_Complete_Internal(bool bpp__BlockingxHit__pfT__const, TArray<struct FHitResult>* bpp__OutxHits__pfT, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const, bool bpp__AllowxSpangs__pfT, bool bpp__AllowxTracers__pfT, bool bpp__AllowxDecals__pfT);
	void On_Comestic_Trace_Complete(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const);
	void On_Character_Anim_Initialized();
	void OnPossessedBy_Event_1(class AController* bpp__NewController__pf);
	void OnMirrorPoseChanged();
	void OnKilled_Event_1(class AKSCharacterFoundation* bpp__KillerCharacter__pf__const, class AKSCharacterFoundation* bpp__KilledCharacter__pf__const);
	void NotifyStopFireReceived();
	bool IsDropMeshValid(int bpp__Index__pf);
	void IdleWeapon(Killstreak_EWeaponStateNew bpp__OldState__pf);
	void Holster_Weapon();
	void Hide_Magazine();
	void HasUIWidget(bool* bpp__HasUIWidget__pf);
	void HandleWeaponFiringClientEffects(const struct FFullFireRepData& bpp__Data__pf);
	void Get_Tracer_Offset(float* bpp__Offset__pf);
	void Get_Spang_Particle_System(const struct FHitResult& bpp__Hit__pf, class UParticleSystem** bpp__SpangxToxUse__pfTT, bool* bpp__PlayOnHitCharacter__pf);
	void Get_Scaled_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Scaled_Post_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void Get_Reticle_Material();
	void Get_Post_Reload_Weapon_Section_Time(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__PostxReloadxPosition__pfTT);
	void Get_Player_3P_Lunge_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Player_3P_Fire_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Player_1P_Fire_Montage(class UAnimMontage** bpp__Montage__pf);
	void Get_Holster_Visibility(bool* bpp__Visibility__pf, class UKSWeaponComponent** bpp__WeaponComponent__pf);
	void Get_Expected_Aim_Data(struct FAimData* bpp__AimData__pf);
	void Get_Decal_Material(const struct FHitResult& bpp__Hit__pf, struct FHitDecalInfo* bpp__DecalxInfo__pfT);
	void Get_Deattach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT);
	void Get_Character_Anim_Instance(class UKSCharacterAnimInst** bpp__AnimxInst__pfT);
	void Get_Character_3p_Fire_Section(struct FName* bpp__3pxFirexSection__pfTT);
	void Get_Character_1p_Fire_Section(struct FName* bpp__1pxFirexSection__pfTT);
	void Get_Attach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT);
	void GetTracerStartPoint(struct FVector* bpp__TracerStartLocation__pf);
	void GetTableRowNameForHit(const struct FHitResult& bpp__Hit__pf, const struct FName& bpp__RowNamePrefix__pf, struct FName* bpp__RowName__pf);
	void GetPercentRemainingAmmo(float* bpp__Percent__pf);
	void GetMagDropBoneRotation(int bpp__Index__pf, struct FRotator* bpp__WorldRotation__pf);
	void GetMagDropBoneLocation(int bpp__Index__pf, struct FVector* bpp__WorldLocation__pf);
	void GetMagazineDropBoneName(struct FName* bpp__Name__pf);
	class UAkAudioEvent* GetFirstShotAudioEvent();
	class UAkAudioEvent* GetFireAudioEvent();
	class UAkAudioEvent* GetEchoAudioEvent();
	void GetDropVelocity(int bpp__Index__pf, struct FVector* bpp__WorldVelocity__pf);
	void GetDropMesh(int bpp__Index__pf, class USkeletalMesh** bpp__SkelMesh__pf, class UStaticMesh** bpp__StaticMesh__pf);
	void Force_Exit_ADS_Pose();
	void Force_ADS_Scope();
	void ForceRetrieveWeapon();
	void ForceRetrieveState();
	void ForceHolsterWeapon();
	void ForceAttachWeaponToHolsterSocket();
	void ForceAttachWeaponToActiveSocket();
	void Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf);
	void Fixup_Attach_Point();
	void Fire_Weapon(const struct FFullFireRepData& bpp__Data__pf, bool bpp__PlayNoChainFireMontage__pf);
	void Fire_Montage_Jump_To_Section(const struct FString& bpp__Section__pf__const);
	void Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* bpp__TracexHitxResults__pfTT, TArray<struct FHitResult>* bpp__FilteredxHitxResults__pfTT);
	void ExecuteUbergraph_Master_WeaponComponent_6(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_43(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_41(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_39(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_35(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_4(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_Master_WeaponComponent_1(int bpp__EntryPoint__pf);
	void Evaluate_Shield_Mesh_Anim_State(bool bpp__ShieldxState__pfT);
	void Evaluate_Revolver_Chamber_Rotate();
	void End_Reload_Weapon(bool bpp__AbortxReloadxAnimation__pfTT, bool* bpp__CancelledxAxReload__pfTT);
	void EnableOrAddCameraModifier(class UClass* bpp__Modifier__pf, int bpp__PlayerIndex__pf, class UCameraModifier** bpp__ModifierxObject__pfT);
	void DropMagInternal(int bpp__Index__pf);
	void DropMagazine();
	void DetermineMagSize();
	void Delay_Spawn_Tracers(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__TracexEnd__pfT__const);
	void Delay_Spawn_Spangs(TArray<struct FHitResult>* bpp__Hits__pf);
	void Delay_Spawn_Decals(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__Start__pf, const struct FVector& bpp__End__pf);
	void CheckKillCamScope(class APawn* bpp__ViewPawn__pf);
	void Character_Combat_State_Changed(Killstreak_ECombatState bpp__OldCombatState__pf, Killstreak_ECombatState bpp__NewCombatState__pf);
	void Can_Spawn_Tracer_Now(bool* bpp__CanxSpawnxxTracer__pfTTT);
	void CancelReloadCosmetic();
	void Calculate_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT);
	void Calculate_Multistage_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT);
	void BuildupWeapon();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintPersistentCosmeticsUpdate();
	void AudioOnCooldown();
	void Attach_Weapon_To_Holster_Socket();
	void Attach_Weapon_To_Active_Socket();
	void AsyncComputeCosmeticHitsAndPlay(const struct FFullFireRepData& bpp__FirexData__pfT__const);
	void Apply_Spang_From_Hit_Result(const struct FHitResult& bpp__Hit__pf);
	void ApplyDecalFromHit(const struct FHitResult& bpp__Hit__pf);
	void Anim_Init_Set_Weapon_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Use_Weapon_Additive(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Shield_Is_Active(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Scope_Mesh_Scale(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Lobby_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT, class UAnimInstance* bpp__BackupxAnimxInst__pfTT);
	void Anim_Init_Set_Hide_Magazine(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Folding_Stock(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_Set_Disable_Alternate_Mirroring__Temp_(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT);
	void Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent* bpp__SkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf);
	void Ancillary_Mesh_Scale_Set();
	void Aim_Over_Shoulder_Check_Point();
	void After_Spawn_Tracers_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const);
	void After_Spawn_Spangs_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const);
	void After_Spawn_Decals_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const);
	void OnWeaponComponentStateChanged__DelegateSignature(class UKSWeaponComponent* bpp__WeaponComponent__pf, Killstreak_EWeaponStateNew bpp__OldState__pf, Killstreak_EWeaponStateNew bpp__NewState__pf);
	void OnPossessedBy__DelegateSignature(class AController* bpp__NewController__pf);
	void OnCombatStateChanged__DelegateSignature(Killstreak_ECombatState bpp__OldCombatState__pf, Killstreak_ECombatState bpp__NewCombatState__pf);
	void OnCharacterFoundationKilled__DelegateSignature(class AKSCharacterFoundation* bpp__KillerCharacter__pf, class AKSCharacterFoundation* bpp__KilledCharacter__pf);
	void OnAnimInitializedOnSkinnableMesh__DelegateSignature(class USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf);
	void OnAnimInitialized__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
