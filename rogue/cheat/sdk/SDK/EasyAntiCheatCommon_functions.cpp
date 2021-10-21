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
//		Offset -> 0x00C1C550
//		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10646);

	UEasyAntiCheatNetComponent_ServerMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C1C4B0
//		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10645);

	UEasyAntiCheatNetComponent_ClientMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
