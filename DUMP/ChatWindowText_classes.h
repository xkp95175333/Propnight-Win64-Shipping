// WidgetBlueprintGeneratedClass ChatWindowText.ChatWindowText_C
// Size: 0x339 (Inherited: 0x260)
struct UChatWindowText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Message; // 0x268(0x08)
	struct UHorizontalBox* MessageBox; // 0x270(0x08)
	struct UTextBlock* Nickname; // 0x278(0x08)
	struct UTextBlock* TypeMessage; // 0x280(0x08)
	struct FText NicknameText; // 0x288(0x18)
	struct FText MessageText; // 0x2a0(0x18)
	struct FText ChatTypeMessage; // 0x2b8(0x18)
	bool Killer?; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FSlateColor Normal; // 0x2d8(0x28)
	struct FSlateColor Killer; // 0x300(0x28)
	struct FTimerHandle HidingTimerHandler; // 0x328(0x08)
	struct FTimerHandle DisplayingTimerHandler; // 0x330(0x08)
	bool Interrupt; // 0x338(0x01)

	void IsClipped(bool IsClipped); // Function ChatWindowText.ChatWindowText_C.IsClipped // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function ChatWindowText.ChatWindowText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartHiding(float TimeOffset); // Function ChatWindowText.ChatWindowText_C.StartHiding // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartDisplaying(); // Function ChatWindowText.ChatWindowText_C.StartDisplaying // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HidingTick(); // Function ChatWindowText.ChatWindowText_C.HidingTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DisplayingTick(); // Function ChatWindowText.ChatWindowText_C.DisplayingTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ChatWindowText(int32_t EntryPoint); // Function ChatWindowText.ChatWindowText_C.ExecuteUbergraph_ChatWindowText // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

