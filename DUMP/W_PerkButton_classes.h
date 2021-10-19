// WidgetBlueprintGeneratedClass W_PerkButton.W_PerkButton_C
// Size: 0x2a8 (Inherited: 0x260)
struct UW_PerkButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* NamePerk; // 0x268(0x08)
	struct UButton* PerkButton; // 0x270(0x08)
	struct FString PerkName; // 0x278(0x10)
	struct FString PerkDesc; // 0x288(0x10)
	struct UW_MainMenu_C* Owner; // 0x298(0x08)
	struct UPerk_C* PerkClass; // 0x2a0(0x08)

	void BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_PerkButton.W_PerkButton_C.BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CustomPress(); // Function W_PerkButton.W_PerkButton_C.CustomPress // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PerkButton(int32_t EntryPoint); // Function W_PerkButton.W_PerkButton_C.ExecuteUbergraph_W_PerkButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

