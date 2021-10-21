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
//		Offset -> 0x00C51B60
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UDataTable*>                          InTables                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicSkinTable::RemoveDataTables(TArray<class UDataTable*> InTables)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10675);

	UDynamicSkinTable_RemoveDataTables_Params params {};
	params.InTables = InTables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51AE0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDataTable*                                  InTable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicSkinTable::RemoveDataTable(class UDataTable* InTable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10674);

	UDynamicSkinTable_RemoveDataTable_Params params {};
	params.InTable = InTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51AB0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDynamicSkinTable::IsTablePendingAssetLoad()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10673);

	UDynamicSkinTable_IsTablePendingAssetLoad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51910
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetTexture
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UDynamicSkinTable::GetTexture(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10672);

	UDynamicSkinTable_GetTexture_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51770
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMesh* UDynamicSkinTable::GetStaticMesh(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10671);

	UDynamicSkinTable_GetStaticMesh_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51590
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMesh* UDynamicSkinTable::GetSkeletalMesh(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10670);

	UDynamicSkinTable_GetSkeletalMesh_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C513F0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USelectiveAkAudioEvent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USelectiveAkAudioEvent* UDynamicSkinTable::GetSelectiveAudioEvent(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10669);

	UDynamicSkinTable_GetSelectiveAudioEvent_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51250
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPoseAsset*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPoseAsset* UDynamicSkinTable::GetPoseAsset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10668);

	UDynamicSkinTable_GetPoseAsset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C510B0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicsAsset*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPhysicsAsset* UDynamicSkinTable::GetPhysicsAsset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10667);

	UDynamicSkinTable_GetPhysicsAsset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50F10
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystem* UDynamicSkinTable::GetParticleSystem(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10666);

	UDynamicSkinTable_GetParticleSystem_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50D50
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetNameField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UDynamicSkinTable::GetNameField(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10665);

	UDynamicSkinTable_GetNameField_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50BB0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UDynamicSkinTable::GetMaterialInterface(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10664);

	UDynamicSkinTable_GetMaterialInterface_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C509F0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UDynamicSkinTable::GetLinearColor(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10663);

	UDynamicSkinTable_GetLinearColor_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50850
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetInt
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDynamicSkinTable::GetInt(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10662);

	UDynamicSkinTable_GetInt_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C506B0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDynamicSkinTable::GetFloat(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10661);

	UDynamicSkinTable_GetFloat_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50510
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetClass
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UDynamicSkinTable::GetClass(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10660);

	UDynamicSkinTable_GetClass_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50370
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetBool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDynamicSkinTable::GetBool(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10659);

	UDynamicSkinTable_GetBool_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C501D0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* UDynamicSkinTable::GetAudioEvent(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10658);

	UDynamicSkinTable_GetAudioEvent_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FF60
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequence*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimSequence* UDynamicSkinTable::GetAnimSequence(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10657);

	UDynamicSkinTable_GetAnimSequence_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FDC0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UDynamicSkinTable::GetAnimMontage(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10656);

	UDynamicSkinTable_GetAnimMontage_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FC20
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBlendSpace*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlendSpace* UDynamicSkinTable::GetAnimBlendSpace(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10655);

	UDynamicSkinTable_GetAnimBlendSpace_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50100
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimationAsset*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimationAsset* UDynamicSkinTable::GetAnimationAsset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10654);

	UDynamicSkinTable_GetAnimationAsset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FA80
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAimOffsetBlendSpace*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAimOffsetBlendSpace* UDynamicSkinTable::GetAnimAimOffset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10653);

	UDynamicSkinTable_GetAnimAimOffset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4F820
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
void UDynamicSkinTable::GetAllKeywords()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10652);

	UDynamicSkinTable_GetAllKeywords_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C4F490
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UDataTable*                                  InTable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTagQuery                           InQuery                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDynamicSkinTable::AddDataTableWithQuery(class UDataTable* InTable, int InPriority, const struct FGameplayTagQuery& InQuery)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10651);

	UDynamicSkinTable_AddDataTableWithQuery_Params params {};
	params.InTable = InTable;
	params.InPriority = InPriority;
	params.InQuery = InQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C4F5F0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FDataTableInfo>                      InTableInfos                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicSkinTable::AddDataTables(TArray<struct FDataTableInfo> InTableInfos)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10650);

	UDynamicSkinTable_AddDataTables_Params params {};
	params.InTableInfos = InTableInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C4F3D0
