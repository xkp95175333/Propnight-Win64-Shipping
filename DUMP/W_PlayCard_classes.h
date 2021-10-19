// WidgetBlueprintGeneratedClass W_PlayCard.W_PlayCard_C
// Size: 0x312 (Inherited: 0x260)
struct UW_PlayCard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Click_Blocked_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Hover_Blocked_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Hover_Anim_Lobby; // 0x278(0x08)
	struct UWidgetAnimation* Hover_Anim; // 0x280(0x08)
	struct UImage* Image_90; // 0x288(0x08)
	struct UImage* Image_125; // 0x290(0x08)
	struct UImage* Image_BG; // 0x298(0x08)
	struct UImage* Image_ContentBG; // 0x2a0(0x08)
	struct UImage* Image_Gradient; // 0x2a8(0x08)
	struct USizeBox* SizeBox_Content; // 0x2b0(0x08)
	struct UW_PlayCardContent_CustomGame_C* W_PlayCardContent_CustomGame; // 0x2b8(0x08)
	struct UW_PlayCardContent_QuickPlay_C* W_PlayCardContent_QuickPlay; // 0x2c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ContentSwitcher; // 0x2c8(0x08)
	int32_t CardType; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FMulticastInlineDelegate SearchGame_OnClicked; // 0x2d8(0x10)
	struct FMulticastInlineDelegate CreateGame_OnClicked; // 0x2e8(0x10)
	struct FMulticastInlineDelegate ServerBrowser_OnClicked; // 0x2f8(0x10)
	struct UPaperSprite* CardImage; // 0x308(0x08)
	bool LobbyAnimation?; // 0x310(0x01)
	bool IsBlocked; // 0x311(0x01)

	void SetBlocked(bool bLocked); // Function W_PlayCard.W_PlayCard_C.SetBlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_PlayCard.W_PlayCard_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_PlayCard.W_PlayCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_PlayCard.W_PlayCard_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function W_PlayCard.W_PlayCard_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function W_PlayCard.W_PlayCard_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCard_W_PlayCardContent_QuickPlay_K2Node_ComponentBoundEvent_0_SearchGame_OnClicked__DelegateSignature(enum class E_RoleType Role); // Function W_PlayCard.W_PlayCard_C.BndEvt__W_PlayCard_W_PlayCardContent_QuickPlay_K2Node_ComponentBoundEvent_0_SearchGame_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCard_W_PlayCardContent_CustomGame_K2Node_ComponentBoundEvent_1_CreateGame_OnClicked__DelegateSignature(); // Function W_PlayCard.W_PlayCard_C.BndEvt__W_PlayCard_W_PlayCardContent_CustomGame_K2Node_ComponentBoundEvent_1_CreateGame_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PlayCard_W_PlayCardContent_CustomGame_K2Node_ComponentBoundEvent_2_ServerBrowser_OnClicked__DelegateSignature(); // Function W_PlayCard.W_PlayCard_C.BndEvt__W_PlayCard_W_PlayCardContent_CustomGame_K2Node_ComponentBoundEvent_2_ServerBrowser_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BigSize(); // Function W_PlayCard.W_PlayCard_C.BigSize // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LowSize(); // Function W_PlayCard.W_PlayCard_C.LowSize // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PlayCard(int32_t EntryPoint); // Function W_PlayCard.W_PlayCard_C.ExecuteUbergraph_W_PlayCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void ServerBrowser_OnClicked__DelegateSignature(); // Function W_PlayCard.W_PlayCard_C.ServerBrowser_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateGame_OnClicked__DelegateSignature(); // Function W_PlayCard.W_PlayCard_C.CreateGame_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchGame_OnClicked__DelegateSignature(enum class E_RoleType Role); // Function W_PlayCard.W_PlayCard_C.SearchGame_OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

