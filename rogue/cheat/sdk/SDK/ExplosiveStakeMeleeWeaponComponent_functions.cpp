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
//		Offset -> 0x01822C10
//		Name   -> Function ExplosiveStakeMeleeWeaponComponent.ExplosiveStakeMeleeWeaponComponent_C.Resolve Combat State when Aiming Throw on Zipline
//		Flags  -> (Native, Public, BlueprintCallable)
void UExplosiveStakeMeleeWeaponComponent_C::Resolve_Combat_State_when_Aiming_Throw_on_Zipline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42068);

	UExplosiveStakeMeleeWeaponComponent_C_Resolve_Combat_State_when_Aiming_Throw_on_Zipline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
