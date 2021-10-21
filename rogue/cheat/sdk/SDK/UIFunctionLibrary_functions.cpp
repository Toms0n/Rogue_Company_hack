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
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.SaveLocalAction
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_SaveLocalAction(const struct FName& ActionName, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44761);

	UUIFunctionLibrary_C_SaveLocalAction_Params params {};
	params.ActionName = ActionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.IsLocalActionSaved
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ActionSaved                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIFunctionLibrary_C::STATIC_IsLocalActionSaved(const struct FName& ActionName, class UObject* __WorldContext, bool* ActionSaved)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44760);

	UUIFunctionLibrary_C_IsLocalActionSaved_Params params {};
	params.ActionName = ActionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionSaved != nullptr)
		*ActionSaved = params.ActionSaved;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.Get Formatted Info Name For Store Item
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ExternalQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       NameText                                                   (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_Get_Formatted_Info_Name_For_Store_Item(class UPUMG_StoreItem* StoreItem, int ExternalQuantity, class UObject* __WorldContext, struct FText* NameText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44759);

	UUIFunctionLibrary_C_Get_Formatted_Info_Name_For_Store_Item_Params params {};
	params.StoreItem = StoreItem;
	params.ExternalQuantity = ExternalQuantity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NameText != nullptr)
		*NameText = params.NameText;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.Get Hero Primary Weapon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAsset*                              Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_Get_Hero_Primary_Weapon(class UObject* __WorldContext, class UKSWeaponAsset** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44758);

	UUIFunctionLibrary_C_Get_Hero_Primary_Weapon_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetCosmeticTagArrayByTags
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FText>                               CosmeticTags                                               (Parm, OutParm, HasGetValueTypeHash)
//		bool                                               TagsFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIFunctionLibrary_C::STATIC_GetCosmeticTagArrayByTags(const struct FGameplayTagContainer& TagContainer, class UObject* __WorldContext, TArray<struct FText>* CosmeticTags, bool* TagsFound)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44757);

	UUIFunctionLibrary_C_GetCosmeticTagArrayByTags_Params params {};
	params.TagContainer = TagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CosmeticTags != nullptr)
		*CosmeticTags = params.CosmeticTags;
	if (TagsFound != nullptr)
		*TagsFound = params.TagsFound;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRogueBucksItemId
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetRogueBucksItemId(class UObject* __WorldContext, int* ItemId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44756);

	UUIFunctionLibrary_C_GetRogueBucksItemId_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetSettingsDataFactory
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSSettingsDataFactory*                      SettingsDataFactory                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetSettingsDataFactory(class UObject* __WorldContext, class UKSSettingsDataFactory** SettingsDataFactory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44755);

	UUIFunctionLibrary_C_GetSettingsDataFactory_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsDataFactory != nullptr)
		*SettingsDataFactory = params.SettingsDataFactory;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetHUDCommon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSHUDCommon*                                HUD_Common                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetHUDCommon(class UObject* __WorldContext, class AKSHUDCommon** HUD_Common)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44754);

	UUIFunctionLibrary_C_GetHUDCommon_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUD_Common != nullptr)
		*HUD_Common = params.HUD_Common;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.SetupInputCallout
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_InputCallout_C*                         InputCallout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44753);

	UUIFunctionLibrary_C_SetupInputCallout_Params params {};
	params.InputCallout = InputCallout;
	params.HUD = HUD;
	params.InputState = InputState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.AssignActionIcon
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_AssignActionIcon(class UImage* Image, const struct FName& ActionName, bool MatchSize, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44752);

	UUIFunctionLibrary_C_AssignActionIcon_Params params {};
	params.Image = Image;
	params.ActionName = ActionName;
	params.MatchSize = MatchSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionByLevel
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                RankedLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankedTier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Division                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetRankedTierAndDivisionByLevel(int RankedLevel, class UObject* __WorldContext, TEnumAsByte<E_RankedTiers_E_RankedTiers>* RankedTier, int* Division)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44751);

	UUIFunctionLibrary_C_GetRankedTierAndDivisionByLevel_Params params {};
	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RankedTier != nullptr)
		*RankedTier = params.RankedTier;
	if (Division != nullptr)
		*Division = params.Division;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedTierAndDivisionTextByLevel
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                RankedLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RankedTierRichText                                         (Parm, OutParm)
//		struct FText                                       RankedDivisionText                                         (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetRankedTierAndDivisionTextByLevel(int RankedLevel, class UObject* __WorldContext, struct FText* RankedTierRichText, struct FText* RankedDivisionText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44750);

	UUIFunctionLibrary_C_GetRankedTierAndDivisionTextByLevel_Params params {};
	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RankedTierRichText != nullptr)
		*RankedTierRichText = params.RankedTierRichText;
	if (RankedDivisionText != nullptr)
		*RankedDivisionText = params.RankedDivisionText;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRankedBadgeTextureByLevel
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                RankedLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  RankedBadgeTexture                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetRankedBadgeTextureByLevel(int RankedLevel, class UObject* __WorldContext, class UTexture2D** RankedBadgeTexture)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44749);

	UUIFunctionLibrary_C_GetRankedBadgeTextureByLevel_Params params {};
	params.RankedLevel = RankedLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RankedBadgeTexture != nullptr)
		*RankedBadgeTexture = params.RankedBadgeTexture;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetDefaultAccountItemForSlot
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_EPlayerAccountSlot                      Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPlatformInventoryItem*                      Default_Item                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetDefaultAccountItemForSlot(Killstreak_EPlayerAccountSlot Slot, class UObject* __WorldContext, class UPlatformInventoryItem** Default_Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44748);

	UUIFunctionLibrary_C_GetDefaultAccountItemForSlot_Params params {};
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Default_Item != nullptr)
		*Default_Item = params.Default_Item;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetInputTypeIcon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_EKSPlayerInputType                      InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetInputTypeIcon(Killstreak_EKSPlayerInputType InputType, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44747);

	UUIFunctionLibrary_C_GetInputTypeIcon_Params params {};
	params.InputType = InputType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformIcon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_EKSPlatformType                         Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetPlatformIcon(Killstreak_EKSPlatformType Platform, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44746);

	UUIFunctionLibrary_C_GetPlatformIcon_Params params {};
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetDamageTypeResistIcon
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UClass*                                      Damage_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Resisted_Icon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetDamageTypeResistIcon(class UClass* Damage_Type, class UObject* __WorldContext, class UTexture2D** Resisted_Icon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44745);

	UUIFunctionLibrary_C_GetDamageTypeResistIcon_Params params {};
	params.Damage_Type = Damage_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resisted_Icon != nullptr)
		*Resisted_Icon = params.Resisted_Icon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityFormatByTag
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RarityFormat                                               (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetRarityFormatByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityFormat)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44744);

	UUIFunctionLibrary_C_GetRarityFormatByTag_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RarityFormat != nullptr)
		*RarityFormat = params.RarityFormat;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetFontByName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       FontName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSlateFontInfo                              FontInfo                                                   (Parm, OutParm, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetFontByName(const struct FName& FontName, class UObject* __WorldContext, bool* HasFound, struct FSlateFontInfo* FontInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44743);

	UUIFunctionLibrary_C_GetFontByName_Params params {};
	params.FontName = FontName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (FontInfo != nullptr)
		*FontInfo = params.FontInfo;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorByName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetColorByName(const struct FName& ColorName, class UObject* __WorldContext, bool* HasFound, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44742);

	UUIFunctionLibrary_C_GetColorByName_Params params {};
	params.ColorName = ColorName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityHighlightColorByTag
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 RarityColor                                                (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetRarityHighlightColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44741);

	UUIFunctionLibrary_C_GetRarityHighlightColorByTag_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RarityColor != nullptr)
		*RarityColor = params.RarityColor;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette_v2
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUIColorPalette_v2                          ColorPalette                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetColorPalette_v2(class UObject* __WorldContext, struct FUIColorPalette_v2* ColorPalette)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44740);

	UUIFunctionLibrary_C_GetColorPalette_v2_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorPalette != nullptr)
		*ColorPalette = params.ColorPalette;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetWeaponTypeAsText
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTag                                WeaponTypeTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetWeaponTypeAsText(const struct FGameplayTag& WeaponTypeTag, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44739);

	UUIFunctionLibrary_C_GetWeaponTypeAsText_Params params {};
	params.WeaponTypeTag = WeaponTypeTag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ItemType                                                   (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetItemType(class UPlatformInventoryItem* InventoryItem, class UObject* __WorldContext, struct FText* ItemType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44738);

	UUIFunctionLibrary_C_GetItemType_Params params {};
	params.InventoryItem = InventoryItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemType != nullptr)
		*ItemType = params.ItemType;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimeDelta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Scrolled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIFunctionLibrary_C::STATIC_UpdateScrollBoxOffset(class UScrollBox* ScrollBox, float Speed, float TimeDelta, class UObject* __WorldContext, bool* Scrolled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44737);

	UUIFunctionLibrary_C_UpdateScrollBoxOffset_Params params {};
	params.ScrollBox = ScrollBox;
	params.Speed = Speed;
	params.TimeDelta = TimeDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scrolled != nullptr)
		*Scrolled = params.Scrolled;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
