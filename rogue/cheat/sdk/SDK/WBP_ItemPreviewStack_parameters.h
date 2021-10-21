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

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.FindWeaponCategoryByWrapTags
struct UWBP_ItemPreviewStack_C_FindWeaponCategoryByWrapTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.FindWeaponForAttachment
struct UWBP_ItemPreviewStack_C_FindWeaponForAttachment_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAsset*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Display Weapon And Attachment
struct UWBP_ItemPreviewStack_C_Display_Weapon_And_Attachment_Params
{
	class UKSWeaponAsset*                              Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAttachment*                         Attachment;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.TriggerNextReactiveState
struct UWBP_ItemPreviewStack_C_TriggerNextReactiveState_Params
{
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetDesiredPreviewSize
struct UWBP_ItemPreviewStack_C_SetDesiredPreviewSize_Params
{
	struct FGameplayTagContainer                       CollectionContainer;                                       // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetPreviewJob
struct UWBP_ItemPreviewStack_C_SetPreviewJob_Params
{
	class UKSJobItem*                                  Job_Item;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle
struct UWBP_ItemPreviewStack_C_SetTitle_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage
struct UWBP_ItemPreviewStack_C_Set2DPreviewImage_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set Emote
struct UWBP_ItemPreviewStack_C_Set_Emote_Params
{
	class UKSItem*                                     EmoteItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetSkinOrRogueModel
struct UWBP_ItemPreviewStack_C_SetSkinOrRogueModel_Params
{
	class UKSSkinBundle*                               SkinBundle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem
struct UWBP_ItemPreviewStack_C_DisplayItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay
struct UWBP_ItemPreviewStack_C_ClearDisplay_Params
{
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget
struct UWBP_ItemPreviewStack_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct
struct UWBP_ItemPreviewStack_C_Construct_Params
{
};

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack
struct UWBP_ItemPreviewStack_C_ExecuteUbergraph_WBP_ItemPreviewStack_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
