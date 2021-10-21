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

// DynamicClass AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C
// 0x0028 (FullSize[0x1250] - InheritedSize[0x1228])
class UAttackBomb_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	class AKSCharacter*                                K2Node_Event_SkyDiver_3;                                   // 0x1228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_DoesCharacterHaveHoverboard_Has_Hoverboard;       // 0x1230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_06TJ[0x7];                                     // 0x1231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacter*                                K2Node_Event_SkyDiver_2;                                   // 0x1238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_Event_SkyDiver;                                     // 0x1240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_OldState;                                     // 0x1248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_NewState;                                     // 0x1249(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                              // 0x124A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_DoesCharacterHaveBackpack_HasBackpack;            // 0x124B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallFunc_DoesCharacterHaveBackpack_HasBackpack_2;          // 0x124C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WTC[0x3];                                     // 0x124D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(33479);
		return ptr;
	}



	void OnSkyDiveStarted(class AKSCharacter* bpp__SkyDiver__pf);
	void OnSkyDiveSkipped(class AKSCharacter* bpp__SkyDiver__pf);
	void OnSkyDiveEnded(class AKSCharacter* bpp__SkyDiver__pf);
	void DoesCharacterHaveHoverboard(class AKSCharacter* bpp__Character__pf, bool* bpp__HasxHoverboard__pfT);
	void DoesCharacterHaveBackpack(bool* bpp__HasBackpack__pf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
