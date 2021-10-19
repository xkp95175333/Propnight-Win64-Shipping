// WidgetBlueprintGeneratedClass WBP_QuickSearch.WBP_QuickSearch_C
// Size: 0x2e0 (Inherited: 0x260)
struct UWBP_QuickSearch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowHide_Anim; // 0x268(0x08)
	struct UBackgroundBlur* BackgroundBlur_BG; // 0x270(0x08)
	struct UButton* Button_Cancel; // 0x278(0x08)
	struct UImage* Image_43; // 0x280(0x08)
	struct UImage* Image_98; // 0x288(0x08)
	struct UImage* Image_BtnBG; // 0x290(0x08)
	struct UImage* Image_Cross_2; // 0x298(0x08)
	struct UImage* Image_Cross_3; // 0x2a0(0x08)
	struct UOverlay* Overlay_Button; // 0x2a8(0x08)
	struct UTextBlock* Text_Timer; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_Label; // 0x2b8(0x08)
	int32_t TargetTime; // 0x2c0(0x04)
	int32_t CurrentTime; // 0x2c4(0x04)
	struct FTimerHandle Timer; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnTimeIsOver; // 0x2d0(0x10)

	void TimerTick(); // Function WBP_QuickSearch.WBP_QuickSearch_C.TimerTick // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartTimer(int32_t Time); // Function WBP_QuickSearch.WBP_QuickSearch_C.StartTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowSearchindUI(); // Function WBP_QuickSearch.WBP_QuickSearch_C.ShowSearchindUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideSearchindUI(); // Function WBP_QuickSearch.WBP_QuickSearch_C.HideSearchindUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_QuickSearch.WBP_QuickSearch_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnMatchFound(); // Function WBP_QuickSearch.WBP_QuickSearch_C.OnMatchFound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuickSearch.WBP_QuickSearch_C.BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuickSearch.WBP_QuickSearch_C.BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_QuickSearch.WBP_QuickSearch_C.BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_QuickSearch.WBP_QuickSearch_C.BndEvt__WBP_QuickSearch_Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_QuickSearch.WBP_QuickSearch_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_QuickSearch.WBP_QuickSearch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_QuickSearch(int32_t EntryPoint); // Function WBP_QuickSearch.WBP_QuickSearch_C.ExecuteUbergraph_WBP_QuickSearch // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnTimeIsOver__DelegateSignature(); // Function WBP_QuickSearch.WBP_QuickSearch_C.OnTimeIsOver__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

