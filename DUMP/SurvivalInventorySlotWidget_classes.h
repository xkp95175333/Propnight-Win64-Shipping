// WidgetBlueprintGeneratedClass SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C
// Size: 0x36c (Inherited: 0x260)
struct USurvivalInventorySlotWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* StopCD_Anim; // 0x268(0x08)
	struct UWidgetAnimation* StartCD_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Spawn; // 0x278(0x08)
	struct UImage* BG; // 0x280(0x08)
	struct UTextBlock* Count; // 0x288(0x08)
	struct UImage* ImageCD; // 0x290(0x08)
	struct UImage* ItemIcon; // 0x298(0x08)
	struct UProgressBar* ProgressBar_76; // 0x2a0(0x08)
	struct UImage* RarityIcon; // 0x2a8(0x08)
	struct UImage* Selected; // 0x2b0(0x08)
	struct USizeBox* SizeBox_96; // 0x2b8(0x08)
	struct USizeBox* SizeBox_97; // 0x2c0(0x08)
	struct UTextBlock* TextCD; // 0x2c8(0x08)
	struct TArray<struct UPaperSprite*> AllIcons; // 0x2d0(0x10)
	int32_t Owner; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FString ItemName; // 0x2e8(0x10)
	struct TArray<struct UPaperSprite*> RarityIcons; // 0x2f8(0x10)
	bool Visibility?; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UMaterialInstanceDynamic* Cooldown; // 0x310(0x08)
	struct TArray<struct UPaperSprite*> RarityIcons_Target; // 0x318(0x10)
	struct FLinearColor ColorHelper; // 0x328(0x10)
	bool ItemSelect?; // 0x338(0x01)
	bool IsCDStarted; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float CurrentTime; // 0x33c(0x04)
	struct FItemStructure Item; // 0x340(0x28)
	float FillTime; // 0x368(0x04)

	void GetRarityStyleTarget(int32_t GetaCopy, struct FSlateBrush SlateBrush); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.GetRarityStyleTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeImage(int32_t Owner, struct FItemStructure Selection); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ChangeImage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItem(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.HideItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectItem(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.SelectItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeselectItem(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.DeselectItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void IconCD(bool On?); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.IconCD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MainVisibility(bool Hide?); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.MainVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartCD(struct FItemStructure Item); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StartCD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopCD(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StopCD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetStopCD(); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ResetStopCD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalInventorySlotWidget(int32_t EntryPoint); // Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ExecuteUbergraph_SurvivalInventorySlotWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

