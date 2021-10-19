// BlueprintGeneratedClass Doppelganger.Doppelganger_C
// Size: 0x15ac (Inherited: 0x1226)
struct ADoppelganger_C : AKillerMasterBP_C {
	char pad_1226[0x2]; // 0x1226(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1228(0x08)
	struct UStaticMeshComponent* PlayerStaticMesh; // 0x1230(0x08)
	struct UWidgetComponent* NicknameWidget_1; // 0x1238(0x08)
	struct UWidgetComponent* SurvRoleWidget; // 0x1240(0x08)
	struct UChildActorComponent* PropFPPCamera; // 0x1248(0x08)
	struct USpringArmComponent* PropArm; // 0x1250(0x08)
	struct UFMODAudioComponent* FMODHealSound; // 0x1258(0x08)
	struct UBoxComponent* InteractBox; // 0x1260(0x08)
	struct USkeletalMeshComponent* KnifeFPP; // 0x1268(0x08)
	struct UNiagaraComponent* Niagara; // 0x1270(0x08)
	struct USkeletalMeshComponent* knife; // 0x1278(0x08)
	struct UFMODAudioComponent* FMODHit; // 0x1280(0x08)
	struct UFMODAudioComponent* FMODAudio2_1; // 0x1288(0x08)
	struct UDoppelgangerSpell2_C* DoppelgangerSpell2; // 0x1290(0x08)
	struct UDoppelgangerSpell1_C* DoppelgangerSpell1; // 0x1298(0x08)
	struct USceneComponent* DefaultPointProp; // 0x12a0(0x08)
	struct UFMODAudioComponent* FMODPropLoopAudio; // 0x12a8(0x08)
	struct UFMODAudioComponent* FMODPropHitAudio; // 0x12b0(0x08)
	struct USphereComponent* StaticMeshContainer; // 0x12b8(0x08)
	float Timeline_6_Alpha_149ED0024B960B6929F17AB7BFC03992; // 0x12c0(0x04)
	enum class ETimelineDirection Timeline_6__Direction_149ED0024B960B6929F17AB7BFC03992; // 0x12c4(0x01)
	char pad_12C5[0x3]; // 0x12c5(0x03)
	struct UTimelineComponent* Timeline_7; // 0x12c8(0x08)
	float Timeline_2_0_Jump_72A69D1F471F3505FB8E119B5DADA186; // 0x12d0(0x04)
	enum class ETimelineDirection Timeline_2_0__Direction_72A69D1F471F3505FB8E119B5DADA186; // 0x12d4(0x01)
	char pad_12D5[0x3]; // 0x12d5(0x03)
	struct UTimelineComponent* Timeline_2_1; // 0x12d8(0x08)
	float Timeline_1_0_Lerp_DE93363644F27A278A6844B4BC25415F; // 0x12e0(0x04)
	enum class ETimelineDirection Timeline_1_0__Direction_DE93363644F27A278A6844B4BC25415F; // 0x12e4(0x01)
	char pad_12E5[0x3]; // 0x12e5(0x03)
	struct UTimelineComponent* Timeline_1_1; // 0x12e8(0x08)
	struct AActor* CalculateRayHitActor; // 0x12f0(0x08)
	struct AActor* TempCalculateRay_1; // 0x12f8(0x08)
	struct FVector TempVector; // 0x1300(0x0c)
	char pad_130C[0x4]; // 0x130c(0x04)
	struct FPropData PropData; // 0x1310(0x90)
	bool StartRotate?; // 0x13a0(0x01)
	char pad_13A1[0x3]; // 0x13a1(0x03)
	float PhysicsTickDeltaTime; // 0x13a4(0x04)
	struct FVector ForwardVector; // 0x13a8(0x0c)
	struct FVector RightVector; // 0x13b4(0x0c)
	struct FRotator AxisRotator; // 0x13c0(0x0c)
	float PropSpeed; // 0x13cc(0x04)
	float LerpAlpha; // 0x13d0(0x04)
	bool StaticHit?; // 0x13d4(0x01)
	bool Start?; // 0x13d5(0x01)
	bool EndJump?; // 0x13d6(0x01)
	char pad_13D7[0x1]; // 0x13d7(0x01)
	float DeltaTime_1; // 0x13d8(0x04)
	bool ImProp?; // 0x13dc(0x01)
	bool GetPropReloading?; // 0x13dd(0x01)
	bool GetPersonReloading?; // 0x13de(0x01)
	char pad_13DF[0x1]; // 0x13df(0x01)
	struct AActor* NewOutline; // 0x13e0(0x08)
	struct UMaterialInstanceDynamic* MaterialOutline_1; // 0x13e8(0x08)
	struct FLinearColor DefaultColorOutline; // 0x13f0(0x10)
	struct AActor* OldOutline; // 0x1400(0x08)
	float DefaultCapsuleRadius; // 0x1408(0x04)
	float DefaultCapsuleHalfHeight; // 0x140c(0x04)
	float RotateInterpSpeed; // 0x1410(0x04)
	bool JumpButtonPressed?; // 0x1414(0x01)
	bool SecondJumpProp?; // 0x1415(0x01)
	char pad_1416[0x2]; // 0x1416(0x02)
	float JumpAlpha; // 0x1418(0x04)
	struct FVector JumpVector; // 0x141c(0x0c)
	bool ImSurv?; // 0x1428(0x01)
	char pad_1429[0x7]; // 0x1429(0x07)
	struct TArray<struct APS_PropHunt_C*> PlayerStates; // 0x1430(0x10)
	bool PropSoundActive?; // 0x1440(0x01)
	char pad_1441[0x3]; // 0x1441(0x03)
	float ImpulseThreshold; // 0x1444(0x04)
	bool StartRotatePropSoundActive?; // 0x1448(0x01)
	char pad_1449[0x3]; // 0x1449(0x03)
	float LastCapsuleRadius; // 0x144c(0x04)
	float LastCapsuleHalfHeight; // 0x1450(0x04)
	bool SchoolBell?; // 0x1454(0x01)
	char pad_1455[0x3]; // 0x1455(0x03)
	struct FRotator PropCorrectionRotation; // 0x1458(0x0c)
	bool StopMoveProp?; // 0x1464(0x01)
	bool FakeAlarmAnim?; // 0x1465(0x01)
	bool FakeHealingAnim?; // 0x1466(0x01)
	char pad_1467[0x1]; // 0x1467(0x01)
	struct FText SavedNickname; // 0x1468(0x18)
	bool Move?; // 0x1480(0x01)
	char pad_1481[0x7]; // 0x1481(0x07)
	struct AActor* Alarm; // 0x1488(0x08)
	bool FakeHealing?; // 0x1490(0x01)
	char pad_1491[0x7]; // 0x1491(0x07)
	struct FMulticastInlineDelegate IsProp; // 0x1498(0x10)
	enum class SurvChars SurvChar; // 0x14a8(0x01)
	char pad_14A9[0x3]; // 0x14a9(0x03)
	struct FVector ImpactPoint; // 0x14ac(0x0c)
	bool WallJump?; // 0x14b8(0x01)
	char pad_14B9[0x7]; // 0x14b9(0x07)
	struct FTransform ParticleTransform; // 0x14c0(0x30)
	struct FVector OldCharPos; // 0x14f0(0x0c)
	struct FVector OldWidgetPos; // 0x14fc(0x0c)
	struct TArray<struct AActor*> NicknamePropActorsIgnore; // 0x1508(0x10)
	float PropDistance; // 0x1518(0x04)
	bool StaminaActive?; // 0x151c(0x01)
	bool PressedRun?; // 0x151d(0x01)
	bool SlowIncrease?; // 0x151e(0x01)
	char pad_151F[0x1]; // 0x151f(0x01)
	float CurrentStamina; // 0x1520(0x04)
	float StaminaIncreaseAmountValue; // 0x1524(0x04)
	float MaxStamina; // 0x1528(0x04)
	bool ZeroStamina?; // 0x152c(0x01)
	char pad_152D[0x3]; // 0x152d(0x03)
	float StaminaDecreaseAmountValue; // 0x1530(0x04)
	float StaminaJumpAmountValue; // 0x1534(0x04)
	float PropMaxTimer; // 0x1538(0x04)
	float PropCurrentTimer; // 0x153c(0x04)
	float PropTempTimer; // 0x1540(0x04)
	struct FVector Temp2Vector; // 0x1544(0x0c)
	struct FVector Temp3Vector; // 0x1550(0x0c)
	struct FVector Temp4Vector; // 0x155c(0x0c)
	bool TempBool; // 0x1568(0x01)
	char pad_1569[0x7]; // 0x1569(0x07)
	struct TArray<struct FVector> SavedPoints; // 0x1570(0x10)
	float TempFloat; // 0x1580(0x04)
	float TempFloat2; // 0x1584(0x04)
	struct FRotator TempRotation; // 0x1588(0x0c)
	struct FRotator TempRotation2; // 0x1594(0x0c)
	float TempFloat3; // 0x15a0(0x04)
	float PropCDTimer; // 0x15a4(0x04)
	bool JumpEndPressE?; // 0x15a8(0x01)
	bool Capsule_TransormingSurv?; // 0x15a9(0x01)
	bool CustomAttackBlock?; // 0x15aa(0x01)
	bool InteractPressed?; // 0x15ab(0x01)

