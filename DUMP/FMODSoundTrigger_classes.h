// BlueprintGeneratedClass FMODSoundTrigger.FMODSoundTrigger_C
// Size: 0x244 (Inherited: 0x228)
struct AFMODSoundTrigger_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x230(0x08)
	float Volume; // 0x238(0x04)
	bool Overlap?; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	float Speed; // 0x240(0x04)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_FMODSoundTrigger(int32_t EntryPoint); // Function FMODSoundTrigger.FMODSoundTrigger_C.ExecuteUbergraph_FMODSoundTrigger // (Final|UbergraphFunction) // @ game+0x132e1a0
};

