// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EPlayerAccountSlot                      ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoPanel_C::SetInfoFieldData(class UPlatformInventoryItem* CosmeticItem, Killstreak_EPlayerAccountSlot ItemSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86653);

	UWBP_ItemInfoPanel_C_SetInfoFieldData_Params params {};
	params.CosmeticItem = CosmeticItem;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
