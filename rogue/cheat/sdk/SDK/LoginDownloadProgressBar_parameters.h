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

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Make Progress Text
struct ULoginDownloadProgressBar_C_Make_Progress_Text_Params
{
	float                                              Percent;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Seconds;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Supports_ETA;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Construct
struct ULoginDownloadProgressBar_C_Construct_Params
{
};

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdatedDownloadProgress
struct ULoginDownloadProgressBar_C_UpdatedDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Total;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Eta;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSupportsEta;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdateFinished
struct ULoginDownloadProgressBar_C_UpdateFinished_Params
{
};

// Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.ExecuteUbergraph_LoginDownloadProgressBar
struct ULoginDownloadProgressBar_C_ExecuteUbergraph_LoginDownloadProgressBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
