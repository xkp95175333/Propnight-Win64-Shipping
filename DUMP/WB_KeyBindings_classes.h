// WidgetBlueprintGeneratedClass WB_KeyBindings.WB_KeyBindings_C
// Size: 0x348 (Inherited: 0x260)
struct UWB_KeyBindings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_DefaultCfg; // 0x268(0x08)
	struct UProgressBar* ProgressBar_109; // 0x270(0x08)
	struct UScrollBox* ScrollBox_Main; // 0x278(0x08)
	struct UTextBlock* TextBlock_6; // 0x280(0x08)
	struct TArray<struct FName> Array_Movement; // 0x288(0x10)
	struct TArray<struct FName> Array_Surv; // 0x298(0x10)
	struct TArray<struct FName> Array_Killers; // 0x2a8(0x10)
	struct TArray<struct FName> Array_Spectator; // 0x2b8(0x10)
	struct TArray<struct FName> Array_Commons; // 0x2c8(0x10)
	struct FTransCfgInput_ACTION DefaultCfgActionKeys; // 0x2d8(0x10)
	struct FTransCfgInput_AXIS DefaultCfgAxisKeys; // 0x2e8(0x10)
	struct TArray<struct FInputActionKeyMapping> Jump; // 0x2f8(0x10)
	struct UWB_BindOverlayHeader_C* W_MovementHeader; // 0x308(0x08)
	struct UMouseSensivity_C* W_MouseSens; // 0x310(0x08)
	float CounterBackspace; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FTimerHandle TimerHandle; // 0x320(0x08)
	bool isCounterFull?; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UWidget* FocusHovered; // 0x330(0x08)
	struct FMulticastInlineDelegate BlockedBind; // 0x338(0x10)

	void PreConstruct(bool IsDesignTime); // Function WB_KeyBindings.WB_KeyBindings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WB_KeyBindings.WB_KeyBindings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WB_KeyBindings.WB_KeyBindings_C.BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void InitCfgInput(); // Function WB_KeyBindings.WB_KeyBindings_C.InitCfgInput // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BacktoDefaultPress(); // Function WB_KeyBindings.WB_KeyBindings_C.BacktoDefaultPress // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BacktoDefaultReleas(); // Function WB_KeyBindings.WB_KeyBindings_C.BacktoDefaultReleas // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClickEventDefCFG(); // Function WB_KeyBindings.WB_KeyBindings_C.ClickEventDefCFG // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_KeyBindings.WB_KeyBindings_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WB_KeyBindings.WB_KeyBindings_C.BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function WB_KeyBindings.WB_KeyBindings_C.BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void Wave_def0(); // Function WB_KeyBindings.WB_KeyBindings_C.Wave_def0 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Wave_def1(); // Function WB_KeyBindings.WB_KeyBindings_C.Wave_def1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopListenMenu_ButtonReset(); // Function WB_KeyBindings.WB_KeyBindings_C.StopListenMenu_ButtonReset // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartListenMenu_ButtonReset(); // Function WB_KeyBindings.WB_KeyBindings_C.StartListenMenu_ButtonReset // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WB_KeyBindings(int32_t EntryPoint); // Function WB_KeyBindings.WB_KeyBindings_C.ExecuteUbergraph_WB_KeyBindings // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void BlockedBind__DelegateSignature(bool Blocked?); // Function WB_KeyBindings.WB_KeyBindings_C.BlockedBind__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

