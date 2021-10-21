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
//		Offset -> 0x00A6B280
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USkinnedMeshComponent*                       SkinnedMeshComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LODIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_BlueprintFunctionLibrary::STATIC_ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent* SkinnedMeshComponent, int MaterialID, int SectionIndex, bool bShow, int LODIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9747);

	UPGame_BlueprintFunctionLibrary_ShowSkinnedMeshMaterialSection_Params params {};
	params.SkinnedMeshComponent = SkinnedMeshComponent;
	params.MaterialID = MaterialID;
	params.SectionIndex = SectionIndex;
	params.bShow = bShow;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B1C0
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLightingChannels                           NewLightingChannels                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_BlueprintFunctionLibrary::STATIC_SetLightingChannels(class UPrimitiveComponent* PrimitiveComponent, const struct FLightingChannels& NewLightingChannels)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9746);

	UPGame_BlueprintFunctionLibrary_SetLightingChannels_Params params {};
	params.PrimitiveComponent = PrimitiveComponent;
	params.NewLightingChannels = NewLightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6AE50
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravelWithGameMode
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Options                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSeamless                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_ServerTravelWithGameMode(class UObject* WorldContextObject, TArray<struct FString> Options, bool bSeamless)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9745);

	UPGame_BlueprintFunctionLibrary_ServerTravelWithGameMode_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Options = Options;
	params.bSeamless = bSeamless;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6ABC0
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravel
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Options                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSeamless                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPreserveCurrentOptions                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_ServerTravel(class UObject* WorldContextObject, TArray<struct FString> Options, bool bSeamless, bool bPreserveCurrentOptions)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9744);

	UPGame_BlueprintFunctionLibrary_ServerTravel_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Options = Options;
	params.bSeamless = bSeamless;
	params.bPreserveCurrentOptions = bPreserveCurrentOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A610
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_IsSteamClient()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9743);

	UPGame_BlueprintFunctionLibrary_IsSteamClient_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A500
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               IsConsole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsMobile                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_IsPlatformType(bool IsConsole, bool IsPC, bool IsMobile)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9742);

	UPGame_BlueprintFunctionLibrary_IsPlatformType_Params params {};
	params.IsConsole = IsConsole;
	params.IsPC = IsPC;
	params.IsMobile = IsMobile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A210
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               IsXboxOne                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsPS4                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsSwitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsWindows                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsMac                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsLinux                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsIOS                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsAndroid                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsXSX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsPS5                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_IsPlatform(bool IsXboxOne, bool IsPS4, bool IsSwitch, bool IsWindows, bool IsMac, bool IsLinux, bool IsIOS, bool IsAndroid, bool IsXSX, bool IsPS5)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9741);

	UPGame_BlueprintFunctionLibrary_IsPlatform_Params params {};
	params.IsXboxOne = IsXboxOne;
	params.IsPS4 = IsPS4;
	params.IsSwitch = IsSwitch;
	params.IsWindows = IsWindows;
	params.IsMac = IsMac;
	params.IsLinux = IsLinux;
	params.IsIOS = IsIOS;
	params.IsAndroid = IsAndroid;
	params.IsXSX = IsXSX;
	params.IsPS5 = IsPS5;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A190
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		PlatformGameFramework_EGameBits                    GameBit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_IsGameBit(PlatformGameFramework_EGameBits GameBit)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9740);

	UPGame_BlueprintFunctionLibrary_IsGameBit_Params params {};
	params.GameBit = GameBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A160
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_IsAnonymousLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9739);

	UPGame_BlueprintFunctionLibrary_IsAnonymousLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69DA0
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPGame_Property                             Prop                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPGame_BlueprintFunctionLibrary::STATIC_GetPropertyClampedValue(const struct FPGame_Property& Prop)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9738);

	UPGame_BlueprintFunctionLibrary_GetPropertyClampedValue_Params params {};
	params.Prop = Prop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69CD0
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		PlatformGameFramework_EGameLocalizationType        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformGameFramework_EGameLocalizationType UPGame_BlueprintFunctionLibrary::STATIC_GetGameLocalizationType()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9737);

	UPGame_BlueprintFunctionLibrary_GetGameLocalizationType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69970
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumFramesToDelay                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_BlueprintFunctionLibrary::STATIC_FrameDelay(class UObject* WorldContextObject, int NumFramesToDelay, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9736);

	UPGame_BlueprintFunctionLibrary_FrameDelay_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.NumFramesToDelay = NumFramesToDelay;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69600
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPGame_BlueprintableLightingChannels        BlueprintableLightingChannels                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FLightingChannels                           ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FLightingChannels UPGame_BlueprintFunctionLibrary::STATIC_ConvertToEngineLightingChannels(const struct FPGame_BlueprintableLightingChannels& BlueprintableLightingChannels)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9735);

	UPGame_BlueprintFunctionLibrary_ConvertToEngineLightingChannels_Params params {};
	params.BlueprintableLightingChannels = BlueprintableLightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69570
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLightingChannels                           EngineLightChannels                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPGame_BlueprintableLightingChannels        ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPGame_BlueprintableLightingChannels UPGame_BlueprintFunctionLibrary::STATIC_ConvertToBlueprintableLightingChannels(const struct FLightingChannels& EngineLightChannels)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9734);

	UPGame_BlueprintFunctionLibrary_ConvertToBlueprintableLightingChannels_Params params {};
	params.EngineLightChannels = EngineLightChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A692C0
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UMeshComponent*                              InMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent* InMeshComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9733);

	UPGame_BlueprintFunctionLibrary_AreMeshComponentTexturesFullyStreamedIn_Params params {};
	params.InMeshComponent = InMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69240
