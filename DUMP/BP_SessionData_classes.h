// BlueprintGeneratedClass BP_SessionData.BP_SessionData_C
// Size: 0x1b8 (Inherited: 0x28)
struct UBP_SessionData_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct FBlueprintSessionResult Session; // 0x30(0x108)
	struct FString Map; // 0x138(0x10)
	struct FString Mode; // 0x148(0x10)
	int32_t Capacity; // 0x158(0x04)
	int32_t Players; // 0x15c(0x04)
	bool IsEos; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FString HostAddress; // 0x168(0x10)
	struct FString Status; // 0x178(0x10)
	struct FString Owner; // 0x188(0x10)
	struct UObject* Widget; // 0x198(0x08)
	bool IsFake; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString ServerId; // 0x1a8(0x10)

	void SetWidget(struct UObject* Widget); // Function BP_SessionData.BP_SessionData_C.SetWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSelected(); // Function BP_SessionData.BP_SessionData_C.OnSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnDeselect(); // Function BP_SessionData.BP_SessionData_C.OnDeselect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_SessionData(int32_t EntryPoint); // Function BP_SessionData.BP_SessionData_C.ExecuteUbergraph_BP_SessionData // (Final|UbergraphFunction) // @ game+0x132e1a0
};

