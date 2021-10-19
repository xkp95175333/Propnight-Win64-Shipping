// WidgetBlueprintGeneratedClass W_ServerEntryV3.W_ServerEntryV3_C
// Size: 0x4b2 (Inherited: 0x260)
struct UW_ServerEntryV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Hover_Anim; // 0x268(0x08)
	struct UWidgetAnimation* HideWaiting_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Waiting_Anim; // 0x278(0x08)
	struct UImage* BG; // 0x280(0x08)
	struct UImage* BG_Hovered; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_Root; // 0x290(0x08)
	struct UImage* Image_MapPreview; // 0x298(0x08)
	struct UImage* Image_Waiting; // 0x2a0(0x08)
	struct UTextBlock* Map; // 0x2a8(0x08)
	struct UTextBlock* Mode; // 0x2b0(0x08)
	struct UTextBlock* Mode_2; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UTextBlock* Ping; // 0x2c8(0x08)
	struct UTextBlock* Players; // 0x2d0(0x08)
	struct UTextBlock* Status; // 0x2d8(0x08)
	struct UBP_SessionData_C* Session; // 0x2e0(0x08)
	struct FLinearColor SelectedColor; // 0x2e8(0x10)
	struct FLinearColor HoveredColor; // 0x2f8(0x10)
	struct FLinearColor DefaultColor; // 0x308(0x10)
	struct FSlateBrush SelectedBrash; // 0x318(0x88)
	struct FSlateBrush HoveredBrush; // 0x3a0(0x88)
	struct FSlateBrush DefaultBrush; // 0x428(0x88)
	bool IsSelected; // 0x4b0(0x01)
	bool Hovered; // 0x4b1(0x01)

	void OnItemSelected(); // Function W_ServerEntryV3.W_ServerEntryV3_C.OnItemSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnItemDeselected(); // Function W_ServerEntryV3.W_ServerEntryV3_C.OnItemDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_ServerEntryV3.W_ServerEntryV3_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_ServerEntryV3.W_ServerEntryV3_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void Apply(); // Function W_ServerEntryV3.W_ServerEntryV3_C.Apply // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoPing(); // Function W_ServerEntryV3.W_ServerEntryV3_C.DoPing // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayWaitingAnim(); // Function W_ServerEntryV3.W_ServerEntryV3_C.PlayWaitingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopWaitingAnim(); // Function W_ServerEntryV3.W_ServerEntryV3_C.StopWaitingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSessionData(struct UObject* Session); // Function W_ServerEntryV3.W_ServerEntryV3_C.SetSessionData // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_ServerEntryV3.W_ServerEntryV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_ServerEntryV3.W_ServerEntryV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnEntryReleased(); // Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_ServerEntryV3(int32_t EntryPoint); // Function W_ServerEntryV3.W_ServerEntryV3_C.ExecuteUbergraph_W_ServerEntryV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

