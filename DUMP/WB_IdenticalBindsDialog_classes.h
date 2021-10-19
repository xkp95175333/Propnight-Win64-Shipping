// WidgetBlueprintGeneratedClass WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C
// Size: 0x530 (Inherited: 0x260)
struct UWB_IdenticalBindsDialog_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Blur_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Show_Anim; // 0x270(0x08)
	struct UButton* Button_No; // 0x278(0x08)
	struct UButton* Button_Yes; // 0x280(0x08)
	struct UImage* Image_BlackScreen; // 0x288(0x08)
	struct UImage* Image_DialogBG; // 0x290(0x08)
	struct USafeZone* SafeZone_118; // 0x298(0x08)
	struct UTextBlock* Text_Label; // 0x2a0(0x08)
	struct UTextBlock* Text_Label_2; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_42; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_147; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnAccept; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnDecline; // 0x2d0(0x10)
	bool IsBlured; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FText Label; // 0x2e8(0x18)
	bool IsShown; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UButton* LastFocus; // 0x308(0x08)
	struct FSlateBrush In Style Normal; // 0x310(0x88)
	struct FSlateBrush In Style Normal_1; // 0x398(0x88)
	struct FSlateBrush In Style Normal_2; // 0x420(0x88)
	struct FSlateBrush In Style Normal_3; // 0x4a8(0x88)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PlayShowAnim(bool WithBlur); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.PlayShowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayHideAnim(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnAccept_Event(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.OnAccept_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnDecline_Event(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.OnDecline_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WB_IdenticalBindsDialog(int32_t EntryPoint); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.ExecuteUbergraph_WB_IdenticalBindsDialog // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnDecline__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.OnDecline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAccept__DelegateSignature(); // Function WB_IdenticalBindsDialog.WB_IdenticalBindsDialog_C.OnAccept__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

