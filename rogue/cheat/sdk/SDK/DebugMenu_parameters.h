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

// Function DebugMenu.DebugMenu_C.CloseDebugMenu
struct UDebugMenu_C_CloseDebugMenu_Params
{
};

// Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
struct UDebugMenu_C_GetParamTypeForSubCommand_Params
{
	struct FString                                     BaseCommandString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	KillstreakUINew_EConsoleCommandParamType           ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
struct UDebugMenu_C_AddBaseCommandHeader_Params
{
	struct FString                                     BaseCommand;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function DebugMenu.DebugMenu_C.NavigateBack
struct UDebugMenu_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugMenu.DebugMenu_C.CommandSelected
struct UDebugMenu_C_CommandSelected_Params
{
	struct FDebugMenuCommandInfo                       Command;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
struct UDebugMenu_C_MakeBoolSubmenu_Params
{
	TArray<struct FDebugMenuCommandInfo>               Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function DebugMenu.DebugMenu_C.InternalPopulate
struct UDebugMenu_C_InternalPopulate_Params
{
	TArray<struct FDebugMenuCommandInfo>               Commands;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function DebugMenu.DebugMenu_C.PopulateList
struct UDebugMenu_C_PopulateList_Params
{
	int                                                Depth;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugMenu.DebugMenu_C.Construct
struct UDebugMenu_C_Construct_Params
{
};

// Function DebugMenu.DebugMenu_C.OnShown
struct UDebugMenu_C_OnShown_Params
{
};

// Function DebugMenu.DebugMenu_C.OnHide
struct UDebugMenu_C_OnHide_Params
{
};

// Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
struct UDebugMenu_C_InitializeWidgetNavigation_Params
{
};

// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
struct UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
