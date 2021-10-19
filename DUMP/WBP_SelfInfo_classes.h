// WidgetBlueprintGeneratedClass WBP_SelfInfo.WBP_SelfInfo_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_SelfInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_BG; // 0x268(0x08)
	struct UImage* Image_LeaderLobby; // 0x270(0x08)
	struct UImage* Image_SelfAvatar; // 0x278(0x08)
	struct UImage* Image_SelfAvatarBG; // 0x280(0x08)
	struct UTextBlock* Text_Nickname; // 0x288(0x08)

	void Construct(); // Function WBP_SelfInfo.WBP_SelfInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SelfInfo.WBP_SelfInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_SelfInfo(int32_t EntryPoint); // Function WBP_SelfInfo.WBP_SelfInfo_C.ExecuteUbergraph_WBP_SelfInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