//		bool                                               Shorthand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetFormattedTimeSpan(struct FTimespan* Timespan, bool Shorthand, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44736);

	UUIFunctionLibrary_C_GetFormattedTimeSpan_Params params {};
	params.Shorthand = Shorthand;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;
	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Timer_Seconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency> Urgency_Level                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIFunctionLibrary_C::STATIC_IsMatchTimerAtLeastThisUrgent(float Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency> Urgency_Level, class UObject* __WorldContext, bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44735);

	UUIFunctionLibrary_C_IsMatchTimerAtLeastThisUrgent_Params params {};
	params.Timer_Seconds = Timer_Seconds;
	params.Urgency_Level = Urgency_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Timer_Seconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency> Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetMatchTimerVisualUrgency(float Timer_Seconds, class UObject* __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44734);

	UUIFunctionLibrary_C_GetMatchTimerVisualUrgency_Params params {};
	params.Timer_Seconds = Timer_Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityValueByTag
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                RarityValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetRarityValueByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, int* RarityValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44733);

	UUIFunctionLibrary_C_GetRarityValueByTag_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RarityValue != nullptr)
		*RarityValue = params.RarityValue;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RarityName                                                 (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetRarityNameByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44732);

	UUIFunctionLibrary_C_GetRarityNameByTag_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RarityName != nullptr)
		*RarityName = params.RarityName;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 RarityColor                                                (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetRarityColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44731);

	UUIFunctionLibrary_C_GetRarityColorByTag_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RarityColor != nullptr)
		*RarityColor = params.RarityColor;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Return_Value                                               (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetPlatformViewProfileText(class UObject* __WorldContext, struct FText* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44730);

	UUIFunctionLibrary_C_GetPlatformViewProfileText_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetSelfColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44729);

	UUIFunctionLibrary_C_GetSelfColor_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetEnemyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44728);

	UUIFunctionLibrary_C_GetEnemyColor_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetFriendlyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44727);

	UUIFunctionLibrary_C_GetFriendlyColor_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_PlayerInfo*                            PersonalChannelPlayer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetTextChatChannelName(PlatformUMG_EPUMG_ChatChannel Channel, class UPUMG_PlayerInfo* PersonalChannelPlayer, class UObject* __WorldContext, struct FText* Name)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44726);

	UUIFunctionLibrary_C_GetTextChatChannelName_Params params {};
	params.Channel = Channel;
	params.PersonalChannelPlayer = PersonalChannelPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  TextWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_SetTextChatWidgetColor(PlatformUMG_EPUMG_ChatChannel Channel, class UTextBlock* TextWidget, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44725);

	UUIFunctionLibrary_C_SetTextChatWidgetColor_Params params {};
	params.Channel = Channel;
	params.TextWidget = TextWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ValidIconFound                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTexture2D*                                  OutIconTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetCrossplayIcon(class UObject* __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44724);

	UUIFunctionLibrary_C_GetCrossplayIcon_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidIconFound != nullptr)
		*ValidIconFound = params.ValidIconFound;
	if (OutIconTexture != nullptr)
		*OutIconTexture = params.OutIconTexture;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetCashColor(class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44723);

	UUIFunctionLibrary_C_GetCashColor_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Minute_Digits                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShowTenths                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Timer_Text                                                 (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_FormatSecondsToTimerText(float Seconds, int Minute_Digits, bool ShowTenths, class UObject* __WorldContext, struct FText* Timer_Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44722);

	UUIFunctionLibrary_C_FormatSecondsToTimerText_Params params {};
	params.Seconds = Seconds;
	params.Minute_Digits = Minute_Digits;
	params.ShowTenths = ShowTenths;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timer_Text != nullptr)
		*Timer_Text = params.Timer_Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUISoundLibraries                           SoundLibrary                                               (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetSoundLibraries(class UObject* __WorldContext, struct FUISoundLibraries* SoundLibrary)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44721);

	UUIFunctionLibrary_C_GetSoundLibraries_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoundLibrary != nullptr)
		*SoundLibrary = params.SoundLibrary;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSLoadoutBundle*                            Loadout_Bundle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Role_Dark_Color                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Role_Light_Color                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetColorForLoadoutBundle(class UKSLoadoutBundle* Loadout_Bundle, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44720);

	UUIFunctionLibrary_C_GetColorForLoadoutBundle_Params params {};
	params.Loadout_Bundle = Loadout_Bundle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_ESpecialtyRoleType                      Specialty_Role_Type                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Role_Name                                                  (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetTextForSpecialtyCategory(Killstreak_ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FText* Role_Name)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44719);

	UUIFunctionLibrary_C_GetTextForSpecialtyCategory_Params params {};
	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role_Name != nullptr)
		*Role_Name = params.Role_Name;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_ESpecialtyRoleType                      Specialty_Role_Type                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Role_Dark_Color                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Role_Light_Color                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetColorForSpecialtyCategory(Killstreak_ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44718);

	UUIFunctionLibrary_C_GetColorForSpecialtyCategory_Params params {};
	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUIColorPalette                             ColorPalette                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetColorPalette(class UObject* __WorldContext, struct FUIColorPalette* ColorPalette)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44717);

	UUIFunctionLibrary_C_GetColorPalette_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorPalette != nullptr)
		*ColorPalette = params.ColorPalette;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FUIFontPalette                              UI_Fonts                                                   (Parm, OutParm, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetSlateFontInfo(class UObject* __WorldContext, struct FUIFontPalette* UI_Fonts)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44716);

	UUIFunctionLibrary_C_GetSlateFontInfo_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UI_Fonts != nullptr)
		*UI_Fonts = params.UI_Fonts;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Med_Green                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Med_Green_Light                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetMedColor(class UObject* __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44715);

	UUIFunctionLibrary_C_GetMedColor_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Med_Green != nullptr)
		*Med_Green = params.Med_Green;
	if (Med_Green_Light != nullptr)
		*Med_Green_Light = params.Med_Green_Light;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              HideAnimTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetHideAnimDefaultTime(class UObject* __WorldContext, float* HideAnimTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44714);

	UUIFunctionLibrary_C_GetHideAnimDefaultTime_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HideAnimTime != nullptr)
		*HideAnimTime = params.HideAnimTime;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ShowAnimTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetShowAnimDefaultTime(class UObject* __WorldContext, float* ShowAnimTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44713);

	UUIFunctionLibrary_C_GetShowAnimDefaultTime_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowAnimTime != nullptr)
		*ShowAnimTime = params.ShowAnimTime;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		unsigned char                                      CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  CurrencyIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_CurrencyTypeToCurrencyIcon(unsigned char CurrencyType, class UObject* __WorldContext, class UTexture2D** CurrencyIcon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44712);

	UUIFunctionLibrary_C_CurrencyTypeToCurrencyIcon_Params params {};
	params.CurrencyType = CurrencyType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                CurrencyId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  CurrencyIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_CurrencyIdToCurrencyIcon(int CurrencyId, class UObject* __WorldContext, class UTexture2D** CurrencyIcon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44711);

	UUIFunctionLibrary_C_CurrencyIdToCurrencyIcon_Params params {};
	params.CurrencyId = CurrencyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team_Num                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_Get_Opposing_Team_Num(int Team_Num, class UObject* __WorldContext, int* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44710);

	UUIFunctionLibrary_C_Get_Opposing_Team_Num_Params params {};
	params.Team_Num = Team_Num;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Friendly                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Enemy                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Neutral                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetAlignmentColors(class UObject* __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44709);

	UUIFunctionLibrary_C_GetAlignmentColors_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_InvertColor(const struct FLinearColor& Color, class UObject* __WorldContext, struct FLinearColor* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44708);

	UUIFunctionLibrary_C_InvertColor_Params params {};
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetIconForGamepadButton(const struct FKey& Button, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44707);

	UUIFunctionLibrary_C_GetIconForGamepadButton_Params params {};
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector2D                                   Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Line_Count                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Anti_Alias                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_DrawCircle(struct FPaintContext* Context, const struct FVector2D& Center, float Radius, const struct FLinearColor& Tint, int Line_Count, bool Anti_Alias, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44706);

	UUIFunctionLibrary_C_DrawCircle_Params params {};
	params.Center = Center;
	params.Radius = Radius;
	params.Tint = Tint;
	params.Line_Count = Line_Count;
	params.Anti_Alias = Anti_Alias;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                TeamNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Abbreviate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       teamName                                                   (Parm, OutParm)
