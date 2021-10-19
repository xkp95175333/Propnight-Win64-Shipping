// WidgetBlueprintGeneratedClass W_SlotM.W_SlotM_C
// Size: 0x3d8 (Inherited: 0x260)
struct UW_SlotM_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loading; // 0x268(0x08)
	struct UWidgetAnimation* MiniSearching; // 0x270(0x08)
	struct UWidgetAnimation* SearchingAnimation; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct UImage* Image_2; // 0x288(0x08)
	struct UImage* Image_3; // 0x290(0x08)
	struct UImage* Image_4; // 0x298(0x08)
	struct UImage* Image_5; // 0x2a0(0x08)
	struct UImage* Image_6; // 0x2a8(0x08)
	struct UImage* Image_7; // 0x2b0(0x08)
	struct UImage* Image_8; // 0x2b8(0x08)
	struct UImage* Image_9; // 0x2c0(0x08)
	struct UImage* Image_10; // 0x2c8(0x08)
	struct UImage* Image_11; // 0x2d0(0x08)
	struct UImage* Image_12; // 0x2d8(0x08)
	struct UImage* Image_13; // 0x2e0(0x08)
	struct UImage* Image_14; // 0x2e8(0x08)
	struct UImage* Image_15; // 0x2f0(0x08)
	struct UImage* Image_16; // 0x2f8(0x08)
	struct UImage* Image_126; // 0x300(0x08)
	struct UImage* Image_189; // 0x308(0x08)
	struct UImage* Image_412; // 0x310(0x08)
	struct UImage* Image_899; // 0x318(0x08)
	struct UImage* Image_1113; // 0x320(0x08)
	struct UImage* Image_Check; // 0x328(0x08)
	struct UImage* Image_Check_2; // 0x330(0x08)
	struct UImage* Image_Krug; // 0x338(0x08)
	struct UImage* Image_Krug_2; // 0x340(0x08)
	struct UImage* Image_Krug_3; // 0x348(0x08)
	struct UWidgetSwitcher* PlayerSlotSwitcher; // 0x350(0x08)
	struct UWidgetSwitcher* PlayerTypeSwitcher; // 0x358(0x08)
	struct UWidgetSwitcher* ReadySwitcher; // 0x360(0x08)
	struct UButton* ReserveButton; // 0x368(0x08)
	struct UTextBlock* SlotName1; // 0x370(0x08)
	struct UTextBlock* SlotName2; // 0x378(0x08)
	struct UWidgetSwitcher* SurvTypeSwitcher; // 0x380(0x08)
	struct UTextBlock* TextBlock; // 0x388(0x08)
	struct UTextBlock* TextBlock_201; // 0x390(0x08)
	struct FText Text; // 0x398(0x18)
	struct FString Name; // 0x3b0(0x10)
	bool IsMySlot; // 0x3c0(0x01)
	enum class SurvClass SurvClassEnum; // 0x3c1(0x01)
	bool ImKiller; // 0x3c2(0x01)
	char pad_3C3[0x5]; // 0x3c3(0x05)
	struct APlayerState* PlayerState; // 0x3c8(0x08)
	struct UW_MiniLobby_C* W_MiniLobbby; // 0x3d0(0x08)

	enum class ESlateVisibility Get Visibility 0(); // Function W_SlotM.W_SlotM_C.Get Visibility 0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility Get_SurvClass_Visibility_2(); // Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	enum class ESlateVisibility Get_SurvClass_Visibility_1(); // Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ChangeState(struct FText Text, struct UTexture2D* ava); // Function W_SlotM.W_SlotM_C.ChangeState // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Process(struct AActor* Controller); // Function W_SlotM.W_SlotM_C.Process // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeIcon(); // Function W_SlotM.W_SlotM_C.ChangeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeIconSurvClass(struct APlayerState* PlayerState); // Function W_SlotM.W_SlotM_C.ChangeIconSurvClass // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeReadyIcon(struct APlayerState* PlayerState); // Function W_SlotM.W_SlotM_C.ChangeReadyIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_SlotM.W_SlotM_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void SetSlotName(struct FString Name); // Function W_SlotM.W_SlotM_C.SetSlotName // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSlotText(struct FString Text); // Function W_SlotM.W_SlotM_C.SetSlotText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_SlotM.W_SlotM_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_SlotM.W_SlotM_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_SlotM(int32_t EntryPoint); // Function W_SlotM.W_SlotM_C.ExecuteUbergraph_W_SlotM // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

