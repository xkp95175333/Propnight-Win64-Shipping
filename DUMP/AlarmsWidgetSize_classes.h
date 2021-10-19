// BlueprintGeneratedClass AlarmsWidgetSize.AlarmsWidgetSize_C
// Size: 0xd0 (Inherited: 0xb0)
struct UAlarmsWidgetSize_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* Actor; // 0xb8(0x08)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0xc0(0x10)

	void ReceiveBeginPlay(); // Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_AlarmsWidgetSize(int32_t EntryPoint); // Function AlarmsWidgetSize.AlarmsWidgetSize_C.ExecuteUbergraph_AlarmsWidgetSize // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

