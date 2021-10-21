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

// Class AsyncTraceUtil.AsyncTraceUtilBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAsyncTraceUtilBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(552);
		return ptr;
	}



	void OnMultiAsyncTraceResult__DelegateSignature(bool bBlockingHit, TArray<struct FHitResult> OutHits, const struct FVector& start, const struct FVector& end);
	void STATIC_MultiSphereSweepByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, float SphereRadius, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	bool STATIC_MultipleLineTraceAsync(class UObject* WorldContextObject, TArray<struct FVector> Starts, TArray<struct FVector> Ends, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	void STATIC_MultiLineTraceByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
