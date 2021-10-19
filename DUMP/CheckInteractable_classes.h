// BlueprintGeneratedClass CheckInteractable.CheckInteractable_C
// Size: 0xe0 (Inherited: 0xb0)
struct UCheckInteractable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ASurvivorMasterBP_C* Survivor; // 0xb8(0x08)
	struct AActor* InteractableActor; // 0xc0(0x08)
	bool Alarm?; // 0xc8(0x01)
	bool Chair?; // 0xc9(0x01)
	bool Exit?; // 0xca(0x01)
	bool Lootbox?; // 0xcb(0x01)
	bool Survivor?; // 0xcc(0x01)
	bool FindedSurvivor?; // 0xcd(0x01)
	bool LootboxCanOpen?; // 0xce(0x01)
	char pad_CF[0x1]; // 0xcf(0x01)
	struct TArray<struct ALootBox_C*> LootBoxs; // 0xd0(0x10)

	void ReceiveBeginPlay(); // Function CheckInteractable.CheckInteractable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function CheckInteractable.CheckInteractable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CheckInteractable(int32_t EntryPoint); // Function CheckInteractable.CheckInteractable_C.ExecuteUbergraph_CheckInteractable // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

