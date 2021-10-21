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
//		Name   -> Function CamMod_Master.CamMod_Master_C.OnCamModFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCamMod_Master_C::OnCamModFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42111);

	UCamMod_Master_C_OnCamModFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_Master.CamMod_Master_C.PlayTimeline
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCamMod_Master_C::PlayTimeline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42110);

	UCamMod_Master_C_PlayTimeline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCamMod_Master_C::ShouldModifyCamera(bool* bSuccess)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42109);

	UCamMod_Master_C_ShouldModifyCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_Master.CamMod_Master_C.UpdateValues
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              InFOV                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCamMod_Master_C::UpdateValues(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42108);

	UCamMod_Master_C_UpdateValues_Params params {};
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InFOV = InFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AKSCharacter*                                KSCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSCharacterMovementComponent*               MovementComponent                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSCameraManager_C*                          Camera_Manager                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCamMod_Master_C::GetKSCharacterData(bool* Success, class AKSCharacter** KSCharacter, class UKSCharacterMovementComponent** MovementComponent, class AKSCameraManager_C** Camera_Manager)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42107);

	UCamMod_Master_C_GetKSCharacterData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (KSCharacter != nullptr)
		*KSCharacter = params.KSCharacter;
	if (MovementComponent != nullptr)
		*MovementComponent = params.MovementComponent;
	if (Camera_Manager != nullptr)
		*Camera_Manager = params.Camera_Manager;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ViewLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              FOV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NewViewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    NewViewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              NewFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCamMod_Master_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42106);

	UCamMod_Master_C_BlueprintModifyCamera_Params params {};
	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
