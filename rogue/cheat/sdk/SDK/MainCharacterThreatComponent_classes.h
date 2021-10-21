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

// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// 0x0090 (FullSize[0x0220] - InheritedSize[0x0190])
class UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C
{
public:
	TMap<int, struct FLinearColor>                     DebugColorMap;                                             // 0x0190(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               DebuggingVisuals;                                          // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1APJ[0x3];                                     // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                             // 0x01E4(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaSeconds;                                 // 0x01F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_Show;                                         // 0x01F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97GH[0x3];                                     // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor_2;                           // 0x01FC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CallFunc_Map_Find_Value;                                   // 0x020C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPNQ[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25081);
		return ptr;
	}



	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void DebugThreatLevels(bool bpp__Show__pf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
