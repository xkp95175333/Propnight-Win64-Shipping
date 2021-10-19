// BlueprintGeneratedClass GI_Prophunt.GI_Prophunt_C
// Size: 0x5a9 (Inherited: 0x2b0)
struct UGI_Prophunt_C : UProphuntGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct FString PlayFabUserID; // 0x2b8(0x10)
	struct FString Nickname; // 0x2c8(0x10)
	struct FName HostLevel; // 0x2d8(0x08)
	struct TArray<struct FBlueprintSessionResult> NewVar_1; // 0x2e0(0x10)
	struct USaveGame* NewVar_2; // 0x2f0(0x08)
	float Sensivity; // 0x2f8(0x04)
	bool BAdvertise; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct TArray<struct FBlueprintSessionResult> Sessions; // 0x300(0x10)
	struct FS_AudioHandles AudioHandles; // 0x310(0x20)
	bool ShouldJoin; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTexture2D* Avatar; // 0x338(0x08)
	int32_t MapIndex; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct FString> Blacklist; // 0x348(0x10)
	bool SuccessJoin; // 0x358(0x01)
	bool DelayedSearch; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct FString SessionId; // 0x360(0x10)
	bool afterMenu; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FString MapName; // 0x378(0x10)
	struct FPlayerInfo PlayerInfo; // 0x388(0x18)
	bool LoggedIn; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	int32_t SurvSkinID; // 0x3a4(0x04)
	int32_t Exp; // 0x3a8(0x04)
	int32_t Lvl; // 0x3ac(0x04)
	float PercentageLVL; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<int32_t> SurvSkinArray; // 0x3b8(0x10)
	struct USaveGame* UserDataSave; // 0x3c8(0x08)
	struct FString SaveName; // 0x3d0(0x10)
	bool LoginSuccess; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FS_GameSettings ServerGameSettings; // 0x3e8(0x20)
	struct FS_ServerSettings ServerSettings; // 0x408(0x28)
	bool NeedMainMenuFadeOut; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float XAxis; // 0x434(0x04)
	float YAxis; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UPerk_C* SurvPerk1; // 0x440(0x08)
	struct UPerk_C* SurvPerk2; // 0x448(0x08)
	struct UPerk_C* SurvPerk3; // 0x450(0x08)
	struct UPerk_C* KillerPerk1; // 0x458(0x08)
	struct UPerk_C* KillerPerk2; // 0x460(0x08)
	struct UPerk_C* KillerPerk3; // 0x468(0x08)
	struct FString ServiceAddress; // 0x470(0x10)
	struct FString ServerRegion; // 0x480(0x10)
	bool IsActualServer; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32_t BuildNumber; // 0x494(0x04)
	struct FString ServerName; // 0x498(0x10)
	struct FString ID; // 0x4a8(0x10)
	bool ServerError?; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FString TitlePlayerID; // 0x4c0(0x10)
	struct FString SteamUserID; // 0x4d0(0x10)
	bool IsPlayfabServer; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct FString KillerID; // 0x4e8(0x10)
	bool IsMatchmaking; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct TArray<int32_t> Char Selected Skin Ids; // 0x500(0x10)
	bool SteamLoggedIn; // 0x510(0x01)
	bool SteamLobbyCreated; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	struct FMulticastInlineDelegate OnComeOnline; // 0x518(0x10)
	struct FMulticastInlineDelegate OnGoneOffline; // 0x528(0x10)
	bool AmILobbyMember; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FString UserToInvite; // 0x540(0x10)
	struct TArray<struct UPlayFabJsonObject*> PlayfabMatchPlayers; // 0x550(0x10)
	struct FMulticastInlineDelegate OnEnterLobby; // 0x560(0x10)
	struct FMulticastInlineDelegate OnLeftLobby; // 0x570(0x10)
	struct TArray<struct FPingQoSInfo> Pings; // 0x580(0x10)
	enum class E_MenuReason OpenMenuReason; // 0x590(0x01)
	bool GoingToMenu; // 0x591(0x01)
	bool JoinSteamLobbyAtStartup; // 0x592(0x01)
	char pad_593[0x5]; // 0x593(0x05)
	struct FString JoinLobbyID; // 0x598(0x10)
	bool DevCheat?; // 0x5a8(0x01)

	void GetPlayfabUserID(struct FString UserId); // Function GI_Prophunt.GI_Prophunt_C.GetPlayfabUserID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSteamPlayerID(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.GetSteamPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayfabBuildID(struct FString BuildId); // Function GI_Prophunt.GI_Prophunt_C.GetPlayfabBuildID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetTitlePlayerID(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.GetTitlePlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandomMap3(struct FString MapName); // Function GI_Prophunt.GI_Prophunt_C.GetRandomMap3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandomMap2(struct FString Map); // Function GI_Prophunt.GI_Prophunt_C.GetRandomMap2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLobbyOwner(struct FString OwnerID); // Function GI_Prophunt.GI_Prophunt_C.GetLobbyOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsAnyoneOnLobby(bool Result); // Function GI_Prophunt.GI_Prophunt_C.IsAnyoneOnLobby // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAmILobbyMember(bool Member); // Function GI_Prophunt.GI_Prophunt_C.GetAmILobbyMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPings(struct TArray<struct FPingQoSInfo> Pings); // Function GI_Prophunt.GI_Prophunt_C.GetPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSteamFriendList(struct TArray<struct FSteamFriend> Friends); // Function GI_Prophunt.GI_Prophunt_C.GetSteamFriendList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsLobbyOwner(bool Owner); // Function GI_Prophunt.GI_Prophunt_C.IsLobbyOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLobbyPlayfabPlayers(struct TArray<struct FString> Players); // Function GI_Prophunt.GI_Prophunt_C.GetLobbyPlayfabPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsMatchmaking(bool Is); // Function GI_Prophunt.GI_Prophunt_C.GetIsMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetKillerID(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.GetKillerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsWithEditor(bool IsEditor); // Function GI_Prophunt.GI_Prophunt_C.GetIsWithEditor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPlayfabServerV2(bool Is); // Function GI_Prophunt.GI_Prophunt_C.IsPlayfabServerV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerId(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.GetServerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerName(struct FString Name); // Function GI_Prophunt.GI_Prophunt_C.GetServerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetBuildNumber(int32_t BuildNumber); // Function GI_Prophunt.GI_Prophunt_C.GetBuildNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetIsActualServer(bool IsActual); // Function GI_Prophunt.GI_Prophunt_C.GetIsActualServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerRegion(struct FString Region); // Function GI_Prophunt.GI_Prophunt_C.GetServerRegion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServiceAddress(struct FString Address); // Function GI_Prophunt.GI_Prophunt_C.GetServiceAddress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerSettings(struct FS_ServerSettings ServerSettings); // Function GI_Prophunt.GI_Prophunt_C.GetServerSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayerName(struct FString Nickname); // Function GI_Prophunt.GI_Prophunt_C.GetPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetGameSettings(struct FS_GameSettings GameSettings); // Function GI_Prophunt.GI_Prophunt_C.GetGameSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsLoggedIn(bool IsLoggedIn); // Function GI_Prophunt.GI_Prophunt_C.IsLoggedIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAudioHandles(struct FS_AudioHandles AudioHandles); // Function GI_Prophunt.GI_Prophunt_C.GetAudioHandles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsPublic(bool Public); // Function GI_Prophunt.GI_Prophunt_C.IsPublic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandom3Map(struct FString MapName); // Function GI_Prophunt.GI_Prophunt_C.GetRandom3Map // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetRandom2Map(struct FString Map); // Function GI_Prophunt.GI_Prophunt_C.GetRandom2Map // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReturnSkinID(enum class SurvChars Chars, int32_t IDs); // Function GI_Prophunt.GI_Prophunt_C.ReturnSkinID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinArraySelector(enum class SurvChars Char, struct TArray<struct FName> Rows); // Function GI_Prophunt.GI_Prophunt_C.SkinArraySelector // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddSkinToUserArray(enum class SurvChars Char, int32_t ID); // Function GI_Prophunt.GI_Prophunt_C.AddSkinToUserArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinIdChecker(enum class SurvChars Char, int32_t ID, bool Valid?); // Function GI_Prophunt.GI_Prophunt_C.SkinIdChecker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinIDChanger(enum class SurvChars Char, int32_t ID); // Function GI_Prophunt.GI_Prophunt_C.SkinIDChanger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinIdsValidator(); // Function GI_Prophunt.GI_Prophunt_C.SkinIdsValidator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SaveUserDataSave(); // Function GI_Prophunt.GI_Prophunt_C.SaveUserDataSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadCreateUserDataSave(); // Function GI_Prophunt.GI_Prophunt_C.LoadCreateUserDataSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateLvl(); // Function GI_Prophunt.GI_Prophunt_C.CalculateLvl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreenGI(); // Function GI_Prophunt.GI_Prophunt_C.RemoveLoadingScreenGI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CallLoadingScreen(struct FText Text); // Function GI_Prophunt.GI_Prophunt_C.CallLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyMenuSound(); // Function GI_Prophunt.GI_Prophunt_C.DestroyMenuSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroySounds(); // Function GI_Prophunt.GI_Prophunt_C.DestroySounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddSession(struct FBlueprintSessionResult Session); // Function GI_Prophunt.GI_Prophunt_C.AddSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsValidSession(struct FBlueprintSessionResult Session, bool Valid); // Function GI_Prophunt.GI_Prophunt_C.IsValidSession // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenMainMenu(); // Function GI_Prophunt.GI_Prophunt_C.OpenMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenTravelMap(); // Function GI_Prophunt.GI_Prophunt_C.OpenTravelMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Load(); // Function GI_Prophunt.GI_Prophunt_C.Load // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetNickname(struct FString Name, struct UTexture2D* Avatar, struct FPlayerInfo Info); // Function GI_Prophunt.GI_Prophunt_C.SetNickname // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_49C7C79B485E157459C63B825AF3BC18(); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_49C7C79B485E157459C63B825AF3BC18 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_49C7C79B485E157459C63B825AF3BC18(); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_49C7C79B485E157459C63B825AF3BC18 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_321C18DA43882CCF1DFCECB1A74CEA66(); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_321C18DA43882CCF1DFCECB1A74CEA66 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66(); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_FF1A61F44A16A337704E8C9EDF5577EE(); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_FF1A61F44A16A337704E8C9EDF5577EE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE(); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1(); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1(); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_6EFFFD8E4448DE29D489E89B29222869(struct TArray<struct FBlueprintSessionResult> Results); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_6EFFFD8E4448DE29D489E89B29222869 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_6EFFFD8E4448DE29D489E89B29222869(struct TArray<struct FBlueprintSessionResult> Results); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_6EFFFD8E4448DE29D489E89B29222869 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_5552813A4E43EF2C3804F1B579829FDD(); // Function GI_Prophunt.GI_Prophunt_C.OnFailure_5552813A4E43EF2C3804F1B579829FDD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_5552813A4E43EF2C3804F1B579829FDD(); // Function GI_Prophunt.GI_Prophunt_C.OnSuccess_5552813A4E43EF2C3804F1B579829FDD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Join(struct FBlueprintSessionResult Session); // Function GI_Prophunt.GI_Prophunt_C.Join // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function GI_Prophunt.GI_Prophunt_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void HandleTravelError(enum class ETravelFailure FailureType); // Function GI_Prophunt.GI_Prophunt_C.HandleTravelError // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Starter(bool Private, struct FString Map); // Function GI_Prophunt.GI_Prophunt_C.Starter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveShutdown(); // Function GI_Prophunt.GI_Prophunt_C.ReceiveShutdown // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LoadSettings(); // Function GI_Prophunt.GI_Prophunt_C.LoadSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MainMenu(); // Function GI_Prophunt.GI_Prophunt_C.MainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Search(); // Function GI_Prophunt.GI_Prophunt_C.Search // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveInit(); // Function GI_Prophunt.GI_Prophunt_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LeaveAndSearch(); // Function GI_Prophunt.GI_Prophunt_C.LeaveAndSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelSearch(); // Function GI_Prophunt.GI_Prophunt_C.CancelSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopMusicMainMenu(); // Function GI_Prophunt.GI_Prophunt_C.StopMusicMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLoggedIn(bool IsLogged); // Function GI_Prophunt.GI_Prophunt_C.SetLoggedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UploadUserData(); // Function GI_Prophunt.GI_Prophunt_C.UploadUserData // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearUserData(); // Function GI_Prophunt.GI_Prophunt_C.ClearUserData // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerWithSettings(struct FS_GameSettings Settings, struct FS_ServerSettings ServerSettings); // Function GI_Prophunt.GI_Prophunt_C.CreateServerWithSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServiceAddress(struct FString Address); // Function GI_Prophunt.GI_Prophunt_C.SetServiceAddress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetGameServerSettings(struct FS_GameSettings GameSettings, struct FS_ServerSettings ServerSettings); // Function GI_Prophunt.GI_Prophunt_C.SetGameServerSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerRegion(struct FString Region); // Function GI_Prophunt.GI_Prophunt_C.SetServerRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetActualServer(); // Function GI_Prophunt.GI_Prophunt_C.SetActualServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerName(struct FString Name); // Function GI_Prophunt.GI_Prophunt_C.SetServerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetServerId(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.SetServerId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayfabUserID(struct FString UserId); // Function GI_Prophunt.GI_Prophunt_C.SetPlayfabUserID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetTitlePlayerID(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.SetTitlePlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void STEAM(); // Function GI_Prophunt.GI_Prophunt_C.STEAM // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerID(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.SetKillerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetIsMatchMaking(bool Is); // Function GI_Prophunt.GI_Prophunt_C.SetIsMatchMaking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunSteamCallback(); // Function GI_Prophunt.GI_Prophunt_C.RunSteamCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnUserEnterLobby(struct FString Name, struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnUserEnterLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnUserLeaveLobby(struct FString Name, struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnUserLeaveLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnJoinLobby(); // Function GI_Prophunt.GI_Prophunt_C.OnJoinLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnLobbyUserDataUpdated(struct FString ID, struct FString Entity); // Function GI_Prophunt.GI_Prophunt_C.OnLobbyUserDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnLobbyCreatedExt(); // Function GI_Prophunt.GI_Prophunt_C.OnLobbyCreatedExt // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnSteamMessage(struct FString Ticket); // Function GI_Prophunt.GI_Prophunt_C.OnSteamMessage // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CreateSteamLobby(); // Function GI_Prophunt.GI_Prophunt_C.CreateSteamLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyStartSearch(struct FString Ticket); // Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStartSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyConnect(struct FString Address); // Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyConnect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFriendComeOnline(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnFriendComeOnline // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnFriendGoneOffline(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnFriendGoneOffline // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LeaveLobby(); // Function GI_Prophunt.GI_Prophunt_C.LeaveLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BecomeLobbyOwner(); // Function GI_Prophunt.GI_Prophunt_C.BecomeLobbyOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InviteFriendToLobby(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.InviteFriendToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NotifySteamLobbyStopSearch(); // Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStopSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopSearch(); // Function GI_Prophunt.GI_Prophunt_C.StopSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayfabMatchPlayers(struct TArray<struct UPlayFabJsonObject*> Players); // Function GI_Prophunt.GI_Prophunt_C.SetPlayfabMatchPlayers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPings(struct TArray<struct FPingQoSInfo> Pings); // Function GI_Prophunt.GI_Prophunt_C.SetPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ConnectMatchmakingGame(struct FString Address); // Function GI_Prophunt.GI_Prophunt_C.ConnectMatchmakingGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetMenuLoaded(); // Function GI_Prophunt.GI_Prophunt_C.SetMenuLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HandleStartupSteamInvite(); // Function GI_Prophunt.GI_Prophunt_C.HandleStartupSteamInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RestoreLobby(); // Function GI_Prophunt.GI_Prophunt_C.RestoreLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GI_Prophunt(int32_t EntryPoint); // Function GI_Prophunt.GI_Prophunt_C.ExecuteUbergraph_GI_Prophunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnLeftLobby__DelegateSignature(struct FString Name, struct FString SteamId); // Function GI_Prophunt.GI_Prophunt_C.OnLeftLobby__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEnterLobby__DelegateSignature(struct FString Name, struct FString SteamId); // Function GI_Prophunt.GI_Prophunt_C.OnEnterLobby__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnGoneOffline__DelegateSignature(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnGoneOffline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnComeOnline__DelegateSignature(struct FString ID); // Function GI_Prophunt.GI_Prophunt_C.OnComeOnline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

