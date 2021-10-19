// WidgetBlueprintGeneratedClass WB_Spectator.WB_Spectator_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWB_Spectator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_call; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_229; // 0x280(0x08)
	struct USafeZone* SafeZone_265; // 0x288(0x08)
	struct USafeZone* SafeZone_428; // 0x290(0x08)
	struct UTextBlock* Text_NameCurrentPLR; // 0x298(0x08)
	struct UTextBlock* TextBlock_8; // 0x2a0(0x08)

	struct FText GetText_1(); // Function WB_Spectator.WB_Spectator_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_Spectator.WB_Spectator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WB_Spectator(int32_t EntryPoint); // Function WB_Spectator.WB_Spectator_C.ExecuteUbergraph_WB_Spectator // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

