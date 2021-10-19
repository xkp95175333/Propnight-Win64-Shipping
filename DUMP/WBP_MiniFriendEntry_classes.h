// WidgetBlueprintGeneratedClass WBP_MiniFriendEntry.WBP_MiniFriendEntry_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_MiniFriendEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_124; // 0x268(0x08)
	struct UImage* Image_Avatar; // 0x270(0x08)
	struct UImage* Image_BG; // 0x278(0x08)
	struct UImage* Image_BG_2; // 0x280(0x08)
	struct UImage* Image_LeaderLobby; // 0x288(0x08)
	struct UOverlay* Overlay_Nickname; // 0x290(0x08)
	struct URetainerBox* RetainerBox_52; // 0x298(0x08)
	struct UTextBlock* TextBlock_Nickname; // 0x2a0(0x08)
	struct FVector2D AvatarSize; // 0x2a8(0x08)
	struct FString SteamId; // 0x2b0(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x2c0(0x08)
	struct FString Username; // 0x2c8(0x10)

	struct FText GetText_1(); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SetIsOnline(bool IsOnline); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.SetIsOnline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_MiniFriendEntry_Button_123_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.BndEvt__WBP_MiniFriendEntry_Button_123_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_MiniFriendEntry_Button_123_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.BndEvt__WBP_MiniFriendEntry_Button_123_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_MiniFriendEntry(int32_t EntryPoint); // Function WBP_MiniFriendEntry.WBP_MiniFriendEntry_C.ExecuteUbergraph_WBP_MiniFriendEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

