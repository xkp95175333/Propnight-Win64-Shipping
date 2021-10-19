// Class EasyVoiceChat.VoiceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVoiceFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct APawn*> GetAllPawnsFromState(struct UObject* WorldContextObject, struct APawn* CurrentPlayer, float Distance); // Function EasyVoiceChat.VoiceFunctionLibrary.GetAllPawnsFromState // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0xa73830
};

// Class EasyVoiceChat.VoipAudioComponent
// Size: 0x740 (Inherited: 0x720)
struct UVoipAudioComponent : UVoipListenerSynthComponent {
	char pad_720[0x20]; // 0x720(0x20)

	void PlayVoiceData(struct TArray<char> CompressedVoiceData); // Function EasyVoiceChat.VoipAudioComponent.PlayVoiceData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa73a20
};

// Class EasyVoiceChat.VoipManagerComponent
// Size: 0x188 (Inherited: 0xb0)
struct UVoipManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate VoiceGenerated; // 0xb0(0x10)
	struct FMulticastInlineDelegate PlayerTalking; // 0xc0(0x10)
	struct FMulticastInlineDelegate PlayerStopTalking; // 0xd0(0x10)
	char pad_E0[0x8c]; // 0xe0(0x8c)
	float StopTalkingThreshold; // 0x16c(0x04)
	bool bAutoSetConsoleVariables; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float SilenceDetectionThreshold; // 0x174(0x04)
	float NoiseGateThreshold; // 0x178(0x04)
	float VoiceBufferDelay; // 0x17c(0x04)
	char pad_180[0x8]; // 0x180(0x08)

	void OnVoiceGeneratedBP(struct TArray<char> VoiceBuffer, float MicLevel); // Function EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerStopTalking(); // Function EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerStartTalking(); // Function EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	bool InitVoice(struct AController* Controller); // Function EasyVoiceChat.VoipManagerComponent.InitVoice // (Final|Native|Public|BlueprintCallable) // @ game+0xa73980
};

