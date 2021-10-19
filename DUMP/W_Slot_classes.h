// WidgetBlueprintGeneratedClass W_Slot.W_Slot_C
// Size: 0x7b8 (Inherited: 0x260)
struct UW_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loading; // 0x268(0x08)
	struct UWidgetAnimation* MiniSearching; // 0x270(0x08)
	struct UWidgetAnimation* SearchingAnimation; // 0x278(0x08)
	struct UImage* Avatar_BG; // 0x280(0x08)
	struct UImage* Avatar_BG_2; // 0x288(0x08)
	struct UImage* Avatar_BG_3; // 0x290(0x08)
	struct UImage* Avatar_BG_4; // 0x298(0x08)
	struct UImage* Avatar_BG_5; // 0x2a0(0x08)
	struct UBackgroundBlur* BackgroundBlur_2; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image_2; // 0x2b8(0x08)
	struct UImage* Image_3; // 0x2c0(0x08)
	struct UImage* Image_4; // 0x2c8(0x08)
	struct UImage* Image_5; // 0x2d0(0x08)
	struct UImage* Image_6; // 0x2d8(0x08)
	struct UImage* Image_7; // 0x2e0(0x08)
	struct UImage* Image_8; // 0x2e8(0x08)
	struct UImage* Image_9; // 0x2f0(0x08)
	struct UImage* Image_10; // 0x2f8(0x08)
	struct UImage* Image_11; // 0x300(0x08)
	struct UImage* Image_12; // 0x308(0x08)
	struct UImage* Image_13; // 0x310(0x08)
	struct UImage* Image_14; // 0x318(0x08)
	struct UImage* Image_15; // 0x320(0x08)
	struct UImage* Image_16; // 0x328(0x08)
	struct UImage* Image_17; // 0x330(0x08)
	struct UImage* Image_18; // 0x338(0x08)
	struct UImage* Image_19; // 0x340(0x08)
	struct UImage* Image_116; // 0x348(0x08)
	struct UImage* Image_189; // 0x350(0x08)
	struct UImage* Image_207; // 0x358(0x08)
	struct UImage* Image_412; // 0x360(0x08)
	struct UImage* Image_899; // 0x368(0x08)
	struct UImage* Image_1113; // 0x370(0x08)
	struct UImage* Image_BG2; // 0x378(0x08)
	struct UImage* Image_Check; // 0x380(0x08)
	struct UImage* Image_Check_2; // 0x388(0x08)
	struct UImage* Image_Check_3; // 0x390(0x08)
	struct UImage* Image_Krug; // 0x398(0x08)
	struct UImage* Image_Krug_2; // 0x3a0(0x08)
	struct UImage* Image_Krug_3; // 0x3a8(0x08)
	struct UWidgetSwitcher* KillerTypeSwitcher_2; // 0x3b0(0x08)
	struct UTextBlock* Nickname; // 0x3b8(0x08)
	struct UOverlay* Overlay_SWAP_TEXT; // 0x3c0(0x08)
	struct UWidgetSwitcher* PlayerSlotSwitcher; // 0x3c8(0x08)
	struct UWidgetSwitcher* PlayerTypeSwitcher; // 0x3d0(0x08)
	struct UWidgetSwitcher* ReadySwitcher; // 0x3d8(0x08)
	struct UButton* ReserveButton; // 0x3e0(0x08)
	struct UTextBlock* SlotName1; // 0x3e8(0x08)
	struct UTextBlock* SlotName2; // 0x3f0(0x08)
	struct UWidgetSwitcher* SurvTypeSwitcher; // 0x3f8(0x08)
	struct UButton* SwapButton; // 0x400(0x08)
	struct UImage* SwapIcon; // 0x408(0x08)
	struct UTextBlock* SwapText; // 0x410(0x08)
	struct UTextBlock* TextBlock; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Portretos; // 0x420(0x08)
	struct FText Text; // 0x428(0x18)
	struct FString Name; // 0x440(0x10)
	bool IsMySlot; // 0x450(0x01)
	enum class SurvClass SurvClassEnum; // 0x451(0x01)
	bool ImKiller; // 0x452(0x01)
	char pad_453[0x5]; // 0x453(0x05)
	struct APlayerState* PlayerState; // 0x458(0x08)
	struct UW_MiniLobby_C* W_MiniLobbby; // 0x460(0x08)
	float Point; // 0x468(0x04)
	bool SwapRequestHandled; // 0x46c(0x01)
	bool SwapAccepted; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	struct APawn* LastSender; // 0x470(0x08)
	bool IsSwapRequest; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FSlateBrush In Style Normal; // 0x480(0x88)
	struct FSlateBrush In Style Normal_1; // 0x508(0x88)
	struct FSlateBrush Style Hovered; // 0x590(0x88)
	struct FSlateBrush Style Pressed; // 0x618(0x88)
	struct FSlateBrush Style Disabled; // 0x6a0(0x88)
	struct FSlateBrush In Style Normal_2; // 0x728(0x88)
	struct APS_PropHunt_C* As PS Prop Hunt; // 0x7b0(0x08)

	void Update Icons for Self(); // Function W_Slot.W_Slot_C.Update Icons for Self // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckForSwapCancel(); // Function W_Slot.W_Slot_C.CheckForSwapCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	enum class ESlateVisibility GetVisibility_1(); // Function W_Slot.W_Slot_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility Get_SurvClass_Visibility_2(); // Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility Get_SurvClass_Visibility_1(); // Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_Slot.W_Slot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeState(struct FText Text, struct UTexture2D* ava); // Function W_Slot.W_Slot_C.ChangeState // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Process(struct AActor* Controller); // Function W_Slot.W_Slot_C.Process // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeIcon(); // Function W_Slot.W_Slot_C.ChangeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeIconSurvClass(struct APlayerState* PlayerState); // Function W_Slot.W_Slot_C.ChangeIconSurvClass // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeReadyIcon(struct APlayerState* PlayerState); // Function W_Slot.W_Slot_C.ChangeReadyIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_Slot.W_Slot_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetSlotName(struct FString Name); // Function W_Slot.W_Slot_C.SetSlotName // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSlotText(struct FString Text); // Function W_Slot.W_Slot_C.SetSlotText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_Slot.W_Slot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnSwapRequest(); // Function W_Slot.W_Slot_C.OnSwapRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnCancelSwapRequest(); // Function W_Slot.W_Slot_C.OnCancelSwapRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowSwap(bool BG); // Function W_Slot.W_Slot_C.ShowSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideSwap(); // Function W_Slot.W_Slot_C.HideSwap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_Slot.W_Slot_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_Slot.W_Slot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_Slot(int32_t EntryPoint); // Function W_Slot.W_Slot_C.ExecuteUbergraph_W_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

