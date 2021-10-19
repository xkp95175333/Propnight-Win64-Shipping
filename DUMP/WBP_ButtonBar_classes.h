// WidgetBlueprintGeneratedClass WBP_ButtonBar.WBP_ButtonBar_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_ButtonBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_71; // 0x268(0x08)
	struct UWBP_BB_Button_C* WBP_BB_Button_CreateGame; // 0x270(0x08)
	struct UWBP_BB_Button_C* WBP_BB_Button_Practice; // 0x278(0x08)
	struct UWBP_BB_Button_C* WBP_BB_Button_Prophunt; // 0x280(0x08)
	struct UWBP_BB_Button_C* WBP_BB_Button_Propnight; // 0x288(0x08)
	struct UWBP_BB_Button_C* CurrentButton; // 0x290(0x08)
	struct TArray<struct UWBP_BB_Button_C*> ButtonsArray; // 0x298(0x10)
	struct Uw_ServerBrowser_C* ServerBrowserWidget; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2b0(0x10)
	bool IsPracticeButtonPressed; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t CurrentButtonIndex; // 0x2c4(0x04)

	void GetButtonByIndex(int32_t Index, struct UWBP_BB_Button_C* Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.GetButtonByIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressCurrentButton(); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressCurrentButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressButtonByIndex(int32_t ButtonIndex); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressButtonByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonBar.WBP_ButtonBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_ButtonBar.WBP_ButtonBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CurrentButtonChanged(struct UWBP_BB_Button_C* Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.CurrentButtonChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_BB_Button_Propnight_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_ButtonBar.WBP_ButtonBar_C.BndEvt__WBP_BB_Button_Propnight_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_BB_Button_Prophunt_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_ButtonBar.WBP_ButtonBar_C.BndEvt__WBP_BB_Button_Prophunt_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_BB_Button_CreateGame_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_ButtonBar.WBP_ButtonBar_C.BndEvt__WBP_BB_Button_CreateGame_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Init(); // Function WBP_ButtonBar.WBP_ButtonBar_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_BB_Button_Practice_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(struct UWBP_BB_Button_C* Instance); // Function WBP_ButtonBar.WBP_ButtonBar_C.BndEvt__WBP_BB_Button_Practice_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void PressPropnightButton(); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressPropnightButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressProphuntButton(); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressProphuntButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressCreateGameButton(); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressCreateGameButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PressPracticeButton(); // Function WBP_ButtonBar.WBP_ButtonBar_C.PressPracticeButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_ButtonBar(int32_t EntryPoint); // Function WBP_ButtonBar.WBP_ButtonBar_C.ExecuteUbergraph_WBP_ButtonBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnButtonPressed__DelegateSignature(struct UWBP_BB_Button_C* Button); // Function WBP_ButtonBar.WBP_ButtonBar_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

