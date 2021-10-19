// WidgetBlueprintGeneratedClass WBP_LastChance.WBP_LastChance_C
// Size: 0x2bd (Inherited: 0x260)
struct UWBP_LastChance_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	struct UImage* Image_3; // 0x278(0x08)
	struct UImage* Image_4; // 0x280(0x08)
	struct UImage* Image_Many_3; // 0x288(0x08)
	struct UImage* Image_Many_5; // 0x290(0x08)
	struct UImage* Image_Ref; // 0x298(0x08)
	struct UTextBlock* TextBlock_Count; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Count_2; // 0x2a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2b0(0x08)
	int32_t Counter; // 0x2b8(0x04)
	bool IsHidden; // 0x2bc(0x01)

	void Construct(); // Function WBP_LastChance.WBP_LastChance_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LastChance.WBP_LastChance_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ShowLastChance(); // Function WBP_LastChance.WBP_LastChance_C.ShowLastChance // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideLastChance(); // Function WBP_LastChance.WBP_LastChance_C.HideLastChance // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_LastChance(int32_t EntryPoint); // Function WBP_LastChance.WBP_LastChance_C.ExecuteUbergraph_WBP_LastChance // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

