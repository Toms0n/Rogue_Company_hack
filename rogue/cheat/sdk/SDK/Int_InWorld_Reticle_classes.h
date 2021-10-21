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

// DynamicClass Int_InWorld_Reticle.Int_InWorld_Reticle_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInt_InWorld_Reticle_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25131);
		return ptr;
	}



	void OnWeaponSet(class UKSWeaponComponent* bpp__WeaponComponent__pf);
	void OnPossession(class APlayerState* bpp__PlayerState__pf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
