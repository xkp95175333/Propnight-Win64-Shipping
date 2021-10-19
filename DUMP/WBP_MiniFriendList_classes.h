// WidgetBlueprintGeneratedClass WBP_MiniFriendList.WBP_MiniFriendList_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_MiniFriendList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_FriendList; // 0x268(0x08)
	struct UImage* Image_ButtonBG; // 0x270(0x08)
	struct UImage* Image_ButtonIcon; // 0x278(0x08)
	struct UWBP_MiniFriendEntry_C* WBP_MiniFriendEntry_1; // 0x280(0x08)
	struct UWBP_MiniFriendEntry_C* WBP_MiniFriendEntry_2; // 0x288(0x08)
	struct UWBP_MiniFriendEntry_C* WBP_MiniFriendEntry_3; // 0x290(0x08)
	struct UWBP_MiniFriendEntry_C* WBP_MiniFriendEntry_4; // 0x298(0x08)
	struct UWBP_SelfInfo_C* WBP_SelfInfo_68; // 0x2a0(0x08)
	struct TArray<struct UWBP_MiniFriendEntry_C*> Slots; // 0x2a8(0x10)
	struct TArray<struct UWBP_MiniFriendEntry_C*> EmptySlots; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2c8(0x10)

	void RemoveEntry(struct FString SteamId); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.RemoveEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddEntry(struct FString SteamId, struct FString NameUser, bool Added); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.AddEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HasEntry(struct FString SteamId, bool Result); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.HasEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetEmptySlot(struct UWBP_MiniFriendEntry_C* Slot); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.GetEmptySlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void GoneOffline(struct FString SteamId); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.GoneOffline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_MiniFriendList(int32_t EntryPoint); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.ExecuteUbergraph_WBP_MiniFriendList // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnButtonPressed__DelegateSignature(); // Function WBP_MiniFriendList.WBP_MiniFriendList_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

