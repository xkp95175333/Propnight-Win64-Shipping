// WidgetBlueprintGeneratedClass WBP_ServerMessage.WBP_ServerMessage_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_ServerMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_147; // 0x268(0x08)
	struct UImage* Image_DialogBG; // 0x270(0x08)
	struct UTextBlock* Text_Label; // 0x278(0x08)
	struct UTextBlock* TextBlock_147; // 0x280(0x08)

	void WithMessage(struct FText InText); // Function WBP_ServerMessage.WBP_ServerMessage_C.WithMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_ServerMessage(int32_t EntryPoint); // Function WBP_ServerMessage.WBP_ServerMessage_C.ExecuteUbergraph_WBP_ServerMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

