// WidgetBlueprintGeneratedClass VoiceChatWindow.VoiceChatWindow_C
// Size: 0x2a8 (Inherited: 0x260)
struct UVoiceChatWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* VerticalBox_191; // 0x268(0x08)
	struct UVoiceChatWindowComponent_C* VoiceChatWindowComponent; // 0x270(0x08)
	struct UVoiceChatWindowComponent_C* VoiceChatWindowComponent_2; // 0x278(0x08)
	struct UVoiceChatWindowComponent_C* VoiceChatWindowComponent_3; // 0x280(0x08)
	struct TArray<struct APlayerState*> Players; // 0x288(0x10)
	struct TArray<struct UVoiceChatWindowComponent_C*> PlayersVoice; // 0x298(0x10)

	void Construct(); // Function VoiceChatWindow.VoiceChatWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function VoiceChatWindow.VoiceChatWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_VoiceChatWindow(int32_t EntryPoint); // Function VoiceChatWindow.VoiceChatWindow_C.ExecuteUbergraph_VoiceChatWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

