// WidgetBlueprintGeneratedClass W_LobbySurv.W_LobbySurv_C
// Size: 0x2cd (Inherited: 0x260)
struct UW_LobbySurv_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Select_Anim; // 0x268(0x08)
	struct UWidgetAnimation* PickSurv; // 0x270(0x08)
	struct UButton* Button; // 0x278(0x08)
	struct UImage* Image_133; // 0x280(0x08)
	struct UImage* Image_RedBlur; // 0x288(0x08)
	struct UOverlay* Overlay_FULL; // 0x290(0x08)
	struct UImage* ProfessionImage; // 0x298(0x08)
	struct UTextBlock* ProfessionText; // 0x2a0(0x08)
	struct UW_MiniLobby_Role_C* W_MiniLobby_Role; // 0x2a8(0x08)
	enum class SurvClass SurvClass; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UW_MiniLobby_C* Owner; // 0x2b8(0x08)
	enum class SurvSkills SurvSkill; // 0x2c0(0x01)
	bool Class?; // 0x2c1(0x01)
	enum class SurvChars Char; // 0x2c2(0x01)
	bool bStartAnimButton?UP; // 0x2c3(0x01)
	bool bStartAnimButton?DOWN; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float CounterTimeUP; // 0x2c8(0x04)
	bool Selected; // 0x2cc(0x01)

	void BndEvt__W_LobbySurv_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_LobbySurv.W_LobbySurv_C.BndEvt__W_LobbySurv_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void AnimDOWN(); // Function W_LobbySurv.W_LobbySurv_C.AnimDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_LobbySurv_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function W_LobbySurv.W_LobbySurv_C.BndEvt__W_LobbySurv_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetButtonInfoSkill(enum class SurvSkills Skill, struct UW_MiniLobby_C* Owner); // Function W_LobbySurv.W_LobbySurv_C.SetButtonInfoSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetFirst(); // Function W_LobbySurv.W_LobbySurv_C.SetFirst // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetButtonInfo(enum class SurvClass Class, struct UW_MiniLobby_C* Owner, enum class SurvChars Char); // Function W_LobbySurv.W_LobbySurv_C.SetButtonInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetButton(); // Function W_LobbySurv.W_LobbySurv_C.ResetButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_LobbySurv.W_LobbySurv_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_LobbySurv.W_LobbySurv_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_LobbySurv.W_LobbySurv_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_LobbySurv(int32_t EntryPoint); // Function W_LobbySurv.W_LobbySurv_C.ExecuteUbergraph_W_LobbySurv // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

