// WidgetBlueprintGeneratedClass EffectsHUDWidget.EffectsHUDWidget_C
// Size: 0x289 (Inherited: 0x260)
struct UEffectsHUDWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOutLong; // 0x268(0x08)
	struct UWidgetAnimation* FadeOut; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UImage* Black; // 0x280(0x08)
	bool Block?; // 0x288(0x01)

	void StartFadeIn(); // Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartFadeOut(bool CheckFade?); // Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeCustom(); // Function EffectsHUDWidget.EffectsHUDWidget_C.FadeCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartFadeInCustom(); // Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeInCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_EffectsHUDWidget(int32_t EntryPoint); // Function EffectsHUDWidget.EffectsHUDWidget_C.ExecuteUbergraph_EffectsHUDWidget // (Final|UbergraphFunction) // @ game+0x132e1a0
};

