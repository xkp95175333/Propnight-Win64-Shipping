// WidgetBlueprintGeneratedClass W_VictoryScreen.W_VictoryScreen_C
// Size: 0x2b0 (Inherited: 0x260)
struct UW_VictoryScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewVictoryAnimation; // 0x268(0x08)
	struct UWidgetAnimation* Fade; // 0x270(0x08)
	struct UWidgetAnimation* VictoryAnimation; // 0x278(0x08)
	struct UHorizontalBox* HorizontalBox_46; // 0x280(0x08)
	struct UImage* Image_102; // 0x288(0x08)
	struct UImage* Image_114; // 0x290(0x08)
	struct UImage* Image_254; // 0x298(0x08)
	struct USizeBox* SizeBox_3; // 0x2a0(0x08)
	struct UTextBlock* Text_EndGameState; // 0x2a8(0x08)

	void StartScreen(bool Win?); // Function W_VictoryScreen.W_VictoryScreen_C.StartScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeStart(); // Function W_VictoryScreen.W_VictoryScreen_C.FadeStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_VictoryScreen(int32_t EntryPoint); // Function W_VictoryScreen.W_VictoryScreen_C.ExecuteUbergraph_W_VictoryScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

