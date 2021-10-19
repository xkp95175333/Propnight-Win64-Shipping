// BlueprintGeneratedClass HUD_MainMenu.HUD_MainMenu_C
// Size: 0x340 (Inherited: 0x310)
struct AHUD_MainMenu_C : AHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct UW_MainMenu_C* Widget; // 0x320(0x08)
	struct UGeneralSettingWBP_C* Settings; // 0x328(0x08)
	struct UWBP_PlayWindow_C* PlayWindow; // 0x330(0x08)
	struct UW_LoadingScreen_C* LoadingScreen; // 0x338(0x08)

	void InitSettings(); // Function HUD_MainMenu.HUD_MainMenu_C.InitSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitPlaWindow(); // Function HUD_MainMenu.HUD_MainMenu_C.InitPlaWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveSetting(); // Function HUD_MainMenu.HUD_MainMenu_C.RemoveSetting // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMatchCanceled(); // Function HUD_MainMenu.HUD_MainMenu_C.OnMatchCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitLoadingScreen(); // Function HUD_MainMenu.HUD_MainMenu_C.InitLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreen(); // Function HUD_MainMenu.HUD_MainMenu_C.RemoveLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function HUD_MainMenu.HUD_MainMenu_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreen3(); // Function HUD_MainMenu.HUD_MainMenu_C.RemoveLoadingScreen3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeOut(); // Function HUD_MainMenu.HUD_MainMenu_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FadeIn(); // Function HUD_MainMenu.HUD_MainMenu_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveLoadingScreen2(); // Function HUD_MainMenu.HUD_MainMenu_C.RemoveLoadingScreen2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadingScreenHUD(); // Function HUD_MainMenu.HUD_MainMenu_C.LoadingScreenHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function HUD_MainMenu.HUD_MainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void StartSearchingMatch(); // Function HUD_MainMenu.HUD_MainMenu_C.StartSearchingMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideSearchindUI(); // Function HUD_MainMenu.HUD_MainMenu_C.HideSearchindUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_HUD_MainMenu(int32_t EntryPoint); // Function HUD_MainMenu.HUD_MainMenu_C.ExecuteUbergraph_HUD_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

