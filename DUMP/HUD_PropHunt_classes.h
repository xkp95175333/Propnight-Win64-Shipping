// BlueprintGeneratedClass HUD_PropHunt.HUD_PropHunt_C
// Size: 0x488 (Inherited: 0x310)
struct AHUD_PropHunt_C : AHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	float Timeline_0_Alpha_BD8370D34F8ED99EECACF0A572FB9267; // 0x320(0x04)
	enum class ETimelineDirection Timeline_0__Direction_BD8370D34F8ED99EECACF0A572FB9267; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* Timeline_1; // 0x328(0x08)
	struct USurvivalProgressBarWidget_C* SurvivorProgress; // 0x330(0x08)
	struct USurvivalSkillCheckWidget_C* SurvivorSkillCheck; // 0x338(0x08)
	struct UCoolDownWBP_C* KillerCooldown; // 0x340(0x08)
	struct UW_MiniLobby_C* MiniLobby; // 0x348(0x08)
	struct UAlarmsCountWBP_C* AlarmWidget; // 0x350(0x08)
	struct USurvStatusWBP_C* SurvStatus; // 0x358(0x08)
	struct USurvivalInventoryWidget_C* SurvivorInventory; // 0x360(0x08)
	struct UCoolDownWBP_C* SurvivorAbility; // 0x368(0x08)
	struct UW_GameResult_C* GameResult; // 0x370(0x08)
	struct UW_DevLab_C* DevLab; // 0x378(0x08)
	struct UInteractableButtonsWidget_C* InteractableButtonSurv; // 0x380(0x08)
	struct UFlashWidget_C* KillerFlash; // 0x388(0x08)
	struct UAmmoKillerWBP_C* AmmoKiller; // 0x390(0x08)
	struct UInteractableButtonsWidget_C* InteractableButtonKiller; // 0x398(0x08)
	struct UCrossHairWBP_C* CrosshairKiller; // 0x3a0(0x08)
	struct UWaypointWidget_C* WaypointWidget; // 0x3a8(0x08)
	struct UKillerMarked_C* KillerMarked; // 0x3b0(0x08)
	struct UPlayersScore_Tab_Stats_C* PlayerScore; // 0x3b8(0x08)
	struct UChatWindow_C* ChatWindow; // 0x3c0(0x08)
	struct UGeneralSettingWBP_C* Settings; // 0x3c8(0x08)
	struct UVoiceChatWindow_C* VoiceChat; // 0x3d0(0x08)
	struct UPauseMenu_C* PauseMenu; // 0x3d8(0x08)
	struct USurvivalEffectsUI_C* SurvEffectsUI; // 0x3e0(0x08)
	struct USurvivalStaminaBarWidget_C* SurvStaminaBar; // 0x3e8(0x08)
	bool bLocked; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UWBP_EffectsWindow_C* EffectWindow; // 0x3f8(0x08)
	struct USoundChat_C* SoundChat; // 0x400(0x08)
	struct UEffectsHUDWidget_C* EffectsHUD; // 0x408(0x08)
	struct UWBP_BDRush_Killer_C* EffectBloodLast; // 0x410(0x08)
	struct ULobbyEffectsHUD_C* LobbyEffects; // 0x418(0x08)
	struct UFartTimer_C* FartTimer; // 0x420(0x08)
	struct UW_VictoryScreen_C* VictoryScreen; // 0x428(0x08)
	struct UW_LoadingScreen_C* NewVar_1; // 0x430(0x08)
	struct UW_LoadingScreen_C* LoadingScreen; // 0x438(0x08)
	struct UWBP_Tip_C* WidgetTip; // 0x440(0x08)
	struct UWBP_EliminatedScreen_C* WidgetEliminationScreen; // 0x448(0x08)
	struct UWB_Spectator_C* Spectator; // 0x450(0x08)
	struct UWBP_LastChance_C* LastChanceWidget; // 0x458(0x08)
	struct UWBP_HitMark_KillerAlarm_C* Killer_HitmarkAlarmDone; // 0x460(0x08)
	struct UWBP_MVPScreen_C* MVPScreen; // 0x468(0x08)
	struct UW_MatchCanceled_C* MatchCanceled; // 0x470(0x08)
	bool Tutorial?; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UW_VictoryScreen_Tutorial_C* VictoryScreenTutorial; // 0x480(0x08)

	void Timeline_0__FinishedFunc(); // Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void OnRaiseLobby(); // Function HUD_PropHunt.HUD_PropHunt_C.OnRaiseLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateGameResult(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateGameResult // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEndGame(bool EndGame?); // Function HUD_PropHunt.HUD_PropHunt_C.OnEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateDevLab(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateDevLab // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowDevLab(); // Function HUD_PropHunt.HUD_PropHunt_C.ShowDevLab // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideDevLab(); // Function HUD_PropHunt.HUD_PropHunt_C.HideDevLab // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitSurvStatus(); // Function HUD_PropHunt.HUD_PropHunt_C.InitSurvStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitForSurvivor(struct ASurvivorMasterBP_C* Survivor, bool Wait?); // Function HUD_PropHunt.HUD_PropHunt_C.InitForSurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateKillerFlashUI(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerFlashUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateAmmoKiller(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateAmmoKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitKillerAmmo(); // Function HUD_PropHunt.HUD_PropHunt_C.InitKillerAmmo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreatePlayerScore(); // Function HUD_PropHunt.HUD_PropHunt_C.CreatePlayerScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitPlayerScore(); // Function HUD_PropHunt.HUD_PropHunt_C.InitPlayerScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateChatWindow(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateChatWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitChat(); // Function HUD_PropHunt.HUD_PropHunt_C.InitChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSetteings(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSetteings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitSettings(); // Function HUD_PropHunt.HUD_PropHunt_C.InitSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateVoiceChat(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateVoiceChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitVoiceChat(); // Function HUD_PropHunt.HUD_PropHunt_C.InitVoiceChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitPauseMenu(); // Function HUD_PropHunt.HUD_PropHunt_C.InitPauseMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreatePauseMenu(); // Function HUD_PropHunt.HUD_PropHunt_C.CreatePauseMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityGameUI(bool Hide?, bool OnlyGameUI?); // Function HUD_PropHunt.HUD_PropHunt_C.VisibilityGameUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSurvStatusWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvStatusWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSurvEffectsUI(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvEffectsUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GameEndHideUI(); // Function HUD_PropHunt.HUD_PropHunt_C.GameEndHideUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveSettings(); // Function HUD_PropHunt.HUD_PropHunt_C.RemoveSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerDeath(); // Function HUD_PropHunt.HUD_PropHunt_C.PlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateKillerUI(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateEffectWindow(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddEffect(int32_t Index, float Duration); // Function HUD_PropHunt.HUD_PropHunt_C.AddEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSoundChat(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSoundChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSurvivorUI(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvivorUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateEffectsHUD(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectsHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitlAlarm(); // Function HUD_PropHunt.HUD_PropHunt_C.InitlAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function HUD_PropHunt.HUD_PropHunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void LoadingScreenHUD(); // Function HUD_PropHunt.HUD_PropHunt_C.LoadingScreenHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreenHUD(); // Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreenHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeOut(); // Function HUD_PropHunt.HUD_PropHunt_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeIn(); // Function HUD_PropHunt.HUD_PropHunt_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddAvatarSteam(struct UTexture2D* NewParam); // Function HUD_PropHunt.HUD_PropHunt_C.AddAvatarSteam // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectateHideUI(bool On?); // Function HUD_PropHunt.HUD_PropHunt_C.SpectateHideUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateAlarmWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateAlarmWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreatePropHuntWidgets(); // Function HUD_PropHunt.HUD_PropHunt_C.CreatePropHuntWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideLobby(bool Wait?); // Function HUD_PropHunt.HUD_PropHunt_C.HideLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnStartGame(); // Function HUD_PropHunt.HUD_PropHunt_C.OnStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearSurvHUD(); // Function HUD_PropHunt.HUD_PropHunt_C.ClearSurvHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VictoryScreenInit(); // Function HUD_PropHunt.HUD_PropHunt_C.VictoryScreenInit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameFade(); // Function HUD_PropHunt.HUD_PropHunt_C.EndGameFade // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameHide(bool On?); // Function HUD_PropHunt.HUD_PropHunt_C.EndGameHide // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreen2(); // Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitLobby(); // Function HUD_PropHunt.HUD_PropHunt_C.InitLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateMiniLobby(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateMiniLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateTipWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateTipWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowEliminationScreen(struct FString Text, struct FString Nickname, int32_t Score); // Function HUD_PropHunt.HUD_PropHunt_C.ShowEliminationScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateEliminationScreen(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateEliminationScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitForKiller(struct AKillerMasterBP_C* Killer); // Function HUD_PropHunt.HUD_PropHunt_C.InitForKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateEffectBloodLast(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectBloodLast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateSpectator(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateSpectator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectateShowUI(); // Function HUD_PropHunt.HUD_PropHunt_C.SpectateShowUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateLastChanceWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateLastChanceWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowLastChanceWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.ShowLastChanceWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideLastChanceWidget(); // Function HUD_PropHunt.HUD_PropHunt_C.HideLastChanceWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Doppelganger(); // Function HUD_PropHunt.HUD_PropHunt_C.Doppelganger // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateMVPSCreen(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateMVPSCreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideAllDoorMarks(); // Function HUD_PropHunt.HUD_PropHunt_C.HideAllDoorMarks // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreen3(); // Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMatchCanceled(); // Function HUD_PropHunt.HUD_PropHunt_C.OnMatchCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateMatchCanceled(); // Function HUD_PropHunt.HUD_PropHunt_C.CreateMatchCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_HUD_PropHunt(int32_t EntryPoint); // Function HUD_PropHunt.HUD_PropHunt_C.ExecuteUbergraph_HUD_PropHunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

