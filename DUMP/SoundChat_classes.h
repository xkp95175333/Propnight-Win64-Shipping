// WidgetBlueprintGeneratedClass SoundChat.SoundChat_C
// Size: 0x2c2 (Inherited: 0x260)
struct USoundChat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_102; // 0x268(0x08)
	struct UImage* Image_BlackScreen; // 0x270(0x08)
	struct UInventorySurvCommand_Radial_C* InventorySurvCommand_Radial; // 0x278(0x08)
	struct USoundCommand_Radial_C* SoundCommand_Radial; // 0x280(0x08)
	struct UTextBlock* TextBlock_58; // 0x288(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Circles; // 0x290(0x08)
	struct FFMODEventInstance Sound; // 0x298(0x08)
	bool FirstMenuOpen?; // 0x2a0(0x01)
	bool SecondMenuOpen?; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	int32_t SelectedSound; // 0x2a4(0x04)
	bool Open?; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct APawn* Owner; // 0x2b0(0x08)
	struct FVector2D InputVector; // 0x2b8(0x08)
	bool InventoryMenuOpen?; // 0x2c0(0x01)
	bool WidgetAcitve?; // 0x2c1(0x01)

	void CheckStatusSurvForDropItem(bool Call?); // Function SoundChat.SoundChat_C.CheckStatusSurvForDropItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPaint(struct FPaintContext Context); // Function SoundChat.SoundChat_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x132e1a0
	void 1Menu(); // Function SoundChat.SoundChat_C.1Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 2Menu(); // Function SoundChat.SoundChat_C.2Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 1MenuClose(); // Function SoundChat.SoundChat_C.1MenuClose // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 2MenuClose(); // Function SoundChat.SoundChat_C.2MenuClose // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartListenKeys(); // Function SoundChat.SoundChat_C.StartListenKeys // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set1(); // Function SoundChat.SoundChat_C.Set1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set2(); // Function SoundChat.SoundChat_C.Set2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set3(); // Function SoundChat.SoundChat_C.Set3 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set4(); // Function SoundChat.SoundChat_C.Set4 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set5(); // Function SoundChat.SoundChat_C.Set5 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set6(); // Function SoundChat.SoundChat_C.Set6 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set7(); // Function SoundChat.SoundChat_C.Set7 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set8(); // Function SoundChat.SoundChat_C.Set8 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set9(); // Function SoundChat.SoundChat_C.Set9 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Set0(); // Function SoundChat.SoundChat_C.Set0 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSound(int32_t Sound); // Function SoundChat.SoundChat_C.SendSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopListenKeys(); // Function SoundChat.SoundChat_C.StopListenKeys // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenChatMenu2(); // Function SoundChat.SoundChat_C.OpenChatMenu2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenChatMenu1(); // Function SoundChat.SoundChat_C.OpenChatMenu1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SoundChat.SoundChat_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function SoundChat.SoundChat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void GetSoundChatOwner(); // Function SoundChat.SoundChat_C.GetSoundChatOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Pressed(); // Function SoundChat.SoundChat_C.Enteract_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Released(); // Function SoundChat.SoundChat_C.Enteract_Released // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Close(); // Function SoundChat.SoundChat_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopListenEndGame(); // Function SoundChat.SoundChat_C.StopListenEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Pressed_Inv(); // Function SoundChat.SoundChat_C.Enteract_Pressed_Inv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Enteract_Released_Inv(); // Function SoundChat.SoundChat_C.Enteract_Released_Inv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenInventory(); // Function SoundChat.SoundChat_C.OpenInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Close_inventory(); // Function SoundChat.SoundChat_C.Close_inventory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseInventoryMenu(); // Function SoundChat.SoundChat_C.CloseInventoryMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SoundChat(int32_t EntryPoint); // Function SoundChat.SoundChat_C.ExecuteUbergraph_SoundChat // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

