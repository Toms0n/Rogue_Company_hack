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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// 0x0028 (0x0048 - 0x0020)
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base
{
	struct FPoseLink                                   NotDedicatedServer;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   DedicatedServer;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RPL[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByLOD
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendByLOD : public FAnimNode_BlendListBase
{
	int                                                LOD;                                                       // 0x00A8(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6F4[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_RigidBodySkipServer
// 0x0008 (0x05B0 - 0x05A8)
struct FAnimNode_RigidBodySkipServer : public FAnimNode_RigidBody
{
	bool                                               bIsDedicatedServer;                                        // 0x05A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GEHQ[0x7];                                     // 0x05A9(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