//		Name   -> Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_BlueprintFunctionLibrary::STATIC_AreActorTexturesFullyStreamedIn(class AActor* InActor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9732);

	UPGame_BlueprintFunctionLibrary_AreActorTexturesFullyStreamedIn_Params params {};
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A790
//		Name   -> Function PlatformGameFramework.PGame_Character.OnRep_Tween
//		Flags  -> (Native, Protected)
void APGame_Character::OnRep_Tween()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9824);

	APGame_Character_OnRep_Tween_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A6A0
//		Name   -> Function PlatformGameFramework.PGame_Character.OnRep_Charge
//		Flags  -> (Native, Protected)
void APGame_Character::OnRep_Charge()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9823);

	APGame_Character_OnRep_Charge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B710
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
//		Flags  -> (Native, Public)
void UPGame_CharacterMovementComponent::StopTween()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9830);

	UPGame_CharacterMovementComponent_StopTween_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B6F0
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
//		Flags  -> (Native, Public)
void UPGame_CharacterMovementComponent::StopCharge()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9829);

	UPGame_CharacterMovementComponent_StopCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B5D0
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
//		Flags  -> (Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		unsigned char                                      TweenType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     TweenDestination                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TweenTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CharacterMovementComponent::StartTween(unsigned char TweenType, const struct FVector& TweenDestination, float TweenTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9828);

	UPGame_CharacterMovementComponent_StartTween_Params params {};
	params.TweenType = TweenType;
	params.TweenDestination = TweenDestination;
	params.TweenTime = TweenTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B400
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
//		Flags  -> (Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		unsigned char                                      ChargeType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ChargeInitialYaw                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ChargeInitialLocation                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ChargeSpeed                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ChargeRange                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CharacterMovementComponent::StartCharge(unsigned char ChargeType, float ChargeInitialYaw, const struct FVector& ChargeInitialLocation, float ChargeSpeed, float ChargeRange)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9827);

	UPGame_CharacterMovementComponent_StartCharge_Params params {};
	params.ChargeType = ChargeType;
	params.ChargeInitialYaw = ChargeInitialYaw;
	params.ChargeInitialLocation = ChargeInitialLocation;
	params.ChargeSpeed = ChargeSpeed;
	params.ChargeRange = ChargeRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A7B0
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FTweenInfo                                  TweenInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_CharacterMovementComponent::OnRep_Tween(const struct FTweenInfo& TweenInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9826);

	UPGame_CharacterMovementComponent_OnRep_Tween_Params params {};
	params.TweenInfo = TweenInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A6C0