void UUIFunctionLibrary_C::STATIC_GetTeamName(int TeamNum, bool Abbreviate, class UObject* __WorldContext, struct FText* teamName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44705);

	UUIFunctionLibrary_C_GetTeamName_Params params {};
	params.TeamNum = TeamNum;
	params.Abbreviate = Abbreviate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (teamName != nullptr)
		*teamName = params.teamName;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  FriendlyBorder                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  FriendlyFill                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  FriendlyIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  EnemyBorder                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  EnemyFill                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  EnemyIcon                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetLargeTeamIcons(class UObject* __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44704);

	UUIFunctionLibrary_C_GetLargeTeamIcons_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendlyBorder != nullptr)
		*FriendlyBorder = params.FriendlyBorder;
	if (FriendlyFill != nullptr)
		*FriendlyFill = params.FriendlyFill;
	if (FriendlyIcon != nullptr)
		*FriendlyIcon = params.FriendlyIcon;
	if (EnemyBorder != nullptr)
		*EnemyBorder = params.EnemyBorder;
	if (EnemyFill != nullptr)
		*EnemyFill = params.EnemyFill;
	if (EnemyIcon != nullptr)
		*EnemyIcon = params.EnemyIcon;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                TeamNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OwningPlayerNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Team_Color                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Found_Color                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIFunctionLibrary_C::STATIC_GetTeamColor(int TeamNum, int OwningPlayerNum, class UObject* __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44703);

	UUIFunctionLibrary_C_GetTeamColor_Params params {};
	params.TeamNum = TeamNum;
	params.OwningPlayerNum = OwningPlayerNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Team_Color != nullptr)
		*Team_Color = params.Team_Color;
	if (Found_Color != nullptr)
		*Found_Color = params.Found_Color;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Common                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Rare                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Epic                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Legendary                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GetRarityColors(class UObject* __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44702);

	UUIFunctionLibrary_C_GetRarityColors_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Common != nullptr)
		*Common = params.Common;
	if (Rare != nullptr)
		*Rare = params.Rare;
	if (Epic != nullptr)
		*Epic = params.Epic;
	if (Legendary != nullptr)
		*Legendary = params.Legendary;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker
