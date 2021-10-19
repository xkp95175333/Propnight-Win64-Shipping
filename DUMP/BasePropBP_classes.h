// BlueprintGeneratedClass BasePropBP.BasePropBP_C
// Size: 0x31a (Inherited: 0x220)
struct ABasePropBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct UStaticMeshComponent* PropStaticMesh; // 0x230(0x08)
	float ShakeTimeline_Alpha_6E84376740D7DD5629651BBE931BFF0C; // 0x238(0x04)
	enum class ETimelineDirection ShakeTimeline__Direction_6E84376740D7DD5629651BBE931BFF0C; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* ShakeTimeline; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
	struct FTransform Start; // 0x250(0x30)
	float ImpulseThreshold; // 0x280(0x04)
	float Volume; // 0x284(0x04)
	bool Active?; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UStaticMesh* Mesh; // 0x290(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x298(0x08)
	struct FLinearColor Color; // 0x2a0(0x10)
	float Scale; // 0x2b0(0x04)
	bool HasOutline?; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float PropHealth; // 0x2b8(0x04)
	struct FRotator DefaultRot; // 0x2bc(0x0c)
	float FloatX; // 0x2c8(0x04)
	float FloatY; // 0x2cc(0x04)
	bool Block; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UPerkKiller_C* Perk Killer; // 0x2d8(0x08)
	bool CursedProp?; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x2e8(0x10)
	struct TArray<struct UMaterialInterface*> StandartMaterials; // 0x2f8(0x10)
	bool MaterialsCreated?; // 0x308(0x01)
	bool ChallengeStarted?; // 0x309(0x01)
	bool Replicated?; // 0x30a(0x01)
	char pad_30B[0x1]; // 0x30b(0x01)
	struct FVector DefaultLoc; // 0x30c(0x0c)
	bool EndGameHide?; // 0x318(0x01)
	bool Tutorial?; // 0x319(0x01)

	void ShakeTimeline__FinishedFunc(); // Function BasePropBP.BasePropBP_C.ShakeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ShakeTimeline__UpdateFunc(); // Function BasePropBP.BasePropBP_C.ShakeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void HitShake(struct FVector From); // Function BasePropBP.BasePropBP_C.HitShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitShakeMulti(struct FVector From); // Function BasePropBP.BasePropBP_C.HitShakeMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropSwitcher(bool On?, struct UPerkKiller_C* PerkKiller, bool Killer?); // Function BasePropBP.BasePropBP_C.CursedPropSwitcher // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeleteOutline(); // Function BasePropBP.BasePropBP_C.DeleteOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvDeactivated(); // Function BasePropBP.BasePropBP_C.SurvDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartChallenge(bool Killer?); // Function BasePropBP.BasePropBP_C.StartChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedChallenge(bool Killer?); // Function BasePropBP.BasePropBP_C.FailedChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndChallenge(struct ASurvivorMasterBP_C* Surv); // Function BasePropBP.BasePropBP_C.EndChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateOutline(); // Function BasePropBP.BasePropBP_C.CreateOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateMaterials(); // Function BasePropBP.BasePropBP_C.CreateMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MaterialsSwitch(bool Dynamic?); // Function BasePropBP.BasePropBP_C.MaterialsSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopOutline(); // Function BasePropBP.BasePropBP_C.StopOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartOutline(); // Function BasePropBP.BasePropBP_C.StartOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvPropMaterialsReturn(struct ASurvivorMasterBP_C* Surv); // Function BasePropBP.BasePropBP_C.SurvPropMaterialsReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(struct UPrimitiveComponent* WakingComponent, struct FName BoneName); // Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function BasePropBP.BasePropBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(struct UPrimitiveComponent* SleepingComponent, struct FName BoneName); // Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void MulticastSound(struct UFMODEvent* Sound); // Function BasePropBP.BasePropBP_C.MulticastSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult hit); // Function BasePropBP.BasePropBP_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BasePropBP.BasePropBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void StartTutorial(); // Function BasePropBP.BasePropBP_C.StartTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopTutorial(); // Function BasePropBP.BasePropBP_C.StopTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BasePropBP(int32_t EntryPoint); // Function BasePropBP.BasePropBP_C.ExecuteUbergraph_BasePropBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

