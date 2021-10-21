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
//		Offset -> 0x00AF44A0
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            LootId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlatformInventoryItem::ShouldDisplayToUser(int64_t LootId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10100);

	UPlatformInventoryItem_ShouldDisplayToUser_Params params {};
	params.LootId = LootId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF4400
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InFriendlyName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlatformInventoryItem::SetFriendlySearchName(const struct FString& InFriendlyName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10099);

	UPlatformInventoryItem_SetFriendlySearchName_Params params {};
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AF4340
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       InContainer                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPlatformInventoryItem::SetCollectionContainer(const struct FGameplayTagContainer& InContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10098);

	UPlatformInventoryItem_SetCollectionContainer_Params params {};
	params.InContainer = InContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AF4310
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.IsItemTempDisabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlatformInventoryItem::IsItemTempDisabled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10097);

	UPlatformInventoryItem_IsItemTempDisabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF4280
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.IsItemDisabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               bIncludeTempDisabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlatformInventoryItem::IsItemDisabled(bool bIncludeTempDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10096);

	UPlatformInventoryItem_IsItemDisabled_Params params {};
	params.bIncludeTempDisabled = bIncludeTempDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF4150
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             IconLoadedEvent                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlatformInventoryItem::GetTextureAsync(const struct FScriptDelegate& IconLoadedEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10095);

	UPlatformInventoryItem_GetTextureAsync_Params params {};
	params.IconLoadedEvent = IconLoadedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AF40B0
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIconAsPath
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FSoftObjectPath                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSoftObjectPath UPlatformInventoryItem::GetSoftItemIconAsPath()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10094);

	UPlatformInventoryItem_GetSoftItemIconAsPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF4070
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
void UPlatformInventoryItem::GetSoftItemIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10093);

	UPlatformInventoryItem_GetSoftItemIcon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AF3F70
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       IconType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlatformInventoryItem::GetSoftIconByName(const struct FName& IconType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10092);

	UPlatformInventoryItem_GetSoftIconByName_Params params {};
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3E70
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconAsPathByName
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       IconType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSoftObjectPath                             Icon                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlatformInventoryItem::GetSoftIconAsPathByName(const struct FName& IconType, struct FSoftObjectPath* Icon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10091);

	UPlatformInventoryItem_GetSoftIconAsPathByName_Params params {};
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3D20
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlatformInventoryItem::GetItemNameAsString()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10090);

	UPlatformInventoryItem_GetItemNameAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3C70
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPlatformInventoryItem::GetItemName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10089);

	UPlatformInventoryItem_GetItemName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3C50
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPlatformInventoryItem::GetItemId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10088);

	UPlatformInventoryItem_GetItemId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3B20
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlatformInventoryItem::GetItemDescriptionAsString()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10087);

	UPlatformInventoryItem_GetItemDescriptionAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3A70
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPlatformInventoryItem::GetItemDescription()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10086);

	UPlatformInventoryItem_GetItemDescription_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3950
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     InFriendlyName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlatformInventoryItem::STATIC_GetItemByFriendlyName(const struct FString& InFriendlyName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10085);

	UPlatformInventoryItem_GetItemByFriendlyName_Params params {};
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AF3920
//		Name   -> Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UPlatformInventoryItem::GetCollectionContainer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10084);

	UPlatformInventoryItem_GetCollectionContainer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00AF3E50
//		Name   -> Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPlatformStoreAsset::GetLootId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10101);

	UPlatformStoreAsset_GetLootId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
