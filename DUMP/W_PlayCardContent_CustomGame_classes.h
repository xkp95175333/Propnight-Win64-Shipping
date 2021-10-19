// WidgetBlueprintGeneratedClass W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C
// Size: 0x2f8 (Inherited: 0x270)
struct UW_PlayCardContent_CustomGame_C : UW_PlayCardContent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_CreateGame; // 0x278(0x08)
	struct UButton* Button_ServerBrowser; // 0x280(0x08)
	struct UImage* Image_90; // 0x288(0x08)
	struct UImage* Image_CG_Icon; // 0x290(0x08)
	struct UImage* Image_CG_Icon_2; // 0x298(0x08)
	struct UOverlay* Overlay_TeamLeaderOnly; // 0x2a0(0x08)
	struct USizeBox* SizeBox; // 0x2a8(0x08)
	struct USizeBox* SizeBox_54; // 0x2b0(0x08)
	struct UTextBlock* Text_Description; // 0x2b8(0x08)
	struct UTextBlock* Text_Header; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_4; // 0x2d0(0x08)
	struct FMulticastInlineDelegate CreateGame_OnClicked; // 0x2d8(0x10)
	struct FMulticastInlineDelegate ServerBrowser_OnClicked; // 0x2e8(0x10)

	void Construct(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnInit(struct FCardStruct CardStruct); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.OnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PlayCardContent_CustomGame(int32_t EntryPoint); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ExecuteUbergraph_W_PlayCardContent_CustomGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void ServerBrowser_OnClicked__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ServerBrowser_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateGame_OnClicked__DelegateSignature(); // Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.CreateGame_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

