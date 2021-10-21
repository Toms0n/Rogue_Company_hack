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
//		Name   -> Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ADroppedMagazine_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25093);

	ADroppedMagazine_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DroppedMagazine.DroppedMagazine_C.SetMesh
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMesh*                               NewSkelMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 NewStaticMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADroppedMagazine_C::SetMesh(class USkeletalMesh* NewSkelMesh, class UStaticMesh* NewStaticMesh)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25092);

	ADroppedMagazine_C_SetMesh_Params params {};
	params.NewSkelMesh = NewSkelMesh;
	params.NewStaticMesh = NewStaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DroppedMagazine.DroppedMagazine_C.SetVelocity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADroppedMagazine_C::SetVelocity(const struct FVector& Velocity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25091);

	ADroppedMagazine_C_SetVelocity_Params params {};
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADroppedMagazine_C::ExecuteUbergraph_DroppedMagazine(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25090);

	ADroppedMagazine_C_ExecuteUbergraph_DroppedMagazine_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
