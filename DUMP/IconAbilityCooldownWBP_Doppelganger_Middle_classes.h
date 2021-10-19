// WidgetBlueprintGeneratedClass IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C
// Size: 0x329 (Inherited: 0x260)
struct UIconAbilityCooldownWBP_Doppelganger_Middle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut_23; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn_23; // 0x270(0x08)
	struct UWidgetAnimation* FadeOut; // 0x278(0x08)
	struct UWidgetAnimation* FadeIn; // 0x280(0x08)
	struct UImage* BG; // 0x288(0x08)
	struct UImage* BG_2; // 0x290(0x08)
	struct UImage* BG_3; // 0x298(0x08)
	struct UImage* BG_4; // 0x2a0(0x08)
	struct UBorder* Border_AbilityIcon; // 0x2a8(0x08)
	struct UBorder* Border_AbilityIcon_2; // 0x2b0(0x08)
	struct UBorder* Border_AbilityIcon_3; // 0x2b8(0x08)
	struct UBorder* Border_AbilityIcon_4; // 0x2c0(0x08)
	struct UBorder* Border_AbilityIcon_5; // 0x2c8(0x08)
	struct UImage* Image_122; // 0x2d0(0x08)
	struct UOverlay* Overlay_prop; // 0x2d8(0x08)
	struct UTextBlock* TextBlock; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_106; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_162; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Main; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Surv; // 0x310(0x08)
	bool Was?_2; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UMaterialInstanceDynamic* Material INstance; // 0x320(0x08)
	bool Was?_1; // 0x328(0x01)

	struct FText GetText_2(); // Function IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C.GetText_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_1(); // Function IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger_Middle(int32_t EntryPoint); // Function IconAbilityCooldownWBP_Doppelganger_Middle.IconAbilityCooldownWBP_Doppelganger_Middle_C.ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger_Middle // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

