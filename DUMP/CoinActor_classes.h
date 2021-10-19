// BlueprintGeneratedClass CoinActor.CoinActor_C
// Size: 0x2f1 (Inherited: 0x220)
struct ACoinActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere1; // 0x228(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x230(0x08)
	struct UStaticMeshComponent* Cube; // 0x238(0x08)
	struct USmoothSync* SmoothSync; // 0x240(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x248(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x250(0x08)
	struct USphereComponent* Sphere; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	float Timeline_0_Alpha_CEEA19814DF45D5FC7AD0ABCF514B472; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CEEA19814DF45D5FC7AD0ABCF514B472; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	int32_t Points; // 0x278(0x04)
	bool EaseUp; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	float EaseAlpha; // 0x280(0x04)
	float LocalZ; // 0x284(0x04)
	float DefaultLightIntensity; // 0x288(0x04)
	bool Block?; // 0x28c(0x01)
	bool FromKiller; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
	struct AActor* LerpingActor; // 0x290(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x298(0x08)
	struct FVector StartPosition; // 0x2a0(0x0c)
	float rotationFloat; // 0x2ac(0x04)
	bool ground; // 0x2b0(0x01)
	bool FromAlarm; // 0x2b1(0x01)
	bool zUp; // 0x2b2(0x01)
	bool zDown; // 0x2b3(0x01)
	bool IsStun; // 0x2b4(0x01)
	bool IsFlashlight; // 0x2b5(0x01)
	bool SceneSpawnMoney?; // 0x2b6(0x01)
	char pad_2B7[0x9]; // 0x2b7(0x09)
	struct FTransform SavedTransform; // 0x2c0(0x30)
	enum class CoinEnum CoinType; // 0x2f0(0x01)

	void GroundSound(); // Function CoinActor.CoinActor_C.GroundSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function CoinActor.CoinActor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function CoinActor.CoinActor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function CoinActor.CoinActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function CoinActor.CoinActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void TakeCoin(struct AActor* Actor, int32_t P); // Function CoinActor.CoinActor_C.TakeCoin // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function CoinActor.CoinActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void Impulser(struct FVector v3, struct AActor* Surv); // Function CoinActor.CoinActor_C.Impulser // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function CoinActor.CoinActor_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void DestroyerServ(); // Function CoinActor.CoinActor_C.DestroyerServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyerMulti(); // Function CoinActor.CoinActor_C.DestroyerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeCoinMulti(struct AActor* Actor, int32_t P); // Function CoinActor.CoinActor_C.TakeCoinMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function CoinActor.CoinActor_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void LerpCoin(float DeltaTime); // Function CoinActor.CoinActor_C.LerpCoin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinOverlapCheck(); // Function CoinActor.CoinActor_C.CoinOverlapCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckVelocity(); // Function CoinActor.CoinActor_C.CheckVelocity // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinDropKiller(); // Function CoinActor.CoinActor_C.CoinDropKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CoinActor(int32_t EntryPoint); // Function CoinActor.CoinActor_C.ExecuteUbergraph_CoinActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

