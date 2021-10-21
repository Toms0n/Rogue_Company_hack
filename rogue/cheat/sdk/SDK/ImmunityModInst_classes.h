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

// BlueprintGeneratedClass ImmunityModInst.ImmunityModInst_C
// 0x0008 (FullSize[0x01C8] - InheritedSize[0x01C0])
class UImmunityModInst_C : public UDamageResistModInst_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27292);
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnNewCharacterFoundation();
	void ExecuteUbergraph_ImmunityModInst(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
