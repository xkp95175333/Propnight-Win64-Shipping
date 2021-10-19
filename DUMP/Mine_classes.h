// BlueprintGeneratedClass Mine.Mine_C
// Size: 0x2de (Inherited: 0x220)
struct AMine_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x228(0x08)
	struct UFMODAudioComponent* Spawn; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct UStaticMeshComponent* Mine; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float ShootDelay_Lerp_D4090CCF4B323182DE8FF4B79A93D459; // 0x258(0x04)
	enum class ETimelineDirection ShootDelay__Direction_D4090CCF4B323182DE8FF4B79A93D459; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* ShootDelay; // 0x260(0x08)
	struct TArray<struct ASurvivorMasterBP_C*> Survs; // 0x268(0x10)
	struct TArray<struct ASurvivorMasterBP_C*> TargetSurvs; // 0x278(0x10)
	bool Block?; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct ASurvivorMasterBP_C* Target; // 0x290(0x08)
	struct AKillerMasterBP_C* Killer; // 0x298(0x08)
	float LocalZ; // 0x2a0(0x04)
	float EaseAlpha; // 0x2a4(0x04)
	bool EaseUp; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct AActor*> Overlapping Actors; // 0x2b0(0x10)
	float TransitionTime; // 0x2c0(0x04)
	float TurnOnDuration; // 0x2c4(0x04)
	float ErodeSubtractDef; // 0x2c8(0x04)
	float TurnOffDuration; // 0x2cc(0x04)
	struct UMaterialInstanceDynamic* matRef; // 0x2d0(0x08)
	float Float1; // 0x2d8(0x04)
	bool TurnOff; // 0x2dc(0x01)
	bool TurnOn; // 0x2dd(0x01)

	void ShootDelay__FinishedFunc(); // Function Mine.Mine_C.ShootDelay__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ShootDelay__UpdateFunc(); // Function Mine.Mine_C.ShootDelay__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Mine.Mine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Mine.Mine_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Mine.Mine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Mine.Mine_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void RotateMesh(float DeltaSeconds); // Function Mine.Mine_C.RotateMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Mine(int32_t EntryPoint); // Function Mine.Mine_C.ExecuteUbergraph_Mine // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

