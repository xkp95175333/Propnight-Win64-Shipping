// WidgetBlueprintGeneratedClass SurvivalProgressBarWidget.SurvivalProgressBarWidget_C
// Size: 0x671 (Inherited: 0x260)
struct USurvivalProgressBarWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AlarmCharge; // 0x268(0x08)
	struct UWidgetAnimation* GrappleAnim; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* BGCircle; // 0x280(0x08)
	struct UImage* ButtonA; // 0x288(0x08)
	struct UImage* ButtonA_2; // 0x290(0x08)
	struct UImage* ButtonA_3; // 0x298(0x08)
	struct UImage* ButtonA_4; // 0x2a0(0x08)
	struct UImage* ButtonD; // 0x2a8(0x08)
	struct UImage* ButtonD_2; // 0x2b0(0x08)
	struct UImage* ButtonD_5; // 0x2b8(0x08)
	struct UImage* ButtonD_6; // 0x2c0(0x08)
	struct UImage* ButtonD_7; // 0x2c8(0x08)
	struct UImage* ButtonD_8; // 0x2d0(0x08)
	struct UWidgetSwitcher* ButtonsSwitcher; // 0x2d8(0x08)
	struct UWidgetSwitcher* ButtonsSwitcher_2; // 0x2e0(0x08)
	struct UOverlay* CircleOverlay; // 0x2e8(0x08)
	struct UImage* CrossHair; // 0x2f0(0x08)
	struct UTextBlock* GetOutText; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBox_Status; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image_2; // 0x310(0x08)
	struct UImage* Image_327; // 0x318(0x08)
	struct UImage* Image_Alarm; // 0x320(0x08)
	struct UImage* Image_Settings; // 0x328(0x08)
	struct UImage* Image_Settings_2; // 0x330(0x08)
	struct UImage* Image_Settings_3; // 0x338(0x08)
	struct UImage* Image_Settings_4; // 0x340(0x08)
	struct UImage* Image_Wiggle; // 0x348(0x08)
	struct UImage* Image_Wiggle_2; // 0x350(0x08)
	struct UImage* Image_Wiggle_3; // 0x358(0x08)
	struct UOverlay* Main; // 0x360(0x08)
	struct UOverlay* Main_1-OLDSAVE; // 0x368(0x08)
	struct UImage* MainCircle; // 0x370(0x08)
	struct UVerticalBox* MainProgressBar; // 0x378(0x08)
	struct UVerticalBox* MainProgressBar_2; // 0x380(0x08)
	struct UOverlay* OverlayA_4; // 0x388(0x08)
	struct UOverlay* OverlayA_5; // 0x390(0x08)
	struct UOverlay* OverlayA_6; // 0x398(0x08)
	struct UOverlay* OverlayA_BIG; // 0x3a0(0x08)
	struct UOverlay* OverlayA_Small; // 0x3a8(0x08)
	struct UOverlay* OverlayD; // 0x3b0(0x08)
	struct UOverlay* OverlayD_4; // 0x3b8(0x08)
	struct UOverlay* OverlayD_5; // 0x3c0(0x08)
	struct UOverlay* OverlayD_6; // 0x3c8(0x08)
	struct UOverlay* OverlayD_BIG; // 0x3d0(0x08)
	struct UOverlay* OverlayD_Small; // 0x3d8(0x08)
	struct UProgressBar* Progress; // 0x3e0(0x08)
	struct UProgressBar* Progress_2; // 0x3e8(0x08)
	struct UProgressBar* Progress_BG; // 0x3f0(0x08)
	struct UProgressBar* Progress_Fake; // 0x3f8(0x08)
	struct UProgressBar* Progress_Red_Green; // 0x400(0x08)
	struct UScaleBox* ScaleBox_Energy; // 0x408(0x08)
	struct UScaleBox* ScaleBox_HelperAlarmX; // 0x410(0x08)
	struct UScaleBox* ScaleBox_KeyDoor; // 0x418(0x08)
	struct UScaleBox* ScaleBox_Speed; // 0x420(0x08)
	struct USizeBox* SizeBox_Charger; // 0x428(0x08)
	struct UTextBlock* TextBlock_98; // 0x430(0x08)
	struct UTextBlock* TextBlock_StatusSpeedX; // 0x438(0x08)
	struct UTextBlock* TextBlock_StatusSpeedX_2; // 0x440(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x448(0x08)
	struct UWidgetSwitcher* TextSwitcher_2; // 0x450(0x08)
	struct UW_SurvonChair_Banned_C* W_SurvonChair_Banned; // 0x458(0x08)
	struct UWBP_HitMark_C* WBP_HitMark; // 0x460(0x08)
	bool Grapple?; // 0x468(0x01)
	bool GrappleButton?; // 0x469(0x01)
	bool PressA?; // 0x46a(0x01)
	bool PressD?; // 0x46b(0x01)
	float BreakFreeProgress; // 0x46c(0x04)
	float BreakFreeFullProgress; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct ASurvivorMasterBP_C* Player; // 0x478(0x08)
	enum class SurvStateEnum PrevSurvState; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FSlateBrush Normal; // 0x488(0x88)
	struct FSlateBrush Bleeding; // 0x510(0x88)
	struct FString GetOutS; // 0x598(0x10)
	struct FSlateBrush Invisible; // 0x5a8(0x88)
	struct FLinearColor CurrentColor; // 0x630(0x10)
	float Scale; // 0x640(0x04)
	float CurrentScale; // 0x644(0x04)
	bool SpectatorMode?; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t CountSurvAlarm; // 0x64c(0x04)
	bool ReloadingAlarm?; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	float NewVar_1; // 0x654(0x04)
	float Alpha; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct FTimerHandle AlarmTickTimer; // 0x660(0x08)
	bool IsAlarmAnimPlaying; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	float AlarmTickTime; // 0x66c(0x04)
	bool DoorOpeningNow?; // 0x670(0x01)

	void OnRep_NeedMoreSpeed(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.OnRep_NeedMoreSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetPressedKey(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.GetPressedKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FSlateBrush Get_Crosshair_Brush_1(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.Get_Crosshair_Brush_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility CheckPlayerStatus(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.CheckPlayerStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	float GetProgressPercent(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.GetProgressPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void StopListenButtonsGrapple(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StopListenButtonsGrapple // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartPicklock(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartPicklock // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartHelp(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartHelp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartPullOut(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartPullOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartReanimate(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartReanimate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeColor(bool change?); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.ChangeColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartSelfReanimate(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartSelfReanimate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartHeal(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartHeal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpectatorGetPlayer(bool Clear?); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.SpectatorGetPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostedChangeColor(bool IsAlarm?); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.BoostedChangeColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartReloadingAlarm(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartReloadingAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartOpen(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckStatusIcons(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.CheckStatusIcons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetCountSurvAlarm(int32_t CountSurvAlarm); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.SetCountSurvAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearStyleGrappleButtons(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.ClearStyleGrappleButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmFailed(float Percent); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.AlarmFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSuccessed(float OldPercent, float NewParam, int32_t Level); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.AlarmSuccessed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AlarmFailed_Tick(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.AlarmFailed_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressButtonD(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.PressButtonD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartListenButtonsGrapple(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartListenButtonsGrapple // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideGrappleButtons(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.HideGrappleButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowGrappleButtons(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.ShowGrappleButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSuccessed_Tick(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.AlarmSuccessed_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartBreakFree(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartBreakFree // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGetOut(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartGetOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopProgressBar(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StopProgressBar // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressButtonA(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.PressButtonA // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvOnChair(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.SurvOnChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartHoudini(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.StartHoudini // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tinkerer(); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.Tinkerer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitMark(struct FVector InstigatorLocation); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.HitMark // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalProgressBarWidget(int32_t EntryPoint); // Function SurvivalProgressBarWidget.SurvivalProgressBarWidget_C.ExecuteUbergraph_SurvivalProgressBarWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

