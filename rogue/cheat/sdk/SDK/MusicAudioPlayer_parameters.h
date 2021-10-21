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
// Parameters
//---------------------------------------------------------------------------

// Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array
struct AMusicAudioPlayer_C_Append_String_to_Event_Array_Params
{
	struct FString                                     AppendStringIn;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             EventNameArrayIn;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FString>                             EventNameArrayOut;                                         // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
struct AMusicAudioPlayer_C_PrependStringToEventArray_Params
{
	struct FString                                     PrependStringIn;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             EventNameArrayIn;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FString>                             EventNameArrayOut;                                         // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
struct AMusicAudioPlayer_C_ComposeEventNamePriorityArray_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UKSAudioPlayerStateParameterData*            CurrentStateParameters;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray
struct AMusicAudioPlayer_C_ComposeBankNamePriorityArray_Params
{
	struct FString                                     BankPrefix;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UKSAudioPlayerStateParameterData*            CurrentStateParameters;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
