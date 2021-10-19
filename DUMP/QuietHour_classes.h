// BlueprintGeneratedClass QuietHour.QuietHour_C
// Size: 0x118 (Inherited: 0x100)
struct UQuietHour_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0x108(0x10)

	void ReceiveBeginPlay(); // Function QuietHour.QuietHour_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function QuietHour.QuietHour_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_QuietHour(int32_t EntryPoint); // Function QuietHour.QuietHour_C.ExecuteUbergraph_QuietHour // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

