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
//		Offset -> 0x00C6F910
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USelectiveAkGameplayStatics::STATIC_PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10817);

	USelectiveAkGameplayStatics_PostSelectiveEventStopToAkComponent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C6F810
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USelectiveAkGameplayStatics::STATIC_PostSelectiveEventStop(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10816);

	USelectiveAkGameplayStatics_PostSelectiveEventStop_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C6F750
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USelectiveAkGameplayStatics::STATIC_PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10815);

	USelectiveAkGameplayStatics_PostSelectiveEventPlayToAkComponent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C6F660
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USelectiveAkGameplayStatics::STATIC_PostSelectiveEventPlay(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10814);

	USelectiveAkGameplayStatics_PostSelectiveEventPlay_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C6F510
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSelectiveEventStopPair>             OutStopEvents                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USelectiveAkGameplayStatics::STATIC_GetStopEventsFromSelectiveEventForAkComponent(TArray<struct FSelectiveEventStopPair>* OutStopEvents, class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10813);

	USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEventForAkComponent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;

}


// Function:
//		Offset -> 0x00C6F3C0
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSelectiveEventStopPair>             OutStopEvents                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USelectiveAkGameplayStatics::STATIC_GetStopEventsFromSelectiveEvent(TArray<struct FSelectiveEventStopPair>* OutStopEvents, class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10812);

	USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEvent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;

}


// Function:
//		Offset -> 0x00C6F290
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutEventName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* USelectiveAkGameplayStatics::STATIC_GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, struct FString* OutEventName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10811);

	USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEventForAkComponent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C6F160
//		Name   -> Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USelectiveAkAudioEvent*                      SelectiveEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutEventName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* USelectiveAkGameplayStatics::STATIC_GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, struct FString* OutEventName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10810);

	USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEvent_Params params {};
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
