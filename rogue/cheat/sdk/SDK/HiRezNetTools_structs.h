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

// ScriptStruct HiRezNetTools.ReplicatedLog
// 0x0070
struct FReplicatedLog
{
	int                                                MaxEntryReplication;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxHistory;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TailRepIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadRepIndex;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemArrayTail;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemArrayHead;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4ZJ[0x58];                                    // 0x0018(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct HiRezNetTools.ReplicatedLogItem
// 0x0000
struct FReplicatedLogItem
{

};

// ScriptStruct HiRezNetTools.RepPreloaderItem
// 0x002C (0x0038 - 0x000C)
struct FRepPreloaderItem : public FFastArraySerializerItem
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // 0x000C(0x0010) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BundleName;                                                // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEntryWasReplicated;                                       // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LIPL[0x13];                                    // 0x0025(0x0013) MISSED OFFSET (PADDING)

};

// ScriptStruct HiRezNetTools.ReplicatedPreloader
// 0x00D8 (0x01E0 - 0x0108)
struct FReplicatedPreloader : public FFastArraySerializer
{
	unsigned char                                      UnknownData_AF24[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRepPreloaderItem>                   RepArray;                                                  // 0x0158(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               AlwaysIncludeBundles;                                      // 0x0168(0x0010) (ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UTDS[0x68];                                    // 0x0178(0x0068) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
