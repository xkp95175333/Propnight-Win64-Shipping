// WidgetBlueprintGeneratedClass WBP_DetailedFriendList.WBP_DetailedFriendList_C
// Size: 0x328 (Inherited: 0x260)
struct UWBP_DetailedFriendList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ChangeContent_Anim; // 0x268(0x08)
	struct UButton* Button_Friends; // 0x270(0x08)
	struct UButton* Button_Invites; // 0x278(0x08)
	struct UButton* Button_Search; // 0x280(0x08)
	struct UEditableTextBox* EditableTextBox_Hint; // 0x288(0x08)
	struct UEditableTextBox* EditableTextBox_SearchLine; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_105; // 0x2a0(0x08)
	struct UImage* Image_305; // 0x2a8(0x08)
	struct UImage* Image_396; // 0x2b0(0x08)
	struct UImage* Image_BG; // 0x2b8(0x08)
	struct UImage* Image_FriendsBtnBG; // 0x2c0(0x08)
	struct UImage* Image_InvetesBtnBG; // 0x2c8(0x08)
	struct UTextBlock* Text_InvitesBtn; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_FriendsBtn; // 0x2d8(0x08)
	struct UWBP_FriendsComboBox_C* WBP_FriendsComboBox_Offline; // 0x2e0(0x08)
	struct UWBP_FriendsComboBox_C* WBP_FriendsComboBox_Online; // 0x2e8(0x08)
	struct UWBP_FriendsComboBox_C* WBP_FriendsComboBox_Search; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Content; // 0x2f8(0x08)
	struct TArray<struct FSteamFriend> Friends; // 0x300(0x10)
	int32_t C_FRIENDS_PAGE; // 0x310(0x04)
	int32_t C_INVITES_PAGE; // 0x314(0x04)
	struct FMulticastInlineDelegate OnHide; // 0x318(0x10)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchFunction(struct FString Nickname, struct TArray<struct FSteamFriend> Friends); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SearchFunction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetFriendByID(struct FString SteamId, int32_t Index); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GetFriendByID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void InitFriends(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitFriends // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ComeOnline(struct FString SteamId); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ComeOnline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GoneOffline(struct FString SteamId); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GoneOffline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitButtons(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetCurrentPage(int32_t Page); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SetCurrentPage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GenerateFakeFriends(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GenerateFakeFriends // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_DetailedFriendList(int32_t EntryPoint); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ExecuteUbergraph_WBP_DetailedFriendList // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnHide__DelegateSignature(); // Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnHide__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

