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

// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44698);
		return ptr;
	}



	void STATIC_SaveLocalAction(const struct FName& ActionName, class UObject* __WorldContext);
	void STATIC_IsLocalActionSaved(const struct FName& ActionName, class UObject* __WorldContext, bool* ActionSaved);
	void STATIC_Get_Formatted_Info_Name_For_Store_Item(class UPUMG_StoreItem* StoreItem, int ExternalQuantity, class UObject* __WorldContext, struct FText* NameText);
	void STATIC_Get_Hero_Primary_Weapon(class UObject* __WorldContext, class UKSWeaponAsset** Return_Value);
	void STATIC_GetCosmeticTagArrayByTags(const struct FGameplayTagContainer& TagContainer, class UObject* __WorldContext, TArray<struct FText>* CosmeticTags, bool* TagsFound);
	void STATIC_GetRogueBucksItemId(class UObject* __WorldContext, int* ItemId);
	void STATIC_GetSettingsDataFactory(class UObject* __WorldContext, class UKSSettingsDataFactory** SettingsDataFactory);
	void STATIC_GetHUDCommon(class UObject* __WorldContext, class AKSHUDCommon** HUD_Common);
	void STATIC_SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState, class UObject* __WorldContext);
	void STATIC_AssignActionIcon(class UImage* Image, const struct FName& ActionName, bool MatchSize, class UObject* __WorldContext);
	void STATIC_GetRankedTierAndDivisionByLevel(int RankedLevel, class UObject* __WorldContext, TEnumAsByte<E_RankedTiers_E_RankedTiers>* RankedTier, int* Division);
	void STATIC_GetRankedTierAndDivisionTextByLevel(int RankedLevel, class UObject* __WorldContext, struct FText* RankedTierRichText, struct FText* RankedDivisionText);
	void STATIC_GetRankedBadgeTextureByLevel(int RankedLevel, class UObject* __WorldContext, class UTexture2D** RankedBadgeTexture);
	void STATIC_GetDefaultAccountItemForSlot(Killstreak_EPlayerAccountSlot Slot, class UObject* __WorldContext, class UPlatformInventoryItem** Default_Item);
	void STATIC_GetInputTypeIcon(Killstreak_EKSPlayerInputType InputType, class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_GetPlatformIcon(Killstreak_EKSPlatformType Platform, class UObject* __WorldContext, class UTexture2D** Icon);
	void STATIC_GetDamageTypeResistIcon(class UClass* Damage_Type, class UObject* __WorldContext, class UTexture2D** Resisted_Icon);
	void STATIC_GetRarityFormatByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityFormat);
	void STATIC_GetFontByName(const struct FName& FontName, class UObject* __WorldContext, bool* HasFound, struct FSlateFontInfo* FontInfo);
	void STATIC_GetColorByName(const struct FName& ColorName, class UObject* __WorldContext, bool* HasFound, struct FLinearColor* Color);
	void STATIC_GetRarityHighlightColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor);
	void STATIC_GetColorPalette_v2(class UObject* __WorldContext, struct FUIColorPalette_v2* ColorPalette);
	void STATIC_GetWeaponTypeAsText(const struct FGameplayTag& WeaponTypeTag, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetItemType(class UPlatformInventoryItem* InventoryItem, class UObject* __WorldContext, struct FText* ItemType);
	void STATIC_UpdateScrollBoxOffset(class UScrollBox* ScrollBox, float Speed, float TimeDelta, class UObject* __WorldContext, bool* Scrolled);
	void STATIC_GetFormattedTimeSpan(struct FTimespan* Timespan, bool Shorthand, class UObject* __WorldContext, struct FText* Text);
	void STATIC_IsMatchTimerAtLeastThisUrgent(float Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency> Urgency_Level, class UObject* __WorldContext, bool* Return_Value);
	void STATIC_GetMatchTimerVisualUrgency(float Timer_Seconds, class UObject* __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency_E_MatchTimerVisualUrgency>* Return_Value);
	void STATIC_GetRarityValueByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, int* RarityValue);
	void STATIC_GetRarityNameByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FText* RarityName);
	void STATIC_GetRarityColorByTag(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, struct FSlateColor* RarityColor);
	void STATIC_GetPlatformViewProfileText(class UObject* __WorldContext, struct FText* Return_Value);
	void STATIC_GetSelfColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetEnemyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetFriendlyColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetTextChatChannelName(PlatformUMG_EPUMG_ChatChannel Channel, class UPUMG_PlayerInfo* PersonalChannelPlayer, class UObject* __WorldContext, struct FText* Name);
	void STATIC_SetTextChatWidgetColor(PlatformUMG_EPUMG_ChatChannel Channel, class UTextBlock* TextWidget, class UObject* __WorldContext);
	void STATIC_GetCrossplayIcon(class UObject* __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture);
	void STATIC_GetCashColor(class UObject* __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_FormatSecondsToTimerText(float Seconds, int Minute_Digits, bool ShowTenths, class UObject* __WorldContext, struct FText* Timer_Text);
	void STATIC_GetSoundLibraries(class UObject* __WorldContext, struct FUISoundLibraries* SoundLibrary);
	void STATIC_GetColorForLoadoutBundle(class UKSLoadoutBundle* Loadout_Bundle, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	void STATIC_GetTextForSpecialtyCategory(Killstreak_ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FText* Role_Name);
	void STATIC_GetColorForSpecialtyCategory(Killstreak_ESpecialtyRoleType Specialty_Role_Type, class UObject* __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	void STATIC_GetColorPalette(class UObject* __WorldContext, struct FUIColorPalette* ColorPalette);
	void STATIC_GetSlateFontInfo(class UObject* __WorldContext, struct FUIFontPalette* UI_Fonts);
	void STATIC_GetMedColor(class UObject* __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light);
	void STATIC_GetHideAnimDefaultTime(class UObject* __WorldContext, float* HideAnimTime);
	void STATIC_GetShowAnimDefaultTime(class UObject* __WorldContext, float* ShowAnimTime);
	void STATIC_CurrencyTypeToCurrencyIcon(unsigned char CurrencyType, class UObject* __WorldContext, class UTexture2D** CurrencyIcon);
	void STATIC_CurrencyIdToCurrencyIcon(int CurrencyId, class UObject* __WorldContext, class UTexture2D** CurrencyIcon);
	void STATIC_Get_Opposing_Team_Num(int Team_Num, class UObject* __WorldContext, int* Return_Value);
	void STATIC_GetAlignmentColors(class UObject* __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral);
	void STATIC_InvertColor(const struct FLinearColor& Color, class UObject* __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetIconForGamepadButton(const struct FKey& Button, class UObject* __WorldContext, class UTexture2D** Icon);
	void STATIC_DrawCircle(struct FPaintContext* Context, const struct FVector2D& Center, float Radius, const struct FLinearColor& Tint, int Line_Count, bool Anti_Alias, class UObject* __WorldContext);
	void STATIC_GetTeamName(int TeamNum, bool Abbreviate, class UObject* __WorldContext, struct FText* teamName);
	void STATIC_GetLargeTeamIcons(class UObject* __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon);
	void STATIC_GetTeamColor(int TeamNum, int OwningPlayerNum, class UObject* __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color);
	void STATIC_GetRarityColors(class UObject* __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary);
	void STATIC_GridIndexChecker(TArray<class UPUMG_Widget*>* Array, int TestIndex, int NumColumns, bool HorizontalWrapping, int SourceIndex, class UObject* __WorldContext, class UPUMG_Widget** Output);
	void STATIC_LinearIndexChecker(TArray<class UPUMG_Widget*>* Array, int Index, class UObject* __WorldContext, class UPUMG_Widget** Output);
	void STATIC_SetUpLinearNavigation(class UPUMG_Widget* ParentWidget, TArray<class UPUMG_Widget*>* NavWidgets, int FocusGroup, bool Horizontal, bool Looping, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
