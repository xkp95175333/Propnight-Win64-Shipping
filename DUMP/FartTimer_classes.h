// WidgetBlueprintGeneratedClass FartTimer.FartTimer_C
// Size: 0x2ac (Inherited: 0x260)
struct UFartTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* Image_168; // 0x270(0x08)
	struct UImage* Image_268; // 0x278(0x08)
	struct UImage* Image_Cooldown; // 0x280(0x08)
	struct UOverlay* Overlay_Main; // 0x288(0x08)
	struct UTextBlock* TextBlock; // 0x290(0x08)
	struct UTextBlock* TextBlock_TIMER; // 0x298(0x08)
	int32_t Seconds; // 0x2a0(0x04)
	float Time; // 0x2a4(0x04)
	int32_t Seconds_Max; // 0x2a8(0x04)

	void PreConstruct(bool IsDesignTime); // Function FartTimer.FartTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function FartTimer.FartTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FartTimer.FartTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_FartTimer(int32_t EntryPoint); // Function FartTimer.FartTimer_C.ExecuteUbergraph_FartTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

