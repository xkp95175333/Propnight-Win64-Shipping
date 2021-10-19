// WidgetBlueprintGeneratedClass CustomGraphicButton.CustomGraphicButton_C
// Size: 0x329 (Inherited: 0x260)
struct UCustomGraphicButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_LeftClick; // 0x268(0x08)
	struct UButton* Button_LeftClick_4; // 0x270(0x08)
	struct UButton* Button_RightClick; // 0x278(0x08)
	struct UButton* Button_RightClick_4; // 0x280(0x08)
	struct UButton* ButtonReFocuser; // 0x288(0x08)
	struct UOverlay* Changer; // 0x290(0x08)
	struct UImage* Image_5; // 0x298(0x08)
	struct UImage* Image_6; // 0x2a0(0x08)
	struct UImage* Image_83; // 0x2a8(0x08)
	struct UImage* Image_92; // 0x2b0(0x08)
	struct UImage* Image_168; // 0x2b8(0x08)
	struct USafeZone* SafeZone_71; // 0x2c0(0x08)
	struct USafeZone* SafeZone_278; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_154; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_SET; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_SET_4; // 0x2e0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Left; // 0x2e8(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Right; // 0x2f8(0x10)
	struct FMulticastInlineDelegate EventDispatcher_FocusedStyle; // 0x308(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x318(0x10)
	bool bIsSelected; // 0x328(0x01)

	struct UWidget* DoNavigateRight(enum class EUINavigation Navigation); // Function CustomGraphicButton.CustomGraphicButton_C.DoNavigateRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoNavigateLeft(enum class EUINavigation Navigation); // Function CustomGraphicButton.CustomGraphicButton_C.DoNavigateLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_RightClick_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__Button_RightClick_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_LeftClick_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__Button_LeftClick_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__ButtonReFocuser_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Select(); // Function CustomGraphicButton.CustomGraphicButton_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Deselect(); // Function CustomGraphicButton.CustomGraphicButton_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_353_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__Button_353_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_138_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.BndEvt__Button_138_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomGraphicButton.CustomGraphicButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function CustomGraphicButton.CustomGraphicButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CustomGraphicButton(int32_t EntryPoint); // Function CustomGraphicButton.CustomGraphicButton_C.ExecuteUbergraph_CustomGraphicButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnPressed__DelegateSignature(struct UCustomGraphicButton_C* Button); // Function CustomGraphicButton.CustomGraphicButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_FocusedStyle__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.EventDispatcher_FocusedStyle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_Right__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.EventDispatcher_Right__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_Left__DelegateSignature(); // Function CustomGraphicButton.CustomGraphicButton_C.EventDispatcher_Left__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

