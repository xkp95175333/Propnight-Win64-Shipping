// WidgetBlueprintGeneratedClass WBP_PlayWindow.WBP_PlayWindow_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_PlayWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Cancel; // 0x268(0x08)
	struct UCircularThrobber* CircularThrobber_152; // 0x270(0x08)
	struct UImage* Image_139; // 0x278(0x08)
	struct UImage* Image_248; // 0x280(0x08)
	struct UTextBlock* TextBlock_320; // 0x288(0x08)

	void Construct(); // Function WBP_PlayWindow.WBP_PlayWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PlayWindow.WBP_PlayWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ClearServers(); // Function WBP_PlayWindow.WBP_PlayWindow_C.ClearServers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CustomEvent_1(); // Function WBP_PlayWindow.WBP_PlayWindow_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_PlayWindow(int32_t EntryPoint); // Function WBP_PlayWindow.WBP_PlayWindow_C.ExecuteUbergraph_WBP_PlayWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

