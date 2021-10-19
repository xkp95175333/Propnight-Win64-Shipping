// WidgetBlueprintGeneratedClass WBP_EliminatedScreen.WBP_EliminatedScreen_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_EliminatedScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Animation; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x270(0x08)
	struct UImage* Image_74; // 0x278(0x08)
	struct UImage* Image_121; // 0x280(0x08)
	struct UTextBlock* Text_Nickname; // 0x288(0x08)
	struct UTextBlock* Text_Number; // 0x290(0x08)
	struct UTextBlock* Text_Status; // 0x298(0x08)

	void ShowEliminatedScreen(struct FString Text, struct FString Nickname, int32_t Score); // Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ShowEliminatedScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_EliminatedScreen(int32_t EntryPoint); // Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ExecuteUbergraph_WBP_EliminatedScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

