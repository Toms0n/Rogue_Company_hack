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
// Parameters
//---------------------------------------------------------------------------

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
struct UCharacterEmotionComponent_C_ReceiveBeginPlay_Params
{
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
struct UCharacterEmotionComponent_C_Player_Downed_Changed_Params
{
	class AKSCharacter*                                bpp__Character__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
struct UCharacterEmotionComponent_C_Check_Death_State_Params
{
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
struct UCharacterEmotionComponent_C_Character_Health_Changed_Params
{
	class AKSCharacterBase*                            bpp__KSCharacter__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
struct UCharacterEmotionComponent_C_Character_Aim_State_Changed_Params
{
	Killstreak_EKSCharacterAimMode                     bpp__NewParam__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase*                            bpp__Character__pf;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnDeathStateChanged__DelegateSignature_Params
{
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnCharacterDownedChanged__DelegateSignature_Params
{
	class AKSCharacter*                                bpp__Character__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
struct UCharacterEmotionComponent_C_OnAimStateChange__DelegateSignature_Params
{
	Killstreak_EKSCharacterAimMode                     bpp__NewAimMode__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
