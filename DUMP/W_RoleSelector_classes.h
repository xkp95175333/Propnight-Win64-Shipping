// WidgetBlueprintGeneratedClass W_RoleSelector.W_RoleSelector_C
// Size: 0x2c9 (Inherited: 0x260)
struct UW_RoleSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Any; // 0x268(0x08)
	struct UButton* Button_Killer; // 0x270(0x08)
	struct UButton* Button_Surv; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct UImage* Image_174; // 0x288(0x08)
	struct UImage* Image_267; // 0x290(0x08)
	struct UImage* Image_AR_Indicator; // 0x298(0x08)
	struct UImage* Image_K_Indicator; // 0x2a0(0x08)
	struct UImage* Image_S_Indicator; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_188; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_300; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_399; // 0x2c0(0x08)
	enum class E_RoleType RoleType; // 0x2c8(0x01)

	void Construct(); // Function W_RoleSelector.W_RoleSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Any_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Surv_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // Function W_RoleSelector.W_RoleSelector_C.BndEvt__W_RoleSelector_Button_Killer_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SelectAny(); // Function W_RoleSelector.W_RoleSelector_C.SelectAny // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_RoleSelector(int32_t EntryPoint); // Function W_RoleSelector.W_RoleSelector_C.ExecuteUbergraph_W_RoleSelector // (Final|UbergraphFunction) // @ game+0x132e1a0
};

