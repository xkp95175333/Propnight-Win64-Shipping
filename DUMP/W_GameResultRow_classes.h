// WidgetBlueprintGeneratedClass W_GameResultRow.W_GameResultRow_C
// Size: 0x34c (Inherited: 0x260)
struct UW_GameResultRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* searching; // 0x268(0x08)
	struct UWidgetAnimation* LoadingAnim; // 0x270(0x08)
	struct UImage* Avatar; // 0x278(0x08)
	struct UImage* Avatar_BG; // 0x280(0x08)
	struct UButton* Button_79; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_111; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_13; // 0x2b0(0x08)
	struct UImage* Image_14; // 0x2b8(0x08)
	struct UImage* Image_15; // 0x2c0(0x08)
	struct UImage* Image_33; // 0x2c8(0x08)
	struct UImage* Image_169; // 0x2d0(0x08)
	struct UImage* Image_412; // 0x2d8(0x08)
	struct UTextBlock* Nickname; // 0x2e0(0x08)
	struct UScaleBox* ScaleBox_nickname; // 0x2e8(0x08)
	struct USizeBox* SizeBox; // 0x2f0(0x08)
	struct USizeBox* SizeBox_1; // 0x2f8(0x08)
	struct USizeBox* SizeBox_2; // 0x300(0x08)
	struct USizeBox* SizeBox_3; // 0x308(0x08)
	struct USizeBox* SizeBox_4; // 0x310(0x08)
	struct USizeBox* SizeBox_69; // 0x318(0x08)
	struct USizeBox* SizeBox_1522; // 0x320(0x08)
	struct UTextBlock* TextBlock_105; // 0x328(0x08)
	struct UTextBlock* TextBlock_162; // 0x330(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Status; // 0x338(0x08)
	struct APS_PropHunt_C* Player State; // 0x340(0x08)
	int32_t Like; // 0x348(0x04)

	struct FText GetText_1(); // Function W_GameResultRow.W_GameResultRow_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function W_GameResultRow.W_GameResultRow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_GameResultRow.W_GameResultRow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SetData(struct APS_PropHunt_C* PlayerState); // Function W_GameResultRow.W_GameResultRow_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_GameResultRow.W_GameResultRow_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_GameResultRow(int32_t EntryPoint); // Function W_GameResultRow.W_GameResultRow_C.ExecuteUbergraph_W_GameResultRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

