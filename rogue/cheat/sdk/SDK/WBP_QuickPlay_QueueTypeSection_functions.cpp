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
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::ResetQueueButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71706);

	UWBP_QuickPlay_QueueTypeSection_C_ResetQueueButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_QuickPlay_QueueButton_C*>        Buttons                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::GetQueueButtons(TArray<class UWBP_QuickPlay_QueueButton_C*>* Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71705);

	UWBP_QuickPlay_QueueTypeSection_C_GetQueueButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FQueueSection                               QueueSectionInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_QueueTypeSection_C::PopulateSection(const struct FQueueSection& QueueSectionInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71704);

	UWBP_QuickPlay_QueueTypeSection_C_PopulateSection_Params params {};
	params.QueueSectionInfo = QueueSectionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71703);

	UWBP_QuickPlay_QueueTypeSection_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueClicked(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71702);

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueClicked_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueHovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71701);

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueHovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::HandleOnQueueUnhovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71700);

	UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueUnhovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnHovered(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71699);

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnHovered_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71698);

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::HandleCustomBtnClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71697);

	UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71696);

	UWBP_QuickPlay_QueueTypeSection_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71695);

	UWBP_QuickPlay_QueueTypeSection_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSWidget*>                           Buttons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchPopulated__DelegateSignature(TArray<class UKSWidget*>* Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71694);

	UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchPopulated__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeSection_C::OnCustomMatchSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71693);

	UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::OnQueuePopulated__DelegateSignature(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71692);

	UWBP_QuickPlay_QueueTypeSection_C_OnQueuePopulated__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueueButton != nullptr)
		*QueueButton = params.QueueButton;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::OnQueueUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71691);

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::OnQueueHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71690);

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeSection_C::OnQueueSelected__DelegateSignature(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71689);

	UWBP_QuickPlay_QueueTypeSection_C_OnQueueSelected__DelegateSignature_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
