// WidgetBlueprintGeneratedClass WB_KeyBindOverlay.WB_KeyBindOverlay_C
// Size: 0xb28 (Inherited: 0x260)
struct UWB_KeyBindOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* ButtonReFocuser; // 0x268(0x08)
	struct UOverlay* Changer; // 0x270(0x08)
	struct UInputKeySelector* Gamepad_InputKeySelector; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct UImage* Image_2; // 0x288(0x08)
	struct UImage* Image_3; // 0x290(0x08)
	struct UImage* Image_4; // 0x298(0x08)
	struct UImage* Image_5; // 0x2a0(0x08)
	struct UImage* Image_7; // 0x2a8(0x08)
	struct UImage* Image_8; // 0x2b0(0x08)
	struct UImage* Image_9; // 0x2b8(0x08)
	struct UImage* Image_10; // 0x2c0(0x08)
	struct UImage* Image_11; // 0x2c8(0x08)
	struct UImage* Image_12; // 0x2d0(0x08)
	struct UImage* Image_83; // 0x2d8(0x08)
	struct UImage* Image_377; // 0x2e0(0x08)
	struct UImage* Image_KeyGP_2; // 0x2e8(0x08)
	struct UImage* Image_KeyGP_3; // 0x2f0(0x08)
	struct UImage* Image_KeyKB; // 0x2f8(0x08)
	struct UInputKeySelector* Keyboard_InputKeySelector; // 0x300(0x08)
	struct USafeZone* SafeZone; // 0x308(0x08)
	struct USafeZone* SafeZone_278; // 0x310(0x08)
	struct USizeBox* SizeBox_KeyGP_3; // 0x318(0x08)
	struct UTextBlock* TextBlock_clear_GP; // 0x320(0x08)
	struct UTextBlock* TextBlock_clear_GP_2; // 0x328(0x08)
	struct UTextBlock* TextBlock_emty; // 0x330(0x08)
	struct UTextBlock* TextBlock_emty_GP; // 0x338(0x08)
	struct UTextBlock* TextBlock_Input_GP; // 0x340(0x08)
	struct UTextBlock* TextBlock_Input_GP_2; // 0x348(0x08)
	struct UTextBlock* TextBlock_KeyGP; // 0x350(0x08)
	struct UTextBlock* TextBlock_KeyGP_2; // 0x358(0x08)
	struct UTextBlock* TextBlock_KeyKB; // 0x360(0x08)
	struct UTextBlock* TextBlock_SomeTEXT; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Keyboard; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_KeyGamePad; // 0x378(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_KeySelStyleBtn_gamepad; // 0x380(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_KeySelStyleBtn_KeyBoard; // 0x388(0x08)
	bool bIsSelected; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMulticastInlineDelegate EventDispatcher_LeftBtn; // 0x398(0x10)
	struct FMulticastInlineDelegate EventDispatcher_RightBtn; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3b8(0x10)
	struct FName InputNameKey; // 0x3c8(0x08)
	struct FInputChord Gamepad_LastKeyChanged; // 0x3d0(0x20)
	struct FInputChord Gamepad_LastKeySelected; // 0x3f0(0x20)
	struct FInputAxisKeyMapping Gamepad_BeingReplaced; // 0x410(0x28)
	struct TMap<struct FString, struct UPaperSprite*> Gamepad_TextButtons_ImageWrap1; // 0x438(0x50)
	struct TMap<struct FString, struct UPaperSprite*> Gamepad_TextButtons_ImageWrap2; // 0x488(0x50)
	struct TArray<struct FString> Gamepad_TextButtons_ImageWrap2_Hide; // 0x4d8(0x10)
	struct FInputChord Keyboard_LastKeyChanged; // 0x4e8(0x20)
	struct FInputChord Keyboard_LastKeySelected; // 0x508(0x20)
	struct FInputAxisKeyMapping Keyboard_BeingReplaced; // 0x528(0x28)
	struct TMap<struct FString, struct FText> Keyboard_TextButtons; // 0x550(0x50)
	struct TMap<struct FString, struct UPaperSprite*> Keyboard_TextButtons_ImageWrap; // 0x5a0(0x50)
	struct FTextBlockStyle Text Style_Vis; // 0x5f0(0x270)
	struct FTextBlockStyle Text Style_InVis; // 0x860(0x270)
	struct FMulticastInlineDelegate CurrentKey; // 0xad0(0x10)
	struct UWB_IdenticalBindsDialog_C* IdenticalBind; // 0xae0(0x08)
	struct TArray<struct FText> Array_Surv; // 0xae8(0x10)
	bool Press_Keyboard?; // 0xaf8(0x01)
	char pad_AF9[0x7]; // 0xaf9(0x07)
	struct UWB_KeyBindOverlay_C* WB_LastSwap; // 0xb00(0x08)
	struct FInputChord SavedSelectedKey_Swaped_GamePad; // 0xb08(0x20)

	void SwapidenticalKeys_Keyboard(struct FInputChord SelectedKey); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SwapidenticalKeys_Keyboard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchingIdenticalKeys_Gamepad(struct FKey CurrentKey, bool Blocked?); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Gamepad // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchingIdenticalKeys_Keyboard(struct FInputChord CurrentKey, bool Blocked?); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Keyboard // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnEntryReleased(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Select(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Gamepad_Diff_Icons_SHOW(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_Icons_SHOW // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Gamepad_Diff_icons_HIDE(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_icons_HIDE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetFocusToGeneral(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SetFocusToGeneral // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewStyle(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.NewStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAccept_Event(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnAccept_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnDecline_Event(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnDecline_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartBind_Keyboard(struct FInputChord SelectedKey); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.StartBind_Keyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Save_Update(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Save_Update // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WB_KeyBindOverlay(int32_t EntryPoint); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.ExecuteUbergraph_WB_KeyBindOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void CurrentKey__DelegateSignature(struct FKey Key); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.CurrentKey__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPressed__DelegateSignature(struct UWB_KeyBindOverlay_C* Button); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_RightBtn__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_RightBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_LeftBtn__DelegateSignature(); // Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_LeftBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

