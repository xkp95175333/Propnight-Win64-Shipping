// BlueprintGeneratedClass SoundKiller.SoundKiller_C
// Size: 0xc8 (Inherited: 0xb0)
struct USoundKiller_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UFMODEvent* LaughEvent; // 0xb8(0x08)
	struct UFMODAudioComponent* LaughPlay; // 0xc0(0x08)

	void ReceiveBeginPlay(); // Function SoundKiller.SoundKiller_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Stop(); // Function SoundKiller.SoundKiller_C.Stop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SoundKiller(int32_t EntryPoint); // Function SoundKiller.SoundKiller_C.ExecuteUbergraph_SoundKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

