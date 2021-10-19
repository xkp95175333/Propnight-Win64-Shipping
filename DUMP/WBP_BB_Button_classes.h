// WidgetBlueprintGeneratedClass WBP_BB_Button.WBP_BB_Button_C
// Size: 0x498 (Inherited: 0x260)
struct UWBP_BB_Button_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimCollapse; // 0x268(0x08)
	struct UWidgetAnimation* AnimExpand; // 0x270(0x08)
	struct UButton* Button_BB; // 0x278(0x08)
	struct UImage* Image_Background; // 0x280(0x08)
	struct UImage* Image_BorderDefault; // 0x288(0x08)
	struct UImage* Image_BorderSelected; // 0x290(0x08)
	struct UImage* Image_Glow; // 0x298(0x08)
	struct URetainerBox* RetainerBox_BG; // 0x2a0(0x08)
	struct USizeBox* SizeBox_Content; // 0x2a8(0x08)
	struct UTextBlock* Text_Content; // 0x2b0(0x08)
	struct UTextBlock* Text_Header; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	bool IsSelected; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate OnHovered; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x308(0x10)
	bool UseAnimation; // 0x318(0x01)
	bool IsNeedHeader; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct FText HeaderText; // 0x320(0x18)
	struct FText ContentText; // 0x338(0x18)
	struct FVector2D ButtonSize; // 0x350(0x08)
	struct FVector2D BackgroundSize; // 0x358(0x08)
	struct FSlateColor TextColor; // 0x360(0x28)
	struct FSlateBrush BackgroundBrush; // 0x388(0x88)
	struct FSlateBrush BorderBrush; // 0x410(0x88)

	void SequenceEvent__ENTRYPOINTWBP_BB_Button_2(); // Function WBP_BB_Button.WBP_BB_Button_C.SequenceEvent__ENTRYPOINTWBP_BB_Button_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SequenceEvent__ENTRYPOINTWBP_BB_Button_1(); // Function WBP_BB_Button.WBP_BB_Button_C.SequenceEvent__ENTRYPOINTWBP_BB_Button_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SequenceEvent_Collapse(); // Function WBP_BB_Button.WBP_BB_Button_C.SequenceEvent_Collapse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SequenceEvent_Expand(); // Function WBP_BB_Button.WBP_BB_Button_C.SequenceEvent_Expand // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_BB_Button.WBP_BB_Button_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Select(); // Function WBP_BB_Button.WBP_BB_Button_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Deselect(); // Function WBP_BB_Button.WBP_BB_Button_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitPress(); // Function WBP_BB_Button.WBP_BB_Button_C.InitPress // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_77_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_77_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_77_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_77_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_77_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.BndEvt__Button_77_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_BB_Button.WBP_BB_Button_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_BB_Button.WBP_BB_Button_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_BB_Button(int32_t EntryPoint); // Function WBP_BB_Button.WBP_BB_Button_C.ExecuteUbergraph_WBP_BB_Button // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnReleased__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnClicked__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_BB_Button.WBP_BB_Button_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnUnhovered__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnHovered__DelegateSignature(); // Function WBP_BB_Button.WBP_BB_Button_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPressed__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_BB_Button.WBP_BB_Button_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

