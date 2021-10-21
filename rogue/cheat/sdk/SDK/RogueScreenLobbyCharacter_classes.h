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

// BlueprintGeneratedClass RogueScreenLobbyCharacter.RogueScreenLobbyCharacter_C
// 0x000E (FullSize[0x3EE0] - InheritedSize[0x3ED2])
class ARogueScreenLobbyCharacter_C : public ALocalPlayerLobbyCharacter_C
{
public:
	unsigned char                                      UnknownData_LHVQ[0x6];                                     // 0x3ED2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x3ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54598);
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_RogueScreenLobbyCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
