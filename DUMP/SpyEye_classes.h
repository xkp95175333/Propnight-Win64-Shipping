// BlueprintGeneratedClass SpyEye.SpyEye_C
// Size: 0x3b5 (Inherited: 0x220)
struct ASpyEye_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box1; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	struct UStaticMeshComponent* EyeSphere; // 0x240(0x08)
	struct USceneComponent* Scene; // 0x248(0x08)
	struct UFMODAudioComponent* EyeSound; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct ASurvivorMasterBP_C* SurvRef; // 0x270(0x08)
	struct TArray<struct AKillerMasterBP_C*> KillersRef; // 0x278(0x10)
	bool On?; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct ASurvivorMasterBP_C*> SurvsRef; // 0x290(0x10)
	struct ASurvivorMasterBP_C* LastSpottedSurv; // 0x2a0(0x08)
	float SphereLocalZ; // 0x2a8(0x04)
	bool EaseUp; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float EaseAlpha; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct AKillerMasterBP_C* KillerRef; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* EyeSphereDynMat1; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* EyeSphereDynMat2; // 0x2c8(0x08)
	struct UMaterialInstanceDynamic* EyeSphereDynMat3; // 0x2d0(0x08)
	float TurnOnDuration; // 0x2d8(0x04)
	float TurnOffDuration; // 0x2dc(0x04)
	float TransitionTime; // 0x2e0(0x04)
	float ErodeSubtractDef; // 0x2e4(0x04)
	bool TurnOn; // 0x2e8(0x01)
	bool TurnOff; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	float Float1; // 0x2ec(0x04)
	float BlinkTime; // 0x2f0(0x04)
	bool BlinkOn; // 0x2f4(0x01)
	bool BlinkOff; // 0x2f5(0x01)
	char pad_2F6[0x2]; // 0x2f6(0x02)
	struct FLinearColor BlinkColor1; // 0x2f8(0x10)
	struct FLinearColor BlinkColor2; // 0x308(0x10)
	bool BlinkActive; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FTimerHandle BlinkOnTimer; // 0x320(0x08)
	struct FTimerHandle BlinkOffTimer; // 0x328(0x08)
	bool MoveDetected; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FTimerHandle SurvStoppedDelayTimer; // 0x338(0x08)
	bool SurvHidden; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct ASurvivorMasterBP_C* LastLeftSurv; // 0x348(0x08)
	float BlinkOnDuration; // 0x350(0x04)
	float BlinkOffDuration; // 0x354(0x04)
	float LightOnTime; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FTimerHandle LightOnTimer; // 0x360(0x08)
	float LightOffTime; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FTimerHandle LightOffTimer; // 0x370(0x08)
	float SavedLightIntensity; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TArray<struct ASurvivorMasterBP_C*> SpottedSurvs; // 0x380(0x10)
	bool ShouldOn?; // 0x390(0x01)
	bool AlreadyOn?; // 0x391(0x01)
	bool TraceBool; // 0x392(0x01)
	char pad_393[0x5]; // 0x393(0x05)
	struct TArray<struct ASurvivorMasterBP_C*> SurvsInEye; // 0x398(0x10)
	float SpawnAlpha; // 0x3a8(0x04)
	float RootLocalZ; // 0x3ac(0x04)
	float SpawnZOffset; // 0x3b0(0x04)
	bool EyeCount; // 0x3b4(0x01)

	void ReceiveBeginPlay(); // Function SpyEye.SpyEye_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SpyEye.SpyEye_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function SpyEye.SpyEye_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BlinkEffect(); // Function SpyEye.SpyEye_C.BlinkEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlinkOnEvent(); // Function SpyEye.SpyEye_C.BlinkOnEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlinkOffEvent(); // Function SpyEye.SpyEye_C.BlinkOffEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveCheck(); // Function SpyEye.SpyEye_C.MoveCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvStoppedDelay(); // Function SpyEye.SpyEye_C.SurvStoppedDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightOn(); // Function SpyEye.SpyEye_C.LightOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightOnEvent(); // Function SpyEye.SpyEye_C.LightOnEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightOff(); // Function SpyEye.SpyEye_C.LightOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightOffEvent(); // Function SpyEye.SpyEye_C.LightOffEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SpyEye.SpyEye_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void EyeSpooting(); // Function SpyEye.SpyEye_C.EyeSpooting // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSpawnZ(); // Function SpyEye.SpyEye_C.SetSpawnZ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SpyEye.SpyEye_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function SpyEye.SpyEye_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SpyEye(int32_t EntryPoint); // Function SpyEye.SpyEye_C.ExecuteUbergraph_SpyEye // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

