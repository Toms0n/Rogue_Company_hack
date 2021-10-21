#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAnimNotify_SelectiveAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USelectiveAkAudioEvent*                      Event;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollow;                                                   // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJ2K[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(388);
		return ptr;
	}



};

// Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USelectiveAkAudioEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(399);
		return ptr;
	}



};

// Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USelectiveAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(400);
		return ptr;
	}



	void STATIC_PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent);
	void STATIC_PostSelectiveEventStop(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int STATIC_PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent);
	int STATIC_PostSelectiveEventPlay(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	void STATIC_GetStopEventsFromSelectiveEventForAkComponent(TArray<struct FSelectiveEventStopPair>* OutStopEvents, class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent);
	void STATIC_GetStopEventsFromSelectiveEvent(TArray<struct FSelectiveEventStopPair>* OutStopEvents, class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor);
	class UAkAudioEvent* STATIC_GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, struct FString* OutEventName);
	class UAkAudioEvent* STATIC_GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, struct FString* OutEventName);
};

// Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UViewDependentAkAudioEvent : public USelectiveAkAudioEvent
{
public:
	class UClass*                                      Rules;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               FirstPersonAkEventPlay;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThirdPersonAkEventPlay;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               FirstPersonAkEventStop;                                    // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThirdPersonAkEventStop;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(401);
		return ptr;
	}



};

// Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UViewDependentAkEventRules : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(402);
		return ptr;
	}



};

// Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UViewDependentRules_IsViewTarget : public UViewDependentAkEventRules
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(403);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
