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

// BlueprintGeneratedClass IKSContextMenuTarget.IKSContextMenuTarget_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UIKSContextMenuTarget_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62173);
		return ptr;
	}



	void OnContextMenuOpen(KillstreakUINew_EViewSide side);
	void OnContextMenuClose();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
