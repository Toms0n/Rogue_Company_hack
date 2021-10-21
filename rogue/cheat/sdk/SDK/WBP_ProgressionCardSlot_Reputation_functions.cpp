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
//		Name   -> Function WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C.ProcessPlayerProgression
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ProgressionCardSlot_Reputation_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82958);

	UWBP_ProgressionCardSlot_Reputation_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
