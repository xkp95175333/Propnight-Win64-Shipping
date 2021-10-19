// BlueprintGeneratedClass MineKnife.MineKnife_C
// Size: 0x29d (Inherited: 0x220)
struct AMineKnife_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box1; // 0x228(0x08)
	struct UNiagaraComponent* PN_Ribbon; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x240(0x08)
	struct UParticleSystemComponent* P_MineHit; // 0x248(0x08)
	struct UStaticMeshComponent* knife; // 0x250(0x08)
	struct UStaticMeshComponent* InvisibilityMesh; // 0x258(0x08)
	struct USmoothSync* SmoothSync; // 0x260(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct UCapsuleComponent* Target; // 0x278(0x08)
	struct AKillerMasterBP_C* Killer; // 0x280(0x08)
	struct ASurvivorMasterBP_C* Surv; // 0x288(0x08)
	struct AActor* Other Actor; // 0x290(0x08)
	int32_t MineDamage; // 0x298(0x04)
	bool Collision; // 0x29c(0x01)

	void ReceiveBeginPlay(); // Function MineKnife.MineKnife_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function MineKnife.MineKnife_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Launch(struct ASurvivorMasterBP_C* Surv, struct AKillerMasterBP_C* Killer); // Function MineKnife.MineKnife_C.Launch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InvisibilityMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function MineKnife.MineKnife_C.BndEvt__InvisibilityMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthActivateMulticast(struct ASurvivorMasterBP_C* Surv); // Function MineKnife.MineKnife_C.CustomDepthActivateMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InvisibilityMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function MineKnife.MineKnife_C.BndEvt__InvisibilityMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void CollisionChecker(); // Function MineKnife.MineKnife_C.CollisionChecker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function MineKnife.MineKnife_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MineKnife_Box1_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function MineKnife.MineKnife_C.BndEvt__MineKnife_Box1_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__MineKnife_Box1_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function MineKnife.MineKnife_C.BndEvt__MineKnife_Box1_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult hit); // Function MineKnife.MineKnife_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MineKnife(int32_t EntryPoint); // Function MineKnife.MineKnife_C.ExecuteUbergraph_MineKnife // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

