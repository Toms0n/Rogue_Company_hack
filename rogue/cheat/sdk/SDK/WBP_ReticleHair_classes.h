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

// WidgetBlueprintGeneratedClass WBP_ReticleHair.WBP_ReticleHair_C
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
class UWBP_ReticleHair_C : public UUserWidget
{
public:
	class UImage*                                      CrosshairImage;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                          CrosshairTextures;                                         // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45357);
		return ptr;
	}



	void SetColor(const struct FLinearColor& NewColor);
	void SetHeight(float NewHeight);
	void SetTextureByWidth(int CrosshairWidth);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
