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
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void USub_Hero_ABP_MountedWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30341);

	USub_Hero_ABP_MountedWeapon_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_1149DF16425BF36771ECBFAB5883FCFD
//		Flags  -> (BlueprintEvent)
void USub_Hero_ABP_MountedWeapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_1149DF16425BF36771ECBFAB5883FCFD()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30340);

	USub_Hero_ABP_MountedWeapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_1149DF16425BF36771ECBFAB5883FCFD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USub_Hero_ABP_MountedWeapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30339);

	USub_Hero_ABP_MountedWeapon_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void USub_Hero_ABP_MountedWeapon_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30338);

	USub_Hero_ABP_MountedWeapon_C_BlueprintInitializeAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_F46D9F994AFD701F3540A7A6C3C3AE29
//		Flags  -> (BlueprintEvent)
void USub_Hero_ABP_MountedWeapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_F46D9F994AFD701F3540A7A6C3C3AE29()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30337);

	USub_Hero_ABP_MountedWeapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_F46D9F994AFD701F3540A7A6C3C3AE29_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USub_Hero_ABP_MountedWeapon_C::ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30336);

	USub_Hero_ABP_MountedWeapon_C_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
