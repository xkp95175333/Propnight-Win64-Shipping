// BlueprintGeneratedClass PC_PropHunt.PC_PropHunt_C
// Size: 0x7b8 (Inherited: 0x570)
struct APC_PropHunt_C : APropnightPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct FString PlayFabPlayerID; // 0x578(0x10)
	bool IsKiller; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct APawn* LobbyPawn; // 0x590(0x08)
	struct APawn* Char; // 0x598(0x08)
	bool DevLabOpened; // 0x5a0(0x01)
	bool IsJustSpawnedPawn; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct FString LobbySlotName; // 0x5a8(0x10)
	struct APawn* SpectatorRef; // 0x5b8(0x08)
	struct FString Nickname; // 0x5c0(0x10)
	bool IsGranny; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct FText SenderText; // 0x5d8(0x18)
	struct FText SenderName; // 0x5f0(0x18)
	int32_t TypeMessage; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct FString NextSessionID; // 0x610(0x10)
	bool SessionIsFound; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct FBlueprintSessionResult NextSession; // 0x628(0x108)
	bool ImNextHost; // 0x730(0x01)
	enum class SurvClass SurvClass; // 0x731(0x01)
	char pad_732[0x6]; // 0x732(0x06)
	struct UTexture2D* Avatar; // 0x738(0x08)
	bool BlockUI?; // 0x740(0x01)
	bool KillerMessage?; // 0x741(0x01)
	enum class KillerType KillerType; // 0x742(0x01)
	enum class SurvSkills SurvSkills; // 0x743(0x01)
	char pad_744[0x4]; // 0x744(0x04)
	struct TArray<struct ADoppelganger_C*> NewVar_1; // 0x748(0x10)
	struct AEndGameBP_C* EndGameActor; // 0x758(0x08)
	struct AEndGamePlayerMesh_C* EndGameMesh; // 0x760(0x08)
	bool Spectator?; // 0x768(0x01)
	bool Escape?; // 0x769(0x01)
	bool SurvWin?; // 0x76a(0x01)
	bool LobbyWait?; // 0x76b(0x01)
	enum class SurvChars SurvCharPC; // 0x76c(0x01)
	enum class MapVote MapVoteEnum; // 0x76d(0x01)
	enum class PlayerCategoryVote PlayerCategoryVoteEnum; // 0x76e(0x01)
	bool Liked?; // 0x76f(0x01)
	struct AActor* Player Start; // 0x770(0x08)
	struct ABP_Spectator_C* NewVar_2; // 0x778(0x08)
	bool IsUsingGamepad?; // 0x780(0x01)
	bool SoundmenuVisible?; // 0x781(0x01)
	char pad_782[0x6]; // 0x782(0x06)
	struct FString EndGameSwapSlotName; // 0x788(0x10)
	bool MvpAnimStart?; // 0x798(0x01)
	bool WinForce; // 0x799(0x01)
	bool NicknameOff?; // 0x79a(0x01)
	char pad_79B[0x5]; // 0x79b(0x05)
	struct UW_HelpWindow_C* HelpWindow; // 0x7a0(0x08)
	bool NewVar_3; // 0x7a8(0x01)
	char pad_7A9[0x7]; // 0x7a9(0x07)
	struct AActor* SecLobbyPawn; // 0x7b0(0x08)

	void GetServerId(struct FString ID); // Function PC_PropHunt.PC_PropHunt_C.GetServerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinVivoxRoom(); // Function PC_PropHunt.PC_PropHunt_C.JoinVivoxRoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLevelName(bool B, struct FString MapName); // Function PC_PropHunt.PC_PropHunt_C.GetLevelName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayerStartLobbyWait(struct AActor* PlayerStart); // Function PC_PropHunt.PC_PropHunt_C.GetPlayerStartLobbyWait // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Get Tutorial Player Start(bool KillerTutorial?, struct AActor* PlayerStart); // Function PC_PropHunt.PC_PropHunt_C.Get Tutorial Player Start // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AuthoritiDetect(bool B, bool serv); // Function PC_PropHunt.PC_PropHunt_C.AuthoritiDetect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopEndMusic(); // Function PC_PropHunt.PC_PropHunt_C.StopEndMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLobbySlotName(struct FString Name, bool AffectState); // Function PC_PropHunt.PC_PropHunt_C.SetLobbySlotName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetIsKiller(bool IsKiller, bool AffectState); // Function PC_PropHunt.PC_PropHunt_C.SetIsKiller // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayerStart(struct AActor* PlayerStart); // Function PC_PropHunt.PC_PropHunt_C.GetPlayerStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Escape_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_D22A08944B2EE4FD352FFDB74C85B31E(); // Function PC_PropHunt.PC_PropHunt_C.OnFailure_D22A08944B2EE4FD352FFDB74C85B31E // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E(); // Function PC_PropHunt.PC_PropHunt_C.OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_P_K2Node_InputKeyEvent_1(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_P_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Skills Info_K2Node_InputActionEvent_5(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Skills Info_K2Node_InputActionEvent_4(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_AnyKey_K2Node_InputActionEvent_3(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_AnyKey_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_2(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_1(struct FKey Key); // Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void OnSessionCreated(struct FString Map); // Function PC_PropHunt.PC_PropHunt_C.OnSessionCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailCreateSession(); // Function PC_PropHunt.PC_PropHunt_C.FailCreateSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnTravelError(); // Function PC_PropHunt.PC_PropHunt_C.OnTravelError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailSessionList(); // Function PC_PropHunt.PC_PropHunt_C.FailSessionList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFoundSessions(struct TArray<struct FBlueprintSessionResult> Sessions); // Function PC_PropHunt.PC_PropHunt_C.OnFoundSessions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinToTicket(struct FString Ticket); // Function PC_PropHunt.PC_PropHunt_C.JoinToTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseTicket(); // Function PC_PropHunt.PC_PropHunt_C.CloseTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function PC_PropHunt.PC_PropHunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function PC_PropHunt.PC_PropHunt_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void NotifyPlayerJoined(); // Function PC_PropHunt.PC_PropHunt_C.NotifyPlayerJoined // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ConfirmJoin(struct FString PlayFabId); // Function PC_PropHunt.PC_PropHunt_C.ConfirmJoin // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReserveSlot(struct FString SlotName); // Function PC_PropHunt.PC_PropHunt_C.ReserveSlot // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReleaseSlot(struct FString SlotName); // Function PC_PropHunt.PC_PropHunt_C.ReleaseSlot // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ForceStartGame(); // Function PC_PropHunt.PC_PropHunt_C.ForceStartGame // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnStartGame(); // Function PC_PropHunt.PC_PropHunt_C.OnStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientOnStartGame(struct APlayerStart* ref); // Function PC_PropHunt.PC_PropHunt_C.ClientOnStartGame // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRaiseLobby(); // Function PC_PropHunt.PC_PropHunt_C.OnRaiseLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientOnRaiseLobby(); // Function PC_PropHunt.PC_PropHunt_C.ClientOnRaiseLobby // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEndGame(); // Function PC_PropHunt.PC_PropHunt_C.OnEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientOnEndGame(bool Host); // Function PC_PropHunt.PC_PropHunt_C.ClientOnEndGame // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ForceRestart(); // Function PC_PropHunt.PC_PropHunt_C.ForceRestart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServForceRestart(bool B); // Function PC_PropHunt.PC_PropHunt_C.ServForceRestart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToggleDevLab(); // Function PC_PropHunt.PC_PropHunt_C.ToggleDevLab // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerReady(); // Function PC_PropHunt.PC_PropHunt_C.PlayerReady // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSurvivorDeath(bool BecomeSpectator); // Function PC_PropHunt.PC_PropHunt_C.OnSurvivorDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BecomeSpectator(bool Escape?, bool WithoutFade); // Function PC_PropHunt.PC_PropHunt_C.BecomeSpectator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillSurvivor(); // Function PC_PropHunt.PC_PropHunt_C.KillSurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeLevel(struct FString LevelName); // Function PC_PropHunt.PC_PropHunt_C.ChangeLevel // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnChangeLevel(); // Function PC_PropHunt.PC_PropHunt_C.OnChangeLevel // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendKillerChar(enum class KillerType KillerType); // Function PC_PropHunt.PC_PropHunt_C.SendKillerChar // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetChatMessage(struct FText TextToSend, int32_t Type, bool Killer?); // Function PC_PropHunt.PC_PropHunt_C.GetChatMessage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateChat(struct FText Sender, struct FText Text, int32_t Type, bool Killer?, bool ItsMe?); // Function PC_PropHunt.PC_PropHunt_C.UpdateChat // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxShopServer(struct ALootboxShop_C* Actor, struct AItemsBP_C* Class, struct FTransform SpawnTransform, bool Block?); // Function PC_PropHunt.PC_PropHunt_C.LootboxShopServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxShopMulticast(bool Block?, struct ALootboxShop_C* Actor); // Function PC_PropHunt.PC_PropHunt_C.LootboxShopMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxShopAnimServer(struct ALootboxShop_C* Actor, bool Arm?, bool Door?); // Function PC_PropHunt.PC_PropHunt_C.LootboxShopAnimServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinToNext(); // Function PC_PropHunt.PC_PropHunt_C.JoinToNext // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSurvClass(enum class SurvClass Class, enum class SurvChars Char); // Function PC_PropHunt.PC_PropHunt_C.SendSurvClass // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DevDestroySession(); // Function PC_PropHunt.PC_PropHunt_C.DevDestroySession // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailJoin(); // Function PC_PropHunt.PC_PropHunt_C.FailJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnNetworkError(); // Function PC_PropHunt.PC_PropHunt_C.OnNetworkError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenLootboxServ(struct ALootBox_C* LootBox, enum class LootBoxRollType RollType, struct FString Nickname); // Function PC_PropHunt.PC_PropHunt_C.OpenLootboxServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItemlootboxServ(struct ALootBox_C* NewParam, struct FTransform NewParam2, struct AActor* NewParam3, struct FString NewParam4); // Function PC_PropHunt.PC_PropHunt_C.SpawnItemlootboxServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItemLootboxMulti(struct ALootBox_C* NewParam, struct FTransform NewParam2, struct AActor* NewParam3); // Function PC_PropHunt.PC_PropHunt_C.SpawnItemLootboxMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideHUD_AfterDeath(); // Function PC_PropHunt.PC_PropHunt_C.HideHUD_AfterDeath // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxNotEnoughServ(struct ALootBox_C* LootBox); // Function PC_PropHunt.PC_PropHunt_C.LootboxNotEnoughServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerUnready(); // Function PC_PropHunt.PC_PropHunt_C.PlayerUnready // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatServ(int32_t SoundIndex, struct USoundChat_C* Widget, int32_t WidgetMenuType); // Function PC_PropHunt.PC_PropHunt_C.SoundChatServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMulticast(int32_t SoundIndex, struct USoundChat_C* Widget, int32_t WidgetMenuType); // Function PC_PropHunt.PC_PropHunt_C.SoundChatMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu1(int32_t Sound); // Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu2(int32_t Sound); // Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSurvSkill(enum class SurvSkills Skill); // Function PC_PropHunt.PC_PropHunt_C.SendSurvSkill // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MenuCall(); // Function PC_PropHunt.PC_PropHunt_C.MenuCall // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenEndGameWindow(); // Function PC_PropHunt.PC_PropHunt_C.OpenEndGameWindow // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectatorSwitch(struct ABP_Spectator_C* Spectator, bool Spectating?); // Function PC_PropHunt.PC_PropHunt_C.SpectatorSwitch // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AllEndGame(); // Function PC_PropHunt.PC_PropHunt_C.AllEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Fade(bool Escape?); // Function PC_PropHunt.PC_PropHunt_C.Fade // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AllPlayersFade(); // Function PC_PropHunt.PC_PropHunt_C.AllPlayersFade // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectateEndGame(); // Function PC_PropHunt.PC_PropHunt_C.SpectateEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSurvSkinId(int32_t ID, int32_t Lvl); // Function PC_PropHunt.PC_PropHunt_C.SendSurvSkinId // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnWait(); // Function PC_PropHunt.PC_PropHunt_C.SpawnWait // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveDestroyed(); // Function PC_PropHunt.PC_PropHunt_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void VictoryScreen(); // Function PC_PropHunt.PC_PropHunt_C.VictoryScreen // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeOut(); // Function PC_PropHunt.PC_PropHunt_C.FadeOut // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MapVote(enum class MapVote MapVoteEnum); // Function PC_PropHunt.PC_PropHunt_C.MapVote // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerVote(enum class PlayerCategoryVote PlayerCategoryVoteEnum); // Function PC_PropHunt.PC_PropHunt_C.PlayerVote // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Clear(); // Function PC_PropHunt.PC_PropHunt_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwapRequest(struct APawn* Target); // Function PC_PropHunt.PC_PropHunt_C.SwapRequest // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AcceptSwap(); // Function PC_PropHunt.PC_PropHunt_C.AcceptSwap // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSwapPerformed(bool IsKiller); // Function PC_PropHunt.PC_PropHunt_C.OnSwapPerformed // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSwap(); // Function PC_PropHunt.PC_PropHunt_C.OnSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnTutorial(bool Killer?); // Function PC_PropHunt.PC_PropHunt_C.SpawnTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Liked(struct APS_PropHunt_C* NewParam); // Function PC_PropHunt.PC_PropHunt_C.Liked // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSwapNotification(); // Function PC_PropHunt.PC_PropHunt_C.OnSwapNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSystemMessage(struct FText Text); // Function PC_PropHunt.PC_PropHunt_C.GetSystemMessage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSurvProp(); // Function PC_PropHunt.PC_PropHunt_C.UpdateSurvProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PerksPrintChat(struct FText Sender, struct FText Text); // Function PC_PropHunt.PC_PropHunt_C.PerksPrintChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvOnChair(bool WantBeSpectator?); // Function PC_PropHunt.PC_PropHunt_C.SurvOnChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerTo_Spectator(); // Function PC_PropHunt.PC_PropHunt_C.PlayerTo_Spectator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectatorTo_Player(); // Function PC_PropHunt.PC_PropHunt_C.SpectatorTo_Player // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectatorBackUISurv(); // Function PC_PropHunt.PC_PropHunt_C.SpectatorBackUISurv // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitMicVoiceSettings(); // Function PC_PropHunt.PC_PropHunt_C.InitMicVoiceSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Swap_LeaveFromServer(struct APawn* LeftPlayer); // Function PC_PropHunt.PC_PropHunt_C.Swap_LeaveFromServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientLeft_FromServer(Swap)(struct APawn* LeftPlayer); // Function PC_PropHunt.PC_PropHunt_C.ClientLeft_FromServer(Swap) // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void YouHaveBeenKicked(); // Function PC_PropHunt.PC_PropHunt_C.YouHaveBeenKicked // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PC_PropHunt.PC_PropHunt_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PC_PropHunt(int32_t EntryPoint); // Function PC_PropHunt.PC_PropHunt_C.ExecuteUbergraph_PC_PropHunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

