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

// DynamicClass INameplateWidget.INameplateWidget_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UINameplateWidget_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25065);
		return ptr;
	}



	void OnUnhovered();
	void OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf);
	void OnHovered();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
