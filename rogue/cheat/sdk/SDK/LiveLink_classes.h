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

// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                               bInterpolatePropertyValues;                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZA3[0x17];                                    // 0x0029(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(426);
		return ptr;
	}



};

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	unsigned char                                      UnknownData_JC9G[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(427);
		return ptr;
	}



};

// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	struct FName                                       BoneName;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0UA1[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(429);
		return ptr;
	}



};

// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	unsigned char                                      UnknownData_3NLK[0x1];                                     // 0x00D8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAppendSubjectNameToBones;                                 // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CI3Q[0x6];                                     // 0x00DA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(431);
		return ptr;
	}



};

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	LiveLink_ELiveLinkAxis                             OrientationAxisX;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	LiveLink_ELiveLinkAxis                             OrientationAxisY;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	LiveLink_ELiveLinkAxis                             OrientationAxisZ;                                          // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	LiveLink_ELiveLinkAxis                             TranslationAxisX;                                          // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	LiveLink_ELiveLinkAxis                             TranslationAxisY;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	LiveLink_ELiveLinkAxis                             TranslationAxisZ;                                          // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O01A[0x12];                                    // 0x002E(0x0012) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(433);
		return ptr;
	}



};

// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(434);
		return ptr;
	}



};

// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(435);
		return ptr;
	}



	void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name);
	void STATIC_SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	bool STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool STATIC_IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
	bool STATIC_IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const struct FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	class UClass* STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	struct FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	bool STATIC_GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, const struct FName& PropertyName, float* Value);
	void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal);
	class UClass* STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkSubjectName> STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
};

// Class LiveLink.LiveLinkComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class ULiveLinkComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                         // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99LM[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(436);
		return ptr;
	}



	void GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};

// Class LiveLink.LiveLinkDrivenComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                               // 0x00B0(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActorTransformBone;                                        // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyActorTransform;                                     // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetRelativeLocation;                                      // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JV42[0x6];                                     // 0x00C2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(437);
		return ptr;
	}



};

// Class LiveLink.LiveLinkInstance
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class ULiveLinkInstance : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                      // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(438);
		return ptr;
	}



};

// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class ULiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData_SV0W[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(439);
		return ptr;
	}



	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
	void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
};

// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(441);
		return ptr;
	}



};

// Class LiveLink.LiveLinkMessageBusSourceSettings
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(443);
		return ptr;
	}



};

// Class LiveLink.LiveLinkPreset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>               Sources;                                                   // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubjectPreset>              Subjects;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(444);
		return ptr;
	}



	void BuildFromClient();
	bool ApplyToClient();
};

// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkRetargetAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(445);
		return ptr;
	}



};

// Class LiveLink.LiveLinkRemapAsset
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData_ZENJ[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(446);
		return ptr;
	}



	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(const struct FName& CurveName);
	struct FName GetRemappedBoneName(const struct FName& BoneName);
};

// Class LiveLink.LiveLinkSettings
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>         DefaultRoleSettings;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FrameInterpolationProcessor;                               // 0x0038(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DefaultLiveLinkPreset[0x28];                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FDirectoryPath                              PresetSaveDir;                                             // 0x0068(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	float                                              ClockOffsetCorrectionStep;                                 // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LiveLinkInterface_ELiveLinkSourceMode              DefaultMessageBusSourceMode;                               // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8166[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MessageBusPingRequestFrequency;                            // 0x0080(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MessageBusHeartbeatFrequency;                              // 0x0088(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MessageBusHeartbeatTimeout;                                // 0x0090(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MessageBusTimeBeforeRemovingInactiveSource;                // 0x0098(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                     // 0x00A0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ValidColor;                                                // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InvalidColor;                                              // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextSizeSource;                                            // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextSizeSubject;                                           // 0x00C9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92P0[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(447);
		return ptr;
	}



};

// Class LiveLink.LiveLinkTimecodeProvider
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                         SubjectKey;                                                // 0x0030(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	LiveLink_ELiveLinkTimecodeProviderEvaluationType   Evaluation;                                                // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E4WF[0x3];                                     // 0x0048(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideFrameRate;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1SF2[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameRate                                  OverrideFrameRate;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                BufferSize;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YS4C[0x64];                                    // 0x005C(0x0064) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(448);
		return ptr;
	}



};

// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                               // 0x0030(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4O7E[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(451);
		return ptr;
	}



};

// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	struct FName                                       SourceName;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(452);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
