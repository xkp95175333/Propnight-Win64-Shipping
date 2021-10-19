// BlueprintGeneratedClass Knife.Knife_C
// Size: 0x2e5 (Inherited: 0x220)
struct AKnife_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x228(0x08)
	struct USphereComponent* Sphere1; // 0x230(0x08)
	struct UNiagaraComponent* PN_ThrowKnife; // 0x238(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float RotationChanger_float_8E19C30041BC09E4F89BD699E125933B; // 0x250(0x04)
	enum class ETimelineDirection RotationChanger__Direction_8E19C30041BC09E4F89BD699E125933B; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* RotationChanger; // 0x258(0x08)
	bool hit; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct AKillerMasterBP_C* KillerRef; // 0x268(0x08)
	bool Start; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	struct FRotator Rotation; // 0x274(0x0c)
	struct FVector v3; // 0x280(0x0c)
	float Velocity; // 0x28c(0x04)
	struct FVector RightVector; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UMaterialInstanceDynamic* KnifeMat; // 0x2a0(0x08)
	float TransitionTime; // 0x2a8(0x04)
	float TurnOffDuration; // 0x2ac(0x04)
	float ErodeSubtractDef; // 0x2b0(0x04)
	bool StopAnim?; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float Float1; // 0x2b8(0x04)
	bool StopLinetrace?; // 0x2bc(0x01)
	bool RotatorKnife; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	float Relative Rotation Z (Yaw); // 0x2c0(0x04)
	struct FVector Hit Location; // 0x2c4(0x0c)
	struct FRotator Relative Rotation; // 0x2d0(0x0c)
	bool Block; // 0x2dc(0x01)
	bool transition; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	float TurnOnDuration; // 0x2e0(0x04)
	bool transited; // 0x2e4(0x01)

	void RotationChanger__FinishedFunc(); // Function Knife.Knife_C.RotationChanger__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void RotationChanger__UpdateFunc(); // Function Knife.Knife_C.RotationChanger__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void MoveStart(struct FVector v3, struct AKillerMasterBP_C* KillerRef); // Function Knife.Knife_C.MoveStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult hit); // Function Knife.Knife_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ForwardMove(struct FVector v3, struct AKillerMasterBP_C* KillerRef, struct FRotator KnifeRotation); // Function Knife.Knife_C.ForwardMove // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Knife.Knife_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void KnifeAnim(float DeltaTime); // Function Knife.Knife_C.KnifeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Knife.Knife_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void SetRotationKnife(); // Function Knife.Knife_C.SetRotationKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateEvent(); // Function Knife.Knife_C.RotateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralChecker(float Time); // Function Knife.Knife_C.AstralChecker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Knife(int32_t EntryPoint); // Function Knife.Knife_C.ExecuteUbergraph_Knife // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

