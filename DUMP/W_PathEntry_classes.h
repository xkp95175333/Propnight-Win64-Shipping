// WidgetBlueprintGeneratedClass W_PathEntry.W_PathEntry_C
// Size: 0x2a9 (Inherited: 0x260)
struct UW_PathEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Entry; // 0x268(0x08)
	struct UTextBlock* Text_EntryName; // 0x270(0x08)
	struct FText EntryName; // 0x278(0x18)
	struct UWidget* MoveToWidget; // 0x290(0x08)
	struct FMulticastInlineDelegate Click; // 0x298(0x10)
	bool IsEnabled; // 0x2a8(0x01)

	void SetEnabled(bool Enabled, bool ChangeTextColor); // Function W_PathEntry.W_PathEntry_C.SetEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_PathEntry.W_PathEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PathEntry(int32_t EntryPoint); // Function W_PathEntry.W_PathEntry_C.ExecuteUbergraph_W_PathEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void Click__DelegateSignature(struct FText EntryName); // Function W_PathEntry.W_PathEntry_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

