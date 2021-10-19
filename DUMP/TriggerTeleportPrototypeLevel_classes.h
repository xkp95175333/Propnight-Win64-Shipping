// BlueprintGeneratedClass TriggerTeleportPrototypeLevel.TriggerTeleportPrototypeLevel_C
// Size: 0x241 (Inherited: 0x228)
struct ATriggerTeleportPrototypeLevel_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	bool Tutorial?; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct APlayerStart* StartSpawn; // 0x238(0x08)
	bool Block; // 0x240(0x01)

	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function TriggerTeleportPrototypeLevel.TriggerTeleportPrototypeLevel_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TriggerTeleportPrototypeLevel.TriggerTeleportPrototypeLevel_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_TriggerTeleportPrototypeLevel(int32_t EntryPoint); // Function TriggerTeleportPrototypeLevel.TriggerTeleportPrototypeLevel_C.ExecuteUbergraph_TriggerTeleportPrototypeLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

