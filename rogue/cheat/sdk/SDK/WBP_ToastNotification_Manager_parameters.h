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
// Parameters
//---------------------------------------------------------------------------

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch
struct UWBP_ToastNotification_Manager_C_PushAwardsEarnedInMatch_Params
{
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
struct UWBP_ToastNotification_Manager_C_DisplayChallengeToast_Params
{
	class UWBP_Toast2_C*                               Toast;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
struct UWBP_ToastNotification_Manager_C_DisplayToast_Params
{
	class UWBP_ToastNotifcation_Entry_C*               Toast;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
struct UWBP_ToastNotification_Manager_C_OnToastNotificationReceived_Params
{
	struct FToastData                                  ToastData;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
struct UWBP_ToastNotification_Manager_C_HandleToastNotificationRemove_Params
{
	class UKSWidget*                                   ToastNotification;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
struct UWBP_ToastNotification_Manager_C_OnToastIntroAnimFinished_Params
{
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
struct UWBP_ToastNotification_Manager_C_Construct_Params
{
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
struct UWBP_ToastNotification_Manager_C_HandleChallengeToastNotificationRemove_Params
{
	class UKSWidget*                                   ToastNotification;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
struct UWBP_ToastNotification_Manager_C_ExecuteUbergraph_WBP_ToastNotification_Manager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
