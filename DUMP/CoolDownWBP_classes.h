// WidgetBlueprintGeneratedClass CoolDownWBP.CoolDownWBP_C
// Size: 0x390 (Inherited: 0x260)
struct UCoolDownWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HUD_JumpOut_Curve; // 0x268(0x08)
	struct UWidgetAnimation* HUD_JumpIn; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x278(0x08)
	struct UHorizontalBox* HorBox_Spy; // 0x280(0x08)
	struct UHorizontalBox* HorBox_Spy_Middle; // 0x288(0x08)
	struct UImage* Image_136; // 0x290(0x08)
	struct UTextBlock* TextAbility1; // 0x298(0x08)
	struct UTextBlock* TextAbility2; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_106; // 0x2a8(0x08)
	struct UHorizontalBox* VerticalBox_60; // 0x2b0(0x08)
	float CoolDownTime1; // 0x2b8(0x04)
	float CurrentTime1; // 0x2bc(0x04)
	float CoolDownTime2; // 0x2c0(0x04)
	float CurrentTime2; // 0x2c4(0x04)
	bool Ability1Use?; // 0x2c8(0x01)
	bool Ability2Use?; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	int32_t Ability1; // 0x2cc(0x04)
	int32_t Ability2; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FText textAbility_2; // 0x2d8(0x18)
	struct FText textAbility_3; // 0x2f0(0x18)
	struct FLinearColor NewVar_1; // 0x308(0x10)
	struct UObject* NewVar_2; // 0x318(0x08)
	struct FName AbilityName1; // 0x320(0x08)
	struct FName AbilityName2; // 0x328(0x08)
	struct TArray<struct FString> textArray; // 0x330(0x10)
	struct UIconAbilityCooldownWBP_C* NewVar_3; // 0x340(0x08)
	struct TArray<struct UIconAbilityCooldownWBP_C*> AbilityIconsRefs; // 0x348(0x10)
	bool abilityUsed?; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FString AbilityNameUse; // 0x360(0x10)
	struct FS_GameSettings GS; // 0x370(0x20)

	enum class ESlateVisibility Get_HorBox_Spy_Middle_Visibility_1(); // Function CoolDownWBP.CoolDownWBP_C.Get_HorBox_Spy_Middle_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetAbilityIconByName(struct FString Name, struct UIconAbilityCooldownWBP_C* AbilitiIconWidget); // Function CoolDownWBP.CoolDownWBP_C.GetAbilityIconByName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TextCleaner(); // Function CoolDownWBP.CoolDownWBP_C.TextCleaner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetText_1(); // Function CoolDownWBP.CoolDownWBP_C.GetText_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	float GetPercent_2(); // Function CoolDownWBP.CoolDownWBP_C.GetPercent_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	float GetPercent_1(); // Function CoolDownWBP.CoolDownWBP_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function CoolDownWBP.CoolDownWBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CoolDownWBP.CoolDownWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AbilityIconOn(); // Function CoolDownWBP.CoolDownWBP_C.AbilityIconOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchImage(struct FString Skill, int32_t SkillNumber); // Function CoolDownWBP.CoolDownWBP_C.SwitchImage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeCooldownTime(float CDTime, struct FString SpellName); // Function CoolDownWBP.CoolDownWBP_C.ChangeCooldownTime // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CDTimeCustom(struct FString Spell, float F); // Function CoolDownWBP.CoolDownWBP_C.CDTimeCustom // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CoolDownWBP(int32_t EntryPoint); // Function CoolDownWBP.CoolDownWBP_C.ExecuteUbergraph_CoolDownWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

