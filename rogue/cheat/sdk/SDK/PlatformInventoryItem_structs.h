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

// Enum PlatformInventoryItem.EExternalSkuSource
enum class PlatformInventoryItem_EExternalSkuSource : uint8_t
{
	EExternalSkuSource__ESS_No_Souce = 0,
	EExternalSkuSource__ESS_Sony   = 1,
	EExternalSkuSource__ESS_Nintendo = 2,
	EExternalSkuSource__ESS_Microsoft_Xbox = 3,
	EExternalSkuSource__ESS_Microsoft_Xbox_GDK = 4,
	EExternalSkuSource__ESS_Epic   = 5,
	EExternalSkuSource__ESS_Valve  = 6,
	EExternalSkuSource__ESS_MAX    = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformInventoryItem.IconReference
// 0x0070
struct FIconReference
{
	struct FName                                       IconType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FSoftObjectPath                             IconPath;                                                  // 0x0030(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LegacySoftTexture[0x28];                                   // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
