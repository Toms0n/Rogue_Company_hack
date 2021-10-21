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

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEncodingSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(759);
		return ptr;
	}



};

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2462);
		return ptr;
	}



};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpatializationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2463);
		return ptr;
	}



};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2464);
		return ptr;
	}



};

// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundModulationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2465);
		return ptr;
	}



};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReverbPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2466);
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2467);
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundfieldEffectSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2468);
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2469);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
