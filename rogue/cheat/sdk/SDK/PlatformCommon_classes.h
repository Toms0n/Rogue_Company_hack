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

// Class PlatformCommon.PComGameEngine
// 0x0038 (FullSize[0x0EE0] - InheritedSize[0x0EA8])
class UPComGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData_69B0[0x10];                                    // 0x0EA8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRedirectLogsToConsole;                                    // 0x0EB8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RHVM[0x27];                                    // 0x0EB9(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(19);
		return ptr;
	}



};

// Class PlatformCommon.PCom_IpConnection
// 0x0008 (FullSize[0x1B28] - InheritedSize[0x1B20])
class UPCom_IpConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData_CA0Y[0x8];                                     // 0x1B20(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(24);
		return ptr;
	}



};

// Class PlatformCommon.PCom_LocalPlayer
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UPCom_LocalPlayer : public ULocalPlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(26);
		return ptr;
	}



};

// Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPCom_UDPEncryptionHandlerComponentFactory : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(29);
		return ptr;
	}



};

// Class PlatformCommon.PCom_SimpleTimecodeProvider
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UPCom_SimpleTimecodeProvider : public UTimecodeProvider
{
public:
	struct FFrameRate                                  FrameRate;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_95Q1[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31);
		return ptr;
	}



	void SetFrameRate(const struct FFrameRate& InFrameRate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
