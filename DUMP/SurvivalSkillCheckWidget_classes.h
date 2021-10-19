// WidgetBlueprintGeneratedClass SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C
// Size: 0x366 (Inherited: 0x260)
struct USurvivalSkillCheckWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* StartSkillcheck_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Warning_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Failed_Anim; // 0x278(0x08)
	struct UWidgetAnimation* Successed_Anim; // 0x280(0x08)
	struct UWidgetAnimation* PressSpace_Anim; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_5; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_222; // 0x2a0(0x08)
	struct UImage* Image_355; // 0x2a8(0x08)
	struct USizeBox* SB_Warning; // 0x2b0(0x08)
	struct UImage* SkillCheckLine; // 0x2b8(0x08)
	struct UImage* SkillCheckLine__Level1; // 0x2c0(0x08)
	struct UImage* SkillCheckLine__Level2; // 0x2c8(0x08)
	struct UImage* SkillCheckLine__Level3; // 0x2d0(0x08)
	struct UImage* SkillCheckLine__Level4; // 0x2d8(0x08)
	struct UImage* SkillCheckLine_Phantom; // 0x2e0(0x08)
	struct USizeBox* SkillCheckLineBox; // 0x2e8(0x08)
	struct USizeBox* SkillCheckLineBox_2; // 0x2f0(0x08)
	struct UImage* SkillCheckZone; // 0x2f8(0x08)
	struct USizeBox* SkillCheckZoneBox; // 0x300(0x08)
	float Angle; // 0x308(0x04)
	float Time; // 0x30c(0x04)
	bool Start?; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float StartGreatZone; // 0x314(0x04)
	float StartNormalZone; // 0x318(0x04)
	float EndZone; // 0x31c(0x04)
	bool Failed?; // 0x320(0x01)
	bool Success?; // 0x321(0x01)
	bool GreatSuccess?; // 0x322(0x01)
	bool Active?; // 0x323(0x01)
	float CurrentAngle; // 0x324(0x04)
	bool Pressed?; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float Difficulty; // 0x32c(0x04)
	float NormalDifficulty; // 0x330(0x04)
	float HardDifficulty; // 0x334(0x04)
	struct AActor* Actor; // 0x338(0x08)
	struct ASurvivorMasterBP_C* Player; // 0x340(0x08)
	float Level1; // 0x348(0x04)
	float Level2; // 0x34c(0x04)
	float Level3; // 0x350(0x04)
	float Level4; // 0x354(0x04)
	float StartZone; // 0x358(0x04)
	bool Level1?; // 0x35c(0x01)
	bool Level2?; // 0x35d(0x01)
	bool Level3?; // 0x35e(0x01)
	bool Level4?; // 0x35f(0x01)
	float LevelsClipZone; // 0x360(0x04)
	bool Interrupted; // 0x364(0x01)
	bool Warning?; // 0x365(0x01)

	void FullAlarmEndSkillCheck(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.FullAlarmEndSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopSkillCheckAndFail(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StopSkillCheckAndFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndSkillCheckNoDelay(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheckNoDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSkillCheck(struct AActor* Actor); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSkillCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendFailed(struct AActor* Surv); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendServer(bool Success, bool Great, bool Failed, struct UObject* Actor, struct AActor* Surv); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendMulticast(bool Success, bool Great, bool Failed, struct UObject* Actor, struct AActor* Surv); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSuccess(struct AActor* Surv); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpacePressV2(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePressV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendGreat(struct AActor* Surv); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendGreat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void EndSkillCheck(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpacePress(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePress // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartWarning(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideGameStuff(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.HideGameStuff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartSkillCheck(); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivalSkillCheckWidget(int32_t EntryPoint); // Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.ExecuteUbergraph_SurvivalSkillCheckWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

