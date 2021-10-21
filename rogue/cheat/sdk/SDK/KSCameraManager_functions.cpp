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
//		Name   -> Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NoMantleCamera                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKSCameraManager_C::GetMantleHeightFromKSChar(bool* NoMantleCamera)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42150);

	AKSCameraManager_C_GetMantleHeightFromKSChar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NoMantleCamera != nullptr)
		*NoMantleCamera = params.NoMantleCamera;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Modifier_Class                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKSCameraManager_C::NotifyCamModFinished(class UClass* Modifier_Class)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42149);

	AKSCameraManager_C_NotifyCamModFinished_Params params {};
	params.Modifier_Class = Modifier_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.UpdateCamModValues
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Modifier_Class                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Location                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Rotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              In_FOV                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKSCameraManager_C::UpdateCamModValues(class UClass* Modifier_Class, const struct FVector& In_Location, const struct FVector& In_Rotation, float In_FOV, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42148);

	AKSCameraManager_C_UpdateCamModValues_Params params {};
	params.Modifier_Class = Modifier_Class;
	params.In_Location = In_Location;
	params.In_Rotation = In_Rotation;
	params.In_FOV = In_FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::JumpStart__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42147);

	AKSCameraManager_C_JumpStart__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::JumpStart__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42146);

	AKSCameraManager_C_JumpStart__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::JumpLanding__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42145);

	AKSCameraManager_C_JumpLanding__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::JumpLanding__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42144);

	AKSCameraManager_C_JumpLanding__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Tall__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42143);

	AKSCameraManager_C_Mantle_Tall__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Tall__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42142);

	AKSCameraManager_C_Mantle_Tall__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Medium__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42141);

	AKSCameraManager_C_Mantle_Medium__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Medium__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42140);

	AKSCameraManager_C_Mantle_Medium__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Short__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42139);

	AKSCameraManager_C_Mantle_Short__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Mantle_Short__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42138);

	AKSCameraManager_C_Mantle_Short__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Tall__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42137);

	AKSCameraManager_C_Vault_Tall__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Tall__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42136);

	AKSCameraManager_C_Vault_Tall__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Medium__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42135);

	AKSCameraManager_C_Vault_Medium__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Medium__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42134);

	AKSCameraManager_C_Vault_Medium__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Short__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42133);

	AKSCameraManager_C_Vault_Short__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Short__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42132);

	AKSCameraManager_C_Vault_Short__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Medium_Running__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42131);

	AKSCameraManager_C_Vault_Medium_Running__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AKSCameraManager_C::Vault_Medium_Running__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42130);

	AKSCameraManager_C_Vault_Medium_Running__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Play Jump Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AKSCameraManager_C::Play_Jump_Start()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42129);

	AKSCameraManager_C_Play_Jump_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.PlayJumpLanding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AKSCameraManager_C::PlayJumpLanding()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42128);

	AKSCameraManager_C_PlayJumpLanding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.Play Mantle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Mantle_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKSCameraManager_C::Play_Mantle(int Mantle_Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42127);

	AKSCameraManager_C_Play_Mantle_Params params {};
	params.Mantle_Index = Mantle_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKSCameraManager_C::ExecuteUbergraph_KSCameraManager(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42126);

	AKSCameraManager_C_ExecuteUbergraph_KSCameraManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
