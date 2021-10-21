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
//		Offset -> 0x0182ED40
//		Name   -> Function FootstepNotify.FootstepNotify_C.Received_Notify
//		Flags  -> (Native, Event, Public, BlueprintCallable, Const)
// Parameters:
//		class USkeletalMeshComponent*                      bpp__MeshComp__pf                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequenceBase*                           bpp__Animation__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFootstepNotify_C::Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39826);

	UFootstepNotify_C_Received_Notify_Params params {};
	params.bpp__MeshComp__pf = bpp__MeshComp__pf;
	params.bpp__Animation__pf = bpp__Animation__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0182E390
//		Name   -> Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
//		class UAnimInstance*                               bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__BonexName__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__MaterialxReturn__pfT                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      bpp__ActorxReturn__pfT                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFootstepNotify_C::GetSFXMaterial(class UAnimInstance* bpp__AnimInstance__pf, const struct FName& bpp__BonexName__pfT, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39825);

	UFootstepNotify_C_GetSFXMaterial_Params params {};
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;
	params.bpp__BonexName__pfT = bpp__BonexName__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__MaterialxReturn__pfT != nullptr)
		*bpp__MaterialxReturn__pfT = params.bpp__MaterialxReturn__pfT;
	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;

}


// Function:
//		Offset -> 0x0182E350
//		Name   -> Function FootstepNotify.FootstepNotify_C.GetBoneName
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UFootstepNotify_C::GetBoneName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(39824);

	UFootstepNotify_C_GetBoneName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
