// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01829370
//		Name   -> Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
//		Flags  -> (Native, Event, Public)
void UCharacterEmotionComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25079);

	UCharacterEmotionComponent_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C79740
//		Name   -> Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::Player_Downed_Changed(class AKSCharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25078);

	UCharacterEmotionComponent_C_Player_Downed_Changed_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018290E0
//		Name   -> Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
//		Flags  -> (Native, Public, BlueprintCallable)
void UCharacterEmotionComponent_C::Check_Death_State()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25077);

	UCharacterEmotionComponent_C_Check_Death_State_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01829050
//		Name   -> Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacterBase*                            bpp__KSCharacter__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::Character_Health_Changed(class AKSCharacterBase* bpp__KSCharacter__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25076);

	UCharacterEmotionComponent_C_Character_Health_Changed_Params params {};
	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01828FD0
//		Name   -> Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		Killstreak_EKSCharacterAimMode                     bpp__NewParam__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::Character_Aim_State_Changed(Killstreak_EKSCharacterAimMode bpp__NewParam__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25075);

	UCharacterEmotionComponent_C_Character_Aim_State_Changed_Params params {};
	params.bpp__NewParam__pf = bpp__NewParam__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25074);

	UCharacterEmotionComponent_C_OnHealthChanged__DelegateSignature_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
void UCharacterEmotionComponent_C::OnDeathStateChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25073);

	UCharacterEmotionComponent_C_OnDeathStateChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::OnCharacterDownedChanged__DelegateSignature(class AKSCharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25072);

	UCharacterEmotionComponent_C_OnCharacterDownedChanged__DelegateSignature_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		Killstreak_EKSCharacterAimMode                     bpp__NewAimMode__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterEmotionComponent_C::OnAimStateChange__DelegateSignature(Killstreak_EKSCharacterAimMode bpp__NewAimMode__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25071);

	UCharacterEmotionComponent_C_OnAimStateChange__DelegateSignature_Params params {};
	params.bpp__NewAimMode__pf = bpp__NewAimMode__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
