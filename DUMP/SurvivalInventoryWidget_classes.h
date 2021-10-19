// WidgetBlueprintGeneratedClass SurvivalInventoryWidget.SurvivalInventoryWidget_C
// Size: 0x483 (Inherited: 0x260)
struct USurvivalInventoryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HUD_JumpOut_Curve; // 0x268(0x08)
	struct UWidgetAnimation* HUD_JumpOut; // 0x270(0x08)
	struct UWidgetAnimation* HUD_JumpIn; // 0x278(0x08)
	struct UWidgetAnimation* ItemHelpFadeIn; // 0x280(0x08)
	struct UWidgetAnimation* ItemHelpAnim; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Inventory; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_5; // 0x2a8(0x08)
	struct UImage* Image_83; // 0x2b0(0x08)
	struct UImage* Image_560; // 0x2b8(0x08)
	struct UImage* Image_HelperText; // 0x2c0(0x08)
	struct UTextBlock* Inventory1; // 0x2c8(0x08)
	struct UTextBlock* Inventory2; // 0x2d0(0x08)
	struct UTextBlock* Inventory3; // 0x2d8(0x08)
	struct UTextBlock* ItemDescription; // 0x2e0(0x08)
	struct UTextBlock* ItemName; // 0x2e8(0x08)
	struct UOverlay* Overlay_ItemHelpText; // 0x2f0(0x08)
	struct USurvivalInventorySlotWidget_C* Slot1; // 0x2f8(0x08)
	struct UImage* Slot1Image; // 0x300(0x08)
	struct USurvivalInventorySlotWidget_C* Slot2; // 0x308(0x08)
	struct UImage* Slot2Image; // 0x310(0x08)
	struct USurvivalInventorySlotWidget_C* Slot3; // 0x318(0x08)
	struct UImage* Slot3Image; // 0x320(0x08)
	int32_t CurrentSlot; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct USurvivalInventorySlotWidget_C*> AllSlots; // 0x330(0x10)
	struct TArray<enum class ItemType> AllItemsType; // 0x340(0x10)
	struct FSlateBrush Selected; // 0x350(0x88)
	struct FSlateBrush Deselected; // 0x3d8(0x88)
	struct FLinearColor In Color And Opacity Specified Color_gray; // 0x460(0x10)
	struct FLinearColor In Color And Opacity Specified Color__black; // 0x470(0x10)
	bool isVis; // 0x480(0x01)
	bool isManuallyFadingOut; // 0x481(0x01)
	bool WasStopped; // 0x482(0x01)

	void PreConstruct(bool IsDesignTime); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AddItemUI(enum class ItemType Selection, int32_t InventoryIndex, bool DontShowName?); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.AddItemUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeleteItemUI(int32_t InventoryIndex); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DeleteItemUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectItem(int32_t InventoryIndex); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.SelectItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSlots(); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.UpdateSlots // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeselectAllItems(); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DeselectAllItems // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ShowItemName(); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ShowItemName // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectDeselectItem(bool Select?, int32_t Index); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.SelectDeselectItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActiveSlot(int32_t CurrentSlot); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ActiveSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityUpdate(); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.VisibilityUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DisplayName(int32_t CurrentSlot); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DisplayName // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalInventoryWidget(int32_t EntryPoint); // Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ExecuteUbergraph_SurvivalInventoryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

