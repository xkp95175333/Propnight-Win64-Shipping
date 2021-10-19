// WidgetBlueprintGeneratedClass PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C
// Size: 0x341 (Inherited: 0x260)
struct UPlayersScore_Tab_Stats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UImage* Image_117; // 0x270(0x08)
	struct UImage* Image_154; // 0x278(0x08)
	struct UImage* Image_269; // 0x280(0x08)
	struct UImage* Image_277; // 0x288(0x08)
	struct UVerticalBox* NewScoreBox; // 0x290(0x08)
	struct UBorder* OwnerScore; // 0x298(0x08)
	struct UVerticalBox* PlayersBox; // 0x2a0(0x08)
	struct UTextBlock* Score; // 0x2a8(0x08)
	struct UBorder* Scoreboard; // 0x2b0(0x08)
	struct USizeBox* SizeBox_276; // 0x2b8(0x08)
	struct AKillerMasterBP_C* Killer; // 0x2c0(0x08)
	struct TArray<struct ASurvivorMasterBP_C*> Survs; // 0x2c8(0x10)
	bool GameStart?; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t OwnerLastScore; // 0x2dc(0x04)
	int32_t OwnerNewScore; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct UPlayerScoreComponentAddedScore_C*> AddedScoreWidgets; // 0x2e8(0x10)
	struct TArray<struct AKillerMasterBP_C*> Killers; // 0x2f8(0x10)
	struct TArray<struct APlayerState*> PlayerState; // 0x308(0x10)
	struct TArray<struct APawn*> Pawns; // 0x318(0x10)
	struct TArray<struct UPlayerScoreComponent_C*> EmptySlots; // 0x328(0x10)
	bool Swapping; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t Index; // 0x33c(0x04)
	bool Blocked?; // 0x340(0x01)

	void CreateEmptySlots(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CreateEmptySlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateWindowSize(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CalculateWindowSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Create Player Widget(struct APawn* Player, int32_t Index); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Create Player Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LoadPlayers(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.LoadPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayers(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.GetPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenWidget(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OpenWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseWidget(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CloseWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PrintTextZeroScore(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PrintTextZeroScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSwapNotification(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnSwapNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockAndOff(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.BlockAndOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowScoreSurv(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowScoreSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DisableScore(); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.DisableScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PlayersScore_Tab_Stats(int32_t EntryPoint); // Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ExecuteUbergraph_PlayersScore_Tab_Stats // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

