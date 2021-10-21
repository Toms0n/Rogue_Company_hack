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
//		Offset -> 0x00C600F0
//		Name   -> Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMultiSkinObject*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMultiSkinObject* USkinnedAnimInstance::GetSkinObject()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10805);

	USkinnedAnimInstance_GetSkinObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C60440
//		Name   -> Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Keyword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBlendSpace*                                 Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasOverride                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBlendSpace*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlendSpace* USkinnedAnimInstance::GetSkinnedBlendSpace(const struct FName& Keyword, class UBlendSpace* Default, bool* bHasOverride)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10804);

	USkinnedAnimInstance_GetSkinnedBlendSpace_Params params {};
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C60330
//		Name   -> Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Keyword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequence*                               Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasOverride                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequence*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimSequence* USkinnedAnimInstance::GetSkinnedAnimSequence(const struct FName& Keyword, class UAnimSequence* Default, bool* bHasOverride)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10803);

	USkinnedAnimInstance_GetSkinnedAnimSequence_Params params {};
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C60220
//		Name   -> Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Keyword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAimOffsetBlendSpace*                        Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasOverride                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAimOffsetBlendSpace*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAimOffsetBlendSpace* USkinnedAnimInstance::GetSkinnedAnimOffset(const struct FName& Keyword, class UAimOffsetBlendSpace* Default, bool* bHasOverride)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10802);

	USkinnedAnimInstance_GetSkinnedAnimOffset_Params params {};
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C60110
//		Name   -> Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Keyword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasOverride                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* USkinnedAnimInstance::GetSkinnedAnimMontage(const struct FName& Keyword, class UAnimMontage* Default, bool* bHasOverride)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10801);

	USkinnedAnimInstance_GetSkinnedAnimMontage_Params params {};
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
