// WidgetBlueprintGeneratedClass W_BoosterInventory.W_BoosterInventory_C
// Size: 0x622 (Inherited: 0x260)
struct UW_BoosterInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_EQUIP; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_246; // 0x288(0x08)
	struct UImage* Image_1038; // 0x290(0x08)
	struct UTextBlock* ItemDesc_3; // 0x298(0x08)
	struct UTextBlock* ItemName_3; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_210; // 0x2a8(0x08)
	struct UUniformGridPanel* UniformGridPanel_Boosters; // 0x2b0(0x08)
	struct UUniformGridPanel* UniformGridPanel_Boosters_2; // 0x2b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BoosterUniforms; // 0x2c0(0x08)
	struct UW_MiniLobby_C* W_MiniLobby; // 0x2c8(0x08)
	struct TArray<struct UW_Booster_C*> W_Boosters1; // 0x2d0(0x10)
	struct TArray<struct UW_Booster_C*> W_Boosters2; // 0x2e0(0x10)
	struct FSlateBrush GetBrushItem; // 0x2f0(0x88)
	struct FSlateBrush In Brush_1; // 0x378(0x88)
	struct FSlateBrush In Brush_2; // 0x400(0x88)
	struct FSlateBrush In Brush_3; // 0x488(0x88)
	struct FSlateBrush In Brush_4; // 0x510(0x88)
	struct FSlateBrush In Brush_5; // 0x598(0x88)
	bool Clear1?; // 0x620(0x01)
	bool Clear2?; // 0x621(0x01)

	struct FText GetText_1(); // Function W_BoosterInventory.W_BoosterInventory_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_BoosterInventory.W_BoosterInventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_BoosterInventory.W_BoosterInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ClickE(); // Function W_BoosterInventory.W_BoosterInventory_C.ClickE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClickQ(); // Function W_BoosterInventory.W_BoosterInventory_C.ClickQ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_EQUIP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_BoosterInventory.W_BoosterInventory_C.BndEvt__Button_EQUIP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_BoosterInventory(int32_t EntryPoint); // Function W_BoosterInventory.W_BoosterInventory_C.ExecuteUbergraph_W_BoosterInventory // (Final|UbergraphFunction) // @ game+0x132e1a0
};

