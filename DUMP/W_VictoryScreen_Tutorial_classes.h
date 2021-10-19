// WidgetBlueprintGeneratedClass W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C
// Size: 0x2c1 (Inherited: 0x260)
struct UW_VictoryScreen_Tutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* TexAnim; // 0x268(0x08)
	struct UWidgetAnimation* NewVictoryAnimation; // 0x270(0x08)
	struct UWidgetAnimation* Fade; // 0x278(0x08)
	struct UWidgetAnimation* VictoryAnimation; // 0x280(0x08)
	struct UHorizontalBox* HorizontalBox_46; // 0x288(0x08)
	struct UImage* Image_37; // 0x290(0x08)
	struct UImage* Image_102; // 0x298(0x08)
	struct UImage* Image_114; // 0x2a0(0x08)
	struct UImage* Image_254; // 0x2a8(0x08)
	struct USizeBox* SizeBox_3; // 0x2b0(0x08)
	struct UTextBlock* Text_EndGameState; // 0x2b8(0x08)
	bool Finished; // 0x2c0(0x01)

	void Finished_6AD130704826DA5F513F92B247D18083(); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.Finished_6AD130704826DA5F513F92B247D18083 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Finished_032E932845A036FDEB0A769F26D83512(); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.Finished_032E932845A036FDEB0A769F26D83512 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Finished_8D60987940AC7EF0313FF18EB31A4522(); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.Finished_8D60987940AC7EF0313FF18EB31A4522 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartScreen(bool Win?); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.StartScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeStart(); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.FadeStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_VictoryScreen_Tutorial(int32_t EntryPoint); // Function W_VictoryScreen_Tutorial.W_VictoryScreen_Tutorial_C.ExecuteUbergraph_W_VictoryScreen_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

