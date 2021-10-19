// BlueprintGeneratedClass WaypointMarkActor.WaypointMarkActor_C
// Size: 0x239 (Inherited: 0x220)
struct AWaypointMarkActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	enum class MarkTypeEnum MarkType; // 0x238(0x01)

	void ReceiveTick(float DeltaSeconds); // Function WaypointMarkActor.WaypointMarkActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeIcon(enum class MarkTypeEnum MarkType); // Function WaypointMarkActor.WaypointMarkActor_C.ChangeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WaypointMarkActor(int32_t EntryPoint); // Function WaypointMarkActor.WaypointMarkActor_C.ExecuteUbergraph_WaypointMarkActor // (Final|UbergraphFunction) // @ game+0x132e1a0
};

