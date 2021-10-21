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
//		Name   -> Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUDMinimal_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55210);

	ABP_BrightLobbyHUDMinimal_C_CallRemoveTopViewRoute_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RouteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClearRouteStack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUDMinimal_C::CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55209);

	ABP_BrightLobbyHUDMinimal_C_CallAddViewRoute_Params params {};
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
