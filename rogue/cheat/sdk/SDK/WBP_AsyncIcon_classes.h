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

// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// 0x00B0 (FullSize[0x02E8] - InheritedSize[0x0238])
class UWBP_AsyncIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSAsyncImage*                               Icon;                                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   LoadingThrobber;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnIconUpdated;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                                 DefaultBrush;                                              // 0x0260(0x0088) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25182);
		return ptr;
	}



	void Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize);
	void Set_Brush_from_Path_on_Item(class UKSItem* Item, bool MatchSize, const struct FSoftObjectPath& Path);
	void SetBrushFromSoftPath(const struct FSoftObjectPath& Soft_Path, bool MatchSize);
	void Set_Brush_from_Texture_on_Item(class UKSItem* Item, bool MatchSize);
	void Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic);
	void SetMaterialToUse(class UMaterialInterface* Material);
	void ApplyDefaultBrush();
	void SetBrushFromSoftTexture(bool MatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
	void SetBrushFromItemIcon(class UPlatformInventoryItem* Item, bool MatchSize);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnStartLoad(class UPUMG_AsyncImage* Image);
	void OnFinishLoad(class UPUMG_AsyncImage* Image);
	void ExecuteUbergraph_WBP_AsyncIcon(int EntryPoint);
	void OnIconUpdated__DelegateSignature(class UTexture2D* Texture);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
