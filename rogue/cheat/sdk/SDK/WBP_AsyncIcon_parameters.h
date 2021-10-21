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
// Parameters
//---------------------------------------------------------------------------

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush From Icon Info
struct UWBP_AsyncIcon_C_Set_Brush_From_Icon_Info_Params
{
	class UIconInfo*                                   Icon_Info;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Path on Item
struct UWBP_AsyncIcon_C_Set_Brush_from_Path_on_Item_Params
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSoftObjectPath                             Path;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftPath
struct UWBP_AsyncIcon_C_SetBrushFromSoftPath_Params
{
	struct FSoftObjectPath                             Soft_Path;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
struct UWBP_AsyncIcon_C_Set_Brush_from_Texture_on_Item_Params
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
struct UWBP_AsyncIcon_C_Get_Material_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
struct UWBP_AsyncIcon_C_SetMaterialToUse_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
struct UWBP_AsyncIcon_C_ApplyDefaultBrush_Params
{
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
struct UWBP_AsyncIcon_C_SetBrushFromSoftTexture_Params
{
	bool                                               MatchSize;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
struct UWBP_AsyncIcon_C_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
struct UWBP_AsyncIcon_C_SetBrushFromItemIcon_Params
{
	class UPlatformInventoryItem*                      Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
struct UWBP_AsyncIcon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
struct UWBP_AsyncIcon_C_Construct_Params
{
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
struct UWBP_AsyncIcon_C_OnStartLoad_Params
{
	class UPUMG_AsyncImage*                            Image;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
struct UWBP_AsyncIcon_C_OnFinishLoad_Params
{
	class UPUMG_AsyncImage*                            Image;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
struct UWBP_AsyncIcon_C_ExecuteUbergraph_WBP_AsyncIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
struct UWBP_AsyncIcon_C_OnIconUpdated__DelegateSignature_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
