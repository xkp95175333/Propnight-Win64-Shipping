// WidgetBlueprintGeneratedClass GraphicSettingsWBP1.GraphicSettingsWBP1_C
// Size: 0x4a8 (Inherited: 0x260)
struct UGraphicSettingsWBP1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCustomGraphicButton_C* AA_W; // 0x268(0x08)
	struct UButton* Button_ChangeFOcus; // 0x270(0x08)
	struct UCustomGraphicButton_C* EQ_W; // 0x278(0x08)
	struct UCustomGraphicButton_C* GQ_W; // 0x280(0x08)
	struct UCustomGraphicButton_C* MB_W; // 0x288(0x08)
	struct UCustomGraphicButton_C* PP_W; // 0x290(0x08)
	struct UCustomGraphicButton_C* RES_W; // 0x298(0x08)
	struct UCustomGraphicButton_C* SHQ_W; // 0x2a0(0x08)
	struct UCustomGraphicButton_C* SM_W; // 0x2a8(0x08)
	struct UCustomGraphicButton_C* SQ_W; // 0x2b0(0x08)
	struct UCustomGraphicButton_C* TQ_W; // 0x2b8(0x08)
	struct UCustomGraphicButton_C* VSyn_W; // 0x2c0(0x08)
	struct TArray<struct FText> MainSettings; // 0x2c8(0x10)
	struct TArray<struct FText> MainSettings_1; // 0x2d8(0x10)
	struct TArray<struct FText> Resolutions; // 0x2e8(0x10)
	int32_t GraphIndex; // 0x2f8(0x04)
	int32_t PPIndex; // 0x2fc(0x04)
	int32_t AAIndex; // 0x300(0x04)
	int32_t ShadowIndex; // 0x304(0x04)
	int32_t ResIndex; // 0x308(0x04)
	int32_t ScreenIndex; // 0x30c(0x04)
	struct TArray<struct FText> GraphCom; // 0x310(0x10)
	struct TArray<struct FText> PPCom; // 0x320(0x10)
	struct TArray<struct FText> AACom; // 0x330(0x10)
	struct TArray<struct FText> ShadowCom; // 0x340(0x10)
	struct TArray<struct FText> ResCom; // 0x350(0x10)
	struct TArray<struct FText> ScreenText; // 0x360(0x10)
	struct TArray<struct FIntPoint> Ress; // 0x370(0x10)
	struct TArray<struct FText> ScreenStrings; // 0x380(0x10)
	struct USaveGame* Saved; // 0x390(0x08)
	struct TArray<struct FText> SHQCom; // 0x398(0x10)
	struct TArray<struct FText> SHQSettings; // 0x3a8(0x10)
	int32_t SHQIndex; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct FText> MBCom; // 0x3c0(0x10)
	int32_t MBIndex; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FText> MB_TextBtn; // 0x3d8(0x10)
	struct UButton* LastKnowFocused; // 0x3e8(0x08)
	struct UButton* HoverFocus; // 0x3f0(0x08)
	struct UCustomGraphicButton_C* LastKnowFocusKeyboard; // 0x3f8(0x08)
	struct FMulticastInlineDelegate EventDispatcher_UpPress; // 0x400(0x10)
	struct TArray<struct UButton*> ArrayButtons; // 0x410(0x10)
	bool MouseController?; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UCustomGraphicButton_C* Selected; // 0x428(0x08)
	struct TArray<struct FText> EQCOM; // 0x430(0x10)
	struct TArray<struct FText> EQ_TextBtn; // 0x440(0x10)
	int32_t EQIndex; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct FText> VSyncCom; // 0x458(0x10)
	int32_t VSyncIndex; // 0x468(0x04)
	int32_t TQIndex; // 0x46c(0x04)
	struct TArray<struct FText> TQCOM; // 0x470(0x10)
	struct TArray<struct FText> TQCOM_Bias; // 0x480(0x10)
	struct TArray<struct FText> TQCOM_Pool; // 0x490(0x10)
	struct UWidget* KeyboardHoveredWidget; // 0x4a0(0x08)

	struct FText GetText_11(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_11 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_21(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_21 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_20(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_20 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetText_10(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_10 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_19(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_19 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_18(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_18 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetText_9(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_9 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_17(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_17 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_16(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_16 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_15(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_15 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_14(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_14 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_13(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_13 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_12(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_12 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_11(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_11 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_10(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_10 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_9(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_9 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_8(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_8 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_7(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_7 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_5(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_5 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_6(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_6 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* Do Custom Navigation 4(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Do Custom Navigation 4 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_4(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_4 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_3(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_3 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_2(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocusMouse(struct UCustomGraphicButton_C* Output_Get); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.LastKnowFocusMouse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct UWidget* DoCustomNavigation_UP(enum class EUINavigation Navigation); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.DoCustomNavigation_UP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LastKnowFocus(struct UButton* Output_Get, struct UCustomGraphicButton_C* Output_Get1); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.LastKnowFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Execute Com Func(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Execute Com Func // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	struct FText GetText_8(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_8 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_7(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_7 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_6(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_6 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_5(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_5 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_4(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_4 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_3(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_2(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	struct FText GetText_1(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GetText_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Save(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Save // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Load Func(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Load Func // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScrenText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ScrenText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ResText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ResText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ShadowText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ShadowText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void AAText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.AAText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PPText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.PPText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GraphText(struct FText Text); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.GraphText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ChangePanel(struct UCustomGraphicButton_C* Overlay, struct UTextBlock* Title, struct UTextBlock* Value, struct UImage* Image, struct UImage* LowBTN, struct UImage* HigthBTN, int32_t Index, int32_t Lenght, bool B); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ChangePanel // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeButtonColor(struct UImage* Low, struct UImage* Higth, bool Condition, int32_t Index, int32_t Lenght, bool B); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ChangeButtonColor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_19_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_19_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_21_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_21_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetTextForWButtons(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.SetTextForWButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PP_W_K2Node_ComponentBoundEvent_23_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__PP_W_K2Node_ComponentBoundEvent_23_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PP_W_K2Node_ComponentBoundEvent_24_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__PP_W_K2Node_ComponentBoundEvent_24_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__AA_W_K2Node_ComponentBoundEvent_27_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__AA_W_K2Node_ComponentBoundEvent_27_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__AA_W_K2Node_ComponentBoundEvent_28_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__AA_W_K2Node_ComponentBoundEvent_28_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SQ_W_K2Node_ComponentBoundEvent_33_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__SQ_W_K2Node_ComponentBoundEvent_33_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SQ_W_K2Node_ComponentBoundEvent_34_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__SQ_W_K2Node_ComponentBoundEvent_34_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__RES_W_K2Node_ComponentBoundEvent_37_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__RES_W_K2Node_ComponentBoundEvent_37_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__RES_W_K2Node_ComponentBoundEvent_38_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__RES_W_K2Node_ComponentBoundEvent_38_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SM_W_K2Node_ComponentBoundEvent_41_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__SM_W_K2Node_ComponentBoundEvent_41_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__SM_W_K2Node_ComponentBoundEvent_42_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__SM_W_K2Node_ComponentBoundEvent_42_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__AAM_W_K2Node_ComponentBoundEvent_45_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__AAM_W_K2Node_ComponentBoundEvent_45_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__AAM_W_K2Node_ComponentBoundEvent_46_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__AAM_W_K2Node_ComponentBoundEvent_46_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetFocusToMouse(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.SetFocusToMouse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void LostFocusMouseClick(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.LostFocusMouseClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_2_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_2_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_4_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_4_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ChangedSelection(struct UCustomGraphicButton_C* Button); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ChangedSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_0_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_0_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_1_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_1_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_5_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_5_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_6_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_6_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_7_EventDispatcher_Left__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_7_EventDispatcher_Left__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_8_EventDispatcher_Right__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_8_EventDispatcher_Right__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GraphicSettingsWBP1(int32_t EntryPoint); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.ExecuteUbergraph_GraphicSettingsWBP1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void EventDispatcher_UpPress__DelegateSignature(); // Function GraphicSettingsWBP1.GraphicSettingsWBP1_C.EventDispatcher_UpPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

