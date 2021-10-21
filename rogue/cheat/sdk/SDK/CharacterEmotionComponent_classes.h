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

// DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C
// 0x0078 (FullSize[0x02B0] - InheritedSize[0x0238])
class UCharacterEmotionComponent_C : public UKSEmotionComponent
{
public:
	float                                              CachedPlayerHealth;                                        // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PainedDuration;                                            // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FocusedId;                                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeadId;                                                    // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WoundedId;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                      // 0x024C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3UB[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                          // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                               // 0x0268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCU8[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                    // 0x026C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                    // 0x027C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P0A8[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacterBase*                            K2Node_DynamicCast_AsKSCharacter_Base;                     // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                             // 0x0298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AEK5[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                    // 0x029C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPL1[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25070);
		return ptr;
	}



	void ReceiveBeginPlay();
	void Player_Downed_Changed(class AKSCharacter* bpp__Character__pf);
	void Check_Death_State();
	void Character_Health_Changed(class AKSCharacterBase* bpp__KSCharacter__pf);
	void Character_Aim_State_Changed(Killstreak_EKSCharacterAimMode bpp__NewParam__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf);
	void OnDeathStateChanged__DelegateSignature();
	void OnCharacterDownedChanged__DelegateSignature(class AKSCharacter* bpp__Character__pf);
	void OnAimStateChange__DelegateSignature(Killstreak_EKSCharacterAimMode bpp__NewAimMode__pf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
