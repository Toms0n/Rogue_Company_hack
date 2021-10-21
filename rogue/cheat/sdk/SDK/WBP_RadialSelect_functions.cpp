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
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetupSelectorForActivationMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RadialSelect_C::SetupSelectorForActivationMode()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56462);

	UWBP_RadialSelect_C_SetupSelectorForActivationMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.IsItemUsable
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialSelect_C::IsItemUsable(class UKSItem* KSItem, bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56461);

	UWBP_RadialSelect_C_IsItemUsable_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetHoverForAllEntries
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RadialMenuEntry_C*                      New_Hovered_Entry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::SetHoverForAllEntries(class UWBP_RadialMenuEntry_C* New_Hovered_Entry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56460);

	UWBP_RadialSelect_C_SetHoverForAllEntries_Params params {};
	params.New_Hovered_Entry = New_Hovered_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialEntryByIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_RadialMenuEntry_C*                      Entry                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::GetRadialEntryByIndex(int Index, class UWBP_RadialMenuEntry_C** Entry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56459);

	UWBP_RadialSelect_C_GetRadialEntryByIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entry != nullptr)
		*Entry = params.Entry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RadialSelect_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56458);

	UWBP_RadialSelect_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RadialSelect_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56457);

	UWBP_RadialSelect_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Item_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     KSItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::GetRadialItemData(int Item_Index, class UKSItem** KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56456);

	UWBP_RadialSelect_C_GetRadialItemData_Params params {};
	params.Item_Index = Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KSItem != nullptr)
		*KSItem = params.KSItem;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RadialSelect_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56455);

	UWBP_RadialSelect_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RadialSelect_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56454);

	UWBP_RadialSelect_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RadialSelect_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56453);

	UWBP_RadialSelect_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::SetRadialItemName(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56452);

	UWBP_RadialSelect_C_SetRadialItemName_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_InputCallout_C*                         InputCallout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56451);

	UWBP_RadialSelect_C_SetupInputCallout_Params params {};
	params.InputCallout = InputCallout;
	params.HUD = HUD;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RadialSelect_C::IsSelectorVisible()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56450);

	UWBP_RadialSelect_C_IsSelectorVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialSelect_C::ShowRadialMenuCycle(bool Show)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56449);

	UWBP_RadialSelect_C_ShowRadialMenuCycle_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.Get Radial Item Name from Player Controller
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerController*                         KSPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RadialItemName                                             (Parm, OutParm)
void UWBP_RadialSelect_C::Get_Radial_Item_Name_from_Player_Controller(int Index, class AKSPlayerController* KSPlayerController, struct FText* RadialItemName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56448);

	UWBP_RadialSelect_C_Get_Radial_Item_Name_from_Player_Controller_Params params {};
	params.Index = Index;
	params.KSPlayerController = KSPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RadialItemName != nullptr)
		*RadialItemName = params.RadialItemName;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Killstreak_EMercCosmeticSlot                       CosmeticSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UWBP_RadialSelect_C::GetTextForCosmeticSlot(Killstreak_EMercCosmeticSlot CosmeticSlot, struct FText* Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56447);

	UWBP_RadialSelect_C_GetTextForCosmeticSlot_Params params {};
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RadialSelect_C::SetRadialMenuNames()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56446);

	UWBP_RadialSelect_C_SetRadialMenuNames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_RadialSelect_C::GetDeadZone()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56445);

	UWBP_RadialSelect_C_GetDeadZone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RadialSelect_C::RefreshOptions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56444);

	UWBP_RadialSelect_C_RefreshOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_RadialSelect_C::GetOptionsCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56443);

	UWBP_RadialSelect_C_GetOptionsCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_RadialSelect_C::GetWheelSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56442);

	UWBP_RadialSelect_C_GetWheelSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialSelect_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56441);

	UWBP_RadialSelect_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RadialSelect_C::HideSelector()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56440);

	UWBP_RadialSelect_C_HideSelector_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RadialSelect_C::ShowSelector()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56439);

	UWBP_RadialSelect_C_ShowSelector_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56438);

	UWBP_RadialSelect_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RadialSelect_C::RadialOptionUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56437);

	UWBP_RadialSelect_C_RadialOptionUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::RadialOptionSelected(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56436);

	UWBP_RadialSelect_C_RadialOptionSelected_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::RadialOptionHovered(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56435);

	UWBP_RadialSelect_C_RadialOptionHovered_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::TraceSelectionCursor(float Radius, float Angle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56434);

	UWBP_RadialSelect_C_TraceSelectionCursor_Params params {};
	params.Radius = Radius;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSEquipment*                                AddedEquipment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::Handle_Equipment_Change(class AKSEquipment* AddedEquipment)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56433);

	UWBP_RadialSelect_C_Handle_Equipment_Change_Params params {};
	params.AddedEquipment = AddedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RadialSelect_C::ChangeToNewRadialMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56432);

	UWBP_RadialSelect_C_ChangeToNewRadialMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bCycledRight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialSelect_C::OnCycledMenus(bool bCycledRight)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56431);

	UWBP_RadialSelect_C_OnCycledMenus_Params params {};
	params.bCycledRight = bCycledRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RadialSelect_C::SetupForRadialWheelMode()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56430);

	UWBP_RadialSelect_C_SetupForRadialWheelMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RadialSelect_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56429);

	UWBP_RadialSelect_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56428);

	UWBP_RadialSelect_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.NetMulticast_PlayCinematicEmote
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSLobbyCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSEmote*                                    Emote                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::NetMulticast_PlayCinematicEmote(class AKSLobbyCharacter* Character, class UKSEmote* Emote)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56427);

	UWBP_RadialSelect_C_NetMulticast_PlayCinematicEmote_Params params {};
	params.Character = Character;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.Server_PlayCinematicEmote
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSLobbyCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSEmote*                                    Emote                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::Server_PlayCinematicEmote(class AKSLobbyCharacter* Character, class UKSEmote* Emote)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56426);

	UWBP_RadialSelect_C_Server_PlayCinematicEmote_Params params {};
	params.Character = Character;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialSelect_C::ExecuteUbergraph_WBP_RadialSelect(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56425);

	UWBP_RadialSelect_C_ExecuteUbergraph_WBP_RadialSelect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