//		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		int                                                TestIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumColumns                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HorizontalWrapping                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                SourceIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_GridIndexChecker(TArray<class UPUMG_Widget*>* Array, int TestIndex, int NumColumns, bool HorizontalWrapping, int SourceIndex, class UObject* __WorldContext, class UPUMG_Widget** Output)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44701);

	UUIFunctionLibrary_C_GridIndexChecker_Params params {};
	params.TestIndex = TestIndex;
	params.NumColumns = NumColumns;
	params.HorizontalWrapping = HorizontalWrapping;
	params.SourceIndex = SourceIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker
//		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_LinearIndexChecker(TArray<class UPUMG_Widget*>* Array, int Index, class UObject* __WorldContext, class UPUMG_Widget** Output)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44700);

	UUIFunctionLibrary_C_LinearIndexChecker_Params params {};
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                ParentWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UPUMG_Widget*>                        NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Horizontal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Looping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUIFunctionLibrary_C::STATIC_SetUpLinearNavigation(class UPUMG_Widget* ParentWidget, TArray<class UPUMG_Widget*>* NavWidgets, int FocusGroup, bool Horizontal, bool Looping, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44699);

	UUIFunctionLibrary_C_SetUpLinearNavigation_Params params {};
	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.Horizontal = Horizontal;
	params.Looping = Looping;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
