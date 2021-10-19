// BlueprintGeneratedClass BP_ClientBeacon.BP_ClientBeacon_C
// Size: 0x2e0 (Inherited: 0x2b0)
struct ABP_ClientBeacon_C : APropnightOnlineBeaconClient {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct UObject* ServerEntry; // 0x2c0(0x08)
	int32_t Players; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FDateTime SendTime; // 0x2d0(0x08)
	struct FDateTime ReceiveTime; // 0x2d8(0x08)

	void GetServerStatus(struct FString Status); // Function BP_ClientBeacon.BP_ClientBeacon_C.GetServerStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnReady(); // Function BP_ClientBeacon.BP_ClientBeacon_C.OnReady // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void RequireServerInfo(); // Function BP_ClientBeacon.BP_ClientBeacon_C.RequireServerInfo // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResponseServerInfo(struct FString ServerName, struct FString MapName, int32_t Players, struct FString Status); // Function BP_ClientBeacon.BP_ClientBeacon_C.ResponseServerInfo // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PingRequest(); // Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequest // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PingResponse(); // Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponse // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_ClientBeacon(int32_t EntryPoint); // Function BP_ClientBeacon.BP_ClientBeacon_C.ExecuteUbergraph_BP_ClientBeacon // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

