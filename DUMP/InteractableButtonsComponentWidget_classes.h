// WidgetBlueprintGeneratedClass InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C
// Size: 0x2e1 (Inherited: 0x260)
struct UInteractableButtonsComponentWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ButtonTextBlock; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_94; // 0x280(0x08)
	struct UImage* Image_204; // 0x288(0x08)
	struct UOverlay* Overlay_3; // 0x290(0x08)
	struct UTextBlock* Text; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BTN; // 0x2a0(0x08)
	struct FString ButtonText; // 0x2a8(0x10)
	struct FText InteractableText; // 0x2b8(0x18)
	struct AActor* Actor; // 0x2d0(0x08)
	struct ASurvivorMasterBP_C* Surv; // 0x2d8(0x08)
	bool Ready?; // 0x2e0(0x01)

	void Construct(); // Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SetMainText(struct FString ButtonText, struct FText InteractableText, struct AActor* Actor); // Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.SetMainText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_InteractableButtonsComponentWidget(int32_t EntryPoint); // Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.ExecuteUbergraph_InteractableButtonsComponentWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