	void CheckMoved(bool PressedAndMoved, bool NotPressedAndMoved); // Function Doppelganger.Doppelganger_C.CheckMoved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	void PropJumpWall(float Jump); // Function Doppelganger.Doppelganger_C.PropJumpWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropJump(float Jump); // Function Doppelganger.Doppelganger_C.PropJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1_0__FinishedFunc(); // Function Doppelganger.Doppelganger_C.Timeline_1_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1_0__UpdateFunc(); // Function Doppelganger.Doppelganger_C.Timeline_1_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2_0__FinishedFunc(); // Function Doppelganger.Doppelganger_C.Timeline_2_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2_0__UpdateFunc(); // Function Doppelganger.Doppelganger_C.Timeline_2_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__FinishedFunc(); // Function Doppelganger.Doppelganger_C.Timeline_6__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__UpdateFunc(); // Function Doppelganger.Doppelganger_C.Timeline_6__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Run_K2Node_InputActionEvent_11(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Run_K2Node_InputActionEvent_10(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_9(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_8(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up Survivor_K2Node_InputActionEvent_7(struct FKey Key); // Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up Survivor_K2Node_InputActionEvent_6(struct FKey Key); // Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 2_K2Node_InputActionEvent_5(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 1_K2Node_InputActionEvent_4(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Attack_K2Node_InputActionEvent_3(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Attack_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 3_K2Node_InputActionEvent_2(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 3_K2Node_InputActionEvent_1(struct FKey Key); // Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Doppelganger.Doppelganger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Doppelganger.Doppelganger_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PhysicsTick(float SubstepDeltaTime); // Function Doppelganger.Doppelganger_C.PhysicsTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServerProp(struct AActor* HitActor); // Function Doppelganger.Doppelganger_C.ServerProp // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastProp(struct AActor* HitActor); // Function Doppelganger.Doppelganger_C.MulticastProp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CapsuleComponentChangeLocation(); // Function Doppelganger.Doppelganger_C.CapsuleComponentChangeLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemMovementEvent(); // Function Doppelganger.Doppelganger_C.ItemMovementEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetVectors(struct FVector Forward, struct FVector Right, struct FRotator AxisRotator); // Function Doppelganger.Doppelganger_C.SetVectors // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPerson(bool TimerOver?); // Function Doppelganger.Doppelganger_C.ServerPerson // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPerson(bool TimerOver?); // Function Doppelganger.Doppelganger_C.MulticastPerson // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropOutlineEffect(); // Function Doppelganger.Doppelganger_C.PropOutlineEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateEvent(); // Function Doppelganger.Doppelganger_C.RotateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPropJump(float JumpAlpha, bool Wall?); // Function Doppelganger.Doppelganger_C.ServerPropJump // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPropJump(float JumpAlpha, bool Wall?); // Function Doppelganger.Doppelganger_C.MulticastPropJump // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropJumpSound(float JumpAlpha, bool Wall?); // Function Doppelganger.Doppelganger_C.PropJumpSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvNickname(bool ClearNickname?); // Function Doppelganger.Doppelganger_C.GetSurvNickname // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndJumpCheck(); // Function Doppelganger.Doppelganger_C.EndJumpCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPropSound(); // Function Doppelganger.Doppelganger_C.ServerPropSound // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPropSound(); // Function Doppelganger.Doppelganger_C.MulticastPropSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function Doppelganger.Doppelganger_C.BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void GetCurrentCapsuleValues(); // Function Doppelganger.Doppelganger_C.GetCurrentCapsuleValues // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudio(); // Function Doppelganger.Doppelganger_C.AtackAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AttackAudioServ(); // Function Doppelganger.Doppelganger_C.AttackAudioServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AttackAudioMulti(); // Function Doppelganger.Doppelganger_C.AttackAudioMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalProp(struct AActor* Target); // Function Doppelganger.Doppelganger_C.LocalProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalPerson(bool TimerOver?); // Function Doppelganger.Doppelganger_C.LocalPerson // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerCatchSound(); // Function Doppelganger.Doppelganger_C.KillerCatchSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerLaugh(); // Function Doppelganger.Doppelganger_C.KillerLaugh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterJumpMulti(); // Function Doppelganger.Doppelganger_C.AfterJumpMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerMulti(); // Function Doppelganger.Doppelganger_C.JumpSoundKillerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnimationFootstepsActivation(); // Function Doppelganger.Doppelganger_C.AnimationFootstepsActivation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeToggle(bool On?, bool OnFPP?); // Function Doppelganger.Doppelganger_C.KnifeToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ParticleToggle(bool On?); // Function Doppelganger.Doppelganger_C.ParticleToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAnimMulti(); // Function Doppelganger.Doppelganger_C.AtackAnimMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlindSound(); // Function Doppelganger.Doppelganger_C.BlindSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerDetectMulti(); // Function Doppelganger.Doppelganger_C.KillerDetectMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUp Multi(struct ASurvivorMasterBP_C* SurvRef); // Function Doppelganger.Doppelganger_C.PickUp Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropMulti(); // Function Doppelganger.Doppelganger_C.DropMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToChairMulti(struct AHypnoChairBP_C* NewParam); // Function Doppelganger.Doppelganger_C.ToChairMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunAwayMulti(bool NewParam, struct ASurvivorMasterBP_C* hellpSurv, bool Flashed?); // Function Doppelganger.Doppelganger_C.SurvRunAwayMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayOffMulti(); // Function Doppelganger.Doppelganger_C.DelayOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalParticleToggle(bool On?); // Function Doppelganger.Doppelganger_C.LocalParticleToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FakeAnimationServer(bool Alarm?, bool Healing?, bool OffAll?); // Function Doppelganger.Doppelganger_C.FakeAnimationServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FakeAnimationMulticast(bool Alarm?, bool Healing?, bool OffAll?); // Function Doppelganger.Doppelganger_C.FakeAnimationMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnCoins(struct ASurvivorMasterBP_C* ref); // Function Doppelganger.Doppelganger_C.SpawnCoins // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunBySurvivor(float StunTime, struct ASurvivorMasterBP_C* helpSurv); // Function Doppelganger.Doppelganger_C.StunBySurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckMoveServer(bool On?); // Function Doppelganger.Doppelganger_C.CheckMoveServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSound(bool On?); // Function Doppelganger.Doppelganger_C.HealSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSoundServer(bool On?); // Function Doppelganger.Doppelganger_C.HealSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSoundMulticast(bool On?); // Function Doppelganger.Doppelganger_C.HealSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSoundServer(bool On?, struct AActor* Actor); // Function Doppelganger.Doppelganger_C.AlarmSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmsSoundMulticast(bool On?, struct AActor* Actor); // Function Doppelganger.Doppelganger_C.AlarmsSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopFakeAnim(); // Function Doppelganger.Doppelganger_C.StopFakeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShot(); // Function Doppelganger.Doppelganger_C.StartAnimShot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotServ(); // Function Doppelganger.Doppelganger_C.StartAnimShotServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotMulti(); // Function Doppelganger.Doppelganger_C.StartAnimShotMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeekMulti(); // Function Doppelganger.Doppelganger_C.SeekMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_7(float AxisValue); // Function Doppelganger.Doppelganger_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_8(float AxisValue); // Function Doppelganger.Doppelganger_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Left_K2Node_InputAxisEvent_9(float AxisValue); // Function Doppelganger.Doppelganger_C.InpAxisEvt_Left_K2Node_InputAxisEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Right_K2Node_InputAxisEvent_10(float AxisValue); // Function Doppelganger.Doppelganger_C.InpAxisEvt_Right_K2Node_InputAxisEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void WallJumpParticleServer(struct FTransform SpawnTransform); // Function Doppelganger.Doppelganger_C.WallJumpParticleServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WallJumpParticleMulticast(struct FTransform SpawnTransform); // Function Doppelganger.Doppelganger_C.WallJumpParticleMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUD_JumpIn(); // Function Doppelganger.Doppelganger_C.HUD_JumpIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUD_JumpOut(); // Function Doppelganger.Doppelganger_C.HUD_JumpOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameProp(); // Function Doppelganger.Doppelganger_C.NicknameProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameLerp(struct FVector A); // Function Doppelganger.Doppelganger_C.NicknameLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPressedAndMoved(); // Function Doppelganger.Doppelganger_C.CheckPressedAndMoved // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StaminaDecrease(); // Function Doppelganger.Doppelganger_C.StaminaDecrease // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StaminaIncrease(); // Function Doppelganger.Doppelganger_C.StaminaIncrease // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerLocal(); // Function Doppelganger.Doppelganger_C.JumpSoundKillerLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CapsuleSet(bool Surv?); // Function Doppelganger.Doppelganger_C.CapsuleSet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReturnPersonTimerEnd(); // Function Doppelganger.Doppelganger_C.ReturnPersonTimerEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PointsTick(); // Function Doppelganger.Doppelganger_C.PointsTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractPressed(); // Function Doppelganger.Doppelganger_C.InteractPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractReleased(); // Function Doppelganger.Doppelganger_C.InteractReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Doppelganger(int32_t EntryPoint); // Function Doppelganger.Doppelganger_C.ExecuteUbergraph_Doppelganger // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void IsProp__DelegateSignature(bool IsProp); // Function Doppelganger.Doppelganger_C.IsProp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

