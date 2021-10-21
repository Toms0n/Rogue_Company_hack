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

// Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
struct USettingsInfo_Language_C_FixupInvalidInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
struct USettingsInfo_Language_C_IsValidValueInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
struct USettingsInfo_Language_C_GetCultureStringFromTextOptionIndex_Params
{
	int                                                TextOptionIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     CultureString;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
struct USettingsInfo_Language_C_GetLanguageTextOptionIndex_Params
{
	struct FString                                     Language;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                TextOptionIndex;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
struct USettingsInfo_Language_C_SetUpLanguageOptions_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
struct USettingsInfo_Language_C_SaveIntValue_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
struct USettingsInfo_Language_C_ApplyIntValue_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
struct USettingsInfo_Language_C_InitializeValue_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
struct USettingsInfo_Language_C_HandleOnDisplayLanguageApplied_Params
{
	struct FString                                     StringValue;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
struct USettingsInfo_Language_C_HandleOnDisplayLanguageSaved_Params
{
	struct FString                                     StringValue;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
struct USettingsInfo_Language_C_RevertSettingToDefault_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
struct USettingsInfo_Language_C_ExecuteUbergraph_SettingsInfo_Language_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
