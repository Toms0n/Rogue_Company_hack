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
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush From Icon Info
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UIconInfo*                                   Icon_Info                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25198);

	UWBP_AsyncIcon_C_Set_Brush_From_Icon_Info_Params params {};
	params.Icon_Info = Icon_Info;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Path on Item
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSoftObjectPath                             Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::Set_Brush_from_Path_on_Item(class UKSItem* Item, bool MatchSize, const struct FSoftObjectPath& Path)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25197);

	UWBP_AsyncIcon_C_Set_Brush_from_Path_on_Item_Params params {};
	params.Item = Item;
	params.MatchSize = MatchSize;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftPath
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSoftObjectPath                             Soft_Path                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::SetBrushFromSoftPath(const struct FSoftObjectPath& Soft_Path, bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25196);

	UWBP_AsyncIcon_C_SetBrushFromSoftPath_Params params {};
	params.Soft_Path = Soft_Path;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::Set_Brush_from_Texture_on_Item(class UKSItem* Item, bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25195);

	UWBP_AsyncIcon_C_Set_Brush_from_Texture_on_Item_Params params {};
	params.Item = Item;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25194);

	UWBP_AsyncIcon_C_Get_Material_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaterialInstanceDynamic != nullptr)
		*MaterialInstanceDynamic = params.MaterialInstanceDynamic;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::SetMaterialToUse(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25193);

	UWBP_AsyncIcon_C_SetMaterialToUse_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_AsyncIcon_C::ApplyDefaultBrush()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25192);

	UWBP_AsyncIcon_C_ApplyDefaultBrush_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::SetBrushFromSoftTexture(bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25191);

	UWBP_AsyncIcon_C_SetBrushFromSoftTexture_Params params {};
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25190);

	UWBP_AsyncIcon_C_SetBrushFromTexture_Params params {};
	params.Texture = Texture;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::SetBrushFromItemIcon(class UPlatformInventoryItem* Item, bool MatchSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25189);

	UWBP_AsyncIcon_C_SetBrushFromItemIcon_Params params {};
	params.Item = Item;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AsyncIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25188);

	UWBP_AsyncIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_AsyncIcon_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25187);

	UWBP_AsyncIcon_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_AsyncImage*                            Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::OnStartLoad(class UPUMG_AsyncImage* Image)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25186);

	UWBP_AsyncIcon_C_OnStartLoad_Params params {};
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_AsyncImage*                            Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::OnFinishLoad(class UPUMG_AsyncImage* Image)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25185);

	UWBP_AsyncIcon_C_OnFinishLoad_Params params {};
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::ExecuteUbergraph_WBP_AsyncIcon(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25184);

	UWBP_AsyncIcon_C_ExecuteUbergraph_WBP_AsyncIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AsyncIcon_C::OnIconUpdated__DelegateSignature(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25183);

	UWBP_AsyncIcon_C_OnIconUpdated__DelegateSignature_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
