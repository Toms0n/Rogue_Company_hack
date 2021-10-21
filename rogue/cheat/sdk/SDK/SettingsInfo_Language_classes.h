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

// BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class USettingsInfo_Language_C : public UKSSettingsInfoBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                                  CultureFriendlyNames;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44977);
		return ptr;
	}



	int FixupInvalidInt(int inInt);
	bool IsValidValueInt(int inInt);
	void GetCultureStringFromTextOptionIndex(int TextOptionIndex, bool* Success, struct FString* CultureString);
	void GetLanguageTextOptionIndex(const struct FString& Language, int* TextOptionIndex);
	void SetUpLanguageOptions();
	bool SaveIntValue(int inInt);
	bool ApplyIntValue(int inInt);
	void InitializeValue();
	void HandleOnDisplayLanguageApplied(const struct FString& StringValue);
	void HandleOnDisplayLanguageSaved(const struct FString& StringValue);
	void RevertSettingToDefault();
	void ExecuteUbergraph_SettingsInfo_Language(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
