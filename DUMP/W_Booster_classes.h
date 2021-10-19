// WidgetBlueprintGeneratedClass W_Booster.W_Booster_C
// Size: 0x349 (Inherited: 0x260)
struct UW_Booster_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Main; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	struct UImage* Image_3; // 0x278(0x08)
	struct UImage* Image_4; // 0x280(0x08)
	struct UImage* Image_5; // 0x288(0x08)
	struct UImage* Image_6; // 0x290(0x08)
	struct UImage* Image_7; // 0x298(0x08)
	struct UImage* Image_8; // 0x2a0(0x08)
	struct UImage* Image_9; // 0x2a8(0x08)
	struct UImage* Image_10; // 0x2b0(0x08)
	struct UImage* Image_11; // 0x2b8(0x08)
	struct UImage* Image_12; // 0x2c0(0x08)
	struct UImage* Image_13; // 0x2c8(0x08)
	struct UImage* Image_14; // 0x2d0(0x08)
	struct UImage* Image_15; // 0x2d8(0x08)
	struct UImage* Image_16; // 0x2e0(0x08)
	struct UImage* Image_17; // 0x2e8(0x08)
	struct UImage* Image_18; // 0x2f0(0x08)
	struct UImage* Image_19; // 0x2f8(0x08)
	struct UImage* Image_21; // 0x300(0x08)
	struct UImage* Image_22; // 0x308(0x08)
	struct UImage* Image_23; // 0x310(0x08)
	struct UImage* Image_25; // 0x318(0x08)
	struct UImage* Image_27; // 0x320(0x08)
	struct UImage* Image_28; // 0x328(0x08)
	struct UImage* Image_168; // 0x330(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Items; // 0x338(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Rarity; // 0x340(0x08)
	bool IsChosen?; // 0x348(0x01)

	void Construct(); // Function W_Booster.W_Booster_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_Booster.W_Booster_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_Booster.W_Booster_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_Booster(int32_t EntryPoint); // Function W_Booster.W_Booster_C.ExecuteUbergraph_W_Booster // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

