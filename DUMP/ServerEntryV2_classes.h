// WidgetBlueprintGeneratedClass ServerEntryV2.ServerEntryV2_C
// Size: 0x3b0 (Inherited: 0x260)
struct UServerEntryV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_68; // 0x268(0x08)
	struct UTextBlock* Host; // 0x270(0x08)
	struct UButton* JoinButton; // 0x278(0x08)
	struct UTextBlock* Map; // 0x280(0x08)
	struct UTextBlock* Mode; // 0x288(0x08)
	struct UTextBlock* Players; // 0x290(0x08)
	struct UTextBlock* Status; // 0x298(0x08)
	struct FBlueprintSessionResult Session; // 0x2a0(0x108)
	struct UBP_SessionData_C* SessionData; // 0x3a8(0x08)

	void SetSession(struct FBlueprintSessionResult Session); // Function ServerEntryV2.ServerEntryV2_C.SetSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_30C944CC4FA8C7F105DDA7B26588493C(); // Function ServerEntryV2.ServerEntryV2_C.OnFailure_30C944CC4FA8C7F105DDA7B26588493C // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_30C944CC4FA8C7F105DDA7B26588493C(); // Function ServerEntryV2.ServerEntryV2_C.OnSuccess_30C944CC4FA8C7F105DDA7B26588493C // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ServerEntryV2.ServerEntryV2_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ServerEntryV2.ServerEntryV2_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ServerEntryV2.ServerEntryV2_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void FetchDetails(); // Function ServerEntryV2.ServerEntryV2_C.FetchDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function ServerEntryV2.ServerEntryV2_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BP_OnEntryReleased(); // Function ServerEntryV2.ServerEntryV2_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ServerEntryV2(int32_t EntryPoint); // Function ServerEntryV2.ServerEntryV2_C.ExecuteUbergraph_ServerEntryV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

