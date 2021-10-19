// BlueprintGeneratedClass DeadMansChest.DeadMansChest_C
// Size: 0x118 (Inherited: 0x100)
struct UDeadMansChest_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ALootBox_C*> LootboxArray; // 0x108(0x10)

	void ReceiveBeginPlay(); // Function DeadMansChest.DeadMansChest_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropActivatePerkEffect(); // Function DeadMansChest.DeadMansChest_C.CursedPropActivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropDeactivatePerkEffect(); // Function DeadMansChest.DeadMansChest_C.CursedPropDeactivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_DeadMansChest(int32_t EntryPoint); // Function DeadMansChest.DeadMansChest_C.ExecuteUbergraph_DeadMansChest // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

