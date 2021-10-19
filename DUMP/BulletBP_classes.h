// BlueprintGeneratedClass BulletBP.BulletBP_C
// Size: 0x2d4 (Inherited: 0x220)
struct ABulletBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x228(0x08)
	struct UPointLightComponent* PointLight; // 0x230(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float ImpactFlashTime_NewTrack_0_16CAF47F417A4B2BA11A899404422494; // 0x250(0x04)
	enum class ETimelineDirection ImpactFlashTime__Direction_16CAF47F417A4B2BA11A899404422494; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* ImpactFlashTime; // 0x258(0x08)
	bool Hited?; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct AKillerMasterBP_C* KillerRef; // 0x268(0x08)
	float Time; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UAudioComponent* SoundExplo; // 0x278(0x08)
	struct FFMODEventInstance NewVar_1; // 0x280(0x08)
	bool NewVar_2; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FLinearColor Color1; // 0x28c(0x10)
	struct FLinearColor Color2; // 0x29c(0x10)
	int32_t Damage; // 0x2ac(0x04)
	float Radius; // 0x2b0(0x04)
	struct FVector LinearVelocity; // 0x2b4(0x0c)
	bool v3b; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UParticleSystem* ImpactParticle; // 0x2c8(0x08)
	float LightDefIntensity; // 0x2d0(0x04)

	void ImpactFlashTime__FinishedFunc(); // Function BulletBP.BulletBP_C.ImpactFlashTime__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ImpactFlashTime__UpdateFunc(); // Function BulletBP.BulletBP_C.ImpactFlashTime__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BulletBP.BulletBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function BulletBP.BulletBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult hit); // Function BulletBP.BulletBP_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void StartMulti(struct FVector v3, struct AKillerMasterBP_C* kiler, int32_t Damage, float Radius); // Function BulletBP.BulletBP_C.StartMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PhysicsOffServ(); // Function BulletBP.BulletBP_C.PhysicsOffServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PhysicsOffMulti(); // Function BulletBP.BulletBP_C.PhysicsOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibleON(); // Function BulletBP.BulletBP_C.VisibleON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hitter(struct ASurvivorMasterBP_C* Surv, int32_t Damage, float Radius); // Function BulletBP.BulletBP_C.Hitter // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawServ(); // Function BulletBP.BulletBP_C.SphereDrawServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawMulti(); // Function BulletBP.BulletBP_C.SphereDrawMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnServ(); // Function BulletBP.BulletBP_C.SpawnServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnMulti(); // Function BulletBP.BulletBP_C.SpawnMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void explosion(); // Function BulletBP.BulletBP_C.explosion // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void serv(); // Function BulletBP.BulletBP_C.serv // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MULTI(); // Function BulletBP.BulletBP_C.MULTI // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function BulletBP.BulletBP_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BulletBP(int32_t EntryPoint); // Function BulletBP.BulletBP_C.ExecuteUbergraph_BulletBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

