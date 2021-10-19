// WidgetBlueprintGeneratedClass W_LobbyKiller.W_LobbyKiller_C
// Size: 0x3d0 (Inherited: 0x260)
struct UW_LobbyKiller_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Select_Anim; // 0x268(0x08)
	struct UButton* Button; // 0x270(0x08)
	struct UImage* Image_110; // 0x278(0x08)
	struct UImage* Image_killerIcon; // 0x280(0x08)
	struct UImage* Image_RedBlur; // 0x288(0x08)
	struct UTextBlock* KillerName; // 0x290(0x08)
	struct UOverlay* Overlay_FULL; // 0x298(0x08)
	enum class KillerType KillerType; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UW_MiniLobby_C* Owner; // 0x2a8(0x08)
	float CounterTimeUP; // 0x2b0(0x04)
	float CounterTimeDOWN; // 0x2b4(0x04)
	bool bStartAnimButton?UP; // 0x2b8(0x01)
	bool bStartAnimButton?DOWN; // 0x2b9(0x01)
	bool Selected; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct FSlateBrush In Style Normal; // 0x2c0(0x88)
	struct FSlateBrush In Style Normal_1; // 0x348(0x88)

	void SetFirst(); // Function W_LobbyKiller.W_LobbyKiller_C.SetFirst // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnimUP(); // Function W_LobbyKiller.W_LobbyKiller_C.AnimUP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnimDOWN(); // Function W_LobbyKiller.W_LobbyKiller_C.AnimDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HoverButton(); // Function W_LobbyKiller.W_LobbyKiller_C.HoverButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetButtonInfo(enum class KillerType KillerType, struct UW_MiniLobby_C* Owner); // Function W_LobbyKiller.W_LobbyKiller_C.SetButtonInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetButton(); // Function W_LobbyKiller.W_LobbyKiller_C.ResetButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_LobbyKiller.W_LobbyKiller_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_LobbyKiller.W_LobbyKiller_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_LobbyKiller(int32_t EntryPoint); // Function W_LobbyKiller.W_LobbyKiller_C.ExecuteUbergraph_W_LobbyKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

