// WidgetBlueprintGeneratedClass InventorySurvCommand_Radial.InventorySurvCommand_Radial_C
// Size: 0x1050 (Inherited: 0x260)
struct UInventorySurvCommand_Radial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade_Fart; // 0x268(0x08)
	struct UWidgetAnimation* Fade_Mission; // 0x270(0x08)
	struct UWidgetAnimation* Fade_Baby; // 0x278(0x08)
	struct UButton* Button_1; // 0x280(0x08)
	struct UButton* Button_2; // 0x288(0x08)
	struct UButton* Button_3; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_1202; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel_1314; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_1401; // 0x2a8(0x08)
	struct UImage* Image_357; // 0x2b0(0x08)
	struct UImage* Image_BG; // 0x2b8(0x08)
	struct UImage* Image_H_4; // 0x2c0(0x08)
	struct UImage* Image_H_5; // 0x2c8(0x08)
	struct UImage* Image_H_6; // 0x2d0(0x08)
	struct UImage* Image_SelectorBG; // 0x2d8(0x08)
	struct USizeBox* SizeBox_Picker; // 0x2e0(0x08)
	struct UImage* slot_ind0; // 0x2e8(0x08)
	struct UImage* slot_ind1; // 0x2f0(0x08)
	struct UImage* Slot_ind2; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_ITEM; // 0x300(0x08)
	struct UTextBlock* TextBlock_MAIN; // 0x308(0x08)
	struct UTextBlock* TextBlock_MAIN_2; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_action; // 0x318(0x08)
	bool Interacting?; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FVector2D InputVector; // 0x324(0x08)
	int32_t CIndex; // 0x32c(0x04)
	struct FButtonStyle PressedStyle_BTN; // 0x330(0x278)
	struct FButtonStyle SelectedStyle_BTN; // 0x5a8(0x278)
	struct FButtonStyle DefaultStyle_BTN; // 0x820(0x278)
	struct FButtonStyle DefaultStyle_BTN_3D; // 0xa98(0x278)
	int32_t CIndex_Music; // 0xd10(0x04)
	char pad_D14[0x4]; // 0xd14(0x04)
	struct FButtonStyle DefaultStyle_BTN_3D_1; // 0xd18(0x278)
	int32_t CIndex_ZOrder; // 0xf90(0x04)
	char pad_F94[0x4]; // 0xf94(0x04)
	struct TArray<struct UPaperSprite*> Inventory_Icon; // 0xf98(0x10)
	struct FText healpack; // 0xfa8(0x18)
	struct FText flashlight; // 0xfc0(0x18)
	struct FText EnergyDrink; // 0xfd8(0x18)
	struct FText Picklock; // 0xff0(0x18)
	struct FText Key; // 0x1008(0x18)
	struct FText Book; // 0x1020(0x18)
	struct FText Potion; // 0x1038(0x18)

	void Drop Item(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Drop Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateCurrentInvSlotItem(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.UpdateCurrentInvSlotItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetCanvas(struct UButton* Button, struct UCanvasPanel* Canvas); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.GetCanvas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Select_Mouse(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Select_Mouse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Select(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Pressed(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Enteract_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Released(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Enteract_Released // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void MusicHover(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.MusicHover // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PlayUnhoverAnim(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.PlayUnhoverAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeselectAll(); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.DeselectAll // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_InventorySurvCommand_Radial(int32_t EntryPoint); // Function InventorySurvCommand_Radial.InventorySurvCommand_Radial_C.ExecuteUbergraph_InventorySurvCommand_Radial // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

