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
//		Offset -> 0x01A17C00
//		Name   -> Function AudioCapture.AudioCapture.StopCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAudioCapture::StopCapturingAudio()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11378);

	UAudioCapture_StopCapturingAudio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A17BE0
//		Name   -> Function AudioCapture.AudioCapture.StartCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAudioCapture::StartCapturingAudio()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11377);

	UAudioCapture_StartCapturingAudio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A17BB0
//		Name   -> Function AudioCapture.AudioCapture.IsCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::IsCapturingAudio()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11376);

	UAudioCapture_IsCapturingAudio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A17B10
//		Name   -> Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAudioCaptureDeviceInfo                     OutInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11375);

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A17AE0
//		Name   -> Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAudioCapture*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioCapture* UAudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11379);

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params {};

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
