// WidgetBlueprintGeneratedClass WBP_SkinSelector.WBP_SkinSelector_C
// Size: 0x2d9 (Inherited: 0x260)
struct UWBP_SkinSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_HeaderBG; // 0x268(0x08)
	struct UWBP_CustomComboBox_C* WBP_CustomComboBox; // 0x270(0x08)
	struct TMap<struct FName, struct FCharSkinStruct> Skins; // 0x278(0x50)
	enum class SurvChars Surv; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UW_MiniLobby_C* Parent; // 0x2d0(0x08)
	enum class LobbyCharacter Character; // 0x2d8(0x01)

	void GetSkinNameByID(int32_t SkinID, struct FName NewParam); // Function WBP_SkinSelector.WBP_SkinSelector_C.GetSkinNameByID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetAllSkinsForChar(enum class SurvChars Character); // Function WBP_SkinSelector.WBP_SkinSelector_C.GetAllSkinsForChar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature(struct FText EntryName, int32_t EntryIndex); // Function WBP_SkinSelector.WBP_SkinSelector_C.BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_SkinSelector(int32_t EntryPoint); // Function WBP_SkinSelector.WBP_SkinSelector_C.ExecuteUbergraph_WBP_SkinSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

