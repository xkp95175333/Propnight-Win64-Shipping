// WidgetBlueprintGeneratedClass PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C
// Size: 0x2c1 (Inherited: 0x260)
struct UPlayerScoreComponentAddedScore_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Spawn; // 0x268(0x08)
	struct UWidgetAnimation* Hide; // 0x270(0x08)
	struct UTextBlock* AddScore; // 0x278(0x08)
	struct UImage* Image_573; // 0x280(0x08)
	struct UTextBlock* WhatScore; // 0x288(0x08)
	struct FText Score; // 0x290(0x18)
	struct FText Text; // 0x2a8(0x18)
	bool Block?; // 0x2c0(0x01)

	void Construct(); // Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Remove(); // Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Remove // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PlayerScoreComponentAddedScore(int32_t EntryPoint); // Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.ExecuteUbergraph_PlayerScoreComponentAddedScore // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

