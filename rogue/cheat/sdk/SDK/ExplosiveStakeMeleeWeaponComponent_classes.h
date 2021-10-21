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

// DynamicClass ExplosiveStakeMeleeWeaponComponent.ExplosiveStakeMeleeWeaponComponent_C
// 0x0050 (FullSize[0x15F0] - InheritedSize[0x15A0])
class UExplosiveStakeMeleeWeaponComponent_C : public UMasterMelee_WeaponComponent_C
{
public:
	bool                                               IsPlayingAbilityVO;                                        // 0x15A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0AVQ[0x3];                                     // 0x15A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              K2Node_Event_DeltaSeconds;                                 // 0x15A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_OldState;                                     // 0x15A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         K2Node_Event_NewState;                                     // 0x15A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                              // 0x15AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEWN[0x5];                                     // 0x15AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;            // 0x15B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                      // 0x15B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable;                                        // 0x15C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority;                           // 0x15D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                    // 0x15D4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKVO[0xC];                                     // 0x15E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39308);
		return ptr;
	}



	void Resolve_Combat_State_when_Aiming_Throw_on_Zipline();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
