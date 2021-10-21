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
//		Offset -> 0x00D30B90
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               TransformNames                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10879);

	ULiveLinkBlueprintLibrary_TransformNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (TransformNames != nullptr)
		*TransformNames = params.TransformNames;

}


// Function:
//		Offset -> 0x00D30A80
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.TransformName
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10878);

	ULiveLinkBlueprintLibrary_TransformName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00D309B0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10877);

	ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params params {};
	params.SubjectKey = SubjectKey;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D308E0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10876);

	ULiveLinkBlueprintLibrary_RemoveSource_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D30640
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
//		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10875);

	ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function:
//		Offset -> 0x00D30570
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULiveLinkBlueprintLibrary::STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10874);

	ULiveLinkBlueprintLibrary_NumberOfTransforms_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D30490
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10873);

	ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params params {};
	params.SubjectKey = SubjectKey;
	params.bForThisFrame = bForThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D303C0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10872);

	ULiveLinkBlueprintLibrary_IsSourceStillValid_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D30340
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectName                        SubjectName                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10871);

	ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params params {};
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D30280
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.HasParent
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10870);

	ULiveLinkBlueprintLibrary_HasParent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D300F0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       TransformName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const struct FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10869);

	ULiveLinkBlueprintLibrary_GetTransformByName_Params params {};
	params.TransformName = TransformName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

}


// Function:
//		Offset -> 0x00D2FF60
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                TransformIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int TransformIndex, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10868);

	ULiveLinkBlueprintLibrary_GetTransformByIndex_Params params {};
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

}


// Function:
//		Offset -> 0x00D2F9C0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULiveLinkBlueprintLibrary::STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10867);

	ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params params {};
	params.SubjectKey = SubjectKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F890
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10866);

	ULiveLinkBlueprintLibrary_GetSourceType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F760
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10865);

	ULiveLinkBlueprintLibrary_GetSourceStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F630
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10864);

	ULiveLinkBlueprintLibrary_GetSourceMachineName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F4E0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10863);

	ULiveLinkBlueprintLibrary_GetRootTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

}


// Function:
//		Offset -> 0x00D2F220
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkBasicBlueprintData                 BasicData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       PropertyName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, const struct FName& PropertyName, float* Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10862);

	ULiveLinkBlueprintLibrary_GetPropertyValue_Params params {};
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BasicData != nullptr)
		*BasicData = params.BasicData;
	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F0E0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetParent
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLiveLinkTransform                          Parent                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10861);

	ULiveLinkBlueprintLibrary_GetParent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Parent != nullptr)
		*Parent = params.Parent;

}


// Function:
//		Offset -> 0x00D2EF40
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSubjectMetadata                            MetaData                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10860);

	ULiveLinkBlueprintLibrary_GetMetadata_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;

}


// Function:
//		Offset -> 0x00D2EE30
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               bIncludeDisabledSubject                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeDisal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FLiveLinkSubjectKey>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10859);

	ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params params {};
	params.bIncludeDisabledSubject = bIncludeDisabledSubject;
	params.bIncludeDisal = bIncludeDisal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2EDA0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectName                        SubjectName                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10858);

	ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params params {};
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2ECD0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               bIncludeVirtualSubject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FLiveLinkSubjectName>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10857);

	ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params params {};
	params.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2EB10
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TMap<struct FName, float>                          Curves                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10856);

	ULiveLinkBlueprintLibrary_GetCurves_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (Curves != nullptr)
		*Curves = params.Curves;

}


// Function:
//		Offset -> 0x00D2E9A0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FLiveLinkTransform>                  Children                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10855);

	ULiveLinkBlueprintLibrary_GetChildren_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Children != nullptr)
		*Children = params.Children;

}


// Function:
//		Offset -> 0x00D2E810
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLiveLinkBasicBlueprintData                 BasicBlueprintData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10854);

	ULiveLinkBlueprintLibrary_GetBasicData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = params.BasicBlueprintData;

}


// Function:
//		Offset -> 0x00D2ACD0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10853);

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params params {};
	params.SubjectName = SubjectName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AB00
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WorldTimeOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10852);

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params params {};
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.WorldTimeOffset = WorldTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2A920
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTimecode                                   SceneTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10851);

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params params {};
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2A7E0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSubjectRepresentation              SubjectRepresentation                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10850);

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params params {};
	params.SubjectRepresentation = SubjectRepresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2E2C0
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
//		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ULiveLinkBlueprintLibrary::STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10849);

	ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function:
//		Offset -> 0x00D2E200
//		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULiveLinkBlueprintLibrary::STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10848);

	ULiveLinkBlueprintLibrary_ChildCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2FDB0
//		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WorldTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkComponent::GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10883);

	ULiveLinkComponent_GetSubjectDataAtWorldTime_Params params {};
	params.SubjectName = SubjectName;
	params.WorldTime = WorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

}


// Function:
//		Offset -> 0x00D2FBD0
//		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTimecode                                   SceneTime                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkComponent::GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10882);

	ULiveLinkComponent_GetSubjectDataAtSceneTime_Params params {};
	params.SubjectName = SubjectName;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

}


// Function:
//		Offset -> 0x00D2FA70
//		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkComponent::GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10881);

	ULiveLinkComponent_GetSubjectData_Params params {};
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

}


// Function:
//		Offset -> 0x00D2E760
//		Name   -> Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               SubjectNames                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkComponent::GetAvailableSubjectNames(TArray<struct FName>* SubjectNames)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10880);

	ULiveLinkComponent_GetAvailableSubjectNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubjectNames != nullptr)
		*SubjectNames = params.SubjectNames;

}


// Function:
//		Offset -> 0x00D2E5A0
//		Name   -> Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FProviderPollResult>                 AvailableProviders                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10886);

	ULiveLinkMessageBusFinder_GetAvailableProviders_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvailableProviders != nullptr)
		*AvailableProviders = params.AvailableProviders;

}


// Function:
//		Offset -> 0x00D2E570
//		Name   -> Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULiveLinkMessageBusFinder*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::STATIC_ConstructMessageBusFinder()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10885);

	ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2E420
//		Name   -> Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FProviderPollResult                         Provider                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)
void ULiveLinkMessageBusFinder::STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10884);

	ULiveLinkMessageBusFinder_ConnectToProvider_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Provider != nullptr)
		*Provider = params.Provider;
	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

}


// Function:
//		Offset -> 0x00D2E1E0
//		Name   -> Function LiveLink.LiveLinkPreset.BuildFromClient
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULiveLinkPreset::BuildFromClient()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10888);

	ULiveLinkPreset_BuildFromClient_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D2E1B0
//		Name   -> Function LiveLink.LiveLinkPreset.ApplyToClient
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULiveLinkPreset::ApplyToClient()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10887);

	ULiveLinkPreset_ApplyToClient_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D307A0
//		Name   -> Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		TMap<struct FName, float>                          CurveItems                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ULiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10891);

	ULiveLinkRemapAsset_RemapCurveElements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;

}


// Function:
//		Offset -> 0x00D2F450
//		Name   -> Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		struct FName                                       CurveName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ULiveLinkRemapAsset::GetRemappedCurveName(const struct FName& CurveName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10890);

	ULiveLinkRemapAsset_GetRemappedCurveName_Params params {};
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2F3C0
//		Name   -> Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ULiveLinkRemapAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10889);

	ULiveLinkRemapAsset_GetRemappedBoneName_Params params {};
	params.BoneName = BoneName;

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
