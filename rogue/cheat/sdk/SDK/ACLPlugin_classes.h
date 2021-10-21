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

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UACLStatsDumpCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(567);
		return ptr;
	}



};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(569);
		return ptr;
	}



};

// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimBoneCompressionCodec*                   SafetyFallbackCodec;                                       // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(570);
		return ptr;
	}



};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(571);
		return ptr;
	}



};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(572);
		return ptr;
	}



};

// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(574);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
