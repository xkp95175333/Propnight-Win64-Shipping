// BlueprintGeneratedClass BuggedActor.BuggedActor_C
// Size: 0x240 (Inherited: 0x220)
struct ABuggedActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct AKillerMasterBP_C* Killer; // 0x238(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BuggedActor.BuggedActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__BuggedActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BuggedActor.BuggedActor_C.BndEvt__BuggedActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__BuggedActor_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BuggedActor.BuggedActor_C.BndEvt__BuggedActor_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void OffRenderDepth(); // Function BuggedActor.BuggedActor_C.OffRenderDepth // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BuggedActor(int32_t EntryPoint); // Function BuggedActor.BuggedActor_C.ExecuteUbergraph_BuggedActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

