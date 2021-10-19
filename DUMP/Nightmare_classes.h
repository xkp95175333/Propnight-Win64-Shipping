// BlueprintGeneratedClass Nightmare.Nightmare_C
// Size: 0x138 (Inherited: 0x100)
struct UNightmare_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0x108(0x10)
	struct TArray<int32_t> RandomAlarmIndex; // 0x118(0x10)
	struct TArray<struct ANewAlarmBP_C*> RandomAlarmsRef; // 0x128(0x10)

	void ReceiveBeginPlay(); // Function Nightmare.Nightmare_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Nightmare(int32_t EntryPoint); // Function Nightmare.Nightmare_C.ExecuteUbergraph_Nightmare // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

