// WidgetBlueprintGeneratedClass IconAbilityCooldownWBP.IconAbilityCooldownWBP_C
// Size: 0x358 (Inherited: 0x260)
struct UIconAbilityCooldownWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CoolDown_Time_Is_Over; // 0x268(0x08)
	struct UWidgetAnimation* CoolDown_End_Short_Anim; // 0x270(0x08)
	struct UWidgetAnimation* CoolDown_ShowTimer_Anim; // 0x278(0x08)
	struct UWidgetAnimation* CoolDown_Begin_Anim; // 0x280(0x08)
	struct UImage* BG; // 0x288(0x08)
	struct UBorder* Border_AbilityIcon; // 0x290(0x08)
	struct UOverlay* CDOverlay; // 0x298(0x08)
	struct UTextBlock* CDTextBox; // 0x2a0(0x08)
	struct UTextBlock* Count; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox_Counter; // 0x2b0(0x08)
	struct UImage* Image_RBM; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_CD; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_KeyName; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_Multiplier; // 0x2d0(0x08)
	float CoolDownTime; // 0x2d8(0x04)
	float CurrentTime; // 0x2dc(0x04)
	struct FText CdText; // 0x2e0(0x18)
	int32_t RemainTime; // 0x2f8(0x04)
	bool abilityUse?; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UCoolDownWBP_C* CDWBPRef; // 0x300(0x08)
	struct FText Key; // 0x308(0x18)
	struct AKillerMasterBP_C* Owner; // 0x320(0x08)
	bool charge?; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UMaterialInstanceDynamic* CircleMat; // 0x330(0x08)
	float FillTime; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FText Name; // 0x340(0x18)

	struct FText GetCount(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.GetCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AbilityEvent(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.AbilityEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RefFinder(struct UCoolDownWBP_C* NewParam); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.RefFinder // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KeyTextSet(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.KeyTextSet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoppelSwitchSprite(bool IsProp); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.DoppelSwitchSprite // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayCoolDownBeginAnimation(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownBeginAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayCoolDownEndShortAnimation(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndShortAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayCoolDownEndLongAnimation(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndLongAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Interrupt(); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_IconAbilityCooldownWBP(int32_t EntryPoint); // Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.ExecuteUbergraph_IconAbilityCooldownWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

