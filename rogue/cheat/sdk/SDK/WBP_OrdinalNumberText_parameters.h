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

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
struct UWBP_OrdinalNumberText_C_Get_Language_Specific_Superscript_Text_Params
{
	struct FString                                     Language_Code;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Return_Value;                                              // 0x0010(0x0018)  (Parm, OutParm)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
struct UWBP_OrdinalNumberText_C_Get_Language_Specific_Main_Text_Params
{
	struct FString                                     Language_Code;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Return_Value;                                              // 0x0010(0x0018)  (Parm, OutParm)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
struct UWBP_OrdinalNumberText_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
struct UWBP_OrdinalNumberText_C_Set_Font_Params
{
	struct FSlateFontInfo                              InFontInfo;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
struct UWBP_OrdinalNumberText_C_Set_Value_Params
{
	int                                                Number;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
struct UWBP_OrdinalNumberText_C_ExecuteUbergraph_WBP_OrdinalNumberText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
