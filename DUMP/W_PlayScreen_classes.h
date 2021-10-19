// WidgetBlueprintGeneratedClass W_PlayScreen.W_PlayScreen_C
// Size: 0x2b4 (Inherited: 0x260)
struct UW_PlayScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ChangeSwitcherWidget_Anim; // 0x268(0x08)
	struct UImage* Image_Ref_2; // 0x270(0x08)
	struct UImage* Image_Ref_3; // 0x278(0x08)
	struct UW_Path_C* W_Path; // 0x280(0x08)
	struct UW_PlayCard_C* W_PlayCard_CustomGame; // 0x288(0x08)
	struct UW_PlayCard_C* W_PlayCard_QuickPlay; // 0x290(0x08)
	struct Uw_ServerBrowser_C* w_ServerBrowser; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_189; // 0x2a0(0x08)
	bool IsAnimPlaying; // 0x2a8(0x01)
	bool IsButtonsUnpressible; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	int32_t C_PLAY_SCREEN_PAGE; // 0x2ac(0x04)
	int32_t C_SERVER_BROWSER_PAGE; // 0x2b0(0x04)

	void Construct(); // Function W_PlayScreen.W_PlayScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InitPath(); // Function W_PlayScreen.W_PlayScreen_C.InitPath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayScreenToMainMenu(); // Function W_PlayScreen.W_PlayScreen_C.PlayScreenToMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListenForEscape(); // Function W_PlayScreen.W_PlayScreen_C.ListenForEscape // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_PlayScreen.W_PlayScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Move(struct FText EntryName); // Function W_PlayScreen.W_PlayScreen_C.Move // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayScreen_W_PlayCard_CustomGame_K2Node_ComponentBoundEvent_1_CreateGame_OnClicked__DelegateSignature(); // Function W_PlayScreen.W_PlayScreen_C.BndEvt__W_PlayScreen_W_PlayCard_CustomGame_K2Node_ComponentBoundEvent_1_CreateGame_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayScreen_W_PlayCard_CustomGame_K2Node_ComponentBoundEvent_2_ServerBrowser_OnClicked__DelegateSignature(); // Function W_PlayScreen.W_PlayScreen_C.BndEvt__W_PlayScreen_W_PlayCard_CustomGame_K2Node_ComponentBoundEvent_2_ServerBrowser_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OpenServerBrowser(); // Function W_PlayScreen.W_PlayScreen_C.OpenServerBrowser // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowContent(); // Function W_PlayScreen.W_PlayScreen_C.ShowContent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideContent(); // Function W_PlayScreen.W_PlayScreen_C.HideContent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ESC_Handler(); // Function W_PlayScreen.W_PlayScreen_C.ESC_Handler // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenCreateGame(); // Function W_PlayScreen.W_PlayScreen_C.OpenCreateGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PlayScreen(int32_t EntryPoint); // Function W_PlayScreen.W_PlayScreen_C.ExecuteUbergraph_W_PlayScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

