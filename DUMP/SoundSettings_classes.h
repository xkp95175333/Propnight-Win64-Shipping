// WidgetBlueprintGeneratedClass SoundSettings.SoundSettings_C
// Size: 0x4c1 (Inherited: 0x260)
struct USoundSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCustomGraphicButton_C* BG_MUSIC; // 0x268(0x08)
	struct UButton* Button_187; // 0x270(0x08)
	struct UButton* Button_188; // 0x278(0x08)
	struct UButton* Button_189; // 0x280(0x08)
	struct UButton* Button_190; // 0x288(0x08)
	struct UButton* Button_191; // 0x290(0x08)
	struct UButton* Button_Device; // 0x298(0x08)
	struct UButton* Button_GV; // 0x2a0(0x08)
	struct UButton* Button_MV; // 0x2a8(0x08)
	struct UButton* Button_SFX; // 0x2b0(0x08)
	struct UButton* Button_VOIP; // 0x2b8(0x08)
	struct UButton* Button_VOIP_Boost; // 0x2c0(0x08)
	struct USlider* GeneralS; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image_2; // 0x2d8(0x08)
	struct UImage* Image_3; // 0x2e0(0x08)
	struct UImage* Image_7; // 0x2e8(0x08)
	struct UImage* Image_8; // 0x2f0(0x08)
	struct UImage* Image_9; // 0x2f8(0x08)
	struct UImage* Image_87; // 0x300(0x08)
	struct UImage* Image_238; // 0x308(0x08)
	struct UImage* Image_grayGV; // 0x310(0x08)
	struct UImage* Image_grayMV; // 0x318(0x08)
	struct UImage* Image_graySFX; // 0x320(0x08)
	struct UImage* Image_grayVOIP; // 0x328(0x08)
	struct UImage* Image_grayVOIP_Boost; // 0x330(0x08)
	struct USlider* MusicS; // 0x338(0x08)
	struct UOverlay* Overlay_BG_Music; // 0x340(0x08)
	struct UOverlay* Overlay_Device; // 0x348(0x08)
	struct UOverlay* Overlay_GV; // 0x350(0x08)
	struct UOverlay* Overlay_MV; // 0x358(0x08)
	struct UOverlay* Overlay_SFX; // 0x360(0x08)
	struct UOverlay* Overlay_VOIP; // 0x368(0x08)
	struct UOverlay* Overlay_VOIP_Boost; // 0x370(0x08)
	struct UProgressBar* ProgressBar_GeneralS; // 0x378(0x08)
	struct UProgressBar* ProgressBar_MusicS; // 0x380(0x08)
	struct UProgressBar* ProgressBar_SFXS; // 0x388(0x08)
	struct UProgressBar* ProgressBar_VOIP; // 0x390(0x08)
	struct UProgressBar* ProgressBar_VOIP_Boost; // 0x398(0x08)
	struct USlider* SFXS; // 0x3a0(0x08)
	struct USizeBox* SizeBox_VOIP_Boost; // 0x3a8(0x08)
	struct UTextBlock* TextBlock; // 0x3b0(0x08)
	struct UTextBlock* TextBlock_2; // 0x3b8(0x08)
	struct UTextBlock* TextBlock_3; // 0x3c0(0x08)
	struct UTextBlock* TextBlock_4; // 0x3c8(0x08)
	struct UTextBlock* TextBlock_5; // 0x3d0(0x08)
	struct UTextBlock* TextBlock_6; // 0x3d8(0x08)
	struct UTextBlock* TextBlock_7; // 0x3e0(0x08)
	struct UTextBlock* TextBlock_8; // 0x3e8(0x08)
	struct UTextBlock* TextBlock_228; // 0x3f0(0x08)
	struct UTextBlock* TextBlock_247; // 0x3f8(0x08)
	struct UCustomVoiceButton_C* VoiceDevice; // 0x400(0x08)
	struct USlider* VOIP; // 0x408(0x08)
	struct USlider* VOIP_Boost; // 0x410(0x08)
	float GeneralVolume; // 0x418(0x04)
	float MusicVolume; // 0x41c(0x04)
	float SFXVolume; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct USaveGame* NewVar_2; // 0x428(0x08)
	struct TArray<struct AMapStormBP_C*> MapStormRef; // 0x430(0x10)
	struct TArray<struct AMapStormBP_C*> MapStorm1Ref; // 0x440(0x10)
	struct UWidget* LastFocusKnow; // 0x450(0x08)
	float VoiceVolume; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FMediaCaptureDevice> InputAudioDevices; // 0x460(0x10)
	struct UComboBoxString* ComboBoxFocused; // 0x470(0x08)
	bool ComboLastFocused?; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UImage* SelectedImage; // 0x480(0x08)
	struct USlider* HoveredSlider; // 0x488(0x08)
	float Value; // 0x490(0x04)
	float VoiceBoostVolume; // 0x494(0x04)
	struct UCustomGraphicButton_C* Selected; // 0x498(0x08)
	float Music_BG; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<struct FText> BGMUSIC_TextBtn; // 0x4a8(0x10)
	struct UWidget* KeyboardHoveredWidget; // 0x4b8(0x08)
	bool IsMutedChat?; // 0x4c0(0x01)

	struct UWidget* DoCustomNavigation_2(enum class EUINavigation Navigation); // Function SoundSettings.SoundSettings_C.DoCustomNavigation_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation); // Function SoundSettings.SoundSettings_C.DoCustomNavigation_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeButtonColor(struct UImage* Low, struct UImage* Higth, bool Condition, int32_t Index, int32_t Lenght, bool B); // Function SoundSettings.SoundSettings_C.ChangeButtonColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetText_BGMUSIC(struct FText Text_Btn); // Function SoundSettings.SoundSettings_C.GetText_BGMUSIC // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigationToVOIP(enum class EUINavigation Navigation); // Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateBoostMic(); // Function SoundSettings.SoundSettings_C.UpdateBoostMic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SoundSettings.SoundSettings_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_ToMic(enum class EUINavigation Navigation); // Function SoundSettings.SoundSettings_C.DoCustomNavigation_ToMic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigationToVOIPBoost(enum class EUINavigation Navigation); // Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIPBoost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocus(struct UWidget* Output_Get); // Function SoundSettings.SoundSettings_C.LastKnowFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExcuteCommandsSound(); // Function SoundSettings.SoundSettings_C.ExcuteCommandsSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StormVolume(); // Function SoundSettings.SoundSettings_C.StormVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Save(); // Function SoundSettings.SoundSettings_C.Save // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Load(); // Function SoundSettings.SoundSettings_C.Load // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeSliderColor(struct USlider* Target, bool Condition); // Function SoundSettings.SoundSettings_C.ChangeSliderColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SoundSettings.SoundSettings_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SoundSettings.SoundSettings_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SoundSettings.SoundSettings_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SoundSettings.SoundSettings_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SoundSettings.SoundSettings_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void SetToMouseFocus(); // Function SoundSettings.SoundSettings_C.SetToMouseFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LostFocusMouseClick(); // Function SoundSettings.SoundSettings_C.LostFocusMouseClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SoundSettings.SoundSettings_C.BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Select(struct UImage* Image); // Function SoundSettings.SoundSettings_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Deselect(); // Function SoundSettings.SoundSettings_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SelectGV(); // Function SoundSettings.SoundSettings_C.SelectGV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectMV(); // Function SoundSettings.SoundSettings_C.SelectMV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectSFX(); // Function SoundSettings.SoundSettings_C.SelectSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectVOIP(); // Function SoundSettings.SoundSettings_C.SelectVOIP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SelectDevice(); // Function SoundSettings.SoundSettings_C.SelectDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeTextColor(struct UWidget* Overlay, struct UTextBlock* Text, struct UTextBlock* Value, struct UImage* Image, struct USlider* Slider); // Function SoundSettings.SoundSettings_C.ChangeTextColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeSliderValue(struct USlider* Slider, float Value); // Function SoundSettings.SoundSettings_C.ChangeSliderValue // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetVoiceDevice(); // Function SoundSettings.SoundSettings_C.SetVoiceDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SoundSettings.SoundSettings_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SoundSettings.SoundSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function SoundSettings.SoundSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature(struct UCustomGraphicButton_C* Button); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BG_MUSIC_BTNSTYLE(); // Function SoundSettings.SoundSettings_C.BG_MUSIC_BTNSTYLE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangePanel(struct UCustomGraphicButton_C* Overlay, struct UTextBlock* Title, struct UTextBlock* Value, struct UImage* Image, struct UImage* LowBTN, struct UImage* HigthBTN, int32_t Index, int32_t Lenght, bool B); // Function SoundSettings.SoundSettings_C.ChangePanel // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SoundSettings(int32_t EntryPoint); // Function SoundSettings.SoundSettings_C.ExecuteUbergraph_SoundSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

