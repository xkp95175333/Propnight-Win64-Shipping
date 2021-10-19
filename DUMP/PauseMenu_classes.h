// WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C
// Size: 0x450 (Inherited: 0x260)
struct UPauseMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HideAllButtons_Anim; // 0x268(0x08)
	struct UWidgetAnimation* MoveExit; // 0x270(0x08)
	struct UWidgetAnimation* MoveSettings; // 0x278(0x08)
	struct UWidgetAnimation* MoveContinue; // 0x280(0x08)
	struct UWidgetAnimation* ShowButtons; // 0x288(0x08)
	struct UWidgetAnimation* ChangeButtonText_Anim; // 0x290(0x08)
	struct UWidgetAnimation* HideMenu_Anim; // 0x298(0x08)
	struct UWidgetAnimation* FadeAnim; // 0x2a0(0x08)
	struct UImage* Background_Mask; // 0x2a8(0x08)
	struct UImage* Background_Mask_2; // 0x2b0(0x08)
	struct UButton* Button_212; // 0x2b8(0x08)
	struct UButton* Button_Back; // 0x2c0(0x08)
	struct UButton* Button_DefaultCfg; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2d0(0x08)
	struct UButton* ContinueButton; // 0x2d8(0x08)
	struct UButton* ExitButton; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox_144; // 0x2e8(0x08)
	struct UImage* Image_2; // 0x2f0(0x08)
	struct UImage* Image_93; // 0x2f8(0x08)
	struct UImage* Image_119; // 0x300(0x08)
	struct UImage* Image_BackIcon; // 0x308(0x08)
	struct UImage* Image_CHover; // 0x310(0x08)
	struct UImage* Image_EHover; // 0x318(0x08)
	struct UImage* Image_FadeScreen; // 0x320(0x08)
	struct UImage* Image_SHover; // 0x328(0x08)
	struct UOverlay* Overlay_1; // 0x330(0x08)
	struct UOverlay* Overlay_89; // 0x338(0x08)
	struct UOverlay* Overlay_107; // 0x340(0x08)
	struct UOverlay* Overlay_221; // 0x348(0x08)
	struct UProgressBar* ProgressBar_109; // 0x350(0x08)
	struct UProgressBar* ProgressBar_125; // 0x358(0x08)
	struct USafeZone* SafeZone; // 0x360(0x08)
	struct USafeZone* SafeZone_4; // 0x368(0x08)
	struct USafeZone* SafeZone_5; // 0x370(0x08)
	struct USafeZone* SafeZone_6; // 0x378(0x08)
	struct USafeZone* SafeZone_7; // 0x380(0x08)
	struct USafeZone* SafeZone_8; // 0x388(0x08)
	struct USafeZone* SafeZone_9; // 0x390(0x08)
	struct USafeZone* SafeZone_126; // 0x398(0x08)
	struct UButton* SettingsButton; // 0x3a0(0x08)
	struct USizeBox* SizeBox_BackButton; // 0x3a8(0x08)
	struct USizeBox* SizeBox_Buttons; // 0x3b0(0x08)
	struct UTextBlock* TextBlock_2; // 0x3b8(0x08)
	struct UTextBlock* TextBlock_183; // 0x3c0(0x08)
	struct UTextBlock* TextBlock_354; // 0x3c8(0x08)
	struct UTextBlock* TextBlock_501; // 0x3d0(0x08)
	struct UTextBlock* TextBlock_BackButton; // 0x3d8(0x08)
	struct UWBP_QuitDialog_C* WBP_QuitDialog; // 0x3e0(0x08)
	bool Paused?; // 0x3e8(0x01)
	bool SettingsOpen?; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct UButton* LastKnowFocused; // 0x3f0(0x08)
	struct TArray<struct UButton*> StyleButtonArray; // 0x3f8(0x10)
	struct TArray<struct UObject*> StyleButton; // 0x408(0x10)
	struct FVector2D ImageSizeButton; // 0x418(0x08)
	struct TArray<struct UTextBlock*> textArray; // 0x420(0x10)
	bool IsBackButtonHovered; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UButton* HoveredButton; // 0x438(0x08)
	struct UWidgetAnimation* Hide All Buttons Anim; // 0x440(0x08)
	bool BlockPause; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float SliderValueFocus; // 0x44c(0x04)

	void GetAnim(struct UButton* Button, struct UWidgetAnimation* Anim); // Function PauseMenu.PauseMenu_C.GetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocus(struct UButton* Output_Get); // Function PauseMenu.PauseMenu_C.LastKnowFocus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsActive(); // Function PauseMenu.PauseMenu_C.SettingsActive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsDeactive(); // Function PauseMenu.PauseMenu_C.SettingsDeactive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsUnhovored(); // Function PauseMenu.PauseMenu_C.SettingsUnhovored // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function PauseMenu.PauseMenu_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function PauseMenu.PauseMenu_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetStyleFocusedButton(); // Function PauseMenu.PauseMenu_C.SetStyleFocusedButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ContinueGame(); // Function PauseMenu.PauseMenu_C.ContinueGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetBackButtonText(struct FText Text); // Function PauseMenu.PauseMenu_C.SetBackButtonText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsEvent(); // Function PauseMenu.PauseMenu_C.SettingsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ContinueHover(); // Function PauseMenu.PauseMenu_C.ContinueHover // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayAnimForward(struct UButton* Button); // Function PauseMenu.PauseMenu_C.PlayAnimForward // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayAnimReverse(struct UButton* Button); // Function PauseMenu.PauseMenu_C.PlayAnimReverse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveButton(struct UButton* Button); // Function PauseMenu.PauseMenu_C.MoveButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PauseMenu(); // Function PauseMenu.PauseMenu_C.PauseMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideSettingsText(); // Function PauseMenu.PauseMenu_C.HideSettingsText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowSettingsText(); // Function PauseMenu.PauseMenu_C.ShowSettingsText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_8_OnAccept__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_8_OnAccept__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PauseMenu.PauseMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function PauseMenu.PauseMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function PauseMenu.PauseMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature(); // Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ShowResetButton(); // Function PauseMenu.PauseMenu_C.ShowResetButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveSliderMenu(float DeltaTime); // Function PauseMenu.PauseMenu_C.MoveSliderMenu // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Move(struct FText EntryName); // Function PauseMenu.PauseMenu_C.Move // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PauseMenu(int32_t EntryPoint); // Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

