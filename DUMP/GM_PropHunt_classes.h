// BlueprintGeneratedClass GM_PropHunt.GM_PropHunt_C
// Size: 0x370 (Inherited: 0x2c0)
struct AGM_PropHunt_C : APropnightGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UPlayfabServerComponent* PlayfabServer; // 0x2c8(0x08)
	struct UBP_ServerReporter_C* BP_ServerReporter; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	bool IsGameStarted; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	int32_t Seconds; // 0x2e4(0x04)
	int32_t PlayersCount; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FTimerHandle ShutdownServerHandle; // 0x2f0(0x08)
	float ShutdownTimer; // 0x2f8(0x04)
	int32_t RoundTime; // 0x2fc(0x04)
	struct APropnightBeaconHost* BeaconHost; // 0x300(0x08)
	bool LockTravel; // 0x308(0x01)
	bool StopTimer?; // 0x309(0x01)
	bool StartNextGameTimer?; // 0x30a(0x01)
	char pad_30B[0x1]; // 0x30b(0x01)
	int32_t NextGameTimer; // 0x30c(0x04)
	int32_t MatchTime; // 0x310(0x04)
	bool IsPlayerReloadingAlarm; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0x318(0x10)
	struct FString Status; // 0x328(0x10)
	struct FString MapName; // 0x338(0x10)
	struct TArray<struct APC_PropHunt_C*> PlayfabPlayers; // 0x348(0x10)
	bool CustomSession; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FString PlayfabKillerID; // 0x360(0x10)

	void GetPlayfabPlayers(struct TArray<struct APC_PropHunt_C*> Players); // Function GM_PropHunt.GM_PropHunt_C.GetPlayfabPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerCapacity(int32_t Capacity); // Function GM_PropHunt.GM_PropHunt_C.GetServerCapacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMap(struct FString Map); // Function GM_PropHunt.GM_PropHunt_C.GetMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMode(struct FString Mode); // Function GM_PropHunt.GM_PropHunt_C.GetMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetStatus(struct FString Status); // Function GM_PropHunt.GM_PropHunt_C.GetStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayersCount(int32_t Count); // Function GM_PropHunt.GM_PropHunt_C.GetPlayersCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Get Random Surv(struct FString KillerID, struct FString NextKiller); // Function GM_PropHunt.GM_PropHunt_C.Get Random Surv // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetStatus(struct FString Status); // Function GM_PropHunt.GM_PropHunt_C.SetStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMapName(struct FString MapName); // Function GM_PropHunt.GM_PropHunt_C.GetMapName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetGameSettings(struct FString Map, struct FString Mode, int32_t Players); // Function GM_PropHunt.GM_PropHunt_C.GetGameSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PrintError(struct FString Text); // Function GM_PropHunt.GM_PropHunt_C.PrintError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPublic(bool Public); // Function GM_PropHunt.GM_PropHunt_C.IsPublic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Update SessionInfo(); // Function GM_PropHunt.GM_PropHunt_C.Update SessionInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPlayfabServer(bool IsIt); // Function GM_PropHunt.GM_PropHunt_C.IsPlayfabServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function GM_PropHunt.GM_PropHunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function GM_PropHunt.GM_PropHunt_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartGame(); // Function GM_PropHunt.GM_PropHunt_C.StartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function GM_PropHunt.GM_PropHunt_C.K2_PostLogin // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ConfirmPlayerJoined(struct FString PlayFabPlayerID, struct APC_PropHunt_C* Controller); // Function GM_PropHunt.GM_PropHunt_C.ConfirmPlayerJoined // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnLogout(struct AController* ExitingController); // Function GM_PropHunt.GM_PropHunt_C.K2_OnLogout // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void RaiseLobby(); // Function GM_PropHunt.GM_PropHunt_C.RaiseLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GmEndGame(bool IsKillerWin); // Function GM_PropHunt.GM_PropHunt_C.GmEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TravelToLevel(struct FString LevelName); // Function GM_PropHunt.GM_PropHunt_C.TravelToLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartTutorial(); // Function GM_PropHunt.GM_PropHunt_C.StartTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetupServer(); // Function GM_PropHunt.GM_PropHunt_C.SetupServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void playerCalling(bool IsPlayer, struct ANewAlarmBP_C* Alarms); // Function GM_PropHunt.GM_PropHunt_C.playerCalling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayfabKillerID(struct FString KillerID); // Function GM_PropHunt.GM_PropHunt_C.SetPlayfabKillerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GM_PropHunt(int32_t EntryPoint); // Function GM_PropHunt.GM_PropHunt_C.ExecuteUbergraph_GM_PropHunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

