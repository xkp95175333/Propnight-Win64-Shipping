// WidgetBlueprintGeneratedClass WBP_CustomComboBox.WBP_CustomComboBox_C
// Size: 0x352 (Inherited: 0x260)
struct UWBP_CustomComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Selector; // 0x268(0x08)
	struct UImage* Image_Arrow; // 0x270(0x08)
	struct UImage* Image_ContentBG; // 0x278(0x08)
	struct UImage* Image_ScrollBG; // 0x280(0x08)
	struct UImage* Image_Selected; // 0x288(0x08)
	struct UImage* Image_Separator; // 0x290(0x08)
	struct UScrollBox* ScrollBox_711; // 0x298(0x08)
	struct USizeBox* SizeBox_Content; // 0x2a0(0x08)
	struct UTextBlock* Text_Label; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_Entries; // 0x2b0(0x08)
	struct FText Label; // 0x2b8(0x18)
	struct TArray<struct FText> Entries; // 0x2d0(0x10)
	int32_t MaxNumVisibleEntries; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FTimerHandle AnimTickTimer; // 0x2e8(0x08)
	float AnimSpeed; // 0x2f0(0x04)
	bool MultiSelect; // 0x2f4(0x01)
	bool IsExpanded; // 0x2f5(0x01)
	char pad_2F6[0x2]; // 0x2f6(0x02)
	int32_t CurrentEntryIndex; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<int32_t> SelectedEntries; // 0x300(0x10)
	struct FMulticastInlineDelegate OnEntryClicked; // 0x310(0x10)
	struct FMulticastInlineDelegate OnEntrySelected; // 0x320(0x10)
	struct FMulticastInlineDelegate OnExpanded; // 0x330(0x10)
	struct FMulticastInlineDelegate OnCollapsed; // 0x340(0x10)
	bool NeedScrollBar; // 0x350(0x01)
	bool UseSelectedEntryName; // 0x351(0x01)

	void Clear(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateContentHeight(int32_t EntryNumber, float Height); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.CalculateContentHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SetScrollbarVisibility(bool Visible); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.SetScrollbarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetEntryWidgetAt(int32_t Index, struct UWBP_CustomComboBoxEntry_C* EntryWidget); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryWidgetAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddEntry(struct FText EntryName, bool Added); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.AddEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Get Selected Entries(struct TArray<struct FText> Entries); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.Get Selected Entries // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetCurrentEntry(struct FText EntryName); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetCurrentEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetEntryAt(int32_t Index, struct FText EntryName); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryAt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void FindEntry(struct FText EntryName, int32_t Index); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.FindEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ExpandTick(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExpandTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Expand(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.Expand // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CollapseTick(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.CollapseTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Collapse(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.Collapse // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void EntryClicked(struct FText EntryName, bool Clicked); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.EntryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomClick(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.CustomClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_CustomComboBox(int32_t EntryPoint); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExecuteUbergraph_WBP_CustomComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnCollapsed__DelegateSignature(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnCollapsed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnExpanded__DelegateSignature(); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnExpanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEntrySelected__DelegateSignature(struct FText EntryName, int32_t EntryIndex, int32_t SelectedIndex, bool Clicked); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEntryClicked__DelegateSignature(struct FText EntryName, int32_t EntryIndex); // Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

