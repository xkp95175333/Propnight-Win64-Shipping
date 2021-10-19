// BlueprintGeneratedClass SoundChatSounds.SoundChatSounds_C
// Size: 0xe1 (Inherited: 0xb0)
struct USoundChatSounds_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct FFMODEventInstance> Sound1; // 0xb8(0x10)
	struct TArray<struct FFMODEventInstance> Sound2; // 0xc8(0x10)
	bool Block?; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t SoundCount; // 0xdc(0x04)
	bool CD?; // 0xe0(0x01)

	void ReceiveTick(float DeltaSeconds); // Function SoundChatSounds.SoundChatSounds_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu1(int32_t Sound, enum class SurvChars Char); // Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu2(int32_t Sound); // Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu1Serv(int32_t Sound, enum class SurvChars Char); // Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1Serv // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundChatMenu2Serv(int32_t Sound); // Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2Serv // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSoundChat(int32_t menu, int32_t Sound); // Function SoundChatSounds.SoundChatSounds_C.SendSoundChat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopCurrentSound(int32_t Sound, int32_t menu); // Function SoundChatSounds.SoundChatSounds_C.StopCurrentSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Sound3D(int32_t SoundIndex); // Function SoundChatSounds.SoundChatSounds_C.Sound3D // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SoundChatSounds(int32_t EntryPoint); // Function SoundChatSounds.SoundChatSounds_C.ExecuteUbergraph_SoundChatSounds // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

