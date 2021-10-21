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

// BlueprintGeneratedClass Jump_CameraShake.Jump_CameraShake_C
// 0x0004 (FullSize[0x0180] - InheritedSize[0x017C])
class UJump_CameraShake_C : public UKSCharacterCameraShake
{
public:
	unsigned char                                      UnknownData_DSIJ[0x4];                                     // 0x017C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27117);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