//		Name   -> Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDataTable*                                  InTable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicSkinTable::AddDataTable(class UDataTable* InTable, int InPriority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10649);

	UDynamicSkinTable_AddDataTable_Params params {};
	params.InTable = InTable;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C53320
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InKeywords                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::UnsubscribeToKeywords(TArray<struct FName> InKeywords)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10703);

	UMultiSkinObject_UnsubscribeToKeywords_Params params {};
	params.InKeywords = InKeywords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C532A0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::UnsubscribeToKeyword(const struct FName& InKeyword)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10702);

	UMultiSkinObject_UnsubscribeToKeyword_Params params {};
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C53280
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMultiSkinObject::UnsubscribeToAllKeywords()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10701);

	UMultiSkinObject_UnsubscribeToAllKeywords_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C531D0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InKeywords                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::SubscribeToKeywords(TArray<struct FName> InKeywords)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10700);

	UMultiSkinObject_SubscribeToKeywords_Params params {};
	params.InKeywords = InKeywords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C53150
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::SubscribeToKeyword(const struct FName& InKeyword)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10699);

	UMultiSkinObject_SubscribeToKeyword_Params params {};
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C53130
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMultiSkinObject::SubscribeToAllKeywords()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10698);

	UMultiSkinObject_SubscribeToAllKeywords_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51C10
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.RemoveParent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMultiSkinObject*                            InParent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::RemoveParent(class UMultiSkinObject* InParent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10697);

	UMultiSkinObject_RemoveParent_Params params {};
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C519E0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetTexture
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UMultiSkinObject::GetTexture(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10696);

	UMultiSkinObject_GetTexture_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51840
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMesh* UMultiSkinObject::GetStaticMesh(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10695);

	UMultiSkinObject_GetStaticMesh_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51660
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMesh* UMultiSkinObject::GetSkeletalMesh(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10694);

	UMultiSkinObject_GetSkeletalMesh_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C514C0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USelectiveAkAudioEvent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USelectiveAkAudioEvent* UMultiSkinObject::GetSelectiveAudioEvent(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10693);

	UMultiSkinObject_GetSelectiveAudioEvent_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51320
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPoseAsset*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPoseAsset* UMultiSkinObject::GetPoseAsset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10692);

	UMultiSkinObject_GetPoseAsset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51180
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicsAsset*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPhysicsAsset* UMultiSkinObject::GetPhysicsAsset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10691);

	UMultiSkinObject_GetPhysicsAsset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50FE0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystem* UMultiSkinObject::GetParticleSystem(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10690);

	UMultiSkinObject_GetParticleSystem_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50E30
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetNameField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMultiSkinObject::GetNameField(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10689);

	UMultiSkinObject_GetNameField_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50C80
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UMultiSkinObject::GetMaterialInterface(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10688);

	UMultiSkinObject_GetMaterialInterface_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50AD0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UMultiSkinObject::GetLinearColor(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10687);

	UMultiSkinObject_GetLinearColor_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50920
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetInt
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMultiSkinObject::GetInt(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10686);

	UMultiSkinObject_GetInt_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50780
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMultiSkinObject::GetFloat(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10685);

	UMultiSkinObject_GetFloat_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C505E0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetClass
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UMultiSkinObject::GetClass(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10684);

	UMultiSkinObject_GetClass_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50440
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetBool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiSkinObject::GetBool(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10683);

	UMultiSkinObject_GetBool_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C502A0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* UMultiSkinObject::GetAudioEvent(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10682);

	UMultiSkinObject_GetAudioEvent_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C50030
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequence*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimSequence* UMultiSkinObject::GetAnimSequence(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10681);

	UMultiSkinObject_GetAnimSequence_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FE90
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UMultiSkinObject::GetAnimMontage(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10680);

	UMultiSkinObject_GetAnimMontage_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FCF0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBlendSpace*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlendSpace* UMultiSkinObject::GetAnimBlendSpace(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10679);

	UMultiSkinObject_GetAnimBlendSpace_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4FB50
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAimOffsetBlendSpace*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAimOffsetBlendSpace* UMultiSkinObject::GetAnimAimOffset(const struct FName& RowName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10678);

	UMultiSkinObject_GetAnimAimOffset_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4F950
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
void UMultiSkinObject::GetAllSkinKeywords()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10677);

	UMultiSkinObject_GetAllSkinKeywords_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C4F6F0
