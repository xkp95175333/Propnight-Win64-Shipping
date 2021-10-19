// WidgetBlueprintGeneratedClass WBP_HelpTip.WBP_HelpTip_C
// Size: 0x285 (Inherited: 0x260)
struct UWBP_HelpTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Tip; // 0x268(0x08)
	struct UTextBlock* TextBlock_Description; // 0x270(0x08)
	struct UTextBlock* TextBlock_Header; // 0x278(0x08)
	int32_t HintNumber; // 0x280(0x04)
	bool Killer; // 0x284(0x01)

	void InitHint(); // Function WBP_HelpTip.WBP_HelpTip_C.InitHint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_HelpTip.WBP_HelpTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HelpTip.WBP_HelpTip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_HelpTip(int32_t EntryPoint); // Function WBP_HelpTip.WBP_HelpTip_C.ExecuteUbergraph_WBP_HelpTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

