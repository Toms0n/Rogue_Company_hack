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
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsContainer*                        Settings_Container                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::Add_Sub_Settings_Widget(class UKSSettingsContainer* Settings_Container)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62583);

	UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params params {};
	params.Settings_Container = Settings_Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsContainer*                        Settings_Container                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::Add_Main_Settings_Widget(class UKSSettingsContainer* Settings_Container)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62582);

	UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params params {};
	params.Settings_Container = Settings_Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsContainer*                        Settings_Container                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UVerticalBox*                                Vertical_Box                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::AddSettingsWidget(class UKSSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62581);

	UWBP_SettingsGroup_C_AddSettingsWidget_Params params {};
	params.Settings_Container = Settings_Container;
	params.Vertical_Box = Vertical_Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62580);

	UWBP_SettingsGroup_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsContainer*                        SettingsContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62579);

	UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params params {};
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsContainer*                        SettingsContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62578);

	UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params params {};
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsGroup_C::ExecuteUbergraph_WBP_SettingsGroup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62577);

	UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
