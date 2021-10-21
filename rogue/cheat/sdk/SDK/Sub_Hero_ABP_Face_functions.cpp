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
//		Offset -> 0x018227A0
//		Name   -> Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USub_Hero_ABP_Face_C::ExecuteUbergraph_Sub_Hero_ABP_Face(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27084);

	USub_Hero_ABP_Face_C_ExecuteUbergraph_Sub_Hero_ABP_Face_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018748D0
//		Name   -> Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPoseLink                                   bpp__InPose__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void USub_Hero_ABP_Face_C::AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27083);

	USub_Hero_ABP_Face_C_AnimGraph_Params params {};
	params.bpp__InPose__pf = bpp__InPose__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
