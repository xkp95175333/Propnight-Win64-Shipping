// WidgetBlueprintGeneratedClass WBP_SocialUI.WBP_SocialUI_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_SocialUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowHide_DetailedFriendList; // 0x268(0x08)
	struct UWidgetAnimation* ShowHide_MiniFriendList; // 0x270(0x08)
	struct UButton* Button_Hide; // 0x278(0x08)
	struct UWBP_DetailedFriendList_C* WBP_DetailedFriendList; // 0x280(0x08)
	struct UWBP_MiniFriendList_C* WBP_MiniFriendList; // 0x288(0x08)
	struct FMulticastInlineDelegate OnShowDetailed; // 0x290(0x10)
	bool Visible; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnHideDetailed; // 0x2a8(0x10)

	void IsInTeam(bool In); // Function WBP_SocialUI.WBP_SocialUI_C.IsInTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnUserEnterLobby(struct FString Name, struct FString SteamId); // Function WBP_SocialUI.WBP_SocialUI_C.OnUserEnterLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnUserLeftLobby(struct FString Name, struct FString SteamId); // Function WBP_SocialUI.WBP_SocialUI_C.OnUserLeftLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AutoClose(); // Function WBP_SocialUI.WBP_SocialUI_C.AutoClose // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(); // Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SocialUI.WBP_SocialUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_SocialUI.WBP_SocialUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_SocialUI(int32_t EntryPoint); // Function WBP_SocialUI.WBP_SocialUI_C.ExecuteUbergraph_WBP_SocialUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnHideDetailed__DelegateSignature(); // Function WBP_SocialUI.WBP_SocialUI_C.OnHideDetailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnShowDetailed__DelegateSignature(); // Function WBP_SocialUI.WBP_SocialUI_C.OnShowDetailed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

