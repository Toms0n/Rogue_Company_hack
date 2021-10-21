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
//		Name   -> Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.GetQueueImageById
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  QueueImage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameModeInfoPanel_C::GetQueueImageById(int QueueId, class UTexture2D** QueueImage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86659);

	UWBP_GameModeInfoPanel_C_GetQueueImageById_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetDisplayInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               UseMapImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FUIMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_GameModeInfoPanel_C::SetDisplayInfo(const struct FText& Title, const struct FText& Description, bool UseMapImage, const struct FUIMapInfo& MapInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86658);

	UWBP_GameModeInfoPanel_C_SetDisplayInfo_Params params {};
	params.Title = Title;
	params.Description = Description;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetQueueInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            QueueInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               UseMapImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FUIMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_GameModeInfoPanel_C::SetQueueInfo(const struct FClientQueueInfo& QueueInfo, bool UseMapImage, const struct FUIMapInfo& MapInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86657);

	UWBP_GameModeInfoPanel_C_SetQueueInfo_Params params {};
	params.QueueInfo = QueueInfo;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.ExecuteUbergraph_WBP_GameModeInfoPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameModeInfoPanel_C::ExecuteUbergraph_WBP_GameModeInfoPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86656);

	UWBP_GameModeInfoPanel_C_ExecuteUbergraph_WBP_GameModeInfoPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
