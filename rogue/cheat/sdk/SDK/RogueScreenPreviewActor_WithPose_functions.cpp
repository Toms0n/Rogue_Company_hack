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
//		Name   -> Function RogueScreenPreviewActor_WithPose.RogueScreenPreviewActor_WithPose_C.GetLobbyCharacterClassToUse
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UKSJobItem*                                  JobToUse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSSkinBundle*                               SkinToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* ARogueScreenPreviewActor_WithPose_C::GetLobbyCharacterClassToUse(class UKSJobItem* JobToUse, class UKSSkinBundle* SkinToUse)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245099);

	ARogueScreenPreviewActor_WithPose_C_GetLobbyCharacterClassToUse_Params params {};
	params.JobToUse = JobToUse;
	params.SkinToUse = SkinToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
