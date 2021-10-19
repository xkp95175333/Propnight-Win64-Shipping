// WidgetBlueprintGeneratedClass W_VictoryScreenText.W_VictoryScreenText_C
// Size: 0x27d (Inherited: 0x260)
struct UW_VictoryScreenText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* SizeBox_1; // 0x268(0x08)
	struct UTextBlock* TextBlock_53; // 0x270(0x08)
	float Alpha; // 0x278(0x04)
	bool Start?; // 0x27c(0x01)

	void SetLetterColor(struct FLinearColor TextColor, struct FLinearColor OutlineColor); // Function W_VictoryScreenText.W_VictoryScreenText_C.SetLetterColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_VictoryScreenText.W_VictoryScreenText_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SetTextAndStart(struct FString Text, int32_t Number); // Function W_VictoryScreenText.W_VictoryScreenText_C.SetTextAndStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FirstText(struct FString Text); // Function W_VictoryScreenText.W_VictoryScreenText_C.FirstText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_VictoryScreenText(int32_t EntryPoint); // Function W_VictoryScreenText.W_VictoryScreenText_C.ExecuteUbergraph_W_VictoryScreenText // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

