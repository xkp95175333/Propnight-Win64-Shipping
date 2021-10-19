// BlueprintGeneratedClass SoundCommandKiller.SoundCommandKiller_C
// Size: 0xd4 (Inherited: 0xb0)
struct USoundCommandKiller_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct UFMODEvent*> Event; // 0xb8(0x10)
	struct UFMODAudioComponent* 3D_Sound; // 0xc8(0x08)
	int32_t Killer Type; // 0xd0(0x04)

	void ReceiveTick(float DeltaSeconds); // Function SoundCommandKiller.SoundCommandKiller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PlaySound_Killer(int32_t KillerType); // Function SoundCommandKiller.SoundCommandKiller_C.PlaySound_Killer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayOnServer(int32_t KillerType); // Function SoundCommandKiller.SoundCommandKiller_C.PlayOnServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Multicast_Play(int32_t KillerType); // Function SoundCommandKiller.SoundCommandKiller_C.Multicast_Play // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SoundCommandKiller(int32_t EntryPoint); // Function SoundCommandKiller.SoundCommandKiller_C.ExecuteUbergraph_SoundCommandKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

