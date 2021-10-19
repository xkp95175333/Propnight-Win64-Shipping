// BlueprintGeneratedClass InteractableDoor.InteractableDoor_C
// Size: 0x358 (Inherited: 0x220)
struct AInteractableDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct UBoxComponent* GlassBox_Spell; // 0x230(0x08)
	struct UArrowComponent* Arrow; // 0x238(0x08)
	struct UBoxComponent* GlassBox; // 0x240(0x08)
	struct UParticleSystemComponent* Glass; // 0x248(0x08)
	struct UStaticMeshComponent* GlassMesh; // 0x250(0x08)
	struct UBoxComponent* InteractableBox; // 0x258(0x08)
	struct UWidgetComponent* DoorMark; // 0x260(0x08)
	struct UStaticMeshComponent* DoorFrame; // 0x268(0x08)
	struct USceneComponent* ParticlePositions; // 0x270(0x08)
	struct UParticleSystemComponent* hit; // 0x278(0x08)
	struct UParticleSystemComponent* Break; // 0x280(0x08)
	struct UBoxComponent* CheckKillerBox; // 0x288(0x08)
	struct UDestructibleComponent* door_window_DM; // 0x290(0x08)
	struct UBoxComponent* Box; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float OpeningTimeline_Alpha_E85DBBC74771E564B66C5393B7E80CEA; // 0x2b0(0x04)
	enum class ETimelineDirection OpeningTimeline__Direction_E85DBBC74771E564B66C5393B7E80CEA; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* OpeningTimeline; // 0x2b8(0x08)
	float ClosingTimeline_Alpha_C50BA6A345065B62E7B28CA2A9430BC0; // 0x2c0(0x04)
	enum class ETimelineDirection ClosingTimeline__Direction_C50BA6A345065B62E7B28CA2A9430BC0; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* ClosingTimeline; // 0x2c8(0x08)
	bool Closed?; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FRotator Rotation; // 0x2d4(0x0c)
	int32_t DoorHP; // 0x2e0(0x04)
	bool DoorDestroyed?; // 0x2e4(0x01)
	bool EndAnim?; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	struct ASurvivorMasterBP_C* Surv; // 0x2e8(0x08)
	struct FRotator RotationTemp; // 0x2f0(0x0c)
	bool NoChangeDamagedMesh?; // 0x2fc(0x01)
	bool InvertRotation?; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	struct FVector SurvLocation; // 0x300(0x0c)
	float Impulse Strength; // 0x30c(0x04)
	bool Glass?; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t CountGlass; // 0x314(0x04)
	struct UFMODEvent* Open; // 0x318(0x08)
	struct UFMODEvent* Close; // 0x320(0x08)
	bool TempBool; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UStaticMesh* DamagedMesh; // 0x330(0x08)
	struct UStaticMesh* NormalMesh; // 0x338(0x08)
	bool KillerStun?; // 0x340(0x01)
	bool IsDelayed; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct ASurvivorMasterBP_C* OverlappedSurv; // 0x348(0x08)
	struct UStaticMesh* DamegedGlass; // 0x350(0x08)

	void OpeningTimeline__FinishedFunc(); // Function InteractableDoor.InteractableDoor_C.OpeningTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void OpeningTimeline__UpdateFunc(); // Function InteractableDoor.InteractableDoor_C.OpeningTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ClosingTimeline__FinishedFunc(); // Function InteractableDoor.InteractableDoor_C.ClosingTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ClosingTimeline__UpdateFunc(); // Function InteractableDoor.InteractableDoor_C.ClosingTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function InteractableDoor.InteractableDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function InteractableDoor.InteractableDoor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InteractDoor(bool Close?, struct ASurvivorMasterBP_C* Surv); // Function InteractableDoor.InteractableDoor_C.InteractDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorDamaged(struct FVector HurtOrigin); // Function InteractableDoor.InteractableDoor_C.DoorDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartEvent(); // Function InteractableDoor.InteractableDoor_C.StartEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeRotationTimeline(float Alpha); // Function InteractableDoor.InteractableDoor_C.ChangeRotationTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyDoor(); // Function InteractableDoor.InteractableDoor_C.DestroyDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckKiller(); // Function InteractableDoor.InteractableDoor_C.CheckKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterDestroyDoor(struct FVector HurtOrigin); // Function InteractableDoor.InteractableDoor_C.AfterDestroyDoor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnParticles(int32_t DoorHealth, struct FVector KillerPosition); // Function InteractableDoor.InteractableDoor_C.SpawnParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchDoorPP(bool On?); // Function InteractableDoor.InteractableDoor_C.SwitchDoorPP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SaveRotationTemp(); // Function InteractableDoor.InteractableDoor_C.SaveRotationTemp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerFlashCapture(struct AKillerMasterBP_C* Killer); // Function InteractableDoor.InteractableDoor_C.KillerFlashCapture // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayMarkAnimAppear(); // Function InteractableDoor.InteractableDoor_C.PlayMarkAnimAppear // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayMarkAnimDisapper(); // Function InteractableDoor.InteractableDoor_C.PlayMarkAnimDisapper // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnAnimFineshed(); // Function InteractableDoor.InteractableDoor_C.OnAnimFineshed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GlassEvent(); // Function InteractableDoor.InteractableDoor_C.GlassEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropGlassBreak(struct FVector SurvPosition); // Function InteractableDoor.InteractableDoor_C.PropGlassBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void GlassBoxOverlap(struct UObject* Actor, struct UObject* Component, int32_t GlassId); // Function InteractableDoor.InteractableDoor_C.GlassBoxOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropGlassBreak2(struct FVector SurvPosition); // Function InteractableDoor.InteractableDoor_C.PropGlassBreak2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GlassDamage(struct FVector HitOrigin); // Function InteractableDoor.InteractableDoor_C.GlassDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HitGlassWithSpell(); // Function InteractableDoor.InteractableDoor_C.HitGlassWithSpell // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InteractableDoor_GlassBox_Spell_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_Spell_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void SaveBoolTemp(); // Function InteractableDoor.InteractableDoor_C.SaveBoolTemp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void DoorMarkUpdate(); // Function InteractableDoor.InteractableDoor_C.DoorMarkUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_InteractableDoor(int32_t EntryPoint); // Function InteractableDoor.InteractableDoor_C.ExecuteUbergraph_InteractableDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

