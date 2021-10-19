// WidgetBlueprintGeneratedClass W_PrivateGame.W_PrivateGame_C
// Size: 0x9a0 (Inherited: 0x260)
struct UW_PrivateGame_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Disappearance_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Appearance_Anim; // 0x270(0x08)
	struct UWidgetAnimation* ChangeStatus_Anim; // 0x278(0x08)
	struct UWidgetAnimation* Successed_Anim; // 0x280(0x08)
	struct UWidgetAnimation* Failed_Anim; // 0x288(0x08)
	struct UButton* Button_Cancel; // 0x290(0x08)
	struct UButton* Button_Connect; // 0x298(0x08)
	struct UButton* Button_Paste; // 0x2a0(0x08)
	struct UEditableTextBox* EditableTextBox_Password; // 0x2a8(0x08)
	struct UEditableTextBox* EditableTextBox_Password_View; // 0x2b0(0x08)
	struct UImage* Image_116; // 0x2b8(0x08)
	struct UImage* Image_BlackScreen; // 0x2c0(0x08)
	struct UImage* Image_DialogBG; // 0x2c8(0x08)
	struct UImage* Image_PassBG; // 0x2d0(0x08)
	struct UImage* Image_ScreenRef; // 0x2d8(0x08)
	struct UTextBlock* Label_Status; // 0x2e0(0x08)
	struct USizeBox* SizeBox_Dialog; // 0x2e8(0x08)
	struct UTextBlock* TextBlock; // 0x2f0(0x08)
	struct Uw_ServerBrowser_C* Browser; // 0x2f8(0x08)
	struct FSlateBrush In Brush_Wrong; // 0x300(0x88)
	struct FSlateBrush In Brush_Right; // 0x388(0x88)
	struct FSlateBrush In Brush_Default; // 0x410(0x88)
	struct FButtonStyle In Style_btn; // 0x498(0x278)
	struct FButtonStyle In Style_btn_Default; // 0x710(0x278)
	bool IsSearching; // 0x988(0x01)
	bool IsShown; // 0x989(0x01)
	char pad_98A[0x6]; // 0x98a(0x06)
	struct FString PassView; // 0x990(0x10)

	void CreatePassView(int32_t SymNum, struct FString Result); // Function W_PrivateGame.W_PrivateGame_C.CreatePassView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_Button_JoinPrivate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_Button_JoinPrivate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void WrongPassword(); // Function W_PrivateGame.W_PrivateGame_C.WrongPassword // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RightPassword(); // Function W_PrivateGame.W_PrivateGame_C.RightPassword // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_PrivateGame.W_PrivateGame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_Button_287_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_Button_287_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OnFailed(); // Function W_PrivateGame.W_PrivateGame_C.OnFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccessed(); // Function W_PrivateGame.W_PrivateGame_C.OnSuccessed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayShowAnim(); // Function W_PrivateGame.W_PrivateGame_C.PlayShowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayHideAnim(); // Function W_PrivateGame.W_PrivateGame_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Cancel(); // Function W_PrivateGame.W_PrivateGame_C.Cancel // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Join(); // Function W_PrivateGame.W_PrivateGame_C.Join // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_EditableTextBox_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_EditableTextBox_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_PrivateGame_EditableTextBox_Password_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function W_PrivateGame.W_PrivateGame_C.BndEvt__W_PrivateGame_EditableTextBox_Password_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_PrivateGame.W_PrivateGame_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PrivateGame(int32_t EntryPoint); // Function W_PrivateGame.W_PrivateGame_C.ExecuteUbergraph_W_PrivateGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

