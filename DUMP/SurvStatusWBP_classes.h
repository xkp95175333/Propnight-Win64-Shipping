// WidgetBlueprintGeneratedClass SurvStatusWBP.SurvStatusWBP_C
// Size: 0x349 (Inherited: 0x260)
struct USurvStatusWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HUD_JumpOut_Curve; // 0x268(0x08)
	struct UWidgetAnimation* HUD_JumpIn; // 0x270(0x08)
	struct UImage* Image_83; // 0x278(0x08)
	struct UImage* Image_Voice; // 0x280(0x08)
	struct UOverlay* Overlay_KillerVoice; // 0x288(0x08)
	struct USizeBox* SizeBox_SelfStatus; // 0x290(0x08)
	struct UTextBlock* TextBlock_Nickname; // 0x298(0x08)
	struct UVerticalBox* VerticalBox; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_AllyStatus; // 0x2a8(0x08)
	struct FText text1; // 0x2b0(0x18)
	struct UTextBlock* textBox; // 0x2c8(0x08)
	struct FString string1; // 0x2d0(0x10)
	struct FString Nickname; // 0x2e0(0x10)
	struct FString KillingTimeString; // 0x2f0(0x10)
	struct TArray<struct ASurvivorMasterBP_C*> SurvArray; // 0x300(0x10)
	struct TArray<struct UCountSurvStatus_C*> Widgets; // 0x310(0x10)
	bool Chair?; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t HealthValue; // 0x324(0x04)
	struct TArray<struct AKillerMasterBP_C*> Killer; // 0x328(0x10)
	struct FString string3; // 0x338(0x10)
	bool SelfFound; // 0x348(0x01)

	void textN(struct ASurvivorMasterBP_C* Surv); // Function SurvStatusWBP.SurvStatusWBP_C.textN // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function SurvStatusWBP.SurvStatusWBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SurvStatusWBP.SurvStatusWBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SurvRefGetter(); // Function SurvStatusWBP.SurvStatusWBP_C.SurvRefGetter // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadPlayers(); // Function SurvStatusWBP.SurvStatusWBP_C.LoadPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void statusChangedClient(); // Function SurvStatusWBP.SurvStatusWBP_C.statusChangedClient // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvStatusWBP.SurvStatusWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvStatusWBP(int32_t EntryPoint); // Function SurvStatusWBP.SurvStatusWBP_C.ExecuteUbergraph_SurvStatusWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

