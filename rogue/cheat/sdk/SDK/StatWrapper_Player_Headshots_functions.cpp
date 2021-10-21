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
//		Name   -> Function StatWrapper_Player_Headshots.StatWrapper_Player_Headshots_C.GetStatValueText
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     InWorldContextObject                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerState*                              InPlayerState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DescriptorId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DescriptorString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ShouldOverwriteValue                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              OverwriteValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UStatWrapper_Player_Headshots_C::GetStatValueText(class UObject* InWorldContextObject, class AKSPlayerState* InPlayerState, int DescriptorId, const struct FString& DescriptorString, bool ShouldOverwriteValue, float OverwriteValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67683);

	UStatWrapper_Player_Headshots_C_GetStatValueText_Params params {};
	params.InWorldContextObject = InWorldContextObject;
	params.InPlayerState = InPlayerState;
	params.DescriptorId = DescriptorId;
	params.DescriptorString = DescriptorString;
	params.ShouldOverwriteValue = ShouldOverwriteValue;
	params.OverwriteValue = OverwriteValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function StatWrapper_Player_Headshots.StatWrapper_Player_Headshots_C.GetStatValue
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     InWorldContextObject                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerState*                              InPlayerState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DescriptorId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DescriptorString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ShouldOverwriteValue                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              OverwriteValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UStatWrapper_Player_Headshots_C::GetStatValue(class UObject* InWorldContextObject, class AKSPlayerState* InPlayerState, int DescriptorId, const struct FString& DescriptorString, bool ShouldOverwriteValue, float OverwriteValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62888);

	UStatWrapper_Player_Headshots_C_GetStatValue_Params params {};
	params.InWorldContextObject = InWorldContextObject;
	params.InPlayerState = InPlayerState;
	params.DescriptorId = DescriptorId;
	params.DescriptorString = DescriptorString;
	params.ShouldOverwriteValue = ShouldOverwriteValue;
	params.OverwriteValue = OverwriteValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
