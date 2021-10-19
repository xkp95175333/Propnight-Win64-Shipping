// WidgetBlueprintGeneratedClass CrossHairWBP.CrossHairWBP_C
// Size: 0x2dd (Inherited: 0x260)
struct UCrossHairWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ToBigCross; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UImage* CrossHair; // 0x278(0x08)
	struct UImage* CrossHair_3; // 0x280(0x08)
	struct UImage* CrossHair_4; // 0x288(0x08)
	struct UImage* CrossHair_5; // 0x290(0x08)
	struct UImage* CrossHair_6; // 0x298(0x08)
	struct UImage* Crosshair_Hit; // 0x2a0(0x08)
	struct UImage* Crosshair_Hit_2; // 0x2a8(0x08)
	struct UImage* Crosshair_Hit_3; // 0x2b0(0x08)
	struct UImage* Crosshair_Hit_4; // 0x2b8(0x08)
	struct UImage* Crosshair_Hit_5; // 0x2c0(0x08)
	bool Hitted?; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float Time; // 0x2cc(0x04)
	struct AKillerMasterBP_C* KillerRef; // 0x2d0(0x08)
	float Time_Attak; // 0x2d8(0x04)
	bool Attack?; // 0x2dc(0x01)

	enum class ESlateVisibility GetVisibility_1(); // Function CrossHairWBP.CrossHairWBP_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void JumpStartCH(struct AKillerMasterBP_C* KillerRef); // Function CrossHairWBP.CrossHairWBP_C.JumpStartCH // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpEndCH(struct AKillerMasterBP_C* KillerRef); // Function CrossHairWBP.CrossHairWBP_C.JumpEndCH // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AttackEvent(struct AKillerMasterBP_C* KillerRef); // Function CrossHairWBP.CrossHairWBP_C.AttackEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitEvent(struct AKillerMasterBP_C* KillerRef); // Function CrossHairWBP.CrossHairWBP_C.HitEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CrossHairWBP.CrossHairWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function CrossHairWBP.CrossHairWBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CrossToBigAnim(struct AKillerMasterBP_C* KillerRef); // Function CrossHairWBP.CrossHairWBP_C.CrossToBigAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CrossHairWBP(int32_t EntryPoint); // Function CrossHairWBP.CrossHairWBP_C.ExecuteUbergraph_CrossHairWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

