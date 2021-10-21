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
//		Offset -> 0x00988C00
//		Name   -> Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPCom_SimpleTimecodeProvider::SetFrameRate(const struct FFrameRate& InFrameRate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(9670);

	UPCom_SimpleTimecodeProvider_SetFrameRate_Params params {};
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
