// WidgetBlueprintGeneratedClass ChatWindow.ChatWindow_C
// Size: 0x330 (Inherited: 0x260)
struct UChatWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x268(0x08)
	struct UScrollBox* ChatLog; // 0x270(0x08)
	struct UButton* HiddenCloseChatButton; // 0x278(0x08)
	struct UImage* Image_77; // 0x280(0x08)
	struct UImage* Image_91; // 0x288(0x08)
	struct UImage* Image_104; // 0x290(0x08)
	struct UImage* Image_192; // 0x298(0x08)
	struct UImage* Image_Fake; // 0x2a0(0x08)
	struct UImage* Image_Ref; // 0x2a8(0x08)
	struct UImage* Image_ScrollBG; // 0x2b0(0x08)
	struct UImage* Image_ScrollThumb; // 0x2b8(0x08)
	struct UMultiLineEditableText* MultiLineChatEntry; // 0x2c0(0x08)
	struct UOverlay* OverlayChatEntry; // 0x2c8(0x08)
	struct USizeBox* SB_ScrollRail; // 0x2d0(0x08)
	struct UTextBlock* TypeMessage; // 0x2d8(0x08)
	struct UBorder* Window; // 0x2e0(0x08)
	bool Global?; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	struct FLinearColor VisibleWindow; // 0x2ec(0x10)
	struct FLinearColor HiddenWindow; // 0x2fc(0x10)
	bool CustomOpen?; // 0x30c(0x01)
	bool IsChatVisible; // 0x30d(0x01)
	bool IsShiftPressed; // 0x30e(0x01)
	char pad_30F[0x1]; // 0x30f(0x01)
	float CurrentScrollOffset; // 0x310(0x04)
	float EndScrollOffset; // 0x314(0x04)
	bool NeedAutoScroll; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float AutoScrollSpeed; // 0x31c(0x04)
	float ChatLogHeight; // 0x320(0x04)
	bool FakeRemoved; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float DefaultTimeOffset; // 0x328(0x04)
	float CurrentTimeOffset; // 0x32c(0x04)

	void FormatSenterName(struct FText Sender, struct FText Character, struct FText Result); // Function ChatWindow.ChatWindow_C.FormatSenterName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatWindow.ChatWindow_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatWindow.ChatWindow_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatWindow.ChatWindow_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function ChatWindow.ChatWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ChatWindow.ChatWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void UpdateChatWindow(struct FText Sender, struct FText Text, struct FText Type, bool Killer?, bool ItsMe?); // Function ChatWindow.ChatWindow_C.UpdateChatWindow // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GeneralChat(); // Function ChatWindow.ChatWindow_C.GeneralChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeamChat(); // Function ChatWindow.ChatWindow_C.TeamChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ChatWindow.ChatWindow_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OpenChat(); // Function ChatWindow.ChatWindow_C.OpenChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseChat(); // Function ChatWindow.ChatWindow_C.CloseChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChat(int32_t Sound, int32_t menu); // Function ChatWindow.ChatWindow_C.SoundChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatBlocked(); // Function ChatWindow.ChatWindow_C.SoundChatBlocked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function ChatWindow.ChatWindow_C.BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void CommitChatMessage(struct FText Text, enum class ETextCommit Commit Method); // Function ChatWindow.ChatWindow_C.CommitChatMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnimatedAutoScroll_Tick(); // Function ChatWindow.ChatWindow_C.AnimatedAutoScroll_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateScrubberPos(); // Function ChatWindow.ChatWindow_C.UpdateScrubberPos // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateScrubberSize(); // Function ChatWindow.ChatWindow_C.UpdateScrubberSize // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetHidding(); // Function ChatWindow.ChatWindow_C.ResetHidding // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideAllMessages(); // Function ChatWindow.ChatWindow_C.HideAllMessages // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowAllMessages(); // Function ChatWindow.ChatWindow_C.ShowAllMessages // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ChatWindow(int32_t EntryPoint); // Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

