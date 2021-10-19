// WidgetBlueprintGeneratedClass MouseSensivity.MouseSensivity_C
// Size: 0x3dc (Inherited: 0x260)
struct UMouseSensivity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_306; // 0x268(0x08)
	struct UButton* Button_308; // 0x270(0x08)
	struct UButton* Button_719; // 0x278(0x08)
	struct UButton* Button_ChangeFOcus; // 0x280(0x08)
	struct UButton* Button_Sensivity; // 0x288(0x08)
	struct UButton* Button_X; // 0x290(0x08)
	struct UButton* Button_Y; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_78; // 0x2a0(0x08)
	struct UImage* Image_162; // 0x2a8(0x08)
	struct UImage* Image_238; // 0x2b0(0x08)
	struct UImage* Image_AxisX_BG; // 0x2b8(0x08)
	struct UImage* Image_AxisY_BG; // 0x2c0(0x08)
	struct UImage* Image_grayMSense; // 0x2c8(0x08)
	struct UImage* Image_grayXAxis; // 0x2d0(0x08)
	struct UImage* Image_grayYAxis; // 0x2d8(0x08)
	struct UImage* Image_SensivityBG; // 0x2e0(0x08)
	struct USlider* MOUSeSENS; // 0x2e8(0x08)
	struct UOverlay* Overlay_133; // 0x2f0(0x08)
	struct UOverlay* Overlay_232; // 0x2f8(0x08)
	struct UOverlay* Overlay_344; // 0x300(0x08)
	struct UOverlay* Overlay_483; // 0x308(0x08)
	struct UProgressBar* ProgressBar_MSens; // 0x310(0x08)
	struct UProgressBar* ProgressBar_X_Axis; // 0x318(0x08)
	struct UProgressBar* ProgressBar_Y_Axis; // 0x320(0x08)
	struct USafeZone* SafeZone_68; // 0x328(0x08)
	struct USlider* Slider_169; // 0x330(0x08)
	struct UTextBlock* TextBlock; // 0x338(0x08)
	struct UTextBlock* TextBlock_2; // 0x340(0x08)
	struct UTextBlock* TextBlock_3; // 0x348(0x08)
	struct UTextBlock* TextBlock_4; // 0x350(0x08)
	struct UTextBlock* TextBlock_5; // 0x358(0x08)
	struct UTextBlock* TextBlock_6; // 0x360(0x08)
	struct UTextBlock* TextBlock_228; // 0x368(0x08)
	struct UTextBlock* TextBlock_247; // 0x370(0x08)
	struct USlider* X_AXIS; // 0x378(0x08)
	struct USlider* Y_AXIS; // 0x380(0x08)
	float Senivity; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct AKillerMasterBP_C* KillerRef; // 0x390(0x08)
	struct ASurvivorMasterBP_C* SurvRef; // 0x398(0x08)
	struct USaveGame* NewVar_2; // 0x3a0(0x08)
	bool WasHovered; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float XAxis; // 0x3ac(0x04)
	float YAxis; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct USlider* LastFocus; // 0x3b8(0x08)
	bool MouseHere?; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UImage* SelectedImage; // 0x3c8(0x08)
	struct USlider* HoveredSlider; // 0x3d0(0x08)
	float Value; // 0x3d8(0x04)

	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MouseSensivity.MouseSensivity_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocus(struct USlider* Output_Get); // Function MouseSensivity.MouseSensivity_C.LastKnowFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Save(); // Function MouseSensivity.MouseSensivity_C.Save // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Load(); // Function MouseSensivity.MouseSensivity_C.Load // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeSliderColor(bool Condition, struct USlider* Target); // Function MouseSensivity.MouseSensivity_C.ChangeSliderColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function MouseSensivity.MouseSensivity_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function MouseSensivity.MouseSensivity_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function MouseSensivity.MouseSensivity_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ChangeTextColor(struct UWidget* Overlay, struct UTextBlock* Text, struct UTextBlock* Value, struct UImage* Image, struct USlider* Slider); // Function MouseSensivity.MouseSensivity_C.ChangeTextColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFocus(); // Function MouseSensivity.MouseSensivity_C.ChangeFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function MouseSensivity.MouseSensivity_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MouseSensivity.MouseSensivity_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void SetFocusToMouse(); // Function MouseSensivity.MouseSensivity_C.SetFocusToMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LostFocusMouseClick(); // Function MouseSensivity.MouseSensivity_C.LostFocusMouseClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function MouseSensivity.MouseSensivity_C.BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Select(struct UImage* Image); // Function MouseSensivity.MouseSensivity_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Deselect(); // Function MouseSensivity.MouseSensivity_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectSensivity(); // Function MouseSensivity.MouseSensivity_C.SelectSensivity // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectAxisX(); // Function MouseSensivity.MouseSensivity_C.SelectAxisX // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectAxisY(); // Function MouseSensivity.MouseSensivity_C.SelectAxisY // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function MouseSensivity.MouseSensivity_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MouseSensivity.MouseSensivity_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function MouseSensivity.MouseSensivity_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeSliderValue(struct USlider* Slider, float Value); // Function MouseSensivity.MouseSensivity_C.ChangeSliderValue // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MouseSensivity(int32_t EntryPoint); // Function MouseSensivity.MouseSensivity_C.ExecuteUbergraph_MouseSensivity // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

