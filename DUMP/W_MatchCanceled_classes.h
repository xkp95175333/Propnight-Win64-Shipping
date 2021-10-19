// WidgetBlueprintGeneratedClass W_MatchCanceled.W_MatchCanceled_C
// Size: 0x2c8 (Inherited: 0x260)
struct UW_MatchCanceled_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_98; // 0x268(0x08)
	struct UImage* Image_151; // 0x270(0x08)
	struct UImage* Image_396C_2; // 0x278(0x08)
	struct UImage* Image_494C_2; // 0x280(0x08)
	struct UCanvasPanel* MatchCanceledCanvas; // 0x288(0x08)
	struct UButton* QuitButton; // 0x290(0x08)
	struct UOverlay* QuitOverlay; // 0x298(0x08)
	struct UTextBlock* QuitText; // 0x2a0(0x08)
	struct UTextBlock* QuitText_2; // 0x2a8(0x08)
	struct USizeBox* SizeBox_ct_2; // 0x2b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x2c0(0x08)

	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_MatchCanceled.W_MatchCanceled_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void StartTimer(); // Function W_MatchCanceled.W_MatchCanceled_C.StartTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MatchCanceled_QuitButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_MatchCanceled.W_MatchCanceled_C.BndEvt__W_MatchCanceled_QuitButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MatchCanceled_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function W_MatchCanceled.W_MatchCanceled_C.BndEvt__W_MatchCanceled_QuitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_MatchCanceled(int32_t EntryPoint); // Function W_MatchCanceled.W_MatchCanceled_C.ExecuteUbergraph_W_MatchCanceled // (Final|UbergraphFunction) // @ game+0x132e1a0
};

