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
// Enums
//---------------------------------------------------------------------------

// Enum DataTableSkinsCommon.EMaterialSkinType
enum class DataTableSkinsCommon_EMaterialSkinType : uint8_t
{
	EMaterialSkinType__Material    = 0,
	EMaterialSkinType__InstanceDataMine = 1,
	EMaterialSkinType__ForcedInstanceDataMine = 2,
	EMaterialSkinType__FloatParam  = 3,
	EMaterialSkinType__VectorParam = 4,
	EMaterialSkinType__TextureParam = 5,
	EMaterialSkinType__EMaterialSkinType_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataTableSkinsCommon.DataTableInfo
// 0x0058
struct FDataTableInfo
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TablePriority;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CXH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           SkinTagQuery;                                              // 0x0010(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DataTableSkinsCommon.DynamicSkinTableMapEntry
// 0x0018
struct FDynamicSkinTableMapEntry
{
	class UDynamicSkinTable*                           Table;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W3SG[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableSkinsCommon.HardAssetTableRow
// 0x0090 (0x0098 - 0x0008)
struct FHardAssetTableRow : public FTableRowBase
{
	class UAnimationAsset*                             AnimationAsset;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USelectiveAkAudioEvent*                      SelectiveAudioEvent;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Texture;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bool;                                                      // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WR22[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Float;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LinearColor;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Int;                                                       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameField;                                                 // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_350N[0x1C];                                    // 0x007C(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableSkinsCommon.CachedRowsEntry
// 0x00A0
struct FCachedRowsEntry
{
	int                                                Priority;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CACW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHardAssetTableRow                          Row;                                                       // 0x0008(0x0098) (NativeAccessSpecifierPublic)

};

// ScriptStruct DataTableSkinsCommon.SoftAssetTableRow
// 0x01D0 (0x01D8 - 0x0008)
struct FSoftAssetTableRow : public FTableRowBase
{
	unsigned char                                      AnimationAsset[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AudioEvent[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SelectiveAudioEvent[0x28];                                 // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SkeletalMesh[0x28];                                        // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PhysicsAsset[0x28];                                        // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      StaticMesh[0x28];                                          // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ParticleSystem[0x28];                                      // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      MaterialInterface[0x28];                                   // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Texture[0x28];                                             // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Class[0x28];                                               // 0x0170(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               Bool;                                                      // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQ8E[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Float;                                                     // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LinearColor;                                               // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Int;                                                       // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameField;                                                 // 0x01B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPHW[0x1C];                                    // 0x01BC(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableSkinsCommon.MaterialSkinInfo
// 0x001C
struct FMaterialSkinInfo
{
	struct FName                                       Prefix;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialSlot;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DataTableSkinsCommon_EMaterialSkinType             SkinType;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUJN[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParamName;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValid;                                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMGU[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableSkinsCommon.SkinUpdateTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkinUpdateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_71RS[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableSkinsCommon.SkinStaticMeshUpdateTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkinStaticMeshUpdateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_5K2X[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
