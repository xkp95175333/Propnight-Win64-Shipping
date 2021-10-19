// WidgetBlueprintGeneratedClass CustomVoiceButton.CustomVoiceButton_C
// Size: 0x420 (Inherited: 0x260)
struct UCustomVoiceButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_LeftClick_4; // 0x268(0x08)
	struct UButton* Button_RightClick_4; // 0x270(0x08)
	struct UOverlay* Changer; // 0x278(0x08)
	struct UComboBoxString* ComboBox_InputDevice_2; // 0x280(0x08)
	struct UImage* Image_5; // 0x288(0x08)
	struct UImage* Image_6; // 0x290(0x08)
	struct UImage* Image_83; // 0x298(0x08)
	struct USafeZone* SafeZone_71; // 0x2a0(0x08)
	struct USafeZone* SafeZone_278; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_154; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_SET_4; // 0x2b8(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Left; // 0x2c0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Right; // 0x2d0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_FocusedStyle; // 0x2e0(0x10)
	struct FSlateBrush NewVar_1; // 0x2f0(0x88)
	struct FSlateBrush NewVar_2; // 0x378(0x88)
	struct FMulticastInlineDelegate EventDispatcher_SetMicrophone; // 0x400(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Open; // 0x410(0x10)

	struct UWidget* DoNavigateRight(enum class EUINavigation Navigation); // Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoNavigateLeft(enum class EUINavigation Navigation); // Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function CustomVoiceButton.CustomVoiceButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomVoiceButton.CustomVoiceButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CustomVoiceButton(int32_t EntryPoint); // Function CustomVoiceButton.CustomVoiceButton_C.ExecuteUbergraph_CustomVoiceButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void EventDispatcher_Open__DelegateSignature(); // Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Open__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_SetMicrophone__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_SetMicrophone__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_FocusedStyle__DelegateSignature(); // Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_FocusedStyle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_Right__DelegateSignature(); // Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Right__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EventDispatcher_Left__DelegateSignature(); // Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Left__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

