// BlueprintGeneratedClass Bugged.Bugged_C
// Size: 0xf0 (Inherited: 0xe0)
struct UBugged_C : UPerkSurv_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct ABuggedActor_C* Actor; // 0xe8(0x08)

	void ReceiveBeginPlay(); // Function Bugged.Bugged_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Bugged.Bugged_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Bugged(int32_t EntryPoint); // Function Bugged.Bugged_C.ExecuteUbergraph_Bugged // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

