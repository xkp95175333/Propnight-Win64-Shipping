// BlueprintGeneratedClass TimeIsTicking.TimeIsTicking_C
// Size: 0x128 (Inherited: 0x100)
struct UTimeIsTicking_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0x108(0x10)
	struct TArray<struct ANewAlarmBP_C*> AlarmsRDY; // 0x118(0x10)

	void ReceiveTick(float DeltaSeconds); // Function TimeIsTicking.TimeIsTicking_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function TimeIsTicking.TimeIsTicking_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_TimeIsTicking(int32_t EntryPoint); // Function TimeIsTicking.TimeIsTicking_C.ExecuteUbergraph_TimeIsTicking // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

