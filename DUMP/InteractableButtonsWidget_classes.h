// WidgetBlueprintGeneratedClass InteractableButtonsWidget.InteractableButtonsWidget_C
// Size: 0x2d8 (Inherited: 0x260)
struct UInteractableButtonsWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ButtonsHorizontalBox; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct TArray<struct UInteractableButtonsComponentWidget_C*> InteractableButtons; // 0x278(0x10)
	int32_t DeleteIndex; // 0x288(0x04)
	bool Found?; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct ASurvivorMasterBP_C* Player; // 0x290(0x08)
	struct TArray<struct AActor*> Actors; // 0x298(0x10)
	struct TArray<struct FString> ActorsText; // 0x2a8(0x10)
	bool ActorFound?; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t DeleteActorIndex; // 0x2bc(0x04)
	bool PicklockFound?; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct UInteractableButtonsComponentWidget_C*> CheckInteractableButtons; // 0x2c8(0x10)

	void PreConstruct(bool IsDesignTime); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ShowButton(struct AActor* Actor, struct FKey Key, struct FText Text); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideButton(struct FText Text); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideAllButtons(); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideAllButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddInteractable(struct AActor* Actor, struct FKey Key, struct FText Text); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.AddInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveInteractable(struct AActor* Actor); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.RemoveInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ShowButtonAndClearOtherButtons(struct FKey Key, struct FString Text); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButtonAndClearOtherButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_InteractableButtonsWidget(int32_t EntryPoint); // Function InteractableButtonsWidget.InteractableButtonsWidget_C.ExecuteUbergraph_InteractableButtonsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