//		Name   -> Function DataTableSkinsCommon.MultiSkinObject.AddParent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMultiSkinObject*                            InParent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiSkinObject::AddParent(class UMultiSkinObject* InParent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10676);

	UMultiSkinObject_AddParent_Params params {};
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C53080
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.StaticSetForcedLOD
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkinnedMeshComponent*                       InMeshComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InForcedLOD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::STATIC_StaticSetForcedLOD(class USkinnedMeshComponent* InMeshComp, int InForcedLOD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4962);

	USkinnableSkeletalMeshComponent_StaticSetForcedLOD_Params params {};
	params.InMeshComp = InMeshComp;
	params.InForcedLOD = InForcedLOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52DE0
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InFailSafeSkeletalMesh                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::SetSkeletalMeshKeyword(const struct FName& InKeyword, class USkeletalMesh* InFailSafeSkeletalMesh)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4961);

	USkinnableSkeletalMeshComponent_SetSkeletalMeshKeyword_Params params {};
	params.InKeyword = InKeyword;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52D10
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicsAsset*                               InFailSafePhysicsAsset                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::SetPhysicsAssetKeyword(const struct FName& InKeyword, class UPhysicsAsset* InFailSafePhysicsAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4960);

	USkinnableSkeletalMeshComponent_SetPhysicsAssetKeyword_Params params {};
	params.InKeyword = InKeyword;
	params.InFailSafePhysicsAsset = InFailSafePhysicsAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52B50
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4959);

	USkinnableSkeletalMeshComponent_SetPersistentVectorParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52930
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4958);

	USkinnableSkeletalMeshComponent_SetPersistentVectorParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C527B0
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4957);

	USkinnableSkeletalMeshComponent_SetPersistentTextureParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C525B0
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4956);

	USkinnableSkeletalMeshComponent_SetPersistentTextureParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52410
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4955);

	USkinnableSkeletalMeshComponent_SetPersistentScalarParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52210
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4954);

	USkinnableSkeletalMeshComponent_SetPersistentScalarParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C520F0
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentMaterialOverrideOnAllSlots
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentMaterialOverrideOnAllSlots(class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4953);

	USkinnableSkeletalMeshComponent_SetPersistentMaterialOverrideOnAllSlots_Params params {};
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51F70
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentMaterialOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableSkeletalMeshComponent::SetPersistentMaterialOverride(int MaterialSlot, class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4952);

	USkinnableSkeletalMeshComponent_SetPersistentMaterialOverride_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51EF0
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetForcedLOD_Skinned
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InNewForcedLOD                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::SetForcedLOD_Skinned(int InNewForcedLOD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4951);

	USkinnableSkeletalMeshComponent_SetForcedLOD_Skinned_Params params {};
	params.InNewForcedLOD = InNewForcedLOD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51E20
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      InFailSafeAnimClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::SetAnimClassKeyword(const struct FName& InKeyword, class UClass* InFailSafeAnimClass)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4950);

	USkinnableSkeletalMeshComponent_SetAnimClassKeyword_Params params {};
	params.InKeyword = InKeyword;
	params.InFailSafeAnimClass = InFailSafeAnimClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51C90
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ParameterId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableSkeletalMeshComponent::RemovePersistentMaterialParameter(int ParameterId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4949);

	USkinnableSkeletalMeshComponent_RemovePersistentMaterialParameter_Params params {};
	params.ParameterId = ParameterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51730
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMultiSkinObject*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMultiSkinObject* USkinnableSkeletalMeshComponent::GetSkinObject()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4948);

	USkinnableSkeletalMeshComponent_GetSkinObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C4F800
