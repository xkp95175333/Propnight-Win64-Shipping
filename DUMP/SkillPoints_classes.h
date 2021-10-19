// WidgetBlueprintGeneratedClass SkillPoints.SkillPoints_C
// Size: 0x355 (Inherited: 0x260)
struct USkillPoints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UTextBlock* Description; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_397; // 0x280(0x08)
	struct UProgressBar* ProgressBar_164; // 0x288(0x08)
	struct UImage* Skill1BG; // 0x290(0x08)
	struct UImage* Skill1Image; // 0x298(0x08)
	struct UImage* Skill2BG; // 0x2a0(0x08)
	struct UImage* Skill2CDBG; // 0x2a8(0x08)
	struct UTextBlock* Skill2CDText; // 0x2b0(0x08)
	struct UImage* Skill2Image; // 0x2b8(0x08)
	struct UImage* Skill3BG; // 0x2c0(0x08)
	struct UImage* Skill3Image; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_2; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_75; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_87; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_155; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_251; // 0x2f0(0x08)
	struct UTextBlock* Title; // 0x2f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_93; // 0x308(0x08)
	struct ASurvivorMasterBP_C* Surv; // 0x310(0x08)
	struct AKillerMasterBP_C* Killer; // 0x318(0x08)
	bool Open?; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TArray<struct FString> Skills; // 0x328(0x10)
	int32_t SelectedSkill; // 0x338(0x04)
	bool Start?; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct TArray<bool> SkillsPassive?; // 0x340(0x10)
	int32_t PrevLevel; // 0x350(0x04)
	bool LevelUp?; // 0x354(0x01)

	struct FText GetText_2(); // Function SkillPoints.SkillPoints_C.GetText_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_1(); // Function SkillPoints.SkillPoints_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FLinearColor GetColorAndOpacity_1(); // Function SkillPoints.SkillPoints_C.GetColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText Get_TextBlock_1_Text_1(); // Function SkillPoints.SkillPoints_C.Get_TextBlock_1_Text_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility GetVisibility_1(); // Function SkillPoints.SkillPoints_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SetTextsSkill(); // Function SkillPoints.SkillPoints_C.SetTextsSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectedSkillUpStop(); // Function SkillPoints.SkillPoints_C.SelectedSkillUpStop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectedSkillUpStart(); // Function SkillPoints.SkillPoints_C.SelectedSkillUpStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvClassCheck(enum class SurvClass Class); // Function SkillPoints.SkillPoints_C.SurvClassCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeselectAll(); // Function SkillPoints.SkillPoints_C.DeselectAll // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSkill(int32_t SkillNumber, bool OffSound?); // Function SkillPoints.SkillPoints_C.SetSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSkillTexts(struct FText Title, struct FText Description); // Function SkillPoints.SkillPoints_C.SetSkillTexts // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerIconCreate(); // Function SkillPoints.SkillPoints_C.KillerIconCreate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvIconCreate(); // Function SkillPoints.SkillPoints_C.SurvIconCreate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchWindow(); // Function SkillPoints.SkillPoints_C.SwitchWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SkillPoints.SkillPoints_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SkillPoints.SkillPoints_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SkillPoints(int32_t EntryPoint); // Function SkillPoints.SkillPoints_C.ExecuteUbergraph_SkillPoints // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

