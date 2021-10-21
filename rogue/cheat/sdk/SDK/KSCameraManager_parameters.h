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

// Function KSCameraManager.KSCameraManager_C.GetMantleHeightFromKSChar
struct AKSCameraManager_C_GetMantleHeightFromKSChar_Params
{
	bool                                               NoMantleCamera;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KSCameraManager.KSCameraManager_C.NotifyCamModFinished
struct AKSCameraManager_C_NotifyCamModFinished_Params
{
	class UClass*                                      Modifier_Class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KSCameraManager.KSCameraManager_C.UpdateCamModValues
struct AKSCameraManager_C_UpdateCamModValues_Params
{
	class UClass*                                      Modifier_Class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     In_Location;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     In_Rotation;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              In_FOV;                                                    // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KSCameraManager.KSCameraManager_C.JumpStart__FinishedFunc
struct AKSCameraManager_C_JumpStart__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpStart__UpdateFunc
struct AKSCameraManager_C_JumpStart__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpLanding__FinishedFunc
struct AKSCameraManager_C_JumpLanding__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.JumpLanding__UpdateFunc
struct AKSCameraManager_C_JumpLanding__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__FinishedFunc
struct AKSCameraManager_C_Mantle_Tall__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Tall__UpdateFunc
struct AKSCameraManager_C_Mantle_Tall__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__FinishedFunc
struct AKSCameraManager_C_Mantle_Medium__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Medium__UpdateFunc
struct AKSCameraManager_C_Mantle_Medium__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Short__FinishedFunc
struct AKSCameraManager_C_Mantle_Short__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Mantle_Short__UpdateFunc
struct AKSCameraManager_C_Mantle_Short__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Tall__FinishedFunc
struct AKSCameraManager_C_Vault_Tall__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Tall__UpdateFunc
struct AKSCameraManager_C_Vault_Tall__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium__FinishedFunc
struct AKSCameraManager_C_Vault_Medium__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium__UpdateFunc
struct AKSCameraManager_C_Vault_Medium__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Short__FinishedFunc
struct AKSCameraManager_C_Vault_Short__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Short__UpdateFunc
struct AKSCameraManager_C_Vault_Short__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__FinishedFunc
struct AKSCameraManager_C_Vault_Medium_Running__FinishedFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Vault_Medium_Running__UpdateFunc
struct AKSCameraManager_C_Vault_Medium_Running__UpdateFunc_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Play Jump Start
struct AKSCameraManager_C_Play_Jump_Start_Params
{
};

// Function KSCameraManager.KSCameraManager_C.PlayJumpLanding
struct AKSCameraManager_C_PlayJumpLanding_Params
{
};

// Function KSCameraManager.KSCameraManager_C.Play Mantle
struct AKSCameraManager_C_Play_Mantle_Params
{
	int                                                Mantle_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KSCameraManager.KSCameraManager_C.ExecuteUbergraph_KSCameraManager
struct AKSCameraManager_C_ExecuteUbergraph_KSCameraManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
