// BlueprintGeneratedClass CheckInteractableKiller.CheckInteractableKiller_C
// Size: 0xc8 (Inherited: 0xb0)
struct UCheckInteractableKiller_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AKillerMasterBP_C* Killer; // 0xb8(0x08)
	struct AActor* InteractableActor; // 0xc0(0x08)

	void ReceiveBeginPlay(); // Function CheckInteractableKiller.CheckInteractableKiller_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function CheckInteractableKiller.CheckInteractableKiller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CheckInteractableKiller(int32_t EntryPoint); // Function CheckInteractableKiller.CheckInteractableKiller_C.ExecuteUbergraph_CheckInteractableKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

