// WidgetBlueprintGeneratedClass SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C
// Size: 0x2ca (Inherited: 0x260)
struct USurvivalStaminaBarWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HUD_JumpOut; // 0x268(0x08)
	struct UWidgetAnimation* HUD_JumpIn; // 0x270(0x08)
	struct UWidgetAnimation* HideAnim; // 0x278(0x08)
	struct UWidgetSwitcher* ButtonsSwitcher; // 0x280(0x08)
	struct UImage* Image_327; // 0x288(0x08)
	struct UImage* Image_BG; // 0x290(0x08)
	struct UProgressBar* Progress; // 0x298(0x08)
	struct UProgressBar* Progress_2; // 0x2a0(0x08)
	struct USafeZone* SafeZone_167; // 0x2a8(0x08)
	struct UW_Lobby_ButtonChangeCharacter_C* W_Lobby_ButtonChangeCharacter; // 0x2b0(0x08)
	struct UW_Lobby_WaitPlayers_C* W_Lobby_WaitPlayers; // 0x2b8(0x08)
	struct UWBP_Tip_C* WBP_Tip; // 0x2c0(0x08)
	bool IsAnimPlaying; // 0x2c8(0x01)
	bool IsAnimInterrupted; // 0x2c9(0x01)

	float Get_Progress_1_Percent_1(); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Get_Progress_1_Percent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	float GetStaminaPercent(); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.GetStaminaPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PlayHideAnim(); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InterruptHideAnim(); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.InterruptHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalStaminaBarWidget(int32_t EntryPoint); // Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.ExecuteUbergraph_SurvivalStaminaBarWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

