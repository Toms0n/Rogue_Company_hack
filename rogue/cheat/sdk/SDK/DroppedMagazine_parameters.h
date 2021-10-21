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

// Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
struct ADroppedMagazine_C_ReceiveBeginPlay_Params
{
};

// Function DroppedMagazine.DroppedMagazine_C.SetMesh
struct ADroppedMagazine_C_SetMesh_Params
{
	class USkeletalMesh*                               NewSkelMesh;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 NewStaticMesh;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DroppedMagazine.DroppedMagazine_C.SetVelocity
struct ADroppedMagazine_C_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
struct ADroppedMagazine_C_ExecuteUbergraph_DroppedMagazine_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
