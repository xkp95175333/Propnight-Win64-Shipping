// BlueprintGeneratedClass Exit.Exit_C
// Size: 0x445 (Inherited: 0x220)
struct AExit_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* ExitDoor_Lock; // 0x228(0x08)
	struct UStaticMeshComponent* ExitDoor_Frame; // 0x230(0x08)
	struct UFMODAudioComponent* FMODLoopAudio3; // 0x238(0x08)
	struct UBoxComponent* Box4; // 0x240(0x08)
	struct UFMODAudioComponent* FMODAudioMus; // 0x248(0x08)
	struct UBoxComponent* Box3; // 0x250(0x08)
	struct UFMODAudioComponent* FMODDoorOpening; // 0x258(0x08)
	struct UFMODAudioComponent* survEnter; // 0x260(0x08)
	struct USceneComponent* Scene2; // 0x268(0x08)
	struct USceneComponent* Scene1; // 0x270(0x08)
	struct UFMODAudioComponent* CurseAudio; // 0x278(0x08)
	struct UBoxComponent* KillerBlock; // 0x280(0x08)
	struct USceneComponent* StartPoint; // 0x288(0x08)
	struct USceneComponent* EndPoint; // 0x290(0x08)
	struct UCineCameraComponent* CineCamera; // 0x298(0x08)
	struct UBoxComponent* ExitColliderForProps; // 0x2a0(0x08)
	struct USceneComponent* ExitPoint; // 0x2a8(0x08)
	struct UBoxComponent* CameraBlock; // 0x2b0(0x08)
	struct UParticleSystemComponent* FloorSmoke; // 0x2b8(0x08)
	struct UParticleSystemComponent* DoorSmoke4; // 0x2c0(0x08)
	struct UParticleSystemComponent* DoorSmoke3; // 0x2c8(0x08)
	struct UParticleSystemComponent* DoorSmoke2; // 0x2d0(0x08)
	struct UParticleSystemComponent* DoorSmoke1; // 0x2d8(0x08)
	struct UFMODAudioComponent* FMODChainsAudio; // 0x2e0(0x08)
	struct UPointLightComponent* CurseLight; // 0x2e8(0x08)
	struct UBoxComponent* Box2; // 0x2f0(0x08)
	struct UFMODAudioComponent* FMODLoopAudio2; // 0x2f8(0x08)
	struct UFMODAudioComponent* FMODLoopAudio1; // 0x300(0x08)
	struct UBoxComponent* Box1; // 0x308(0x08)
	struct UStaticMeshComponent* ExitDoor_CHAINS; // 0x310(0x08)
	struct USceneComponent* SurvOpenPointHasItem; // 0x318(0x08)
	struct USceneComponent* SurvOpenPoint; // 0x320(0x08)
	struct UStaticMeshComponent* ExitDoor; // 0x328(0x08)
	struct UStaticMeshComponent* ExitDoor_2; // 0x330(0x08)
	struct UStaticMeshComponent* ExitDoor_Static; // 0x338(0x08)
	struct USceneComponent* Scene; // 0x340(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x348(0x08)
	struct UBoxComponent* ExitCollider; // 0x350(0x08)
	struct UBoxComponent* Box; // 0x358(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x360(0x08)
	float DoorLock_Alpha_321FCDA846EA928116F9F48F49B95BE7; // 0x368(0x04)
	enum class ETimelineDirection DoorLock__Direction_321FCDA846EA928116F9F48F49B95BE7; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UTimelineComponent* DoorLock; // 0x370(0x08)
	float Timeline_0_alpha_C016DF65404DECEA15D0BDA804B2F155; // 0x378(0x04)
	enum class ETimelineDirection Timeline_0__Direction_C016DF65404DECEA15D0BDA804B2F155; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x380(0x08)
	float CameraLerp_Alpha_092B50C44E8C1F47954A0EA779D48FA5; // 0x388(0x04)
	enum class ETimelineDirection CameraLerp__Direction_092B50C44E8C1F47954A0EA779D48FA5; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* CameraLerp; // 0x390(0x08)
	float OpenDoorAnimTimeline_Alpha_0AA21B4245F607E33C0455AE3978165C; // 0x398(0x04)
	enum class ETimelineDirection OpenDoorAnimTimeline__Direction_0AA21B4245F607E33C0455AE3978165C; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* OpenDoorAnimTimeline; // 0x3a0(0x08)
	float OpenProgress; // 0x3a8(0x04)
	bool Opens?; // 0x3ac(0x01)
	bool Opened?; // 0x3ad(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)
	struct AActor* Actor; // 0x3b0(0x08)
	bool Block?; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float FullOpenProgress; // 0x3bc(0x04)
	float BoostModeValue; // 0x3c0(0x04)
	float DeltaSeconds; // 0x3c4(0x04)
	struct UMaterialInstanceDynamic* ChainsMaterial; // 0x3c8(0x08)
	bool TransitionOn; // 0x3d0(0x01)
	bool TransitionOff; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	float TransitionTime; // 0x3d4(0x04)
	float TurnOnDuration; // 0x3d8(0x04)
	float TurnOffDuration; // 0x3dc(0x04)
	float InvisRefraction; // 0x3e0(0x04)
	float InvisRefractionZero; // 0x3e4(0x04)
	float Float1; // 0x3e8(0x04)
	float ErodeSubtractDef; // 0x3ec(0x04)
	float LoopAudioVolume1; // 0x3f0(0x04)
	float LoopAudioVolume2; // 0x3f4(0x04)
	float Speed; // 0x3f8(0x04)
	float SurvBoost; // 0x3fc(0x04)
	bool Cursed; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TArray<struct ASurvivorMasterBP_C*> EscapedSurvs; // 0x408(0x10)
	bool CameraLerp?; // 0x418(0x01)
	bool Find?; // 0x419(0x01)
	bool Tutorial?; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct AActor* TeleportPoint; // 0x420(0x08)
	bool TutorialEnd; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct ATutorialTrigger_C* TutorialTrigger; // 0x430(0x08)
	struct UMaterialInstanceDynamic* DoorFrame; // 0x438(0x08)
	int32_t AlarmCount; // 0x440(0x04)
	bool BlockExit?; // 0x444(0x01)

	void OpenDoorAnimTimeline__FinishedFunc(); // Function Exit.Exit_C.OpenDoorAnimTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void OpenDoorAnimTimeline__UpdateFunc(); // Function Exit.Exit_C.OpenDoorAnimTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraLerp__FinishedFunc(); // Function Exit.Exit_C.CameraLerp__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraLerp__UpdateFunc(); // Function Exit.Exit_C.CameraLerp__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function Exit.Exit_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function Exit.Exit_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DoorLock__FinishedFunc(); // Function Exit.Exit_C.DoorLock__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DoorLock__UpdateFunc(); // Function Exit.Exit_C.DoorLock__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Exit.Exit_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartOpenDoor(struct AActor* Actor); // Function Exit.Exit_C.StartOpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopOpenDoor(struct AActor* Actor); // Function Exit.Exit_C.StopOpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ExitCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Exit.Exit_C.BndEvt__ExitCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void WipeExit(); // Function Exit.Exit_C.WipeExit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastOpenTheDoor(); // Function Exit.Exit_C.MulticastOpenTheDoor // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthOutlineStart(bool Active?); // Function Exit.Exit_C.CustomDepthOutlineStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthAllAlarmsReady(); // Function Exit.Exit_C.CustomDepthAllAlarmsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostmodeEvent(); // Function Exit.Exit_C.BoostmodeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckSurvPosition(); // Function Exit.Exit_C.CheckSurvPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorOpened(); // Function Exit.Exit_C.DoorOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerOpenProgress(float OpenProgress); // Function Exit.Exit_C.ServerOpenProgress // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Exit.Exit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Chains(); // Function Exit.Exit_C.Chains // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoopSoundChange(); // Function Exit.Exit_C.LoopSoundChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Exit.Exit_C.BndEvt__Box2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void CurseLightON(bool On, float Delay); // Function Exit.Exit_C.CurseLightON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ParticleSwitch(bool On?); // Function Exit.Exit_C.ParticleSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenDoorAnimation(); // Function Exit.Exit_C.OpenDoorAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EscapedSurvTick(); // Function Exit.Exit_C.EscapedSurvTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__ExitColliderForProps_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Exit.Exit_C.BndEvt__ExitColliderForProps_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void StartCameraLerp(bool Spectator?); // Function Exit.Exit_C.StartCameraLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeCamera(); // Function Exit.Exit_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void teleport(struct AActor* Actor); // Function Exit.Exit_C.teleport // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnBeams(); // Function Exit.Exit_C.SpawnBeams // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void QuestExit(); // Function Exit.Exit_C.QuestExit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorOpeningEvent(bool Play?); // Function Exit.Exit_C.DoorOpeningEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorOpeningParameterEvent(float Value); // Function Exit.Exit_C.DoorOpeningParameterEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGame(); // Function Exit.Exit_C.EndGame // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReadyExit(); // Function Exit.Exit_C.ReadyExit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmReady(); // Function Exit.Exit_C.AlarmReady // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartDoorLock(); // Function Exit.Exit_C.StartDoorLock // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockExit(); // Function Exit.Exit_C.BlockExit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialExit(); // Function Exit.Exit_C.TutorialExit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Exit(int32_t EntryPoint); // Function Exit.Exit_C.ExecuteUbergraph_Exit // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

