// WidgetBlueprintGeneratedClass WBP_Tip.WBP_Tip_C
// Size: 0x2ee (Inherited: 0x260)
struct UWBP_Tip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut_Anim; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Fade_Anim_Full; // 0x278(0x08)
	struct UImage* Image_104; // 0x280(0x08)
	struct UImage* Image_BG; // 0x288(0x08)
	struct UImage* Image_Ref; // 0x290(0x08)
	struct UImage* Image_Separator; // 0x298(0x08)
	struct USizeBox* SizeBox_Button; // 0x2a0(0x08)
	struct UTextBlock* Text_Header; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_93; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_159; // 0x2b8(0x08)
	bool WasProp; // 0x2c0(0x01)
	bool WasHuman; // 0x2c1(0x01)
	bool TouchedClock; // 0x2c2(0x01)
	char pad_2C3[0x5]; // 0x2c3(0x05)
	struct ASurvivorMasterBP_C* Surv; // 0x2c8(0x08)
	struct TArray<struct FName> TipsArray; // 0x2d0(0x10)
	int32_t CurrentTipIndex; // 0x2e0(0x04)
	bool ShowTips; // 0x2e4(0x01)
	bool CallForHelp; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	int32_t PrevTip; // 0x2e8(0x04)
	bool Hidden; // 0x2ec(0x01)
	bool Dead; // 0x2ed(0x01)

	void LoadTip(struct FName TipName); // Function WBP_Tip.WBP_Tip_C.LoadTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_Tip.WBP_Tip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void RemoveTips(); // Function WBP_Tip.WBP_Tip_C.RemoveTips // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_Tip.WBP_Tip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Tip.WBP_Tip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Show(); // Function WBP_Tip.WBP_Tip_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetCurrentTip(int32_t TipIndex); // Function WBP_Tip.WBP_Tip_C.SetCurrentTip // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowCurrentTip(); // Function WBP_Tip.WBP_Tip_C.ShowCurrentTip // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_Tip(int32_t EntryPoint); // Function WBP_Tip.WBP_Tip_C.ExecuteUbergraph_WBP_Tip // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

