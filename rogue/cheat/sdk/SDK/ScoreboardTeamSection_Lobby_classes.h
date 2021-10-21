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

// WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C
// 0x00B8 (FullSize[0x05D0] - InheritedSize[0x0518])
class UScoreboardTeamSection_Lobby_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    HeightLimit;                                               // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PlayerEntries;                                             // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardPlayerStats_Lobby_C*              ScoreboardPlayerStats_Lobby;                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  teamScore;                                                 // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TeamScoreContainer;                                        // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TeamScoreGradient;                                         // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TeamScoreWrapper;                                          // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelDefault_C*                         WBP_PanelDefault;                                          // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  WinText;                                                   // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTeamStats                                  TeamStruct;                                                // 0x0568(0x0020) (Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FPlayerEntryStats>                   playerStats;                                               // 0x0588(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UPUMG_PlayerDataFactory*                     PlayerDataFactory;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UScoreboardPlayerStats_Lobby_C*>      Players;                                                   // 0x05A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FPlayerEntryStats>                   TeamPlayerStats;                                           // 0x05B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayersChanged;                                          // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(71209);
		return ptr;
	}



	void GetPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* PlayerEntries);
	void CreatePlayerEntry(int Index, const struct FPlayerEntryStats& playerStats, class UScoreboardPlayerStats_Lobby_C** PlayerEntry);
	void SetIsVictorious(bool IsVictorious);
	void SortPlayers(TArray<struct FPlayerEntryStats>* PlayerEntries, bool DescOrder);
	void CreatePlayerEntries(TArray<struct FPlayerEntryStats>* PlayerEntries);
	void FindPlayerTeam(int* PlayerTeamNum);
	void PopulatePlayer();
	void Construct();
	void SetColor();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ScoreboardTeamSection_Lobby(int EntryPoint);
	void OnPlayersChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
