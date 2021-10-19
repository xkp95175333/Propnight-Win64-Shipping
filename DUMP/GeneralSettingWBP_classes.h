// WidgetBlueprintGeneratedClass GeneralSettingWBP.GeneralSettingWBP_C
// Size: 0x48f (Inherited: 0x260)
struct UGeneralSettingWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade_Anim; // 0x268(0x08)
	struct UButton* Back; // 0x270(0x08)
	struct UButton* Button_212; // 0x278(0x08)
	struct UButton* Button_Audio; // 0x280(0x08)
	struct UButton* Button_Control; // 0x288(0x08)
	struct UButton* Button_DefaultCfg; // 0x290(0x08)
	struct UButton* Button_FocusToAudio; // 0x298(0x08)
	struct UButton* Button_FocusToControl; // 0x2a0(0x08)
	struct UButton* Button_FocusToGraphic; // 0x2a8(0x08)
	struct UButton* Button_Graphic; // 0x2b0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2b8(0x08)
	struct UGraphicSettingsWBP1_C* GraphicSettings_WBP; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_4; // 0x2e0(0x08)
	struct UImage* Image_5; // 0x2e8(0x08)
	struct UImage* Image_6; // 0x2f0(0x08)
	struct UImage* Image_7; // 0x2f8(0x08)
	struct UImage* Image_93; // 0x300(0x08)
	struct UImage* Image_104; // 0x308(0x08)
	struct UImage* Image_237; // 0x310(0x08)
	struct UImage* Image_2176; // 0x318(0x08)
	struct UImage* Image_Arrow; // 0x320(0x08)
	struct UImage* Image_Arrow_2; // 0x328(0x08)
	struct UImage* Image_Arrow_3; // 0x330(0x08)
	struct UImage* Image_AudioGlow; // 0x338(0x08)
	struct UImage* Image_Controlsglow; // 0x340(0x08)
	struct UImage* Image_GRAPHICSglow; // 0x348(0x08)
	struct UImage* Image_TopMenuBG; // 0x350(0x08)
	struct UImage* Image_UpdateServerList; // 0x358(0x08)
	struct UOverlay* Overlay_Buttons; // 0x360(0x08)
	struct UProgressBar* ProgressBar_109; // 0x368(0x08)
	struct USafeZone* SafeZone; // 0x370(0x08)
	struct USafeZone* SafeZone_2; // 0x378(0x08)
	struct USafeZone* SafeZone_4; // 0x380(0x08)
	struct USafeZone* SafeZone_5; // 0x388(0x08)
	struct USafeZone* SafeZone_6; // 0x390(0x08)
	struct USafeZone* SafeZone_7; // 0x398(0x08)
	struct USafeZone* SafeZone_8; // 0x3a0(0x08)
	struct USafeZone* SafeZone_9; // 0x3a8(0x08)
	struct USafeZone* SafeZone_10; // 0x3b0(0x08)
	struct USafeZone* SafeZone_126; // 0x3b8(0x08)
	struct USafeZone* SafeZone_141; // 0x3c0(0x08)
	struct USafeZone* SafeZone_171; // 0x3c8(0x08)
	struct UButton* Select; // 0x3d0(0x08)
	struct USizeBox* SizeBox_Audio; // 0x3d8(0x08)
	struct USizeBox* SizeBox_Audio_2; // 0x3e0(0x08)
	struct USizeBox* SizeBox_Control; // 0x3e8(0x08)
	struct USizeBox* SizeBox_Graphic; // 0x3f0(0x08)
	struct USizeBox* SizeBox_ResetToDEf; // 0x3f8(0x08)
	struct USoundSettings_C* SoundSettings_WBP; // 0x400(0x08)
	struct UTextBlock* TextBlock_3; // 0x408(0x08)
	struct UTextBlock* TextBlock_8; // 0x410(0x08)
	struct UTextBlock* TextBlock_Audio; // 0x418(0x08)
	struct UTextBlock* TextBlock_Controls; // 0x420(0x08)
	struct UTextBlock* TextBlock_Grapics; // 0x428(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0x430(0x08)
	struct UW_Path_C* W_Path; // 0x438(0x08)
	struct UWB_KeyBindings_C* WB_KeyBindings; // 0x440(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_159; // 0x448(0x08)
	struct UUserWidget* Widget; // 0x450(0x08)
	struct UTextBlock* TextToGray; // 0x458(0x08)
	struct UButton* LastKnowFocusButton; // 0x460(0x08)
	bool IsButtonHover?; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FLinearColor Specified ColorActive; // 0x46c(0x10)
	struct FLinearColor Specified ColorDisable; // 0x47c(0x10)
	bool IsButtonHover?_FocusGraphic; // 0x48c(0x01)
	bool IsButtonHover?_FocusControl; // 0x48d(0x01)
	bool IsButtonHover?_FocusAudio; // 0x48e(0x01)

	float GetPercent_1(); // Function GeneralSettingWBP.GeneralSettingWBP_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void LastKnowFocus(); // Function GeneralSettingWBP.GeneralSettingWBP_C.LastKnowFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoCustomNavigation_Audio(enum class EUINavigation Navigation); // Function GeneralSettingWBP.GeneralSettingWBP_C.DoCustomNavigation_Audio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoCustomNavigation_Conrol(enum class EUINavigation Navigation); // Function GeneralSettingWBP.GeneralSettingWBP_C.DoCustomNavigation_Conrol // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoCustomNavigation_Graphic(enum class EUINavigation Navigation, bool NotPlaySound); // Function GeneralSettingWBP.GeneralSettingWBP_C.DoCustomNavigation_Graphic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Back_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Back_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Select_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Select_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Select_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Select_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Select_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Select_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_283_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_283_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_283_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_283_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_211_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_211_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function GeneralSettingWBP.GeneralSettingWBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CustomEvent_1(); // Function GeneralSettingWBP.GeneralSettingWBP_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DefaultFocusedButtonStyle(); // Function GeneralSettingWBP.GeneralSettingWBP_C.DefaultFocusedButtonStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function GeneralSettingWBP.GeneralSettingWBP_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function GeneralSettingWBP.GeneralSettingWBP_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void FocusMainButtons(); // Function GeneralSettingWBP.GeneralSettingWBP_C.FocusMainButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GeneralSettingWBP.GeneralSettingWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function GeneralSettingWBP.GeneralSettingWBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Graphic_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_Graphic_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Control_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_Control_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Audio_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PressE(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PressE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressQ(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PressQ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressedE(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PressedE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressedQ(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PressedQ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PlayShowAnim(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PlayShowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayHideAnim(); // Function GeneralSettingWBP.GeneralSettingWBP_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideInstantly(); // Function GeneralSettingWBP.GeneralSettingWBP_C.HideInstantly // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowInstantly(); // Function GeneralSettingWBP.GeneralSettingWBP_C.ShowInstantly // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GeneralSettingWBP_Button_DefaultCfg_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__GeneralSettingWBP_Button_DefaultCfg_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GeneralSettingWBP_Button_DefaultCfg_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature(); // Function GeneralSettingWBP.GeneralSettingWBP_C.BndEvt__GeneralSettingWBP_Button_DefaultCfg_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GeneralSettingWBP(int32_t EntryPoint); // Function GeneralSettingWBP.GeneralSettingWBP_C.ExecuteUbergraph_GeneralSettingWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

