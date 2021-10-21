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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CensorAssets.CensorTableRow
// 0x0050 (0x0058 - 0x0008)
struct FCensorTableRow : public FTableRowBase
{
	unsigned char                                      CensoredAsset[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ReplacementAsset[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
