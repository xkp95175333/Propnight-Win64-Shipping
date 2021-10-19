// BlueprintGeneratedClass BP_ServerReporter.BP_ServerReporter_C
// Size: 0xe8 (Inherited: 0xc0)
struct UBP_ServerReporter_C : UBP_HTTP_Wrapper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct FTimerHandle TimerHandle; // 0xc8(0x08)
	int32_t Players; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString Seed; // 0xd8(0x10)

	void GenerateSeed(struct FString Seed); // Function BP_ServerReporter.BP_ServerReporter_C.GenerateSeed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BP_ServerReporter.BP_ServerReporter_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function BP_ServerReporter.BP_ServerReporter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Report(); // Function BP_ServerReporter.BP_ServerReporter_C.Report // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShutdownServer(); // Function BP_ServerReporter.BP_ServerReporter_C.ShutdownServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerLogin(); // Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLogin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayerLeft(); // Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_ServerReporter(int32_t EntryPoint); // Function BP_ServerReporter.BP_ServerReporter_C.ExecuteUbergraph_BP_ServerReporter // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

