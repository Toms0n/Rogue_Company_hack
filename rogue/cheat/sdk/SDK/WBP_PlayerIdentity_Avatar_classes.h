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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UWBP_PlayerIdentity_Avatar_C : public UKSWidget
{
public:
	class UWBP_AsyncIcon_C*                            AvatarIcon;                                                // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55987);
		return ptr;
	}



	void SetAvatarFromPath(const struct FSoftObjectPath& Icon_Path);
	void SetAvatar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
