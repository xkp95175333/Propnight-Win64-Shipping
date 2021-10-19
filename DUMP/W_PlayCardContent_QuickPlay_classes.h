// WidgetBlueprintGeneratedClass W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C
// Size: 0x2d0 (Inherited: 0x270)
struct UW_PlayCardContent_QuickPlay_C : UW_PlayCardContent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_SearchGame; // 0x278(0x08)
	struct UImage* Image_90; // 0x280(0x08)
	struct UImage* Image_CG_Icon; // 0x288(0x08)
	struct UOverlay* Overlay_TeamLeaderOnly; // 0x290(0x08)
	struct USizeBox* SizeBox_54; // 0x298(0x08)
	struct UTextBlock* Text_Description; // 0x2a0(0x08)
	struct UTextBlock* Text_Header; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_4; // 0x2b0(0x08)
	struct UW_RoleSelector_C* W_RoleSelector; // 0x2b8(0x08)
	struct FMulticastInlineDelegate SearchGame_OnClicked; // 0x2c0(0x10)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnInit(struct FCardStruct CardStruct); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.OnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Search(enum class E_RoleType Role); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Search // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PlayCardContent_QuickPlay(int32_t EntryPoint); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ExecuteUbergraph_W_PlayCardContent_QuickPlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void SearchGame_OnClicked__DelegateSignature(enum class E_RoleType Role); // Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.SearchGame_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

