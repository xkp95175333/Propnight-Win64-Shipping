// WidgetBlueprintGeneratedClass W_MainMenu.W_MainMenu_C
// Size: 0x12b3 (Inherited: 0x260)
struct UW_MainMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowHide_Social; // 0x268(0x08)
	struct UWidgetAnimation* FadeBlur; // 0x270(0x08)
	struct UWidgetAnimation* QuitMove_Anim; // 0x278(0x08)
	struct UWidgetAnimation* SettingsMove_Anim; // 0x280(0x08)
	struct UWidgetAnimation* TutorialMove_Anim; // 0x288(0x08)
	struct UWidgetAnimation* PlayMove_Anim; // 0x290(0x08)
	struct UWidgetAnimation* BackButton_Anim; // 0x298(0x08)
	struct UWidgetAnimation* Chat_Anim; // 0x2a0(0x08)
	struct UWidgetAnimation* ChangeSwitcherWidget_Anim; // 0x2a8(0x08)
	struct UWidgetAnimation* Logo_Anim; // 0x2b0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2b8(0x08)
	struct UWidgetAnimation* MainMenu_Appearance_Anim; // 0x2c0(0x08)
	struct UWidgetAnimation* Practice_Browser_Anim; // 0x2c8(0x08)
	struct UTextBlock* BuildNumber; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UButton* Button_2; // 0x2e0(0x08)
	struct UButton* Button_79; // 0x2e8(0x08)
	struct UButton* Button_198; // 0x2f0(0x08)
	struct UButton* Button_525; // 0x2f8(0x08)
	struct UButton* Button_632; // 0x300(0x08)
	struct UButton* Button_Auth; // 0x308(0x08)
	struct UButton* Button_Back; // 0x310(0x08)
	struct UButton* Button_Browser_Link; // 0x318(0x08)
	struct UButton* Button_Discord_Link; // 0x320(0x08)
	struct UButton* Button_Facebook_Link; // 0x328(0x08)
	struct UButton* Button_FG_CASTLE; // 0x330(0x08)
	struct UButton* Button_FG_FARM; // 0x338(0x08)
	struct UButton* Button_FG_HOUSE; // 0x340(0x08)
	struct UButton* Button_FG_RES; // 0x348(0x08)
	struct UButton* Button_FG_SCHOOL; // 0x350(0x08)
	struct UButton* Button_Home; // 0x358(0x08)
	struct UButton* Button_Instagram_Link; // 0x360(0x08)
	struct UButton* Button_Inventory; // 0x368(0x08)
	struct UButton* Button_Play; // 0x370(0x08)
	struct UButton* Button_QUIT; // 0x378(0x08)
	struct UButton* Button_Settings; // 0x380(0x08)
	struct UButton* Button_SUBSCRIBE; // 0x388(0x08)
	struct UButton* Button_Tutorial; // 0x390(0x08)
	struct UButton* Button_Twitter_Link; // 0x398(0x08)
	struct UCanvasPanel* CanvasPanel_MainMenu; // 0x3a0(0x08)
	struct UCanvasPanel* CanvasPanel_NewMainMenu; // 0x3a8(0x08)
	struct UChatWindow_C* ChatWindow; // 0x3b0(0x08)
	struct UButton* ClearPerkButton; // 0x3b8(0x08)
	struct UButton* CreateServer; // 0x3c0(0x08)
	struct UHorizontalBox* HorizontalBox_Social; // 0x3c8(0x08)
	struct UImage* Image; // 0x3d0(0x08)
	struct UImage* Image_2; // 0x3d8(0x08)
	struct UImage* Image_88; // 0x3e0(0x08)
	struct UImage* Image_100; // 0x3e8(0x08)
	struct UImage* Image_114; // 0x3f0(0x08)
	struct UImage* Image_136; // 0x3f8(0x08)
	struct UImage* Image_284; // 0x400(0x08)
	struct UImage* Image_421; // 0x408(0x08)
	struct UImage* Image_423; // 0x410(0x08)
	struct UImage* Image_905; // 0x418(0x08)
	struct UImage* Image_Background; // 0x420(0x08)
	struct UImage* Image_BackIcon; // 0x428(0x08)
	struct UImage* Image_BG; // 0x430(0x08)
	struct UImage* Image_ButtonPlayHovered; // 0x438(0x08)
	struct UImage* Image_ButtonQuitHovered; // 0x440(0x08)
	struct UImage* Image_ButtonSettingsHovered; // 0x448(0x08)
	struct UImage* Image_ButtonTutorialHovered; // 0x450(0x08)
	struct UImage* Image_HomeHover; // 0x458(0x08)
	struct UImage* Image_InventoryGlow; // 0x460(0x08)
	struct UImage* Image_Logo; // 0x468(0x08)
	struct UImage* Image_MainMenu; // 0x470(0x08)
	struct UImage* Image_PlayGlow; // 0x478(0x08)
	struct UImage* Image_QuitHover; // 0x480(0x08)
	struct UImage* Image_SettingGlow; // 0x488(0x08)
	struct UButton* KillerPerkButton; // 0x490(0x08)
	struct UOverlay* Overlay_RedLine; // 0x498(0x08)
	struct UButton* Perk1; // 0x4a0(0x08)
	struct UTextBlock* Perk1Name; // 0x4a8(0x08)
	struct UButton* Perk2; // 0x4b0(0x08)
	struct UTextBlock* Perk2Name; // 0x4b8(0x08)
	struct UButton* Perk3; // 0x4c0(0x08)
	struct UTextBlock* Perk3Name; // 0x4c8(0x08)
	struct UTextBlock* PerkDesc; // 0x4d0(0x08)
	struct UHorizontalBox* PerkList; // 0x4d8(0x08)
	struct UTextBlock* PerkName; // 0x4e0(0x08)
	struct UOverlay* PerkWindow; // 0x4e8(0x08)
	struct UHorizontalBox* PlayerType; // 0x4f0(0x08)
	struct UProgressBar* ProgressBar_KB; // 0x4f8(0x08)
	struct UProgressBar* ProgressBar_Mouse; // 0x500(0x08)
	struct UButton* RefreshButton; // 0x508(0x08)
	struct UButton* RefreshV2Button; // 0x510(0x08)
	struct UButton* ServerButton; // 0x518(0x08)
	struct UListView* ServerList; // 0x520(0x08)
	struct USizeBox* SizeBox_BackButton; // 0x528(0x08)
	struct USizeBox* SizeBox_Buttons; // 0x530(0x08)
	struct USizeBox* SizeBox_TopMenu; // 0x538(0x08)
	struct UComboBoxString* SMap; // 0x540(0x08)
	struct UComboBoxString* SMode; // 0x548(0x08)
	struct UButton* SurvPerkButton; // 0x550(0x08)
	struct UHorizontalBox* TestSkinHBox; // 0x558(0x08)
	struct UVerticalBox* TestSkinVBox; // 0x560(0x08)
	struct UTextBlock* Text_Logo; // 0x568(0x08)
	struct UTextBlock* TextBlock_BackButton; // 0x570(0x08)
	struct UTextBlock* TextBlock_FG_RESIDNC; // 0x578(0x08)
	struct UTextBlock* TextBlock_FGCASTLE; // 0x580(0x08)
	struct UTextBlock* TextBlock_FGCASTLE_2; // 0x588(0x08)
	struct UTextBlock* TextBlock_FGFARM; // 0x590(0x08)
	struct UTextBlock* TextBlock_FGHouse; // 0x598(0x08)
	struct UTextBlock* TextBlock_FGSCHOOL; // 0x5a0(0x08)
	struct UTextBlock* TextBlock_Follow; // 0x5a8(0x08)
	struct UTextBlock* TextBlock_Inventory; // 0x5b0(0x08)
	struct UTextBlock* TextBlock_Play; // 0x5b8(0x08)
	struct UTextBlock* TextBlock_PrivateServer; // 0x5c0(0x08)
	struct UTextBlock* TextBlock_Quit; // 0x5c8(0x08)
	struct UTextBlock* TextBlock_Settings; // 0x5d0(0x08)
	struct UTextBlock* TextBlock_Subscribe; // 0x5d8(0x08)
	struct UTextBlock* TextBlock_Tutorial; // 0x5e0(0x08)
	struct UW_PlayScreen_C* W_PlayScreen; // 0x5e8(0x08)
	struct UW_PressAnyKeyScreen_C* W_PressAnyKeyScreen; // 0x5f0(0x08)
	struct UWBP_ButtonBar_C* WBP_ButtonBar; // 0x5f8(0x08)
	struct UWBP_PracticeBar_C* WBP_PracticeBar; // 0x600(0x08)
	struct UWBP_QuickSearch_C* WBP_QuickSearch; // 0x608(0x08)
	struct UWBP_QuitDialog_C* WBP_QuitDialog; // 0x610(0x08)
	struct UWBP_ServerMessage_C* WBP_ServerMessage; // 0x618(0x08)
	struct UWBP_SocialUI_C* WBP_SocialUI; // 0x620(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_MainMenu; // 0x628(0x08)
	int32_t NumberOfSessions; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct TArray<struct FBlueprintSessionResult> Sessions; // 0x638(0x10)
	int32_t MinPing; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct FBlueprintSessionResult AvialableSession; // 0x650(0x108)
	bool Found?; // 0x758(0x01)
	char pad_759[0x3]; // 0x759(0x03)
	int32_t MaxPlayers; // 0x75c(0x04)
	struct FName HostLevel; // 0x760(0x08)
	struct UGI_Prophunt_C* GI; // 0x768(0x08)
	int32_t ServPing; // 0x770(0x04)
	bool SettingsOpen?; // 0x774(0x01)
	bool SearchingOpen?; // 0x775(0x01)
	char pad_776[0x2]; // 0x776(0x02)
	int32_t int; // 0x778(0x04)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct TArray<struct UTexture2D*> arrayImg; // 0x780(0x10)
	struct TArray<struct FString> arrayName; // 0x790(0x10)
	struct FFMODEventInstance MainMenuSound; // 0x7a0(0x08)
	bool MenuSoundStarted?; // 0x7a8(0x01)
	char pad_7A9[0x7]; // 0x7a9(0x07)
	struct UButton* LastKnowButton; // 0x7b0(0x08)
	struct FButtonStyle FocusedStyleButton; // 0x7b8(0x278)
	struct FButtonStyle UnFocusedStyleButton; // 0xa30(0x278)
	bool SettingButtonIsHover?; // 0xca8(0x01)
	char pad_CA9[0x7]; // 0xca9(0x07)
	struct TArray<struct UButton*> ButtonsArray; // 0xcb0(0x10)
	struct TArray<struct UObject*> ImgNormalArray; // 0xcc0(0x10)
	struct TArray<struct UObject*> ImgHoverArray; // 0xcd0(0x10)
	struct TArray<struct UObject*> ImgPressedArray; // 0xce0(0x10)
	int32_t ButtonsIndex; // 0xcf0(0x04)
	struct FVector2D ButtonImageSize_Normal; // 0xcf4(0x08)
	struct FVector2D ButtonImageSize_Hovered; // 0xcfc(0x08)
	struct FVector2D ButtonImageSizePressed; // 0xd04(0x08)
	char pad_D0C[0x4]; // 0xd0c(0x04)
	struct TArray<struct UButton*> Buttons_LinksArray; // 0xd10(0x10)
	struct TArray<struct UTextBlock*> TextBlockArray; // 0xd20(0x10)
	struct TArray<struct UObject*> ImgPressedLinksArray; // 0xd30(0x10)
	struct TArray<struct UObject*> ImgNormalLinksArray; // 0xd40(0x10)
	struct TArray<struct UObject*> ImgHoverLinksArray; // 0xd50(0x10)
	struct FVector2D ButtonImageSize_Links; // 0xd60(0x08)
	bool BlockButtonIsHover?; // 0xd68(0x01)
	char pad_D69[0x3]; // 0xd69(0x03)
	int32_t SkinID; // 0xd6c(0x04)
	int32_t KillersCount; // 0xd70(0x04)
	int32_t SurvCount; // 0xd74(0x04)
	struct TArray<struct UBP_SessionData_C*> SessionList; // 0xd78(0x10)
	bool IsInventoryButtonHovered?; // 0xd88(0x01)
	bool IsPlayButtonHovered?; // 0xd89(0x01)
	bool IsPracticeButtonPressed?; // 0xd8a(0x01)
	char pad_D8B[0x5]; // 0xd8b(0x05)
	struct UButton* HoveredButton; // 0xd90(0x08)
	bool IsBackButtonHovered; // 0xd98(0x01)
	char pad_D99[0x3]; // 0xd99(0x03)
	int32_t PerkNumber; // 0xd9c(0x04)
	bool SurvPerk?; // 0xda0(0x01)
	char pad_DA1[0x7]; // 0xda1(0x07)
	struct FText Last Text Name S; // 0xda8(0x18)
	struct FText Last Text Desc S; // 0xdc0(0x18)
	struct FText Last Text Name K; // 0xdd8(0x18)
	struct FText Last Text Desc K; // 0xdf0(0x18)
	struct FSlateBrush In Style Hovered; // 0xe08(0x88)
	struct FSlateBrush In Style Normal; // 0xe90(0x88)
	struct FSlateBrush In Style Normal_1; // 0xf18(0x88)
	struct FSlateBrush In Style Hovered_1; // 0xfa0(0x88)
	struct TMap<struct UButton*, struct UWidgetAnimation*> ButtonAnimsMap; // 0x1028(0x50)
	bool IsButtonsUnpressible; // 0x1078(0x01)
	char pad_1079[0x3]; // 0x1079(0x03)
	float SliderValueFocus; // 0x107c(0x04)
	float SliderValueFocus_KB; // 0x1080(0x04)
	char pad_1084[0x4]; // 0x1084(0x04)
	struct FSlateBrush In Style Normal_2; // 0x1088(0x88)
	struct FSlateBrush In Style Normal_3; // 0x1110(0x88)
	struct FSlateBrush In Style Normal_4; // 0x1198(0x88)
	struct FSlateBrush In Style Normal_5; // 0x1220(0x88)
	struct UW_PlayScreen_C* Target; // 0x12a8(0x08)
	enum class SurvChars Char; // 0x12b0(0x01)
	bool IsMenuReady; // 0x12b1(0x01)
	bool IsTutorialBlocked; // 0x12b2(0x01)

	void BlockTutotialButton(bool Block); // Function W_MainMenu.W_MainMenu_C.BlockTutotialButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MouseFocus?(bool Result); // Function W_MainMenu.W_MainMenu_C.MouseFocus? // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Get Anim(struct UButton* Button, struct UWidgetAnimation* Anim); // Function W_MainMenu.W_MainMenu_C.Get Anim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PrintError(struct FString Text); // Function W_MainMenu.W_MainMenu_C.PrintError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText Get_LVL_Text_1(); // Function W_MainMenu.W_MainMenu_C.Get_LVL_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void DisableAccesButtons_SettingActive(); // Function W_MainMenu.W_MainMenu_C.DisableAccesButtons_SettingActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActiveAccessButtons_SettingsActive(); // Function W_MainMenu.W_MainMenu_C.ActiveAccessButtons_SettingsActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocus(struct UButton* LastFocusedButton); // Function W_MainMenu.W_MainMenu_C.LastKnowFocus // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_MainMenu.W_MainMenu_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_MainMenu.W_MainMenu_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void SetSettingOpen?(); // Function W_MainMenu.W_MainMenu_C.SetSettingOpen? // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetStyleFocusedButtons(); // Function W_MainMenu.W_MainMenu_C.SetStyleFocusedButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetFocusToMouse(); // Function W_MainMenu.W_MainMenu_C.SetFocusToMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void StartMainMenuSound(); // Function W_MainMenu.W_MainMenu_C.StartMainMenuSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Auth_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Auth_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Purchase(); // Function W_MainMenu.W_MainMenu_C.Purchase // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Event_ESC(); // Function W_MainMenu.W_MainMenu_C.Event_ESC // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSurvSkinID(int32_t ID); // Function W_MainMenu.W_MainMenu_C.SetSurvSkinID // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ServerButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SMode_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function W_MainMenu.W_MainMenu_C.BndEvt__SMode_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void UpdateSessionList(struct TArray<struct FBlueprintSessionResult> Sessions); // Function W_MainMenu.W_MainMenu_C.UpdateSessionList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function W_MainMenu.W_MainMenu_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ServerList_K2Node_ComponentBoundEvent_47_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function W_MainMenu.W_MainMenu_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_47_OnListEntryInitializedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__RefreshV2Button_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__RefreshV2Button_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SettingsUnhovored(); // Function W_MainMenu.W_MainMenu_C.SettingsUnhovored // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSessionListV2(struct TArray<struct UBP_SessionData_C*> Sessions); // Function W_MainMenu.W_MainMenu_C.UpdateSessionListV2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_7_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CancelSerach(); // Function W_MainMenu.W_MainMenu_C.CancelSerach // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Home_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Home_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Home_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SearchingDeactive(); // Function W_MainMenu.W_MainMenu_C.SearchingDeactive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchingActive(); // Function W_MainMenu.W_MainMenu_C.SearchingActive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SettingsDeactive(); // Function W_MainMenu.W_MainMenu_C.SettingsDeactive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsActive(); // Function W_MainMenu.W_MainMenu_C.SettingsActive // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsButton_Press(); // Function W_MainMenu.W_MainMenu_C.SettingsButton_Press // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Search(); // Function W_MainMenu.W_MainMenu_C.Search // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnFailCreateServer(); // Function W_MainMenu.W_MainMenu_C.OnFailCreateServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFindResult(bool Fail); // Function W_MainMenu.W_MainMenu_C.OnFindResult // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ButtonHomePressManually(); // Function W_MainMenu.W_MainMenu_C.ButtonHomePressManually // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayButtonPressManually(); // Function W_MainMenu.W_MainMenu_C.PlayButtonPressManually // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PracticeButton_Event(struct UWBP_BB_Button_C* Button); // Function W_MainMenu.W_MainMenu_C.PracticeButton_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CreateServer_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__CreateServer_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_120_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_120_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HidePracticeBar(); // Function W_MainMenu.W_MainMenu_C.HidePracticeBar // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CreateServer_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__CreateServer_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CreateServer_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__CreateServer_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_120_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_120_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PAK_Screen_OnShown(); // Function W_MainMenu.W_MainMenu_C.PAK_Screen_OnShown // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Bind_PAK_Events(); // Function W_MainMenu.W_MainMenu_C.Bind_PAK_Events // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_120_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_120_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HideMenu(bool HideGameLogo); // Function W_MainMenu.W_MainMenu_C.HideMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowMenu(bool ShowGameLogo); // Function W_MainMenu.W_MainMenu_C.ShowMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideChat(); // Function W_MainMenu.W_MainMenu_C.HideChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowChat(); // Function W_MainMenu.W_MainMenu_C.ShowChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeBlackScreen(); // Function W_MainMenu.W_MainMenu_C.FadeBlackScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetButtonVisibility(); // Function W_MainMenu.W_MainMenu_C.ResetButtonVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ShowBackButton(); // Function W_MainMenu.W_MainMenu_C.ShowBackButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideBackButton(); // Function W_MainMenu.W_MainMenu_C.HideBackButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_MainMenu.W_MainMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_MainMenu.W_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_MainMenu.W_MainMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PlayHoverStyle(); // Function W_MainMenu.W_MainMenu_C.PlayHoverStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PlayAnimForward(struct UButton* Button); // Function W_MainMenu.W_MainMenu_C.PlayAnimForward // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayAnimReverse(struct UButton* Button); // Function W_MainMenu.W_MainMenu_C.PlayAnimReverse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveButton(struct UButton* Button); // Function W_MainMenu.W_MainMenu_C.MoveButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function W_MainMenu.W_MainMenu_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void UpdatePerksName(bool Surv?); // Function W_MainMenu.W_MainMenu_C.UpdatePerksName // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void LoadPerks(bool Surv?); // Function W_MainMenu.W_MainMenu_C.LoadPerks // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectPerk(struct UPerk_C* SelectedPerk); // Function W_MainMenu.W_MainMenu_C.SelectPerk // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void LostFocusMouseClick(); // Function W_MainMenu.W_MainMenu_C.LostFocusMouseClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnInitialized(); // Function W_MainMenu.W_MainMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void MoveSliderMenu(float DeltaTime); // Function W_MainMenu.W_MainMenu_C.MoveSliderMenu // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Move(struct FText EntryName); // Function W_MainMenu.W_MainMenu_C.Move // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsHoverStyle(); // Function W_MainMenu.W_MainMenu_C.SettingsHoverStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void QuitHoverStyle(); // Function W_MainMenu.W_MainMenu_C.QuitHoverStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetStyleForButtonsFromKeyboard(); // Function W_MainMenu.W_MainMenu_C.SetStyleForButtonsFromKeyboard // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetUnhoveredButtonsStyle(); // Function W_MainMenu.W_MainMenu_C.SetUnhoveredButtonsStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Disable_SocialsButtons(); // Function W_MainMenu.W_MainMenu_C.Disable_SocialsButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Esc_Quit(); // Function W_MainMenu.W_MainMenu_C.Esc_Quit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature(); // Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_MainMenu(int32_t EntryPoint); // Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

