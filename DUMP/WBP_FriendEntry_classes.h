// WidgetBlueprintGeneratedClass WBP_FriendEntry.WBP_FriendEntry_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_FriendEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Click_Anim; // 0x268(0x08)
	struct UButton* Button_FriendList; // 0x270(0x08)
	struct UButton* Button_FriendList_2; // 0x278(0x08)
	struct UImage* Image_BG; // 0x280(0x08)
	struct UImage* Image_ButtonIcon; // 0x288(0x08)
	struct UTextBlock* Text_Nickname; // 0x290(0x08)
	struct UWBP_MiniFriendEntry_ForList_C* WBP_MiniFriendEntry_ForList; // 0x298(0x08)
	struct FSteamFriend SteamStruct; // 0x2a0(0x28)

	void GetNickname(struct FString Nickname); // Function WBP_FriendEntry.WBP_FriendEntry_C.GetNickname // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetSteamID(struct FString ID); // Function WBP_FriendEntry.WBP_FriendEntry_C.GetSteamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_FriendEntry.WBP_FriendEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_FriendEntry_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendEntry.WBP_FriendEntry_C.BndEvt__WBP_FriendEntry_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_FriendEntry_Button_FriendList_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendEntry.WBP_FriendEntry_C.BndEvt__WBP_FriendEntry_Button_FriendList_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_FriendEntry(int32_t EntryPoint); // Function WBP_FriendEntry.WBP_FriendEntry_C.ExecuteUbergraph_WBP_FriendEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