//		Name   -> Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FChargeInfo                                 ChargeInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_CharacterMovementComponent::OnRep_Charge(const struct FChargeInfo& ChargeInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9825);

	UPGame_CharacterMovementComponent_OnRep_Charge_Params params {};
	params.ChargeInfo = ChargeInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B780
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPostLogin
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::TestFubarRewardPostLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9845);

	UPGame_CheatComponent_TestFubarRewardPostLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B7D0
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPosted
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::TestFubarRewardPosted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9844);

	UPGame_CheatComponent_TestFubarRewardPosted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B730
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.TestFubar
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::TestFubar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9843);

	UPGame_CheatComponent_TestFubar_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6AB20
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPostLogin
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void UPGame_CheatComponent::ServerTestFubarRewardPostLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9842);

	UPGame_CheatComponent_ServerTestFubarRewardPostLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6AB70
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPosted
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void UPGame_CheatComponent::ServerTestFubarRewardPosted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9841);

	UPGame_CheatComponent_ServerTestFubarRewardPosted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6AAD0
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubar
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void UPGame_CheatComponent::ServerTestFubar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9840);

	UPGame_CheatComponent_ServerTestFubar_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6AA10
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall
//		Flags  -> (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FString                                     request                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CheatComponent::ServerExecCall(const struct FString& request)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9839);

	UPGame_CheatComponent_ServerExecCall_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A970
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ServerExec
//		Flags  -> (Exec, Native, Protected)
// Parameters:
//		struct FString                                     request                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CheatComponent::ServerExec(const struct FString& request)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9838);

	UPGame_CheatComponent_ServerExec_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A660
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.Logout
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::Logout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9837);

	UPGame_CheatComponent_Logout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B8C0
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		int                                                QueueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CheatComponent::gmJoinQueue(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9836);

	UPGame_CheatComponent_gmJoinQueue_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B820
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.gmCommand
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		struct FString                                     request                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CheatComponent::gmCommand(const struct FString& request)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9835);

	UPGame_CheatComponent_gmCommand_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B820
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.gmC
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		struct FString                                     request                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_CheatComponent::gmC(const struct FString& request)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9834);

	UPGame_CheatComponent_gmC_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69950
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.ForceCrash
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::ForceCrash()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9833);

	UPGame_CheatComponent_ForceCrash_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69860
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.DumpAnimationStats
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::DumpAnimationStats()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9832);

	UPGame_CheatComponent_DumpAnimationStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69840
//		Name   -> Function PlatformGameFramework.PGame_CheatComponent.CustomForceStart
//		Flags  -> (Final, Exec, Native, Protected)
void UPGame_CheatComponent::CustomForceStart()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9831);

	UPGame_CheatComponent_CustomForceStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
//		Flags  -> (Event, Public, BlueprintEvent)
void APGame_CombatLogVisualizer::Visualize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9848);

	APGame_CombatLogVisualizer_Visualize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A640
//		Name   -> Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
//		Flags  -> (Final, Native, Public)
void APGame_CombatLogVisualizer::LoadCombatLog()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9847);

	APGame_CombatLogVisualizer_LoadCombatLog_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
