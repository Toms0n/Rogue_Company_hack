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

// WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C
// 0x00B9 (FullSize[0x0629] - InheritedSize[0x0570])
class UWBP_SettingsBinding_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Gamepad;                              // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Primary;                              // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Secondary;                            // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsBinding_Clear_C*                WBP_SettingsBinding_Clear_GP;                              // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsBinding_Clear_C*                WBP_SettingsBinding_Clear_KBM;                             // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInputChord                                 CachedPrimaryBinding;                                      // 0x05A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                                 CachedSecondaryBinding;                                    // 0x05C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                                 CachedGamepadBinding;                                      // 0x05E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bCachedGamepadEnabled;                                     // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCachedPrimaryEnabled;                                     // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCachedSecondaryEnabled;                                   // 0x0602(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CXZH[0x1];                                     // 0x0603(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeToWaitForCombo;                                        // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Pending_Gamepad_Key;                                       // 0x0608(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                                Combo_Key_Timer_Handle;                                    // 0x0620(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowClear;                                               // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44204);
		return ptr;
	}



	void Set_Desired_Gamepad_Combo(const struct FKey& Gamepad_Key, const struct FKey& Combo_Key, bool* Dirtied);
	void Get_Dirty_Combo_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type);
	void OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State);
	bool CanGamepadNavigate();
	void DisableUnbindableKeybinds(class UKSSettingsInfo_Binding* Binding_Settings_Info);
	bool NavigateBack();
	void Set_Desired_Gamepad_Key(const struct FKey& Key, bool* Dirtied);
	void Set_Desired_Secondary_Key(const struct FKey& Key, bool* Dirtied);
	void Set_Desired_Primary_Key(const struct FKey& Key, bool* Dirtied);
	void Get_Dirty_Gamepad_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type);
	void Get_Dirty_Secondary_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type);
	void Get_Dirty_Primary_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type);
	void SetKeysForBindingDisplays();
	void SetKeyForGamepadBindingDisplay();
	void SetKeyForSecondaryBindingDisplay();
	void SetKeyForPrimaryBindingDisplay();
	void OnWidgetSettingsInfoSet();
	void GamepadHover();
	void GamepadUnhover();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void InitializeWidget(class APUMG_HUD* HUD);
	void StopCapturingCombo();
	void StartCapturingCombo();
	void Combo_Succeed(const struct FInputChord& Combo_Key);
	void Combo_Failed();
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached);
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void BndEvt__WBP_SettingsBinding_Clear_K2Node_ComponentBoundEvent_0_On_Cleared__DelegateSignature();
	void BndEvt__WBP_SettingsBinding_Clear_GP_K2Node_ComponentBoundEvent_1_On_Cleared__DelegateSignature();
	void ExecuteUbergraph_WBP_SettingsBinding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
