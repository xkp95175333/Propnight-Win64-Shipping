// WidgetBlueprintGeneratedClass W_PressAnyKeyScreen.W_PressAnyKeyScreen_C
// Size: 0x2f8 (Inherited: 0x260)
struct UW_PressAnyKeyScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HideTrhobber_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Throbber_Anim; // 0x270(0x08)
	struct UWidgetAnimation* Flashing_Anim; // 0x278(0x08)
	struct UWidgetAnimation* Fade_Anim; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x288(0x08)
	struct UImage* Image_81; // 0x290(0x08)
	struct UImage* Image_390; // 0x298(0x08)
	struct UImage* Image_BG; // 0x2a0(0x08)
	struct UImage* Image_Dark; // 0x2a8(0x08)
	struct UImage* Image_Logo; // 0x2b0(0x08)
	struct UImage* Image_Ref; // 0x2b8(0x08)
	struct UImage* Image_Throbber; // 0x2c0(0x08)
	struct UTextBlock* Text_WaitingLabel; // 0x2c8(0x08)
	bool IsActive; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate OnShown; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnHidden; // 0x2e8(0x10)

	void Construct(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Show(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hide(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Init(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnyKeyPressed(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.AnyKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayfabReady(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.PlayfabReady // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PressAnyKeyScreen(int32_t EntryPoint); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.ExecuteUbergraph_W_PressAnyKeyScreen // (Final|UbergraphFunction) // @ game+0x132e1a0
	void OnHidden__DelegateSignature(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.OnHidden__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnShown__DelegateSignature(); // Function W_PressAnyKeyScreen.W_PressAnyKeyScreen_C.OnShown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