//		Flags  -> (Event, Public, BlueprintEvent)
void APGame_CombatLogVisualizer::ClearVisualization()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9846);

	APGame_CombatLogVisualizer_ClearVisualization_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A750
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
//		Flags  -> (Native, Public)
void UPGame_EffectManagerComponent::OnRep_EffectData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9856);

	UPGame_EffectManagerComponent_OnRep_EffectData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A090
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FPGame_InstantEffectRepData                 repData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_EffectManagerComponent::InstantEffectBroadcast(const struct FPGame_InstantEffectRepData& repData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9855);

	UPGame_EffectManagerComponent_InstantEffectBroadcast_Params params {};
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69F30
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                PropertyId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPGame_EffectManagerComponent::GetPropertyValueIntFromBlueprint(int PropertyId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9854);

	UPGame_EffectManagerComponent_GetPropertyValueIntFromBlueprint_Params params {};
	params.PropertyId = PropertyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69E90
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                PropertyId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPGame_EffectManagerComponent::GetPropertyValueFromBlueprint(int PropertyId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9853);

	UPGame_EffectManagerComponent_GetPropertyValueFromBlueprint_Params params {};
	params.PropertyId = PropertyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69B50
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
//		Flags  -> (Final, Native, Public, HasOutParms, Const)
// Parameters:
//		struct FPGame_PersistentEffectRepData              repData                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UPGame_EffectGroupPersistent*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPGame_EffectGroupPersistent* UPGame_EffectManagerComponent::GetDefaultEffectGroupForPersistentRepData(const struct FPGame_PersistentEffectRepData& repData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9852);

	UPGame_EffectManagerComponent_GetDefaultEffectGroupForPersistentRepData_Params params {};
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69A90
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
//		Flags  -> (Final, Native, Public, HasOutParms, Const)
// Parameters:
//		struct FPGame_InstantEffectRepData                 repData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class UPGame_EffectGroupInstant*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPGame_EffectGroupInstant* UPGame_EffectManagerComponent::GetDefaultEffectGroupForInstantRepData(const struct FPGame_InstantEffectRepData& repData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9851);

	UPGame_EffectManagerComponent_GetDefaultEffectGroupForInstantRepData_Params params {};
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69750
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FPGame_PersistentEffectRepData              repData                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UPGame_EffectAttachment*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPGame_EffectAttachment* UPGame_EffectManagerComponent::CreatePersistentAttachment(const struct FPGame_PersistentEffectRepData& repData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9850);

	UPGame_EffectManagerComponent_CreatePersistentAttachment_Params params {};
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A696A0
//		Name   -> Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FPGame_InstantEffectRepData                 repData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPGame_EffectManagerComponent::CreateInstantAttachment(const struct FPGame_InstantEffectRepData& repData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9849);

	UPGame_EffectManagerComponent_CreateInstantAttachment_Params params {};
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69D00
//		Name   -> Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                propIdInt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPGame_Effectable::GetIntPropertyValue(int propIdInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9858);

	UPGame_Effectable_GetIntPropertyValue_Params params {};
	params.propIdInt = propIdInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69C30
//		Name   -> Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                propIdInt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPGame_Effectable::GetFloatPropertyValue(int propIdInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9857);

	UPGame_Effectable_GetFloatPropertyValue_Params params {};
	params.propIdInt = propIdInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A6A840
//		Name   -> Function PlatformGameFramework.PGame_GameInstance.ProvideSonyMatchFeedback
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bReviewTeamOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_GameInstance::ProvideSonyMatchFeedback(bool bReviewTeamOnly)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9862);

	UPGame_GameInstance_ProvideSonyMatchFeedback_Params params {};
	params.bReviewTeamOnly = bReviewTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69FE0
//		Name   -> Function PlatformGameFramework.PGame_GameInstance.HasValidSonyMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPGame_GameInstance::HasValidSonyMatch()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9861);

	UPGame_GameInstance_HasValidSonyMatch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A69880
//		Name   -> Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
//		Flags  -> (Native, Protected)
// Parameters:
//		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_GameInstance::EndLoadingScreen(class UWorld* World)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9860);

	UPGame_GameInstance_EndLoadingScreen_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69340
