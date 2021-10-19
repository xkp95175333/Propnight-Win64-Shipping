// WidgetBlueprintGeneratedClass WBP_FriendsComboBox.WBP_FriendsComboBox_C
// Size: 0x340 (Inherited: 0x260)
struct UWBP_FriendsComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Selector; // 0x268(0x08)
	struct UImage* Image_Arrow; // 0x270(0x08)
	struct UImage* Image_ScrollBG; // 0x278(0x08)
	struct UImage* Image_Selected; // 0x280(0x08)
	struct UImage* Image_Separator; // 0x288(0x08)
	struct UScrollBox* ScrollBox_711; // 0x290(0x08)
	struct USizeBox* SizeBox_Content; // 0x298(0x08)
	struct UTextBlock* Text_Counter; // 0x2a0(0x08)
	struct UTextBlock* Text_Label; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_Entries; // 0x2b0(0x08)
	struct TArray<struct UWBP_FriendEntry_C*> Entries; // 0x2b8(0x10)
	int32_t MaxNumVisibleEntries; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FTimerHandle AnimTickTimer; // 0x2d0(0x08)
	float AnimSpeed; // 0x2d8(0x04)
	bool IsExpanded; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct FMulticastInlineDelegate OnEntryClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnEntrySelected; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnExpanded; // 0x300(0x10)
	struct FMulticastInlineDelegate OnCollapsed; // 0x310(0x10)
	bool NeedScrollBar; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float EntriesOffset; // 0x324(0x04)
	struct FText Label; // 0x328(0x18)

	void Clear(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateContentHeight(int32_t EntryNumber, float Height); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CalculateContentHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SetScrollbarVisibility(bool Visible); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.SetScrollbarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveEntry(struct FString SteamId, bool Result); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.RemoveEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetEntryWidgetAt(int32_t Index, struct UWBP_CustomComboBoxEntry_C* EntryWidget); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryWidgetAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddEntry(struct FSteamFriend EntryStruct, bool Added); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.AddEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetEntryAt(int32_t Index, struct UWBP_FriendEntry_C* EntryName); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void FindEntry(struct FString SteamId, int32_t Index); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.FindEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ExpandTick(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExpandTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Expand(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Expand // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CollapseTick(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CollapseTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Collapse(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Collapse // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CustomClick(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CustomClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_FriendsComboBox(int32_t EntryPoint); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExecuteUbergraph_WBP_FriendsComboBox // (Final|UbergraphFunction) // @ game+0x132e1a0
	void OnCollapsed__DelegateSignature(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnCollapsed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnExpanded__DelegateSignature(); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnExpanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEntrySelected__DelegateSignature(struct FText EntryName, int32_t EntryIndex, int32_t SelectedIndex, bool Clicked); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEntryClicked__DelegateSignature(struct FText EntryName, int32_t EntryIndex); // Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

