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

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULiveLinkControllerBase : public UObject
{
public:
	unsigned char                                      UnknownData_K0G8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(454);
		return ptr;
	}



};

// Class LiveLinkComponents.LiveLinkCameraController
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(455);
		return ptr;
	}



};

// Class LiveLinkComponents.LiveLinkComponentController
// 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation              SubjectRepresentation;                                     // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap;                                             // 0x00C0(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUpdateInEditor;                                           // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZUWP[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FComponentReference                         ComponentToControl;                                        // 0x0128(0x0028) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTCY[0x8];                                     // 0x0150(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(456);
		return ptr;
	}



};

// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class UClass*, class UClass*>                 DefaultControllerForRole;                                  // 0x0028(0x0050) (Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(457);
		return ptr;
	}



};

// Class LiveLinkComponents.LiveLinkLightController
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(458);
		return ptr;
	}



};

// Class LiveLinkComponents.LiveLinkTransformController
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData            TransformData;                                             // 0x0030(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JOE5[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(459);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