//		Name   -> Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
//		Flags  -> (Native, Protected)
// Parameters:
//		struct FString                                     mapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_GameInstance::BeginLoadingScreen(const struct FString& mapName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9859);

	UPGame_GameInstance_BeginLoadingScreen_Params params {};
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A680
//		Name   -> Function PlatformGameFramework.PGame_GameMode.OnFubarShutdownTimeout
//		Flags  -> (Final, Native, Protected)
void APGame_GameMode::OnFubarShutdownTimeout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9866);

	APGame_GameMode_OnFubarShutdownTimeout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A010
//		Name   -> Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APGame_GameMode::InactivePlayerStateDestroyed(class AActor* InActor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9865);

	APGame_GameMode_InactivePlayerStateDestroyed_Params params {};
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69910
//		Name   -> Function PlatformGameFramework.PGame_GameMode.FinalShutdown
//		Flags  -> (Final, Native, Protected)
void APGame_GameMode::FinalShutdown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9864);

	APGame_GameMode_FinalShutdown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69930
//		Name   -> Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
//		Flags  -> (Native, Protected)
void APGame_GameMode::FinalizeMatchEnded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9863);

	APGame_GameMode_FinalizeMatchEnded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A770
//		Name   -> Function PlatformGameFramework.PGame_GameState.OnRep_SonyMatchIdForPlayerFeedback
//		Flags  -> (Final, Native, Public)
void APGame_GameState::OnRep_SonyMatchIdForPlayerFeedback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9867);

	APGame_GameState_OnRep_SonyMatchIdForPlayerFeedback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A950
//		Name   -> Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
//		Flags  -> (Final, Native, Private)
void UPGame_LandingPanelJSONHandler::RequestNewJson()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9868);

	UPGame_LandingPanelJSONHandler_RequestNewJson_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B130
//		Name   -> Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchOwnerEligibility
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		bool                                               bIsEligible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APGame_PlayerController::ServerUpdateSonyMatchOwnerEligibility(bool bIsEligible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10037);

	APGame_PlayerController_ServerUpdateSonyMatchOwnerEligibility_Params params {};
	params.bIsEligible = bIsEligible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6B090
//		Name   -> Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		struct FString                                     InMatchId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APGame_PlayerController::ServerUpdateSonyMatchData(const struct FString& InMatchId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10036);

	APGame_PlayerController_ServerUpdateSonyMatchData_Params params {};
	params.InMatchId = InMatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69480
//		Name   -> Function PlatformGameFramework.PGame_PlayerController.ClientUpdateSonyMatchData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		struct FString                                     InMatchId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APGame_PlayerController::ClientUpdateSonyMatchData(const struct FString& InMatchId, const struct FString& InActivityId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10035);

	APGame_PlayerController_ClientUpdateSonyMatchData_Params params {};
	params.InMatchId = InMatchId;
	params.InActivityId = InActivityId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69400
//		Name   -> Function PlatformGameFramework.PGame_PlayerController.ClientGameFubared
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		PlatformGameFramework_EFubarReason                 Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APGame_PlayerController::ClientGameFubared(PlatformGameFramework_EFubarReason Reason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10034);

	APGame_PlayerController_ClientGameFubared_Params params {};
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A693E0
//		Name   -> Function PlatformGameFramework.PGame_PlayerController.ClientCheckSonyMatchOwnerEligibility
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void APGame_PlayerController::ClientCheckSonyMatchOwnerEligibility()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10033);

	APGame_PlayerController_ClientCheckSonyMatchOwnerEligibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A8D0
//		Name   -> Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_PositionHistoryComponent::RemoveTrackedPrimitive(class UPrimitiveComponent* InPrimitive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10061);

	UPGame_PositionHistoryComponent_RemoveTrackedPrimitive_Params params {};
	params.InPrimitive = InPrimitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A69180
//		Name   -> Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPGame_PositionHistoryComponent::AddTrackedPrimitive(class UPrimitiveComponent* InPrimitive, int Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10060);

	UPGame_PositionHistoryComponent_AddTrackedPrimitive_Params params {};
	params.InPrimitive = InPrimitive;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
