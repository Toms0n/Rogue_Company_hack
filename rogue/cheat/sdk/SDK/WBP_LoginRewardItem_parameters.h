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

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarity
struct UWBP_LoginRewardItem_C_SetRarity_Params
{
	struct FGameplayTagContainer                       GameplayTag;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetColor
struct UWBP_LoginRewardItem_C_SetColor_Params
{
	struct FLinearColor                                RarityColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                RarityColorLight;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetCustomRarity
struct UWBP_LoginRewardItem_C_SetCustomRarity_Params
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GetCustomRarity
struct UWBP_LoginRewardItem_C_GetCustomRarity_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseCustomRarity;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDataTable*                                  DataTable;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRewardItemVisualState
struct UWBP_LoginRewardItem_C_SetRewardItemVisualState_Params
{
	KillstreakUINew_ERewardState                       RewardState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PopulateRewardItem
struct UWBP_LoginRewardItem_C_PopulateRewardItem_Params
{
	struct FLoginRewardItem                            RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarityColorByInventoryItem
struct UWBP_LoginRewardItem_C_SetRarityColorByInventoryItem_Params
{
	class UPlatformInventoryItem*                      InventoryItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PlayClaimAnimation
struct UWBP_LoginRewardItem_C_PlayClaimAnimation_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.Construct
struct UWBP_LoginRewardItem_C_Construct_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.HandleClaimAnimFinished
struct UWBP_LoginRewardItem_C_HandleClaimAnimFinished_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadHover
struct UWBP_LoginRewardItem_C_GamepadHover_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadUnhover
struct UWBP_LoginRewardItem_C_GamepadUnhover_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ExecuteUbergraph_WBP_LoginRewardItem
struct UWBP_LoginRewardItem_C_ExecuteUbergraph_WBP_LoginRewardItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardClicked__DelegateSignature
struct UWBP_LoginRewardItem_C_OnRewardClicked__DelegateSignature_Params
{
	struct FLoginRewardItem                            RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardUnhovered__DelegateSignature
struct UWBP_LoginRewardItem_C_OnRewardUnhovered__DelegateSignature_Params
{
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardHovered__DelegateSignature
struct UWBP_LoginRewardItem_C_OnRewardHovered__DelegateSignature_Params
{
	class UWBP_LoginRewardItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ClaimAnimationComplete__DelegateSignature
struct UWBP_LoginRewardItem_C_ClaimAnimationComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
