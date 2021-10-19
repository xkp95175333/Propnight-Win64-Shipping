// WidgetBlueprintGeneratedClass SurvivalEffectsUI.SurvivalEffectsUI_C
// Size: 0x2d1 (Inherited: 0x260)
struct USurvivalEffectsUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* StartFadeOut; // 0x268(0x08)
	struct UWidgetAnimation* StartFadeIn; // 0x270(0x08)
	struct UWidgetAnimation* HitAnim; // 0x278(0x08)
	struct UImage* Bleeding; // 0x280(0x08)
	struct UImage* Fade; // 0x288(0x08)
	struct UImage* hit; // 0x290(0x08)
	bool Bleeding?; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FLinearColor Bleeding1; // 0x29c(0x10)
	struct FLinearColor Bleeding2; // 0x2ac(0x10)
	bool change?; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FLinearColor Normal; // 0x2c0(0x10)
	bool Faded?; // 0x2d0(0x01)

	enum class ESlateVisibility GetVisibility_1(); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void HitEffect(); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.HitEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BleedingEffect(bool Bleeding?); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.BleedingEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeIn(); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeOut(); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalEffectsUI(int32_t EntryPoint); // Function SurvivalEffectsUI.SurvivalEffectsUI_C.ExecuteUbergraph_SurvivalEffectsUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

