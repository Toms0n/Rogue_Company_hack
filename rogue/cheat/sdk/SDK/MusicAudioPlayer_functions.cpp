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
//		Name   -> Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     AppendStringIn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             EventNameArrayIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FString>                             EventNameArrayOut                                          (Parm, OutParm, HasGetValueTypeHash)
void AMusicAudioPlayer_C::Append_String_to_Event_Array(const struct FString& AppendStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55181);

	AMusicAudioPlayer_C_Append_String_to_Event_Array_Params params {};
	params.AppendStringIn = AppendStringIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventNameArrayIn != nullptr)
		*EventNameArrayIn = params.EventNameArrayIn;
	if (EventNameArrayOut != nullptr)
		*EventNameArrayOut = params.EventNameArrayOut;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     PrependStringIn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             EventNameArrayIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FString>                             EventNameArrayOut                                          (Parm, OutParm, HasGetValueTypeHash)
void AMusicAudioPlayer_C::PrependStringToEventArray(const struct FString& PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55180);

	AMusicAudioPlayer_C_PrependStringToEventArray_Params params {};
	params.PrependStringIn = PrependStringIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventNameArrayIn != nullptr)
		*EventNameArrayIn = params.EventNameArrayIn;
	if (EventNameArrayOut != nullptr)
		*EventNameArrayOut = params.EventNameArrayOut;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UKSAudioPlayerStateParameterData*            CurrentStateParameters                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<struct FString> AMusicAudioPlayer_C::ComposeEventNamePriorityArray(const struct FString& EventName, class UKSAudioPlayerStateParameterData* CurrentStateParameters)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55179);

	AMusicAudioPlayer_C_ComposeEventNamePriorityArray_Params params {};
	params.EventName = EventName;
	params.CurrentStateParameters = CurrentStateParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BankPrefix                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UKSAudioPlayerStateParameterData*            CurrentStateParameters                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<struct FString> AMusicAudioPlayer_C::ComposeBankNamePriorityArray(const struct FString& BankPrefix, class UKSAudioPlayerStateParameterData* CurrentStateParameters)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55178);

	AMusicAudioPlayer_C_ComposeBankNamePriorityArray_Params params {};
	params.BankPrefix = BankPrefix;
	params.CurrentStateParameters = CurrentStateParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
