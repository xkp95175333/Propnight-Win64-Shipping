// WidgetBlueprintGeneratedClass IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C
// Size: 0x2e1 (Inherited: 0x260)
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn; // 0x270(0x08)
	struct UImage* BG; // 0x278(0x08)
	struct UImage* BG_2; // 0x280(0x08)
	struct UBorder* Border_AbilityIcon; // 0x288(0x08)
	struct UBorder* Border_AbilityIcon_2; // 0x290(0x08)
	struct UBorder* Border_AbilityIcon_3; // 0x298(0x08)
	struct UBorder* Border_AbilityIcon_4; // 0x2a0(0x08)
	struct UBorder* Border_AbilityIcon_5; // 0x2a8(0x08)
	struct UOverlay* Overlay_surv; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_106; // 0x2c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Surv; // 0x2c8(0x08)
	bool Was?_2; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UMaterialInstanceDynamic* Material INstance; // 0x2d8(0x08)
	bool Was?_1; // 0x2e0(0x01)

	void Done_Alarm(struct ASurvivorMasterBP_C* Surv); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Done_Alarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Fade_Out(); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Fade_Out // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SurvDead(struct FString Nickname, enum class SurvChars SurvChar); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.SurvDead // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_IconAbilityCooldownAlarmWBP_Survivor_Middle(int32_t EntryPoint); // Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.ExecuteUbergraph_IconAbilityCooldownAlarmWBP_Survivor_Middle // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

