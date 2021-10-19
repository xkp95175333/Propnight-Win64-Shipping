// WidgetBlueprintGeneratedClass W_BrowserCreateServer.W_BrowserCreateServer_C
// Size: 0xa28 (Inherited: 0x260)
struct UW_BrowserCreateServer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ChangeSwitcher_Anim; // 0x268(0x08)
	struct UImage* BG_2; // 0x270(0x08)
	struct UImage* BG_3; // 0x278(0x08)
	struct UImage* BG_4; // 0x280(0x08)
	struct UImage* BG_5; // 0x288(0x08)
	struct UButton* Button_6; // 0x290(0x08)
	struct UButton* Button_7; // 0x298(0x08)
	struct UButton* Button_12; // 0x2a0(0x08)
	struct UButton* Button_13; // 0x2a8(0x08)
	struct UButton* Button_14; // 0x2b0(0x08)
	struct UButton* Button_15; // 0x2b8(0x08)
	struct UButton* Button_16; // 0x2c0(0x08)
	struct UButton* Button_17; // 0x2c8(0x08)
	struct UButton* Button_18; // 0x2d0(0x08)
	struct UButton* Button_98; // 0x2d8(0x08)
	struct UButton* Button_StartGame; // 0x2e0(0x08)
	struct UCircularThrobber* CircularThrobber; // 0x2e8(0x08)
	struct UCircularThrobber* CircularThrobber_2; // 0x2f0(0x08)
	struct UCircularThrobber* CircularThrobber_3; // 0x2f8(0x08)
	struct UComboBoxString* ComboBoxString; // 0x300(0x08)
	struct UComboBoxString* ComboBoxString_2; // 0x308(0x08)
	struct UComboBoxString* ComboBoxString_89; // 0x310(0x08)
	struct UImage* Image_20; // 0x318(0x08)
	struct UImage* Image_21; // 0x320(0x08)
	struct UImage* Image_22; // 0x328(0x08)
	struct UImage* Image_23; // 0x330(0x08)
	struct UImage* Image_24; // 0x338(0x08)
	struct UImage* Image_25; // 0x340(0x08)
	struct UImage* Image_26; // 0x348(0x08)
	struct UImage* Image_31; // 0x350(0x08)
	struct UImage* Image_32; // 0x358(0x08)
	struct UImage* Image_33; // 0x360(0x08)
	struct UImage* Image_34; // 0x368(0x08)
	struct UImage* Image_35; // 0x370(0x08)
	struct UImage* Image_36; // 0x378(0x08)
	struct UImage* Image_38; // 0x380(0x08)
	struct UImage* Image_39; // 0x388(0x08)
	struct UImage* Image_40; // 0x390(0x08)
	struct UImage* Image_41; // 0x398(0x08)
	struct UImage* Image_42; // 0x3a0(0x08)
	struct UImage* Image_43; // 0x3a8(0x08)
	struct UImage* Image_160; // 0x3b0(0x08)
	struct UImage* Image_188; // 0x3b8(0x08)
	struct UImage* Image_402; // 0x3c0(0x08)
	struct UImage* Image_535; // 0x3c8(0x08)
	struct UImage* Image_651; // 0x3d0(0x08)
	struct UImage* Image_Button_2; // 0x3d8(0x08)
	struct UImage* Image_Button_3; // 0x3e0(0x08)
	struct UImage* Image_Button_4; // 0x3e8(0x08)
	struct UImage* Image_CG_Icon; // 0x3f0(0x08)
	struct UImage* Image_MapPreviewImg; // 0x3f8(0x08)
	struct UImage* Image_Ref; // 0x400(0x08)
	struct USafeZone* SafeZone_2; // 0x408(0x08)
	struct USafeZone* SafeZone_5; // 0x410(0x08)
	struct USafeZone* SafeZone_110; // 0x418(0x08)
	struct USizeBox* SizeBox_8; // 0x420(0x08)
	struct USizeBox* SizeBox_Update; // 0x428(0x08)
	struct UTextBlock* TextBlock; // 0x430(0x08)
	struct UTextBlock* TextBlock_4; // 0x438(0x08)
	struct UTextBlock* TextBlock_15; // 0x440(0x08)
	struct UTextBlock* TextBlock_244; // 0x448(0x08)
	struct UTextBlock* TextBlock_GameMode; // 0x450(0x08)
	struct UTextBlock* TextBlock_MapSelect; // 0x458(0x08)
	struct UTextBlock* TextBlock_ServerType; // 0x460(0x08)
	struct UComboBoxString* VisibilityBox; // 0x468(0x08)
	struct UWBP_CustomComboBox_C* WBP_CustomComboBox_Map; // 0x470(0x08)
	struct UWBP_CustomComboBox_C* WBP_CustomComboBox_ServerType; // 0x478(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_3; // 0x480(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_4; // 0x488(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_5; // 0x490(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_6; // 0x498(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_7; // 0x4a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_8; // 0x4a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_9; // 0x4b0(0x08)
	int32_t Index; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct FButtonStyle In Style; // 0x4c0(0x278)
	struct FButtonStyle In Style_D; // 0x738(0x278)
	struct FText ClearText; // 0x9b0(0x18)
	bool HoverSrvType?; // 0x9c8(0x01)
	bool HoverGameMode?; // 0x9c9(0x01)
	bool HoverMapSelect?; // 0x9ca(0x01)
	char pad_9CB[0x5]; // 0x9cb(0x05)
	struct Uw_ServerBrowser_C* ServerBrowser; // 0x9d0(0x08)
	struct TMap<struct FString, struct UPaperSprite*> MapPreviews; // 0x9d8(0x50)

	struct FText GetText_2(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.GetText_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_1(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GenerateKey(struct FString Result); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.GenerateKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnHide(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.OnHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnShow(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HideDescriprion(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.HideDescriprion // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowDescription(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.ShowDescription // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_5_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_5_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_5_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_5_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_15_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_14_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_17_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_16_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CreateGamePressed(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.CreateGamePressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_97_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_97_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_12_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_11_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void LockUI(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.LockUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UnlockUI(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.UnlockUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_CreateGame_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_CreateGame_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_CreateGame_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_CreateGame_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_Button_StartGame_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_Button_StartGame_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_BrowserCreateServer_WBP_CustomComboBox_Map_K2Node_ComponentBoundEvent_38_OnEntryClicked__DelegateSignature(struct FText EntryName, int32_t EntryIndex); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.BndEvt__W_BrowserCreateServer_WBP_CustomComboBox_Map_K2Node_ComponentBoundEvent_38_OnEntryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_BrowserCreateServer(int32_t EntryPoint); // Function W_BrowserCreateServer.W_BrowserCreateServer_C.ExecuteUbergraph_W_BrowserCreateServer // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

