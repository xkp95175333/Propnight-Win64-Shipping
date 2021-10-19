// BlueprintGeneratedClass ElevatorM.ElevatorM_C
// Size: 0x290 (Inherited: 0x220)
struct AElevatorM_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct UStaticMeshComponent* Floor1; // 0x230(0x08)
	struct UStaticMeshComponent* Floor2; // 0x238(0x08)
	struct UStaticMeshComponent* Floor3; // 0x240(0x08)
	struct UStaticMeshComponent* Floor4; // 0x248(0x08)
	struct UStaticMeshComponent* Floor5; // 0x250(0x08)
	struct UStaticMeshComponent* Panel; // 0x258(0x08)
	struct UStaticMeshComponent* Cube4; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct TArray<struct UActorComponent*> Floors; // 0x270(0x10)
	int32_t FloorToGo; // 0x280(0x04)
	int32_t Floor; // 0x284(0x04)
	struct AElevator_C* Elevator; // 0x288(0x08)

	void ReceiveTick(float DeltaSeconds); // Function ElevatorM.ElevatorM_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InteractElevatorM(struct UActorComponent* Component, struct AActor* ActorRef); // Function ElevatorM.ElevatorM_C.InteractElevatorM // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenElevator(); // Function ElevatorM.ElevatorM_C.OpenElevator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseElevator(); // Function ElevatorM.ElevatorM_C.CloseElevator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ElevatorM(int32_t EntryPoint); // Function ElevatorM.ElevatorM_C.ExecuteUbergraph_ElevatorM // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