//		Name   -> Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized
//		Flags  -> (Final, Native, Private)
void USkinnableSkeletalMeshComponent::ForwardAnimInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4947);

	USkinnableSkeletalMeshComponent_ForwardAnimInitialized_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52EB0
//		Name   -> Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InKeywords                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InFailSafeSkeletalMesh                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableMergedMeshComponent::SetSkeletalMeshKeywords(TArray<struct FName> InKeywords, class USkeletalMesh* InFailSafeSkeletalMesh)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4966);

	USkinnableMergedMeshComponent_SetSkeletalMeshKeywords_Params params {};
	params.InKeywords = InKeywords;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51D90
//		Name   -> Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableMergedMeshComponent::RemoveSkeletalMeshKeyword(const struct FName& InKeyword)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4965);

	USkinnableMergedMeshComponent_RemoveSkeletalMeshKeyword_Params params {};
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction DataTableSkinsCommon.SkinnableMergedMeshComponent.OnMeshMergeComplete__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void USkinnableMergedMeshComponent::OnMeshMergeComplete__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4964);

	USkinnableMergedMeshComponent_OnMeshMergeComplete__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C4F770
//		Name   -> Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableMergedMeshComponent::AddSkeletalMeshKeyword(const struct FName& InKeyword)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(4963);

	USkinnableMergedMeshComponent_AddSkeletalMeshKeyword_Params params {};
	params.InKeyword = InKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52FB0
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetStaticMeshKeyword
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InKeyword                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 InFailSafeStaticMesh                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableStaticMeshComponent::SetStaticMeshKeyword(const struct FName& InKeyword, class UStaticMesh* InFailSafeStaticMesh)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10720);

	USkinnableStaticMeshComponent_SetStaticMeshKeyword_Params params {};
	params.InKeyword = InKeyword;
	params.InFailSafeStaticMesh = InFailSafeStaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C52C30
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10719);

	USkinnableStaticMeshComponent_SetPersistentVectorParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52A40
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10718);

	USkinnableStaticMeshComponent_SetPersistentVectorParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52870
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10717);

	USkinnableStaticMeshComponent_SetPersistentTextureParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C526B0
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10716);

	USkinnableStaticMeshComponent_SetPersistentTextureParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C524E0
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameterOnAllMaterials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10715);

	USkinnableStaticMeshComponent_SetPersistentScalarParameterOnAllMaterials_Params params {};
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52310
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ParameterValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10714);

	USkinnableStaticMeshComponent_SetPersistentScalarParameter_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52180
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentMaterialOverrideOnAllSlots
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentMaterialOverrideOnAllSlots(class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10713);

	USkinnableStaticMeshComponent_SetPersistentMaterialOverrideOnAllSlots_Params params {};
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C52030
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentMaterialOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaterialSlot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          MaterialInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USkinnableStaticMeshComponent::SetPersistentMaterialOverride(int MaterialSlot, class UMaterialInterface* MaterialInterface)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10712);

	USkinnableStaticMeshComponent_SetPersistentMaterialOverride_Params params {};
	params.MaterialSlot = MaterialSlot;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C51D10
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.RemovePersistentMaterialParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ParameterId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkinnableStaticMeshComponent::RemovePersistentMaterialParameter(int ParameterId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10711);

	USkinnableStaticMeshComponent_RemovePersistentMaterialParameter_Params params {};
	params.ParameterId = ParameterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C51750
//		Name   -> Function DataTableSkinsCommon.SkinnableStaticMeshComponent.GetSkinObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMultiSkinObject*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMultiSkinObject* USkinnableStaticMeshComponent::GetSkinObject()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10710);

	USkinnableStaticMeshComponent_GetSkinObject_Params params {};

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
