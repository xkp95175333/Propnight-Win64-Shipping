// WidgetBlueprintGeneratedClass PlayerScoreComponent.PlayerScoreComponent_C
// Size: 0x458 (Inherited: 0x260)
struct UPlayerScoreComponent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UImage* BG_Border_Down; // 0x270(0x08)
	struct UImage* BG_Border_Up; // 0x278(0x08)
	struct UImage* Image_200; // 0x280(0x08)
	struct UImage* Image_Ping; // 0x288(0x08)
	struct UImage* Image_Status; // 0x290(0x08)
	struct UImage* KillerAvatar; // 0x298(0x08)
	struct UTextBlock* Nickname; // 0x2a0(0x08)
	struct UTextBlock* Ping; // 0x2a8(0x08)
	struct UImage* PlayerAvatar; // 0x2b0(0x08)
	struct UTextBlock* PlayerPlace; // 0x2b8(0x08)
	struct UTextBlock* ScorePoints; // 0x2c0(0x08)
	struct UTextBlock* ScorePoints_2; // 0x2c8(0x08)
	struct USizeBox* SizeBox_1; // 0x2d0(0x08)
	struct USizeBox* SizeBox_4; // 0x2d8(0x08)
	struct UImage* SpectatorAvatar; // 0x2e0(0x08)
	struct UTextBlock* StatusPlayer; // 0x2e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_116; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_141; // 0x2f8(0x08)
	struct APawn* Player; // 0x300(0x08)
	struct FText Alive; // 0x308(0x18)
	struct FText Crawl; // 0x320(0x18)
	struct FText OnChair; // 0x338(0x18)
	struct FText Death; // 0x350(0x18)
	struct APlayerState* Player State; // 0x368(0x08)
	struct TMap<enum class SurvChars, struct UPaperSprite*> Icons; // 0x370(0x50)
	struct APawn* Pawn Private; // 0x3c0(0x08)
	bool IsEmpty; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FSlateBrush Slate Brush; // 0x3d0(0x88)

	void SurvStyle(); // Function PlayerScoreComponent.PlayerScoreComponent_C.SurvStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerStyle(); // Function PlayerScoreComponent.PlayerScoreComponent_C.KillerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetIsEmpty(bool Empty); // Function PlayerScoreComponent.PlayerScoreComponent_C.SetIsEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetPing(); // Function PlayerScoreComponent.PlayerScoreComponent_C.GetPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetScore(); // Function PlayerScoreComponent.PlayerScoreComponent_C.GetScore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function PlayerScoreComponent.PlayerScoreComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerScoreComponent.PlayerScoreComponent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void GetInfo(struct APawn* Player, int32_t Index); // Function PlayerScoreComponent.PlayerScoreComponent_C.GetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PlayerScoreComponent(int32_t EntryPoint); // Function PlayerScoreComponent.PlayerScoreComponent_C.ExecuteUbergraph_PlayerScoreComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

