// WidgetBlueprintGeneratedClass WBP_QuitDialog.WBP_QuitDialog_C
// Size: 0x548 (Inherited: 0x260)
struct UWBP_QuitDialog_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Blur_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Show_Anim; // 0x270(0x08)
	struct UButton* Button_No; // 0x278(0x08)
	struct UButton* Button_Yes; // 0x280(0x08)
	struct UImage* Image_BlackScreen; // 0x288(0x08)
	struct UImage* Image_DialogBG; // 0x290(0x08)
	struct USafeZone* SafeZone_118; // 0x298(0x08)
	struct UTextBlock* Text_Label; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_42; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_147; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnAccept; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnAcceptDelayed; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnDecline; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnDeclineDelayed; // 0x2e8(0x10)
	bool IsBlured; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FText Label; // 0x300(0x18)
	bool IsShown; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UButton* LastFocus; // 0x320(0x08)
	struct FSlateBrush In Style Normal; // 0x328(0x88)
	struct FSlateBrush In Style Normal_1; // 0x3b0(0x88)
	struct FSlateBrush In Style Normal_2; // 0x438(0x88)
	struct FSlateBrush In Style Normal_3; // 0x4c0(0x88)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PlayShowAnim(bool WithBlur); // Function WBP_QuitDialog.WBP_QuitDialog_C.PlayShowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayHideAnim(); // Function WBP_QuitDialog.WBP_QuitDialog_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_QuitDialog.WBP_QuitDialog_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_QuitDialog.WBP_QuitDialog_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnAccept_Event(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnDecline_Event(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_QuitDialog.WBP_QuitDialog_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_QuitDialog(int32_t EntryPoint); // Function WBP_QuitDialog.WBP_QuitDialog_C.ExecuteUbergraph_WBP_QuitDialog // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnDecline__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAccept__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAcceptDelayed__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnAcceptDelayed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnDeclineDelayed__DelegateSignature(); // Function WBP_QuitDialog.WBP_QuitDialog_C.OnDeclineDelayed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

