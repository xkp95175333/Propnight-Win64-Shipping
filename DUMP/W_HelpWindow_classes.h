// WidgetBlueprintGeneratedClass W_HelpWindow.W_HelpWindow_C
// Size: 0x420 (Inherited: 0x260)
struct UW_HelpWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* bgblack; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_3; // 0x280(0x08)
	struct UImage* Image_4; // 0x288(0x08)
	struct UImage* Image_5; // 0x290(0x08)
	struct UImage* Image_75; // 0x298(0x08)
	struct UImage* Image_150; // 0x2a0(0x08)
	struct UImage* Image_189; // 0x2a8(0x08)
	struct UImage* Image_297; // 0x2b0(0x08)
	struct UImage* Image_586; // 0x2b8(0x08)
	struct UImage* Image_Abil1; // 0x2c0(0x08)
	struct UImage* Image_Abil1_2; // 0x2c8(0x08)
	struct UImage* Image_Abil2; // 0x2d0(0x08)
	struct UImage* Image_Abil2_2; // 0x2d8(0x08)
	struct UImage* Image_Abil2_3; // 0x2e0(0x08)
	struct UImage* Image_Abil3; // 0x2e8(0x08)
	struct UImage* Image_Abil3_2; // 0x2f0(0x08)
	struct UImage* Image_Abil3_3; // 0x2f8(0x08)
	struct UImage* Image_Abil3_4; // 0x300(0x08)
	struct UImage* Image_Abil3_5; // 0x308(0x08)
	struct UImage* Image_btAbil1; // 0x310(0x08)
	struct UImage* Image_btAbil2; // 0x318(0x08)
	struct UImage* Image_btAbil3; // 0x320(0x08)
	struct UImage* Image_Killer_Ref; // 0x328(0x08)
	struct UImage* Image_Surv_Ref; // 0x330(0x08)
	struct UTextBlock* TextAbil1; // 0x338(0x08)
	struct UTextBlock* TextAbil1_2; // 0x340(0x08)
	struct UTextBlock* TextAbil2; // 0x348(0x08)
	struct UTextBlock* TextAbil2_2; // 0x350(0x08)
	struct UTextBlock* TextAbil2_3; // 0x358(0x08)
	struct UTextBlock* TextAbil3; // 0x360(0x08)
	struct UTextBlock* TextAbil3_2; // 0x368(0x08)
	struct UTextBlock* TextAbil3_3; // 0x370(0x08)
	struct UTextBlock* TextAbil3_4; // 0x378(0x08)
	struct UTextBlock* TextAbil3_5; // 0x380(0x08)
	struct UTextBlock* TextBlock_532; // 0x388(0x08)
	struct UTextBlock* TextBlock_696; // 0x390(0x08)
	struct UTextBlock* TextDesc1; // 0x398(0x08)
	struct UTextBlock* TextDesc1_2; // 0x3a0(0x08)
	struct UTextBlock* TextDesc2; // 0x3a8(0x08)
	struct UTextBlock* TextDesc2_2; // 0x3b0(0x08)
	struct UTextBlock* TextDesc2_3; // 0x3b8(0x08)
	struct UTextBlock* TextDesc3; // 0x3c0(0x08)
	struct UTextBlock* TextDesc3_2; // 0x3c8(0x08)
	struct UTextBlock* TextDesc3_3; // 0x3d0(0x08)
	struct UTextBlock* TextDesc3_4; // 0x3d8(0x08)
	struct UTextBlock* TextDesc3_5; // 0x3e0(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip; // 0x3e8(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip_2; // 0x3f0(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip_3; // 0x3f8(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip_4; // 0x400(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip_82; // 0x408(0x08)
	struct UWBP_HelpTip_C* WBP_HelpTip_184; // 0x410(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_103; // 0x418(0x08)

	void If Killer Abilities(enum class KillerType KillerType); // Function W_HelpWindow.W_HelpWindow_C.If Killer Abilities // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_HelpWindow.W_HelpWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_HelpWindow.W_HelpWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_HelpWindow.W_HelpWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSurvInfo(); // Function W_HelpWindow.W_HelpWindow_C.UpdateSurvInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateKillerInfo(enum class KillerType KillerType); // Function W_HelpWindow.W_HelpWindow_C.UpdateKillerInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_HelpWindow(int32_t EntryPoint); // Function W_HelpWindow.W_HelpWindow_C.ExecuteUbergraph_W_HelpWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

