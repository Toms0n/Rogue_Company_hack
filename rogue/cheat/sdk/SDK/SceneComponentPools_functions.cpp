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
//		Offset -> 0x00C79740
//		Name   -> Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
//		Flags  -> (Native, Protected)
// Parameters:
//		class UParticleSystemComponent*                    InPSC                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UParticleSystemPoolComponentBase::OnPSCFinished(class UParticleSystemComponent* InPSC)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10819);

	UParticleSystemPoolComponentBase_OnPSCFinished_Params params {};
	params.InPSC = InPSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C794A0
//		Name   -> Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPoolableDecalComponent::ForceReturnToPool()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10831);

	UPoolableDecalComponent_ForceReturnToPool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C7A790
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPoolAttachmentInfo                         AttachInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UStaticMeshComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMeshComponent* USceneComponentPoolStatics::STATIC_SpawnStaticMeshAttached(class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10847);

	USceneComponentPoolStatics_SpawnStaticMeshAttached_Params params {};
	params.Mesh = Mesh;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C7A5F0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      AnimClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPoolAttachmentInfo                         AttachInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* USceneComponentPoolStatics::STATIC_SpawnSkeletalMeshAttached(class USkeletalMesh* Mesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10846);

	USceneComponentPoolStatics_SpawnSkeletalMeshAttached_Params params {};
	params.Mesh = Mesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C7A3D0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UParticleSystem*                             EmitterTemplate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystemComponent*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<Engine_EAttachLocation> LocationType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10845);

	USceneComponentPoolStatics_SpawnEmitterAttached_Params params {};
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C7A230
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystem*                             EmitterTemplate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystemComponent*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystemComponent* USceneComponentPoolStatics::STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10844);

	USceneComponentPoolStatics_SpawnEmitterAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C79F90
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          DecalMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DecalSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Lifespan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SceneComponentPools_EDecalComponentType            DecalComponentType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPoolableDecalComponent*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, float Lifespan, SceneComponentPools_EDecalComponentType DecalComponentType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10843);

	USceneComponentPoolStatics_SpawnDecalAttached_Params params {};
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.Lifespan = Lifespan;
	params.DecalComponentType = DecalComponentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C79D70
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          DecalMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DecalSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Lifespan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SceneComponentPools_EDecalComponentType            DecalComponentType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPoolableDecalComponent*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPoolableDecalComponent* USceneComponentPoolStatics::STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float Lifespan, SceneComponentPools_EDecalComponentType DecalComponentType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10842);

	USceneComponentPoolStatics_SpawnDecalAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Lifespan = Lifespan;
	params.DecalComponentType = DecalComponentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C79D00
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMeshes(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10841);

	USceneComponentPoolStatics_ReleaseSpawnedStaticMeshes_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79C90
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UStaticMeshComponent*                        StaticMeshComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10840);

	USceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent_Params params {};
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79B30
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UStaticMesh*                                 StaticMeshComponent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPoolAttachmentInfo                         AttachInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedStaticMesh(class UStaticMesh* StaticMeshComponent, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10839);

	USceneComponentPoolStatics_ReleaseSpawnedStaticMesh_Params params {};
	params.StaticMeshComponent = StaticMeshComponent;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79AC0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMeshes(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10838);

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79A50
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10837);

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent_Params params {};
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C798B0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      AnimClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPoolAttachmentInfo                         AttachInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10836);

	USceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh_Params params {};
	params.SkeletalMesh = SkeletalMesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79840
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedEmitters(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10835);

	USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C797D0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USceneComponentPoolStatics::STATIC_ReleaseSpawnedDecals(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10834);

	USceneComponentPoolStatics_ReleaseSpawnedDecals_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79600
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.GetComponentForStaticMesh
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachSocketName                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMeshComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMeshComponent* USceneComponentPoolStatics::STATIC_GetComponentForStaticMesh(class UObject* WorldContextObject, class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FName& AttachSocketName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10833);

	USceneComponentPoolStatics_GetComponentForStaticMesh_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Mesh = Mesh;
	params.AttachToComponent = AttachToComponent;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C794C0
//		Name   -> Function SceneComponentPools.SceneComponentPoolStatics.GetComponentForSkeletalMesh
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachSocketName                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* USceneComponentPoolStatics::STATIC_GetComponentForSkeletalMesh(class UObject* WorldContextObject, class USkeletalMesh* Mesh, class USceneComponent* AttachToComponent, const struct FName& AttachSocketName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10832);

	USceneComponentPoolStatics_GetComponentForSkeletalMesh_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Mesh = Mesh;
	params.AttachToComponent = AttachToComponent;
	params.AttachSocketName = AttachSocketName;

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
