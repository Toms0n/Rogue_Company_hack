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

// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// 0x0140 (FullSize[0x0220] - InheritedSize[0x00E0])
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                      SubjectPreset;                                             // 0x00E0(0x0038) (NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       ChannelMask;                                               // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*>       SubSections;                                               // 0x0128(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YO1A[0x10];                                    // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SubjectName;                                               // 0x0148(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                          TemplateToPush;                                            // 0x0150(0x0090) (Deprecated, NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                               // 0x01E0(0x0020) (Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                                // 0x0200(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>             PropertyFloatChannels;                                     // 0x0210(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(461);
		return ptr;
	}



};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData                     SubSectionData;                                            // 0x0028(0x0010) (NativeAccessSpecifierPublic)
	class UClass*                                      SubjectRole;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57XF[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(462);
		return ptr;
	}



};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData_2D9J[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(463);
		return ptr;
	}



};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData_NZ52[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(464);
		return ptr;
	}



};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData_0QUJ[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(465);
		return ptr;
	}



};

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	class UClass*                                      TrackRole;                                                 // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(469);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
