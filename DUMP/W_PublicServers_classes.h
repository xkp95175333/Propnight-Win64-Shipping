// WidgetBlueprintGeneratedClass W_PublicServers.W_PublicServers_C
// Size: 0x448 (Inherited: 0x260)
struct UW_PublicServers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	struct UImage* Image_3; // 0x278(0x08)
	struct UImage* Image_4; // 0x280(0x08)
	struct UImage* Image_5; // 0x288(0x08)
	struct UImage* Image_6; // 0x290(0x08)
	struct UImage* Image_7; // 0x298(0x08)
	struct UImage* Image_8; // 0x2a0(0x08)
	struct UImage* Image_9; // 0x2a8(0x08)
	struct UImage* Image_10; // 0x2b0(0x08)
	struct UImage* Image_11; // 0x2b8(0x08)
	struct UImage* Image_12; // 0x2c0(0x08)
	struct UImage* Image_13; // 0x2c8(0x08)
	struct UImage* Image_14; // 0x2d0(0x08)
	struct UImage* Image_15; // 0x2d8(0x08)
	struct UImage* Image_16; // 0x2e0(0x08)
	struct UImage* Image_17; // 0x2e8(0x08)
	struct UImage* Image_166; // 0x2f0(0x08)
	struct UImage* Image_BG; // 0x2f8(0x08)
	struct UImage* Image_ScrollBG; // 0x300(0x08)
	struct UImage* Image_Scrubber; // 0x308(0x08)
	struct UListView* ListView_69; // 0x310(0x08)
	struct UButton* MapButton; // 0x318(0x08)
	struct UButton* ModeButton_2; // 0x320(0x08)
	struct UButton* PingButton; // 0x328(0x08)
	struct UButton* PlayersButton; // 0x330(0x08)
	struct USizeBox* SB_ScrollRail; // 0x338(0x08)
	struct UScrollBox* ScrollBox_79; // 0x340(0x08)
	struct UButton* ServerNameButton; // 0x348(0x08)
	struct UButton* StatusButton; // 0x350(0x08)
	struct UTextBlock* Text; // 0x358(0x08)
	struct UTextBlock* TextBlock; // 0x360(0x08)
	struct UTextBlock* TextBlock_39; // 0x368(0x08)
	struct UTextBlock* TextBlock_42; // 0x370(0x08)
	struct UTextBlock* TextBlock_60; // 0x378(0x08)
	struct UTextBlock* TextBlock_155; // 0x380(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x388(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_3; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_4; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_5; // 0x3a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_106; // 0x3b0(0x08)
	bool SelectedRow; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UObject* PrevItem; // 0x3c0(0x08)
	struct TArray<struct UBP_SessionData_C*> Sessions; // 0x3c8(0x10)
	struct TArray<struct UBP_SessionData_C*> SortedSessions; // 0x3d8(0x10)
	struct TMap<struct FString, bool> SortState; // 0x3e8(0x50)
	struct FLinearColor In Color And Opacity Specified Color; // 0x438(0x10)

	void CreateFakeListItems(int32_t Number); // Function W_PublicServers.W_PublicServers_C.CreateFakeListItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByStatusUp(); // Function W_PublicServers.W_PublicServers_C.SortByStatusUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByStatusDown(); // Function W_PublicServers.W_PublicServers_C.SortByStatusDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByModeUp(); // Function W_PublicServers.W_PublicServers_C.SortByModeUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByModeDown(); // Function W_PublicServers.W_PublicServers_C.SortByModeDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByMapUp(); // Function W_PublicServers.W_PublicServers_C.SortByMapUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByMapDown(); // Function W_PublicServers.W_PublicServers_C.SortByMapDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SortByPlayersUp(); // Function W_PublicServers.W_PublicServers_C.SortByPlayersUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearSortedSessions(); // Function W_PublicServers.W_PublicServers_C.ClearSortedSessions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Sort By Players Down(); // Function W_PublicServers.W_PublicServers_C.Sort By Players Down // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_PublicServers.W_PublicServers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_PublicServers.W_PublicServers_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void UpdateList(struct TArray<struct UBP_SessionData_C*> List); // Function W_PublicServers.W_PublicServers_C.UpdateList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ListView_68_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function W_PublicServers.W_PublicServers_C.BndEvt__ListView_68_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ListView_68_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function W_PublicServers.W_PublicServers_C.BndEvt__ListView_68_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ClearList(); // Function W_PublicServers.W_PublicServers_C.ClearList // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSortByPlayers(); // Function W_PublicServers.W_PublicServers_C.OnSortByPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ApplyList(struct TArray<struct UBP_SessionData_C*> Sessions); // Function W_PublicServers.W_PublicServers_C.ApplyList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_70_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnSortByMap(); // Function W_PublicServers.W_PublicServers_C.OnSortByMap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSortByMode(); // Function W_PublicServers.W_PublicServers_C.OnSortByMode // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__StatusButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnSortByStatus(); // Function W_PublicServers.W_PublicServers_C.OnSortByStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__StatusButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__StatusButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PlayersButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PlayersButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PingButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_ServerNameButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ServerNameButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_PingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_PingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_ListView_68_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ListView_68_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ClearSelectionOfSortingButtons(); // Function W_PublicServers.W_PublicServers_C.ClearSelectionOfSortingButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void MakeScrollBarVisible(bool Visible); // Function W_PublicServers.W_PublicServers_C.MakeScrollBarVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateScrubberPos(); // Function W_PublicServers.W_PublicServers_C.UpdateScrubberPos // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateScrubberSize(); // Function W_PublicServers.W_PublicServers_C.UpdateScrubberSize // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PublicServers(int32_t EntryPoint); // Function W_PublicServers.W_PublicServers_C.ExecuteUbergraph_W_PublicServers // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

