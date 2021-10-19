// WidgetBlueprintGeneratedClass WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_CustomComboBoxEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Entry; // 0x268(0x08)
	struct UCheckBox* CheckBox_MultiValue; // 0x270(0x08)
	struct UImage* Image_Selected; // 0x278(0x08)
	struct UTextBlock* Text_EntryName; // 0x280(0x08)
	struct FText EntryName; // 0x288(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	bool IsSelected; // 0x2b0(0x01)

	void SetSelected(bool Selected); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetChecked(bool Checked); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.SetChecked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_CustomComboBoxEntry(int32_t EntryPoint); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.ExecuteUbergraph_WBP_CustomComboBoxEntry // (Final|UbergraphFunction) // @ game+0x132e1a0
	void OnClicked__DelegateSignature(struct FText EntryName, bool Clicked); // Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

