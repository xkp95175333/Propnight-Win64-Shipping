// WidgetBlueprintGeneratedClass LobbyEffectsHUD.LobbyEffectsHUD_C
// Size: 0x280 (Inherited: 0x260)
struct ULobbyEffectsHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn; // 0x270(0x08)
	struct UImage* Black; // 0x278(0x08)

	void StartFadeIn(); // Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartFadeOut(); // Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_LobbyEffectsHUD(int32_t EntryPoint); // Function LobbyEffectsHUD.LobbyEffectsHUD_C.ExecuteUbergraph_LobbyEffectsHUD // (Final|UbergraphFunction) // @ game+0x132e1a0
};

