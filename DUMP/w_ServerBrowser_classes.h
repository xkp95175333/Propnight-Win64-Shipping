// WidgetBlueprintGeneratedClass w_ServerBrowser.w_ServerBrowser_C
// Size: 0x469 (Inherited: 0x260)
struct Uw_ServerBrowser_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ChangePageName_Anim; // 0x268(0x08)
	struct UWidgetAnimation* ChangeContent_Anim; // 0x270(0x08)
	struct UWidgetAnimation* ChangeDescription_Anim; // 0x278(0x08)
	struct UImage* BG_4; // 0x280(0x08)
	struct UImage* BG_5; // 0x288(0x08)
	struct UButton* Button_Back; // 0x290(0x08)
	struct UButton* Button_CreateGame; // 0x298(0x08)
	struct UButton* Button_GM_Prophunt; // 0x2a0(0x08)
	struct UButton* Button_GM_Propnight; // 0x2a8(0x08)
	struct UButton* Button_JoinPrivate; // 0x2b0(0x08)
	struct UButton* Button_JoinServer; // 0x2b8(0x08)
	struct UButton* Button_JoinServer_Left; // 0x2c0(0x08)
	struct UButton* Button_JoinServer_Right; // 0x2c8(0x08)
	struct UButton* Button_PublicGames; // 0x2d0(0x08)
	struct UButton* Button_Update; // 0x2d8(0x08)
	struct UComboBoxString* ComboBoxString_REGIONSINFO; // 0x2e0(0x08)
	struct UButton* FreeMode; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image_3; // 0x2f8(0x08)
	struct UImage* Image_130; // 0x300(0x08)
	struct UImage* Image_321; // 0x308(0x08)
	struct UImage* Image_ArrowLeft; // 0x310(0x08)
	struct UImage* Image_ArrowRight; // 0x318(0x08)
	struct UImage* Image_BackIcon; // 0x320(0x08)
	struct UImage* Image_CG_Icon; // 0x328(0x08)
	struct UImage* Image_GM_Background; // 0x330(0x08)
	struct UImage* Image_RegionBG; // 0x338(0x08)
	struct UImage* Image_UpdateServerList; // 0x340(0x08)
	struct UButton* ServerButton; // 0x348(0x08)
	struct USizeBox* SizeBox_GameModeDescription; // 0x350(0x08)
	struct USizeBox* SizeBox_GameModeMenu; // 0x358(0x08)
	struct USizeBox* SizeBox_JoinWithCode; // 0x360(0x08)
	struct USizeBox* SizeBox_TopMenu_BrowserRegion; // 0x368(0x08)
	struct USizeBox* SizeBox_Update; // 0x370(0x08)
	struct UTextBlock* TextBlock; // 0x378(0x08)
	struct UTextBlock* TextBlock_4; // 0x380(0x08)
	struct UTextBlock* TextBlock_BackButton; // 0x388(0x08)
	struct UTextBlock* TextBlock_Hunt; // 0x390(0x08)
	struct UTextBlock* TextBlock_Night; // 0x398(0x08)
	struct UTextBlock* TextBlock_REGION; // 0x3a0(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0x3a8(0x08)
	struct UW_BrowserCreateServer_C* W_BrowserCreateServer; // 0x3b0(0x08)
	struct UW_BrowserLoading_C* W_BrowserLoading; // 0x3b8(0x08)
	struct UW_PrivateGame_C* W_PrivateGame; // 0x3c0(0x08)
	struct UW_PublicServers_C* W_PublicServers_Fake; // 0x3c8(0x08)
	struct UW_PublicServers_C* W_PublicServers_Propnight; // 0x3d0(0x08)
	struct UWBP_CustomComboBox_C* WBP_CustomComboBox_Maps; // 0x3d8(0x08)
	struct UWBP_CustomComboBox_C* WBP_CustomComboBox_Region; // 0x3e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_GameModeDescription; // 0x3e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Main; // 0x3f0(0x08)
	struct TArray<struct UBP_SessionData_C*> SessionList; // 0x3f8(0x10)
	struct UBP_SessionData_C* Session; // 0x408(0x08)
	int32_t CurrentGameMode; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct UW_ServerEntryV3_C*> WaitingEntries; // 0x418(0x10)
	bool IsSearching; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct FMulticastInlineDelegate SearchingIsOver; // 0x430(0x10)
	int32_t NewGM; // 0x440(0x04)
	bool IsAnimPlaying; // 0x444(0x01)
	bool IsSearchingAfterCreation; // 0x445(0x01)
	char pad_446[0x2]; // 0x446(0x02)
	struct FTimerHandle SearchingTickTimer; // 0x448(0x08)
	bool HasResponce; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UW_Path_C* ExplorerWidget; // 0x458(0x08)
	struct UW_PlayScreen_C* PlayScreenWidget; // 0x460(0x08)
	bool ToCreateGame; // 0x468(0x01)

	void GetMaps(struct FString LevelList); // Function w_ServerBrowser.w_ServerBrowser_C.GetMaps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void TestSessions(struct TArray<struct UBP_SessionData_C*> Sessions); // Function w_ServerBrowser.w_ServerBrowser_C.TestSessions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PrintError(struct FString Text); // Function w_ServerBrowser.w_ServerBrowser_C.PrintError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hide(); // Function w_ServerBrowser.w_ServerBrowser_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Show(); // Function w_ServerBrowser.w_ServerBrowser_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function w_ServerBrowser.w_ServerBrowser_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void UpdatePublicList(struct TArray<struct UBP_SessionData_C*> SessionList, int32_t Tab, bool AutoJoin); // Function w_ServerBrowser.w_ServerBrowser_C.UpdatePublicList // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void RefreshPublicGames(); // Function w_ServerBrowser.w_ServerBrowser_C.RefreshPublicGames // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetSession(struct UObject* Session); // Function w_ServerBrowser.w_ServerBrowser_C.SetSession // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchGames(struct FString Maps, struct FString Modes, struct FString Status, int32_t TabIndex, bool IsPrivate, struct FString Key); // Function w_ServerBrowser.w_ServerBrowser_C.SearchGames // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRequest(); // Function w_ServerBrowser.w_ServerBrowser_C.OnRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnResponse(); // Function w_ServerBrowser.w_ServerBrowser_C.OnResponse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function w_ServerBrowser.w_ServerBrowser_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PublicGames_Clicked(); // Function w_ServerBrowser.w_ServerBrowser_C.PublicGames_Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FreeModeServers_Clicked(); // Function w_ServerBrowser.w_ServerBrowser_C.FreeModeServers_Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServer_Clicked(); // Function w_ServerBrowser.w_ServerBrowser_C.CreateServer_Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void UpdateServerList(); // Function w_ServerBrowser.w_ServerBrowser_C.UpdateServerList // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectPropnightGM(); // Function w_ServerBrowser.w_ServerBrowser_C.SelectPropnightGM // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectProphunt_GM(); // Function w_ServerBrowser.w_ServerBrowser_C.SelectProphunt_GM // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void DoubleClickJoinServer(); // Function w_ServerBrowser.w_ServerBrowser_C.DoubleClickJoinServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PressBackManually(); // Function w_ServerBrowser.w_ServerBrowser_C.PressBackManually // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListenForEscape(); // Function w_ServerBrowser.w_ServerBrowser_C.ListenForEscape // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FakeEntryAnim(struct UObject* Item, struct UUserWidget* Widget); // Function w_ServerBrowser.w_ServerBrowser_C.FakeEntryAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayWaitingAnimation(); // Function w_ServerBrowser.w_ServerBrowser_C.PlayWaitingAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopWaitingAnimation(); // Function w_ServerBrowser.w_ServerBrowser_C.StopWaitingAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SearchIsOver(); // Function w_ServerBrowser.w_ServerBrowser_C.SearchIsOver // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnServerListResponse(struct TArray<struct FServerInfo> Servers, int32_t Tab, bool AutoJoin); // Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponse // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetPrivateDialog_Escape(); // Function w_ServerBrowser.w_ServerBrowser_C.ResetPrivateDialog_Escape // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SearchAfterCreate(); // Function w_ServerBrowser.w_ServerBrowser_C.SearchAfterCreate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopSearchingAfterCreation(); // Function w_ServerBrowser.w_ServerBrowser_C.StopSearchingAfterCreation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchingTick(); // Function w_ServerBrowser.w_ServerBrowser_C.SearchingTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void InitPath(struct FText PageName, bool ToCreateGame); // Function w_ServerBrowser.w_ServerBrowser_C.InitPath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveToBrowser(); // Function w_ServerBrowser.w_ServerBrowser_C.MoveToBrowser // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveToPlayScreen(); // Function w_ServerBrowser.w_ServerBrowser_C.MoveToPlayScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Move(struct FText EntryName); // Function w_ServerBrowser.w_ServerBrowser_C.Move // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void AutoJoin(); // Function w_ServerBrowser.w_ServerBrowser_C.AutoJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchToBrowser(); // Function w_ServerBrowser.w_ServerBrowser_C.SwitchToBrowser // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenCreateGame(); // Function w_ServerBrowser.w_ServerBrowser_C.OpenCreateGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ConnectVisuals(); // Function w_ServerBrowser.w_ServerBrowser_C.ConnectVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_w_ServerBrowser(int32_t EntryPoint); // Function w_ServerBrowser.w_ServerBrowser_C.ExecuteUbergraph_w_ServerBrowser // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void SearchingIsOver__DelegateSignature(); // Function w_ServerBrowser.w_ServerBrowser_C.SearchingIsOver__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

