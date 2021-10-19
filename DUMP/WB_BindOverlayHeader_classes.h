// WidgetBlueprintGeneratedClass WB_BindOverlayHeader.WB_BindOverlayHeader_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWB_BindOverlayHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* ButtonReFocuser; // 0x268(0x08)
	struct UOverlay* Changer; // 0x270(0x08)
	struct UImage* Image_83; // 0x278(0x08)
	struct USafeZone* SafeZone_71; // 0x280(0x08)
	struct USizeBox* SizeBox_Main; // 0x288(0x08)
	struct UTextBlock* TextBlock_SomeTEXT; // 0x290(0x08)
	bool bIsSelected; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate EventDispatcher_LeftBtn; // 0x2a0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_RightBtn; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	struct FName InputName; // 0x2d0(0x08)

	struct UWidget* DoNavigateRight(enum class EUINavigation Navigation); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoNavigateLeft(enum class EUINavigation Navigation); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BP_OnEntryReleased(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Select(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WB_BindOverlayHeader(int32_t EntryPoint); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.ExecuteUbergraph_WB_BindOverlayHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnPressed__DelegateSignature(struct UWB_BindOverlayHeader_C* Button); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_RightBtn__DelegateSignature(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_RightBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_LeftBtn__DelegateSignature(); // Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_LeftBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

