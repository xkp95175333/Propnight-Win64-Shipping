// BlueprintGeneratedClass BP_ItemsManager.BP_ItemsManager_C
// Size: 0x1ac (Inherited: 0xb0)
struct UBP_ItemsManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct ABP_ItemSpawnPoint_C*> SpawnPoints; // 0xb8(0x10)
	struct TMap<struct AItemsBP_C*, float> SupportItems; // 0xc8(0x50)
	struct TMap<struct AItemsBP_C*, float> ToolItems; // 0x118(0x50)
	struct TArray<struct FString> SupportItemNames; // 0x168(0x10)
	struct TArray<struct FString> ToolItemNames; // 0x178(0x10)
	struct TArray<struct FS_SpawnItemChanceRange> SupportItemsV2; // 0x188(0x10)
	struct TArray<struct FS_SpawnItemChanceRange> ToolItemsV2; // 0x198(0x10)
	float Temp; // 0x1a8(0x04)

	void ReceiveBeginPlay(); // Function BP_ItemsManager.BP_ItemsManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnStartGame(); // Function BP_ItemsManager.BP_ItemsManager_C.OnStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_ItemsManager(int32_t EntryPoint); // Function BP_ItemsManager.BP_ItemsManager_C.ExecuteUbergraph_BP_ItemsManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

