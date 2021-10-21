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
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.FindWeaponCategoryByWrapTags
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       Tags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ItemPreviewStack_C::FindWeaponCategoryByWrapTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72231);

	UWBP_ItemPreviewStack_C_FindWeaponCategoryByWrapTags_Params params {};
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.FindWeaponForAttachment
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponAttachment*                         WeaponAttachment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAsset*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSWeaponAsset* UWBP_ItemPreviewStack_C::FindWeaponForAttachment(class UKSWeaponAttachment* WeaponAttachment)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72230);

	UWBP_ItemPreviewStack_C_FindWeaponForAttachment_Params params {};
	params.WeaponAttachment = WeaponAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Display Weapon And Attachment
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAttachment*                         Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::Display_Weapon_And_Attachment(class UKSWeaponAsset* Weapon, class UKSWeaponAttachment* Attachment)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72229);

	UWBP_ItemPreviewStack_C_Display_Weapon_And_Attachment_Params params {};
	params.Weapon = Weapon;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.TriggerNextReactiveState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_ItemPreviewStack_C::TriggerNextReactiveState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72228);

	UWBP_ItemPreviewStack_C_TriggerNextReactiveState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetDesiredPreviewSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTagContainer                       CollectionContainer                                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ItemPreviewStack_C::SetDesiredPreviewSize(const struct FGameplayTagContainer& CollectionContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72227);

	UWBP_ItemPreviewStack_C_SetDesiredPreviewSize_Params params {};
	params.CollectionContainer = CollectionContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetPreviewJob
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  Job_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::SetPreviewJob(class UKSJobItem* Job_Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72226);

	UWBP_ItemPreviewStack_C_SetPreviewJob_Params params {};
	params.Job_Item = Job_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::SetTitle(class UKSItem* KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72225);

	UWBP_ItemPreviewStack_C_SetTitle_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::Set2DPreviewImage(class UKSItem* KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72224);

	UWBP_ItemPreviewStack_C_Set2DPreviewImage_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set Emote
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     EmoteItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::Set_Emote(class UKSItem* EmoteItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72223);

	UWBP_ItemPreviewStack_C_Set_Emote_Params params {};
	params.EmoteItem = EmoteItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetSkinOrRogueModel
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSkinBundle*                               SkinBundle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::SetSkinOrRogueModel(class UKSSkinBundle* SkinBundle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72222);

	UWBP_ItemPreviewStack_C_SetSkinOrRogueModel_Params params {};
	params.SkinBundle = SkinBundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::DisplayItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72221);

	UWBP_ItemPreviewStack_C_DisplayItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemPreviewStack_C::ClearDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72220);

	UWBP_ItemPreviewStack_C_ClearDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72219);

	UWBP_ItemPreviewStack_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemPreviewStack_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72218);

	UWBP_ItemPreviewStack_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemPreviewStack_C::ExecuteUbergraph_WBP_ItemPreviewStack(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72217);

	UWBP_ItemPreviewStack_C_ExecuteUbergraph_WBP_ItemPreviewStack_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
