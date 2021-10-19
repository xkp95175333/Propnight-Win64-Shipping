// BlueprintGeneratedClass BPI_SteamGameInterface.BPI_SteamGameInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_SteamGameInterface_C : UInterface {

	void GetRandomMap3(struct FString MapName); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandomMap2(struct FString Map); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLobbyOwner(struct FString OwnerID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsAnyoneOnLobby(bool Result); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsAnyoneOnLobby // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RestoreLobby(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RestoreLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HandleStartupSteamInvite(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.HandleStartupSteamInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetMenuLoaded(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetMenuLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ConnectMatchmakingGame(struct FString Address); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectMatchmakingGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAmILobbyMember(bool Member); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAmILobbyMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPings(struct TArray<struct FPingQoSInfo> Pings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPings(struct TArray<struct FPingQoSInfo> Pings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayfabMatchPlayers(struct TArray<struct UPlayFabJsonObject*> Players); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPlayfabMatchPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyStopSearch(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStopSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InviteFriendToLobby(struct FString ID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.InviteFriendToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LeaveLobby(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSteamFriendList(struct TArray<struct FSteamFriend> Friends); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetSteamFriendList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsLobbyOwner(bool Owner); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLobbyOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLobbyPlayfabPlayers(struct TArray<struct FString> Players); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyPlayfabPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyConnect(struct FString Address); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyConnect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyStartSearch(struct FString Ticket); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStartSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSteamLobby(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateSteamLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunSteamCallback(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RunSteamCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsMatchmaking(bool Is); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetIsMatchMaking(bool Is); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsMatchMaking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetKillerID(struct FString ID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetKillerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerID(struct FString ID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetKillerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsWithEditor(bool IsEditor); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsWithEditor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPlayfabServerV2(bool Is); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPlayfabServerV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerId(struct FString ID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerId(struct FString ID); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerName(struct FString Name); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerName(struct FString Name); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetBuildNumber(int32_t BuildNumber); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetBuildNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetActualServer(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetActualServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsActualServer(bool IsActual); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsActualServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerRegion(struct FString Region); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerRegion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerRegion(struct FString Region); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetGameServerSettings(struct FS_GameSettings GameSettings, struct FS_ServerSettings ServerSettings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetGameServerSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServiceAddress(struct FString Address); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServiceAddress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServiceAddress(struct FString Address); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServiceAddress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerSettings(struct FS_ServerSettings ServerSettings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayerName(struct FString Nickname); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetGameSettings(struct FS_GameSettings GameSettings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetGameSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerWithSettings(struct FS_GameSettings Settings, struct FS_ServerSettings ServerSettings); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateServerWithSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLoggedIn(bool IsLogged); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLoggedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsLoggedIn(bool IsLoggedIn); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLoggedIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelSearch(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CancelSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LeaveAndSearch(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveAndSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAudioHandles(struct FS_AudioHandles AudioHandles); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAudioHandles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Search(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Search // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MainMenu(); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.MainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPublic(bool Public); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPublic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Join(struct FBlueprintSessionResult Session); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Join // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Starter(bool Private, struct FString Map); // Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Starter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

