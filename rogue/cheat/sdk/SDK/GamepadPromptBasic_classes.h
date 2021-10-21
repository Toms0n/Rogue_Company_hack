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

// WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C
// 0x0049 (FullSize[0x0281] - InheritedSize[0x0238])
class UGamepadPromptBasic_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ActionText;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           ButtonIcon;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonPromptData                           Data;                                                      // 0x0250(0x0030) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               IsSet;                                                     // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61259);
		return ptr;
	}



	void SetPrompt(const struct FButtonPromptData& Data);
	void Populate();
	void Construct();
	void ExecuteUbergraph_GamepadPromptBasic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
