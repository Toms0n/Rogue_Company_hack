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

// WidgetBlueprintGeneratedClass WBP_KeyCallout.WBP_KeyCallout_C
// 0x0034 (FullSize[0x026C] - InheritedSize[0x0238])
class UWBP_KeyCallout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AsyncIcon_C*                            CalloutIcon;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0248(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       KeyBind;                                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               DisplayKeybind;                                            // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               SecondaryKey;                                              // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               FallbackToDefaults;                                        // 0x026A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               GamepadDoubleTap;                                          // 0x026B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43852);
		return ptr;
	}



	void SetKeybind(const struct FName& KeyBind);
	void UpdateKeyDisplay();
	void SetKey(const struct FKey& Key);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_KeyCallout(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
