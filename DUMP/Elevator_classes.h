// BlueprintGeneratedClass Elevator.Elevator_C
// Size: 0x271 (Inherited: 0x220)
struct AElevator_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct FVector> StageLocation; // 0x230(0x10)
	int32_t CurrentFloor; // 0x240(0x04)
	bool Up?; // 0x244(0x01)
	bool Interactable?; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	int32_t NextFloor; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<int32_t> Queue; // 0x250(0x10)
	struct TArray<struct AElevatorM_C*> ElevatorMRefs; // 0x260(0x10)
	bool Using?; // 0x270(0x01)

	void ElevatorInteract(); // Function Elevator.Elevator_C.ElevatorInteract // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartMoveElevator(); // Function Elevator.Elevator_C.StartMoveElevator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddToQueue(int32_t FloorToGo, int32_t Floor); // Function Elevator.Elevator_C.AddToQueue // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Move(struct TArray<struct AActor*> Refs, float ZLocation); // Function Elevator.Elevator_C.Move // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Elevator(int32_t EntryPoint); // Function Elevator.Elevator_C.ExecuteUbergraph_Elevator // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

