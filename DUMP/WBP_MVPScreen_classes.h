// WidgetBlueprintGeneratedClass WBP_MVPScreen.WBP_MVPScreen_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_MVPScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade_Anim; // 0x268(0x08)
	struct UImage* Image_91; // 0x270(0x08)
	struct UImage* Image_334; // 0x278(0x08)
	struct UImage* Image_Ref; // 0x280(0x08)
	struct UTextBlock* Text_Nickname; // 0x288(0x08)
	struct UTextBlock* TextBlock_384; // 0x290(0x08)

	void ShowMVPScreen(); // Function WBP_MVPScreen.WBP_MVPScreen_C.ShowMVPScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveMVPScreen(); // Function WBP_MVPScreen.WBP_MVPScreen_C.RemoveMVPScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Init(); // Function WBP_MVPScreen.WBP_MVPScreen_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_MVPScreen(int32_t EntryPoint); // Function WBP_MVPScreen.WBP_MVPScreen_C.ExecuteUbergraph_WBP_MVPScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

