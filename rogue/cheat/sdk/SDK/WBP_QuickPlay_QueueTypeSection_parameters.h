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

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
struct UWBP_QuickPlay_QueueTypeSection_C_ResetQueueButtons_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
struct UWBP_QuickPlay_QueueTypeSection_C_GetQueueButtons_Params
{
	TArray<class UWBP_QuickPlay_QueueButton_C*>        Buttons;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
struct UWBP_QuickPlay_QueueTypeSection_C_PopulateSection_Params
{
	struct FQueueSection                               QueueSectionInfo;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
struct UWBP_QuickPlay_QueueTypeSection_C_Construct_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueClicked_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueHovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueUnhovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnHovered_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnUnhovered_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnClicked_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnInitialized
struct UWBP_QuickPlay_QueueTypeSection_C_OnInitialized_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
struct UWBP_QuickPlay_QueueTypeSection_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchPopulated__DelegateSignature_Params
{
	TArray<class UKSWidget*>                           Buttons;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchSelected__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueuePopulated__DelegateSignature_Params
{
	TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButton;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueSelected__DelegateSignature_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
