// BlueprintGeneratedClass GraffitiActor.GraffitiActor_C
// Size: 0x248 (Inherited: 0x220)
struct AGraffitiActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Timeline_0_time_34EAA401455F569E7367DEBBE557985B; // 0x238(0x04)
	enum class ETimelineDirection Timeline_0__Direction_34EAA401455F569E7367DEBBE557985B; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x240(0x08)

	void Timeline_0__FinishedFunc(); // Function GraffitiActor.GraffitiActor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function GraffitiActor.GraffitiActor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function GraffitiActor.GraffitiActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void SoundServ(); // Function GraffitiActor.GraffitiActor_C.SoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundMulti(); // Function GraffitiActor.GraffitiActor_C.SoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GraffitiActor(int32_t EntryPoint); // Function GraffitiActor.GraffitiActor_C.ExecuteUbergraph_GraffitiActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

