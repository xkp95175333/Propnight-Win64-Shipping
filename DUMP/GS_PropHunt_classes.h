// BlueprintGeneratedClass GS_PropHunt.GS_PropHunt_C
// Size: 0x6f4 (Inherited: 0x270)
struct AGS_PropHunt_C : AGameStateBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBP_ItemsManager_C* BP_ItemsManager; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	int32_t Seconds; // 0x288(0x04)
	bool IsLobby; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FMiniLobbyState LobbyState; // 0x290(0x58)
	int32_t AlarmsCount; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct ASurvivorMasterBP_C*> SurvArrayRef; // 0x2f0(0x10)
	bool IsKillerWin; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct APlayerStart*> PlayerStarts; // 0x308(0x10)
	struct TArray<struct AActor*> AliveSurvivors; // 0x318(0x10)
	struct TArray<struct AActor*> ReadyPlayers; // 0x328(0x10)
	struct TArray<struct AHypnoChairBP_C*> ChairRef; // 0x338(0x10)
	struct TArray<struct ANewAlarmBP_C*> AlarmsRef; // 0x348(0x10)
	bool IsGameSession; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	int32_t SurvsOnChair; // 0x35c(0x04)
	int32_t NeedAlarmRelaoding; // 0x360(0x04)
	int32_t EndGameAlarmCount; // 0x364(0x04)
	bool DoorOpened?; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32_t EscapedSurvCount; // 0x36c(0x04)
	bool GameStart?; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct TArray<struct FItemSnapshot> ItemSnapshots; // 0x378(0x10)
	int32_t FloorsCount; // 0x388(0x04)
	int32_t Score; // 0x38c(0x04)
	bool GameEnd?; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TMap<struct AActor*, struct FString> VoteMap; // 0x398(0x50)
	bool IsGranny; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	int32_t Random; // 0x3ec(0x04)
	struct TArray<bool> RemoveSurvs?; // 0x3f0(0x10)
	int32_t CurrentCountCoins; // 0x400(0x04)
	int32_t MaxCountCoins; // 0x404(0x04)
	struct TArray<struct FTransform> CoinsPositions; // 0x408(0x10)
	struct TArray<struct FTransform> FreeSpaceCoinsPositions; // 0x418(0x10)
	float DeltaSeconds; // 0x428(0x04)
	enum class SurvClass SurvClass; // 0x42c(0x01)
	bool IsPublic; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct FTimerHandle StartGameTimer; // 0x430(0x08)
	bool BoostModeON?; // 0x438(0x01)
	enum class KillerType KillerType; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	struct FVector Temp1; // 0x43c(0x0c)
	struct FRotator Temp2; // 0x448(0x0c)
	bool TimerStart?; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32_t MaxScore_AlarmGame; // 0x458(0x04)
	int32_t MaxScore_REVIVE; // 0x45c(0x04)
	int32_t MaxScore_OutChair; // 0x460(0x04)
	int32_t MaxScore_FLASH; // 0x464(0x04)
	int32_t MaxScore_HealALLY; // 0x468(0x04)
	int32_t MaxScore_HealSELF; // 0x46c(0x04)
	int32_t MaxScore_OutGrip; // 0x470(0x04)
	int32_t MaxScore_HIT; // 0x474(0x04)
	int32_t MaxScore_DOWNED; // 0x478(0x04)
	int32_t MaxScore_CHAIR; // 0x47c(0x04)
	int32_t MaxScore_Stun; // 0x480(0x04)
	int32_t MAXSCOREBLOCK_AlarmGame; // 0x484(0x04)
	int32_t MAXSCOREBLOCK_REVIVE; // 0x488(0x04)
	int32_t MAXSCOREBLOCK_OutChair; // 0x48c(0x04)
	int32_t MAXSCOREBLOCK_FLASH; // 0x490(0x04)
	int32_t MAXSCOREBLOCK_HealALLY; // 0x494(0x04)
	int32_t MAXSCOREBLOCK_HealSELF; // 0x498(0x04)
	int32_t MAXSCOREBLOCK_OutGrip; // 0x49c(0x04)
	int32_t MAXSCOREBLOCK_Stun; // 0x4a0(0x04)
	int32_t MAXSCOREBLOCK_HIT; // 0x4a4(0x04)
	int32_t MAXSCOREBLOCK_DOWNED; // 0x4a8(0x04)
	int32_t MAXSCOREBLOCK_CHAIR; // 0x4ac(0x04)
	int32_t KillScoreCounter; // 0x4b0(0x04)
	bool PropHuntMode?; // 0x4b4(0x01)
	bool CaptureMode?; // 0x4b5(0x01)
	char pad_4B6[0x2]; // 0x4b6(0x02)
	struct TArray<struct ACoinActor_C*> Coins; // 0x4b8(0x10)
	struct FS_GameSettings GameSettings; // 0x4c8(0x20)
	int32_t FartSeconds; // 0x4e8(0x04)
	bool IsLobbyStateAccepted?; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	int32_t TempCategory; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct APlayerState* IgnoredPlayer; // 0x4f8(0x08)
	struct TArray<struct APlayerState*> TempPlayerStates; // 0x500(0x10)
	struct APlayerState* SurvFirstCategory; // 0x510(0x08)
	struct APlayerState* SurvSecondCategory; // 0x518(0x08)
	struct APlayerState* KillerCategory; // 0x520(0x08)
	int32_t TempSwap1; // 0x528(0x04)
	int32_t TempSwap2; // 0x52c(0x04)
	struct TMap<enum class MapVote, int32_t> ReadingMapVotesMap; // 0x530(0x50)
	struct TMap<enum class PlayerCategoryVote, int32_t> ReadingPlayersCategoryVotes; // 0x580(0x50)
	int32_t VoteCountMap1; // 0x5d0(0x04)
	int32_t VoteCountMap2; // 0x5d4(0x04)
	int32_t VoteCountMap3; // 0x5d8(0x04)
	int32_t VoteCountPlayerCategory1; // 0x5dc(0x04)
	int32_t VoteCountPlayerCategory2; // 0x5e0(0x04)
	int32_t VoteCountPlayerCategory3; // 0x5e4(0x04)
	struct TArray<struct FName> TempMapNames; // 0x5e8(0x10)
	int32_t IntTemp; // 0x5f8(0x04)
	struct FName Map1; // 0x5fc(0x08)
	struct FName Map2; // 0x604(0x08)
	struct FName Map3; // 0x60c(0x08)
	int32_t NextGameTimer; // 0x614(0x04)
	struct TArray<int32_t> IntArrayTemp; // 0x618(0x10)
	bool AllAlarmsReady?; // 0x628(0x01)
	char pad_629[0x3]; // 0x629(0x03)
	int32_t MatchTime; // 0x62c(0x04)
	struct TArray<struct APlayerState*> TempPlayerStates2; // 0x630(0x10)
	bool bPlayerStart; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct FString TempSlotName1; // 0x648(0x10)
	struct FString TempSlotName2; // 0x658(0x10)
	bool Tutorial?; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct FS_ServerSettings ServerSettings; // 0x670(0x28)
	int32_t CountKillers; // 0x698(0x04)
	int32_t CountSurvs; // 0x69c(0x04)
	bool IsLobbyWait; // 0x6a0(0x01)
	bool SoloMode?; // 0x6a1(0x01)
	char pad_6A2[0x2]; // 0x6a2(0x02)
	int32_t OnChairSurvs; // 0x6a4(0x04)
	int32_t KillerPoints; // 0x6a8(0x04)
	int32_t SurvPoints; // 0x6ac(0x04)
	int32_t LobbyTime; // 0x6b0(0x04)
	bool LobbyBlockRdy?; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	int32_t TempMvp; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct APS_PropHunt_C* MvpSurv; // 0x6c0(0x08)
	bool MvpPlayerReady?; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct APS_PropHunt_C* TempSwap; // 0x6d0(0x08)
	int32_t INDX_Slots; // 0x6d8(0x04)
	enum class CoinEnum PointsType; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	struct AActor* TempPlayer; // 0x6e0(0x08)
	struct FTimerHandle WaitPlayersTimerHandle; // 0x6e8(0x08)
	bool SomeoneLeftAfterFullLobby; // 0x6f0(0x01)
	bool FullLobbyWasReached; // 0x6f1(0x01)
	bool CanAssign; // 0x6f2(0x01)
	bool KillerLeave?; // 0x6f3(0x01)

	void CheckSurvsAfterLeave(bool HasAliveSurv); // Function GS_PropHunt.GS_PropHunt_C.CheckSurvsAfterLeave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsKillerSlotFree(bool Free); // Function GS_PropHunt.GS_PropHunt_C.IsKillerSlotFree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void IsKillerPlayerHere(bool Here); // Function GS_PropHunt.GS_PropHunt_C.IsKillerPlayerHere // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetAvailableSurvSlot(struct FString Name); // Function GS_PropHunt.GS_PropHunt_C.GetAvailableSurvSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FindEmptySlotFromList(struct FString EmptySlotName); // Function GS_PropHunt.GS_PropHunt_C.FindEmptySlotFromList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void survSpawnZap(struct APlayerStart* NewParam); // Function GS_PropHunt.GS_PropHunt_C.survSpawnZap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ManageProphuntSlots(); // Function GS_PropHunt.GS_PropHunt_C.ManageProphuntSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToActor(struct AActor* Target, struct AActor* Actor); // Function GS_PropHunt.GS_PropHunt_C.ToActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ResolveNextServer(); // Function GS_PropHunt.GS_PropHunt_C.ResolveNextServer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Assign Slots(); // Function GS_PropHunt.GS_PropHunt_C.Assign Slots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckVoteMap(bool AllAgree); // Function GS_PropHunt.GS_PropHunt_C.CheckVoteMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearItems(); // Function GS_PropHunt.GS_PropHunt_C.ClearItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlaceItemsP2(); // Function GS_PropHunt.GS_PropHunt_C.PlaceItemsP2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlaceItems(bool BeginGame?); // Function GS_PropHunt.GS_PropHunt_C.PlaceItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CollectItems(); // Function GS_PropHunt.GS_PropHunt_C.CollectItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPlayerReservedSlot(struct APC_PropHunt_C* Controller, bool Reserved); // Function GS_PropHunt.GS_PropHunt_C.CheckPlayerReservedSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvivorGameStart(struct APC_PropHunt_C* Controller, struct APlayerStart* Result); // Function GS_PropHunt.GS_PropHunt_C.GetSurvivorGameStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeEmptyLobby(struct FMiniLobbyState Result); // Function GS_PropHunt.GS_PropHunt_C.MakeEmptyLobby // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveAliveSurvivor(struct AActor* Actor, bool Escaped?); // Function GS_PropHunt.GS_PropHunt_C.RemoveAliveSurvivor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddAliveSurvivor(struct AActor* Actor); // Function GS_PropHunt.GS_PropHunt_C.AddAliveSurvivor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandomSurvivorPlayerStart(struct APlayerStart* res); // Function GS_PropHunt.GS_PropHunt_C.GetRandomSurvivorPlayerStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetKillerPlayerStart(struct APC_PropHunt_C* Controller, struct APlayerStart* PlayerStart); // Function GS_PropHunt.GS_PropHunt_C.GetKillerPlayerStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AcceptTransport(struct FS_LobbyStateTransport Transport); // Function GS_PropHunt.GS_PropHunt_C.AcceptTransport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateLobbyTransport(struct FS_LobbyStateTransport Transport); // Function GS_PropHunt.GS_PropHunt_C.CreateLobbyTransport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function GS_PropHunt.GS_PropHunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void LobbyStateUpdate(struct FS_LobbyStateTransport State); // Function GS_PropHunt.GS_PropHunt_C.LobbyStateUpdate // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ProcessLobbyStateChange(); // Function GS_PropHunt.GS_PropHunt_C.ProcessLobbyStateChange // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnReserveRequest(struct APC_PropHunt_C* Controller, struct FString SlotName, bool Silent); // Function GS_PropHunt.GS_PropHunt_C.OnReserveRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnReleaseRequest(struct APC_PropHunt_C* Controller, struct FString SlotName, bool Silent); // Function GS_PropHunt.GS_PropHunt_C.OnReleaseRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAlarmsCountEvent(); // Function GS_PropHunt.GS_PropHunt_C.GetAlarmsCountEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseAlarmsCountEvent(struct TArray<struct AActor*> Surfs); // Function GS_PropHunt.GS_PropHunt_C.DecreaseAlarmsCountEvent // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnStartGame(); // Function GS_PropHunt.GS_PropHunt_C.OnStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvEvent(); // Function GS_PropHunt.GS_PropHunt_C.GetSurvEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvStatusChangedEvent(); // Function GS_PropHunt.GS_PropHunt_C.SurvStatusChangedEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRaiseLobby(); // Function GS_PropHunt.GS_PropHunt_C.OnRaiseLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEndGameGS(bool IsKillerWin); // Function GS_PropHunt.GS_PropHunt_C.OnEndGameGS // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MultiSetIsKillerWin(bool IsKillerWin); // Function GS_PropHunt.GS_PropHunt_C.MultiSetIsKillerWin // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorIsOpen(); // Function GS_PropHunt.GS_PropHunt_C.DoorIsOpen // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CountPlayerStarts(); // Function GS_PropHunt.GS_PropHunt_C.CountPlayerStarts // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerDeath(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerReady(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerReady // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerLeft(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerLogin(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckForReadyPlayers(); // Function GS_PropHunt.GS_PropHunt_C.CheckForReadyPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAlarms(); // Function GS_PropHunt.GS_PropHunt_C.GetAlarms // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetChairs(); // Function GS_PropHunt.GS_PropHunt_C.GetChairs // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerEscaped(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerEscaped // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function GS_PropHunt.GS_PropHunt_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AmbientOff(); // Function GS_PropHunt.GS_PropHunt_C.AmbientOff // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostMode(); // Function GS_PropHunt.GS_PropHunt_C.BoostMode // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmScore(struct TArray<struct AActor*> Surfs); // Function GS_PropHunt.GS_PropHunt_C.AlarmScore // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmGood(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.AlarmGood // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSuper(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.AlarmSuper // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScoreCalc(struct AActor* Surv, struct FString ScoreText); // Function GS_PropHunt.GS_PropHunt_C.ScoreCalc // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateScore(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.ReanimateScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutChairScore(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.OutChairScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExitScore(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.ExitScore // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorOpenScore(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.DoorOpenScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FlashScore(struct AActor* Surv, bool IsGrabbed?); // Function GS_PropHunt.GS_PropHunt_C.FlashScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvHealScore(struct AActor* Surv, bool Other?); // Function GS_PropHunt.GS_PropHunt_C.SurvHealScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitScore(struct AActor* Killer, int32_t Damage); // Function GS_PropHunt.GS_PropHunt_C.HitScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CrawlScore(struct AActor* Killer); // Function GS_PropHunt.GS_PropHunt_C.CrawlScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairScore(struct AActor* Killer); // Function GS_PropHunt.GS_PropHunt_C.ChairScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillScore(); // Function GS_PropHunt.GS_PropHunt_C.KillScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnServerTravel(); // Function GS_PropHunt.GS_PropHunt_C.OnServerTravel // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerType(enum class KillerType KillerType); // Function GS_PropHunt.GS_PropHunt_C.SetKillerType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RedirectPlayers(); // Function GS_PropHunt.GS_PropHunt_C.RedirectPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemsClear(); // Function GS_PropHunt.GS_PropHunt_C.ItemsClear // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlmostPerfect(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.AlmostPerfect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmNormal(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.AlarmNormal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FreezePlayersServ(); // Function GS_PropHunt.GS_PropHunt_C.FreezePlayersServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FreezePlayersMulti(); // Function GS_PropHunt.GS_PropHunt_C.FreezePlayersMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Kukarequ(); // Function GS_PropHunt.GS_PropHunt_C.Kukarequ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGameState(); // Function GS_PropHunt.GS_PropHunt_C.StartGameState // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelGameStart(); // Function GS_PropHunt.GS_PropHunt_C.CancelGameStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerUnready(struct AActor* Player); // Function GS_PropHunt.GS_PropHunt_C.OnPlayerUnready // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TimerControl(bool Add?, int32_t Seconds); // Function GS_PropHunt.GS_PropHunt_C.TimerControl // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendTextTimerControl(bool Add?, int32_t Seconds); // Function GS_PropHunt.GS_PropHunt_C.SendTextTimerControl // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Intro(struct APlayerStart* KPSRef); // Function GS_PropHunt.GS_PropHunt_C.Intro // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StormTimerServ(float F, struct AMapStormBP_C* ref); // Function GS_PropHunt.GS_PropHunt_C.StormTimerServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StormTimerMulti(float F, struct AMapStormBP_C* ref); // Function GS_PropHunt.GS_PropHunt_C.StormTimerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateAvatars(); // Function GS_PropHunt.GS_PropHunt_C.UpdateAvatars // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ZeroScoreSendText(struct AActor* Actor); // Function GS_PropHunt.GS_PropHunt_C.ZeroScoreSendText // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutFromHandsScore(struct AActor* Surv); // Function GS_PropHunt.GS_PropHunt_C.OutFromHandsScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunScore(struct AActor* Surv, bool IsGrabbed?); // Function GS_PropHunt.GS_PropHunt_C.StunScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveAllAlarms(); // Function GS_PropHunt.GS_PropHunt_C.RemoveAllAlarms // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartFartTime(); // Function GS_PropHunt.GS_PropHunt_C.StartFartTime // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Fart(); // Function GS_PropHunt.GS_PropHunt_C.Fart // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetCategory(); // Function GS_PropHunt.GS_PropHunt_C.GetCategory // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReadingMapVotes(enum class MapVote MapVote, bool PrevVoteDelete?); // Function GS_PropHunt.GS_PropHunt_C.ReadingMapVotes // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearAllVotes(); // Function GS_PropHunt.GS_PropHunt_C.ClearAllVotes // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReadingPlayerVotes(enum class PlayerCategoryVote PlayerVote, bool PrevVoteDelete?); // Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandomMaps(); // Function GS_PropHunt.GS_PropHunt_C.GetRandomMaps // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VoteMapEnd(); // Function GS_PropHunt.GS_PropHunt_C.VoteMapEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwapPlayers(struct APC_PropHunt_C* Player1, struct APC_PropHunt_C* Player2); // Function GS_PropHunt.GS_PropHunt_C.SwapPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwapNotification(); // Function GS_PropHunt.GS_PropHunt_C.SwapNotification // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckAliveSurvivors(); // Function GS_PropHunt.GS_PropHunt_C.CheckAliveSurvivors // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadPlayerStart(); // Function GS_PropHunt.GS_PropHunt_C.LoadPlayerStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckSurvs(); // Function GS_PropHunt.GS_PropHunt_C.CheckSurvs // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckOnChairSurvs(); // Function GS_PropHunt.GS_PropHunt_C.CheckOnChairSurvs // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnChairSurvsSoundMulticast(struct UFMODEvent* Event, int32_t Count?); // Function GS_PropHunt.GS_PropHunt_C.OnChairSurvsSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateLobbyTime(); // Function GS_PropHunt.GS_PropHunt_C.UpdateLobbyTime // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameAllPostProcessOff(); // Function GS_PropHunt.GS_PropHunt_C.EndGameAllPostProcessOff // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeamScore(bool Killer?, int32_t Points); // Function GS_PropHunt.GS_PropHunt_C.TeamScore // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void printmulti(struct FString inString); // Function GS_PropHunt.GS_PropHunt_C.printmulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateLobbyTime(); // Function GS_PropHunt.GS_PropHunt_C.CalculateLobbyTime // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SuperRoma(); // Function GS_PropHunt.GS_PropHunt_C.SuperRoma // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwapLeave_FromServer(struct APawn* LeftPlayer); // Function GS_PropHunt.GS_PropHunt_C.SwapLeave_FromServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMvpPlayer(); // Function GS_PropHunt.GS_PropHunt_C.GetMvpPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckForKiller(struct FString ID, struct APC_PropHunt_C* Player); // Function GS_PropHunt.GS_PropHunt_C.CheckForKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WaitPlayersTimer(); // Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WaitPlayersTimeout(); // Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MultiWaitPlayersTimeout(); // Function GS_PropHunt.GS_PropHunt_C.MultiWaitPlayersTimeout // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendLobbyState(); // Function GS_PropHunt.GS_PropHunt_C.SendLobbyState // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerLeave(); // Function GS_PropHunt.GS_PropHunt_C.KillerLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvLeaved(); // Function GS_PropHunt.GS_PropHunt_C.SurvLeaved // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GS_PropHunt(int32_t EntryPoint); // Function GS_PropHunt.GS_PropHunt_C.ExecuteUbergraph_GS_PropHunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

