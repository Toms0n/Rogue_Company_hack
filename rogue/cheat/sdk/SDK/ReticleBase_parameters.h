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

// Function ReticleBase.ReticleBase_C.Set Reticle Color
struct UReticleBase_C_Set_Reticle_Color_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.On Reticle Color Changed
struct UReticleBase_C_On_Reticle_Color_Changed_Params
{
};

// Function ReticleBase.ReticleBase_C.Set Reticle Width
struct UReticleBase_C_Set_Reticle_Width_Params
{
	int                                                Width;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.Set Reticle Height
struct UReticleBase_C_Set_Reticle_Height_Params
{
	int                                                Height;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.On Reticle Width Changed
struct UReticleBase_C_On_Reticle_Width_Changed_Params
{
};

// Function ReticleBase.ReticleBase_C.On Reticle Height Changed
struct UReticleBase_C_On_Reticle_Height_Changed_Params
{
};

// Function ReticleBase.ReticleBase_C.On Reticle Dimension Changed
struct UReticleBase_C_On_Reticle_Dimension_Changed_Params
{
};

// Function ReticleBase.ReticleBase_C.ChangeReticleSize
struct UReticleBase_C_ChangeReticleSize_Params
{
};

// Function ReticleBase.ReticleBase_C.GetAmmoState
struct UReticleBase_C_GetAmmoState_Params
{
	class UKSWeaponComponent*                          NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	KillstreakUINew_EAmmoState                         Return_Value;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.HitConfirm
struct UReticleBase_C_HitConfirm_Params
{
};

// Function ReticleBase.ReticleBase_C.ForceADS
struct UReticleBase_C_ForceADS_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ReticleBase.ReticleBase_C.GrenadeCook
struct UReticleBase_C_GrenadeCook_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TickPeriod;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.ChangeADS
struct UReticleBase_C_ChangeADS_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ReticleBase.ReticleBase_C.KillConfirm
struct UReticleBase_C_KillConfirm_Params
{
};

// Function ReticleBase.ReticleBase_C.Headshot
struct UReticleBase_C_Headshot_Params
{
};

// Function ReticleBase.ReticleBase_C.UpdateOffset
struct UReticleBase_C_UpdateOffset_Params
{
	float                                              Offset;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReticleBase.ReticleBase_C.OnInitialized
struct UReticleBase_C_OnInitialized_Params
{
};

// Function ReticleBase.ReticleBase_C.ExecuteUbergraph_ReticleBase
struct UReticleBase_C_ExecuteUbergraph_ReticleBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
