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

// DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class UCharacterHeatSourceComponent_C : public UKSHeatSourceComponent
{
public:
	class UParticleSystem*                             ThermalVisionExtraParticlesPS;                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ThermalVisionExtraParticlesComp;                           // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                      // 0x0110(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	Killstreak_EModViewModeState                       K2Node_Event_NewState;                                     // 0x0120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                              // 0x0121(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 K2Node_Event_EndPlayReason;                                // 0x0122(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIU6[0x5];                                     // 0x0123(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacterBase*                            K2Node_DynamicCast_AsKSCharacter_Base;                     // 0x0128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                               // 0x0130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WHI[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSHeatSourceComponent*                      K2Node_CustomEvent_HeatSource;                             // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_NewTemperature;                         // 0x0140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z2L3[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                          // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                             // 0x0150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92G5[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CallFunc_GetParticleSystem_Priority;                       // 0x0154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallFunc_GetFloat_Priority;                                // 0x0158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XR0O[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25259);
		return ptr;
	}



	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> bpp__EndPlayReason__pf);
	void OnThermalVisionStateChanged(Killstreak_EModViewModeState bpp__NewState__pf);
	void OnTemperatureChanged_Event_1(class UKSHeatSourceComponent* bpp__HeatSource__pf__const, float bpp__NewTemperature__pf);
	void OnOwnerInfoUpdateNotify();
	void ExecuteUbergraph_CharacterHeatSourceComponent_2(int bpp__EntryPoint__pf);
	void Conditionally_Apply_Temperature(float bpp__AppliedxTemp__pfT);
	void Apply_Temperature(float bpp__AppliedxTemp__pfT);
	void OnTempChanged__DelegateSignature(class UKSHeatSourceComponent* bpp__HeatSource__pf, float bpp__NewTemperature__pf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
