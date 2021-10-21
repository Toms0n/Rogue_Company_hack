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

// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
// 0x0029 (FullSize[0x0581] - InheritedSize[0x0558])
class UWBP_ToastNotification_Manager_C : public UKSToastNotificationWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ChallengeNotificationContainer;                            // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                NotificationContainer;                                     // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FText>                               LocalizeTexts;                                             // 0x0570(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               CanDisplaySocialToasts;                                    // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55710);
		return ptr;
	}



	void PushAwardsEarnedInMatch();
	void DisplayChallengeToast(class UWBP_Toast2_C* Toast);
	void DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast);
	void OnToastNotificationReceived(const struct FToastData& ToastData);
	void HandleToastNotificationRemove(class UKSWidget* ToastNotification);
	void OnToastIntroAnimFinished();
	void Construct();
	void HandleChallengeToastNotificationRemove(class UKSWidget* ToastNotification);
	void ExecuteUbergraph_WBP_ToastNotification_Manager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
