// BlueprintGeneratedClass BP_ItemSpawnPoint.BP_ItemSpawnPoint_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_ItemSpawnPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Cube; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UBP_ItemsManager_C* Manager; // 0x238(0x08)

	void GetTypeV2(struct AItemsBP_C* Type); // Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetTypeV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetItems(struct TArray<struct FS_SpawnItemChanceRange> Items); // Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetType(struct AItemsBP_C* Type); // Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItem(); // Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_ItemSpawnPoint(int32_t EntryPoint); // Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.ExecuteUbergraph_BP_ItemSpawnPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

