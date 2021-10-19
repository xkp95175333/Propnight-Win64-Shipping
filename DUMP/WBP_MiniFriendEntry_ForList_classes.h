// WidgetBlueprintGeneratedClass WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_MiniFriendEntry_ForList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Avatar; // 0x268(0x08)
	struct UImage* Image_BG; // 0x270(0x08)
	struct URetainerBox* RetainerBox_52; // 0x278(0x08)
	struct FVector2D AvatarSize; // 0x280(0x08)
	struct FString SteamId; // 0x288(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x298(0x08)

	struct FText GetText_1(); // Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SetIsOnline(bool IsOnline); // Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.SetIsOnline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_MiniFriendEntry_ForList(int32_t EntryPoint); // Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.ExecuteUbergraph_WBP_MiniFriendEntry_ForList // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

