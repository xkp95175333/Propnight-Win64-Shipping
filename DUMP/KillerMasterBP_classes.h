// BlueprintGeneratedClass KillerMasterBP.KillerMasterBP_C
// Size: 0x1226 (Inherited: 0x4e0)
struct AKillerMasterBP_C : APhysicsCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct USceneComponent* CoinSpawn; // 0x4e8(0x08)
	struct UCameraComponent* FPPCamera; // 0x4f0(0x08)
	struct USoundCommandKiller_C* SoundCommandKiller; // 0x4f8(0x08)
	struct USceneComponent* KnifeLoc; // 0x500(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x508(0x08)
	struct UBoxComponent* Box1; // 0x510(0x08)
	struct UGraffityMakerHit_C* GraffityMakerHit; // 0x518(0x08)
	struct UPerkManager_C* PerkManager; // 0x520(0x08)
	struct UWidgetComponent* NicknameWidget; // 0x528(0x08)
	struct UShootProphunt_C* ShootProphunt; // 0x530(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x538(0x08)
	struct UFMODAudioComponent* KillerIdle; // 0x540(0x08)
	struct UGraffityMaker_C* GraffityMaker; // 0x548(0x08)
	struct UFMODAudioComponent* JumpSound; // 0x550(0x08)
	struct UFMODAudioComponent* ChaseAudio; // 0x558(0x08)
	struct USceneComponent* StunSceneCheck; // 0x560(0x08)
	struct UParticleSystemComponent* Stund; // 0x568(0x08)
	struct USoundChatSounds_C* SoundChatSounds; // 0x570(0x08)
	struct UBoxComponent* StunCollision; // 0x578(0x08)
	struct UCheckInteractableKiller_C* CheckInteractableKiller; // 0x580(0x08)
	struct UAlarmsWidgetSize_C* AlarmsWidgetSize; // 0x588(0x08)
	struct UBoxComponent* Box; // 0x590(0x08)
	struct USceneComponent* SurvEndPlace; // 0x598(0x08)
	struct USceneComponent* SurvBeginPlace; // 0x5a0(0x08)
	struct UVoipAudioComponent* VoipAudio; // 0x5a8(0x08)
	struct UVoipManagerComponent* VoipManager; // 0x5b0(0x08)
	struct UPostProcessComponent* PostProcess1; // 0x5b8(0x08)
	struct USmoothSync* SmoothSync; // 0x5c0(0x08)
	struct USpringArmComponent* SpringArm; // 0x5c8(0x08)
	struct USceneComponent* KnifeLocation; // 0x5d0(0x08)
	struct UFMODAudioComponent* HitAudi; // 0x5d8(0x08)
	struct USceneComponent* FPMeshPlace; // 0x5e0(0x08)
	struct USkeletalMeshComponent* FPPSM; // 0x5e8(0x08)
	struct USoundKiller_C* SoundKiller; // 0x5f0(0x08)
	struct USphereComponent* Sphere; // 0x5f8(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x600(0x08)
	struct UCameraComponent* FollowCamera; // 0x608(0x08)
	struct UATPCCameraComponent* ATPCCamera; // 0x610(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x618(0x08)
	struct UFootprintComponent_C* FootprintComponent1; // 0x620(0x08)
	struct UChargeSpell_C* ChargeSpell; // 0x628(0x08)
	struct UScreamSpell_C* ScreamSpell; // 0x630(0x08)
	struct UWallhackSpell_C* WallhackSpell; // 0x638(0x08)
	struct UCapsuleComponent* ContactCapsule; // 0x640(0x08)
	struct USpotLightComponent* SpotLight; // 0x648(0x08)
	struct UCapsuleComponent* Capsule; // 0x650(0x08)
	struct USceneComponent* GrabLocation; // 0x658(0x08)
	struct UPhysicsHandleComponent* PhysicsHandle; // 0x660(0x08)
	float Timeline_5_Alpha_7015A4DA41ED7E73DA445D8FB29046BE; // 0x668(0x04)
	enum class ETimelineDirection Timeline_5__Direction_7015A4DA41ED7E73DA445D8FB29046BE; // 0x66c(0x01)
	char pad_66D[0x3]; // 0x66d(0x03)
	struct UTimelineComponent* Timeline_6; // 0x670(0x08)
	float AfterStunColor_f_A70514EE49D40D103AD3BF8B9384BA66; // 0x678(0x04)
	enum class ETimelineDirection AfterStunColor__Direction_A70514EE49D40D103AD3BF8B9384BA66; // 0x67c(0x01)
	char pad_67D[0x3]; // 0x67d(0x03)
	struct UTimelineComponent* AfterStunColor; // 0x680(0x08)
	float ScaleSizer_fX_77CCFD67432753C30A0F0B9123C98C2A; // 0x688(0x04)
	float ScaleSizer_fZ_77CCFD67432753C30A0F0B9123C98C2A; // 0x68c(0x04)
	enum class ETimelineDirection ScaleSizer__Direction_77CCFD67432753C30A0F0B9123C98C2A; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct UTimelineComponent* ScaleSizer; // 0x698(0x08)
	float Timeline_4_Alpha_FFBAA07C4FFE0AC4EFCCB2808F29A056; // 0x6a0(0x04)
	enum class ETimelineDirection Timeline_4__Direction_FFBAA07C4FFE0AC4EFCCB2808F29A056; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* Timeline_5; // 0x6a8(0x08)
	float Timeline_3_Alpha_CCB2811B4D6B40280DAFDA9812E93AA9; // 0x6b0(0x04)
	enum class ETimelineDirection Timeline_3__Direction_CCB2811B4D6B40280DAFDA9812E93AA9; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	struct UTimelineComponent* Timeline_4; // 0x6b8(0x08)
	float Timeline_2_Alpha_6A7565474A6C83519B89AABBB688C874; // 0x6c0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_6A7565474A6C83519B89AABBB688C874; // 0x6c4(0x01)
	char pad_6C5[0x3]; // 0x6c5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x6c8(0x08)
	float Timeline_1_Param_D056C010468E2F57128C429FAA65DEE4; // 0x6d0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_D056C010468E2F57128C429FAA65DEE4; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x6d8(0x08)
	float StopSoundChaseTimeline_Alpha_06FAF5A548A0915B6864099F049D7C6A; // 0x6e0(0x04)
	enum class ETimelineDirection StopSoundChaseTimeline__Direction_06FAF5A548A0915B6864099F049D7C6A; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	struct UTimelineComponent* StopSoundChaseTimeline; // 0x6e8(0x08)
	float SoundTimeline_Alpha_1F3BABE64CBB7521448AC3810D011723; // 0x6f0(0x04)
	enum class ETimelineDirection SoundTimeline__Direction_1F3BABE64CBB7521448AC3810D011723; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	struct UTimelineComponent* SoundTimeline; // 0x6f8(0x08)
	float DecreasorSpeed_AlphaTime_7C7B01AF4FA603E5695B4EBEC9B01716; // 0x700(0x04)
	enum class ETimelineDirection DecreasorSpeed__Direction_7C7B01AF4FA603E5695B4EBEC9B01716; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct UTimelineComponent* DecreasorSpeed; // 0x708(0x08)
	float IncreasorSpeed_AlphaTime_73C5FA014C02BF17B95C0094FD9E37EA; // 0x710(0x04)
	enum class ETimelineDirection IncreasorSpeed__Direction_73C5FA014C02BF17B95C0094FD9E37EA; // 0x714(0x01)
	char pad_715[0x3]; // 0x715(0x03)
	struct UTimelineComponent* IncreasorSpeed; // 0x718(0x08)
	float Timeline_0_lerp_258C0C6E4CF25F31EF1A08BE14D3F049; // 0x720(0x04)
	enum class ETimelineDirection Timeline_0__Direction_258C0C6E4CF25F31EF1A08BE14D3F049; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct UTimelineComponent* Timeline_1; // 0x728(0x08)
	float BaseTurnRate; // 0x730(0x04)
	float BaseLookUpRate; // 0x734(0x04)
	bool Stunned?; // 0x738(0x01)
	char pad_739[0x3]; // 0x739(0x03)
	float WalkSpeed; // 0x73c(0x04)
	bool Atack?; // 0x740(0x01)
	bool Contact; // 0x741(0x01)
	char pad_742[0x6]; // 0x742(0x06)
	struct FString NewVar_1; // 0x748(0x10)
	struct FVector V3Forward; // 0x758(0x0c)
	bool mouseClick?; // 0x764(0x01)
	char pad_765[0x3]; // 0x765(0x03)
	float mouseClickTime; // 0x768(0x04)
	float ReduceMaxWalkSpeedTime; // 0x76c(0x04)
	bool SuperSmash; // 0x770(0x01)
	bool AbilityWallhackCd; // 0x771(0x01)
	bool IsHolded; // 0x772(0x01)
	char pad_773[0x5]; // 0x773(0x05)
	struct AActor* GrabbedChar; // 0x778(0x08)
	struct ASurvivorMasterBP_C* HittedSurv; // 0x780(0x08)
	struct TArray<struct AHypnoChairBP_C*> HypnoChairsArrayRef; // 0x788(0x10)
	bool ChairOverlap?; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct AHypnoChairBP_C* OverlappedChair; // 0x7a0(0x08)
	struct TArray<struct ASurvivorMasterBP_C*> SurvArrayRef; // 0x7a8(0x10)
	struct TArray<struct ASurvivorMasterBP_C*> SurvInRadiusArrayRef; // 0x7b8(0x10)
	bool ToShakeSurv; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct UCoolDownWBP_C* CDWBPRed; // 0x7d0(0x08)
	bool AbilityScreamCd; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
	struct UCoolDownWBP_C* WidgetCDRef; // 0x7e0(0x08)
	struct FName abilit1; // 0x7e8(0x08)
	struct FName abilit2; // 0x7f0(0x08)
	struct FVector EndLineTraceV3; // 0x7f8(0x0c)
	struct FName abiliti3; // 0x804(0x08)
	bool SuperSmashCD; // 0x80c(0x01)
	char pad_80D[0x3]; // 0x80d(0x03)
	struct UFlashWidget_C* FlashEffectWidget; // 0x810(0x08)
	float DeltaSeconds; // 0x818(0x04)
	char pad_81C[0x4]; // 0x81c(0x04)
	struct ABulletBP_C* BulletRef; // 0x820(0x08)
	bool BulletCD?; // 0x828(0x01)
	char pad_829[0x7]; // 0x829(0x07)
	struct UAmmoKillerWBP_C* AmmoWBPRef; // 0x830(0x08)
	struct UAudioComponent* SpyEyeSound; // 0x838(0x08)
	float MaxSpeed; // 0x840(0x04)
	float CurrentSpeed; // 0x844(0x04)
	bool IncreaseWalk?; // 0x848(0x01)
	bool IsOwner?; // 0x849(0x01)
	enum class EFootprintStyle CurrentFootwear; // 0x84a(0x01)
	char pad_84B[0x1]; // 0x84b(0x01)
	float MinSpeed; // 0x84c(0x04)
	bool DecreaseWalk?; // 0x850(0x01)
	bool OnSpyEye; // 0x851(0x01)
	char pad_852[0x6]; // 0x852(0x06)
	struct UInteractableButtonsWidget_C* InteractButtonWBP; // 0x858(0x08)
	struct FText toChairText; // 0x860(0x18)
	struct FText pickupSurvText; // 0x878(0x18)
	struct FText dropSurvText; // 0x890(0x18)
	struct UAudioComponent* ExplosionSound; // 0x8a8(0x08)
	struct UProgressBarWBP_C* ProgressBarWBP; // 0x8b0(0x08)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x8b8(0x10)
	float MaxSpeedDefault; // 0x8c8(0x04)
	float MinSpeedDefault; // 0x8cc(0x04)
	struct FFMODEventInstance LevelAmbient; // 0x8d0(0x08)
	float MeleeAttackRadius; // 0x8d8(0x04)
	float Sensivity; // 0x8dc(0x04)
	bool AttackBoolAnim; // 0x8e0(0x01)
	char pad_8E1[0x7]; // 0x8e1(0x07)
	struct AHypnoChairBP_C* ChairSaved; // 0x8e8(0x08)
	struct AHypnoChairBP_C* NewVar_2; // 0x8f0(0x08)
	bool AttackAllow; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
	struct FFMODEventInstance Laugh; // 0x900(0x08)
	struct UFMODAudioComponent* LaughComp; // 0x908(0x08)
	float XLocationFPPMESH; // 0x910(0x04)
	int32_t Score; // 0x914(0x04)
	bool JumpEnd; // 0x918(0x01)
	char pad_919[0x7]; // 0x919(0x07)
	struct UCrossHairWBP_C* CrossHair; // 0x920(0x08)
	bool FIRE; // 0x928(0x01)
	bool Plant; // 0x929(0x01)
	bool Flashed; // 0x92a(0x01)
	char pad_92B[0x5]; // 0x92b(0x05)
	struct ASurvivorMasterBP_C* SurvCrawl; // 0x930(0x08)
	struct UFMODAudioComponent* spyEyeSpotter; // 0x938(0x08)
	float VerticalValue; // 0x940(0x04)
	float HorizontalValue; // 0x944(0x04)
	float IncreaseSpeedMultiplyTime; // 0x948(0x04)
	float DecreaseSpeedMultiplyTime; // 0x94c(0x04)
	int32_t KillerType; // 0x950(0x04)
	bool HardHit?; // 0x954(0x01)
	bool LockMouseInput; // 0x955(0x01)
	char pad_956[0x2]; // 0x956(0x02)
	struct AHUD_PropHunt_C* HudKiller; // 0x958(0x08)
	bool AstralIn?; // 0x960(0x01)
	bool KnifeInHand; // 0x961(0x01)
	char pad_962[0x2]; // 0x962(0x02)
	float InertiaSpeed; // 0x964(0x04)
	float InertiaSoef; // 0x968(0x04)
	char pad_96C[0x4]; // 0x96c(0x04)
	struct ASurvivorMasterBP_C* NewVar_3; // 0x970(0x08)
	float ZinterpCoef; // 0x978(0x04)
	bool AfterJump; // 0x97c(0x01)
	bool SimpleDrop; // 0x97d(0x01)
	bool ChairDrop; // 0x97e(0x01)
	bool Catch; // 0x97f(0x01)
	bool Runaway; // 0x980(0x01)
	char pad_981[0x3]; // 0x981(0x03)
	float YawMod; // 0x984(0x04)
	bool ToChairMove; // 0x988(0x01)
	char pad_989[0x3]; // 0x989(0x03)
	struct FRotator HeadRotator; // 0x98c(0x0c)
	float NewVar_4; // 0x998(0x04)
	bool SpawnKnife; // 0x99c(0x01)
	bool AllowVoice; // 0x99d(0x01)
	bool VoiceActive?; // 0x99e(0x01)
	char pad_99F[0x1]; // 0x99f(0x01)
	struct FString ScoreText; // 0x9a0(0x10)
	float DamageMultiply; // 0x9b0(0x04)
	bool StartTrackSurv; // 0x9b4(0x01)
	char pad_9B5[0x3]; // 0x9b5(0x03)
	struct TArray<struct ASurvivorMasterBP_C*> SurfsOnEye; // 0x9b8(0x10)
	struct TArray<float> TimeDelay; // 0x9c8(0x10)
	struct TArray<bool> SeeSurvArray; // 0x9d8(0x10)
	struct AActor* ActorToMove; // 0x9e8(0x08)
	struct UFMODAudioComponent* LaughKiller; // 0x9f0(0x08)
	bool OnKiller?; // 0x9f8(0x01)
	bool CDWidget; // 0x9f9(0x01)
	char pad_9FA[0x6]; // 0x9fa(0x06)
	struct TArray<float> StayDelay; // 0xa00(0x10)
	float XAxis; // 0xa10(0x04)
	float YAxis; // 0xa14(0x04)
	bool SurvCanGetDMG; // 0xa18(0x01)
	char pad_A19[0x3]; // 0xa19(0x03)
	struct FName SurvAttachBoneName; // 0xa1c(0x08)
	char pad_A24[0x4]; // 0xa24(0x04)
	struct USkillPoints_C* SkillPoints; // 0xa28(0x08)
	struct ULevelSystem_C* LevelSystemRef; // 0xa30(0x08)
	int32_t HandAttack; // 0xa38(0x04)
	char pad_A3C[0x4]; // 0xa3c(0x04)
	struct TArray<struct FVector> CoinImpulse; // 0xa40(0x10)
	bool MarioStun; // 0xa50(0x01)
	bool SurvExitCollision; // 0xa51(0x01)
	bool StopKillerMusic?; // 0xa52(0x01)
	bool ImKiller?; // 0xa53(0x01)
	bool PropSound?; // 0xa54(0x01)
	bool AttackBlocked?; // 0xa55(0x01)
	bool HiddenAttack?; // 0xa56(0x01)
	char pad_A57[0x1]; // 0xa57(0x01)
	struct TArray<struct AActor*> AudioIgnore; // 0xa58(0x10)
	bool chase; // 0xa68(0x01)
	char pad_A69[0x7]; // 0xa69(0x07)
	struct TArray<bool> ChaseArray; // 0xa70(0x10)
	struct FFMODEventInstance ChaseSound2D; // 0xa80(0x08)
	float JumpTime; // 0xa88(0x04)
	bool chaseb; // 0xa8c(0x01)
	char pad_A8D[0x3]; // 0xa8d(0x03)
	float SurvEscapeAnimationLenght; // 0xa90(0x04)
	char pad_A94[0xc]; // 0xa94(0x0c)
	struct FTransform SurvMeshLastPosition; // 0xaa0(0x30)
	struct TArray<struct UMaterialInstanceDynamic*> arrayDynMatInst; // 0xad0(0x10)
	bool UnStunned; // 0xae0(0x01)
	bool DoOnceChase; // 0xae1(0x01)
	bool DetectDelay; // 0xae2(0x01)
	char pad_AE3[0x5]; // 0xae3(0x05)
	struct APostProcessVolume* PostProcessVolumeVar; // 0xae8(0x08)
	struct FPostProcessSettings DefaultPostProcessSettings; // 0xaf0(0x550)
	struct UMaterialInstanceDynamic* MaterialOutline; // 0x1040(0x08)
	struct UMaterialInstanceDynamic* MaterialLens; // 0x1048(0x08)
	bool gameStarted; // 0x1050(0x01)
	char pad_1051[0x3]; // 0x1051(0x03)
	float IdleTime; // 0x1054(0x04)
	bool IdleBool; // 0x1058(0x01)
	char pad_1059[0x3]; // 0x1059(0x03)
	float IdleTimeReady; // 0x105c(0x04)
	struct FVector ToChairLoc; // 0x1060(0x0c)
	char pad_106C[0x4]; // 0x106c(0x04)
	struct TArray<float> SurvChaseDelay; // 0x1070(0x10)
	float DeltaSec; // 0x1080(0x04)
	bool IdleBlock; // 0x1084(0x01)
	char pad_1085[0x3]; // 0x1085(0x03)
	struct UMaterialInstanceDynamic* MaterialVignette; // 0x1088(0x08)
	struct UMaterialInstanceDynamic* MaterialBlur; // 0x1090(0x08)
	bool StopMove?; // 0x1098(0x01)
	char pad_1099[0x3]; // 0x1099(0x03)
	float StunTimeBySurv; // 0x109c(0x04)
	float LastAirTime; // 0x10a0(0x04)
	bool Tutorial?; // 0x10a4(0x01)
	bool BlockSurvTrack?; // 0x10a5(0x01)
	char pad_10A6[0x2]; // 0x10a6(0x02)
	float CDAttackDuration; // 0x10a8(0x04)
	float AttackAnimDuration; // 0x10ac(0x04)
	float CDAttackDurationBig; // 0x10b0(0x04)
	float AttackAnimDurationBig; // 0x10b4(0x04)
	bool chaseDelayer; // 0x10b8(0x01)
	bool UberRotate; // 0x10b9(0x01)
	char pad_10BA[0x2]; // 0x10ba(0x02)
	float DeltaSecSpeed; // 0x10bc(0x04)
	bool SeekBool; // 0x10c0(0x01)
	bool GetReady; // 0x10c1(0x01)
	bool SeekDetectCheck; // 0x10c2(0x01)
	bool OnlyTPP?; // 0x10c3(0x01)
	bool DoOnceTrack; // 0x10c4(0x01)
	char pad_10C5[0x3]; // 0x10c5(0x03)
	struct TArray<struct ASurvivorMasterBP_C*> SurfsOnEye2; // 0x10c8(0x10)
	float ImpulseStunMultiply; // 0x10d8(0x04)
	char pad_10DC[0x4]; // 0x10dc(0x04)
	struct ASurvivorMasterBP_C* SurvivorStunRef; // 0x10e0(0x08)
	bool NewVar_5; // 0x10e8(0x01)
	char pad_10E9[0x7]; // 0x10e9(0x07)
	struct UPhysicalMaterial* Phys Mat; // 0x10f0(0x08)
	bool Freeze; // 0x10f8(0x01)
	char pad_10F9[0x7]; // 0x10f9(0x07)
	struct AActor* Stun Actor; // 0x1100(0x08)
	float BloodLustLvl; // 0x1108(0x04)
	float BloodLustSpeedAdd; // 0x110c(0x04)
	float BloodLustTimeActual; // 0x1110(0x04)
	float BloodLustSpeedSubtraction; // 0x1114(0x04)
	bool BloodLustOffB; // 0x1118(0x01)
	char pad_1119[0x3]; // 0x1119(0x03)
	float BloodLustTimeOff; // 0x111c(0x04)
	bool BloodLustHitted; // 0x1120(0x01)
	char pad_1121[0x3]; // 0x1121(0x03)
	float NewVar_6; // 0x1124(0x04)
	float BloodLustTimeLvl; // 0x1128(0x04)
	int32_t BloodLustLvlInt; // 0x112c(0x04)
	float BloodLustTimeDiv; // 0x1130(0x04)
	bool Range?; // 0x1134(0x01)
	char pad_1135[0x3]; // 0x1135(0x03)
	struct TArray<float> SurvsSeeTimer; // 0x1138(0x10)
	bool BInFocus; // 0x1148(0x01)
	char pad_1149[0x3]; // 0x1149(0x03)
	float InFocusTime; // 0x114c(0x04)
	bool BQuietHour; // 0x1150(0x01)
	bool BTimeIsTicking; // 0x1151(0x01)
	bool BNightmare; // 0x1152(0x01)
	bool BObservation; // 0x1153(0x01)
	bool BPunishment; // 0x1154(0x01)
	bool BDeadMansChest; // 0x1155(0x01)
	bool BImprisonment; // 0x1156(0x01)
	bool BBrokenTime; // 0x1157(0x01)
	bool BBait; // 0x1158(0x01)
	char pad_1159[0x7]; // 0x1159(0x07)
	struct FFMODEventInstance BloodLustFMOD; // 0x1160(0x08)
	float UntouchMaxSpeedDefault; // 0x1168(0x04)
	struct FVector Scale; // 0x116c(0x0c)
	float StunTimeBeforeAnim; // 0x1178(0x04)
	float StunTimeAfterAnim; // 0x117c(0x04)
	bool ChairDropChecker; // 0x1180(0x01)
	char pad_1181[0x3]; // 0x1181(0x03)
	struct FName Socket Name; // 0x1184(0x08)
	int32_t CoinsCount; // 0x118c(0x04)
	struct ANewAlarmBP_C* As New Alarm BP; // 0x1190(0x08)
	bool BrokeAlarm; // 0x1198(0x01)
	char pad_1199[0x3]; // 0x1199(0x03)
	float BrokeTime; // 0x119c(0x04)
	struct FVector NewVar_7; // 0x11a0(0x0c)
	char pad_11AC[0x4]; // 0x11ac(0x04)
	struct AActor* TempCalculateRay; // 0x11b0(0x08)
	float DistanceSurvPropSee; // 0x11b8(0x04)
	char pad_11BC[0x4]; // 0x11bc(0x04)
	struct ASurvivorMasterBP_C* SurvPropSeeRef; // 0x11c0(0x08)
	struct ASurvivorMasterBP_C* tempPropSeeSurv; // 0x11c8(0x08)
	float PropSeeTime; // 0x11d0(0x04)
	char pad_11D4[0x4]; // 0x11d4(0x04)
	struct FFMODEventInstance KillerSpottedFmod; // 0x11d8(0x08)
	struct FFMODEventInstance KillerSpotted2; // 0x11e0(0x08)
	struct UMaterialInstanceDynamic* SoftOutline; // 0x11e8(0x08)
	struct UFMODAudioComponent* MoveAmbAudio; // 0x11f0(0x08)
	bool TestViewB; // 0x11f8(0x01)
	bool TPPCamEvent; // 0x11f9(0x01)
	char pad_11FA[0x6]; // 0x11fa(0x06)
	struct AKIllerCoin_C* NewVar_8; // 0x1200(0x08)
	bool CheatEnabled; // 0x1208(0x01)
	char pad_1209[0x7]; // 0x1209(0x07)
	struct UStaticMeshComponent* RangeMeshHit; // 0x1210(0x08)
	struct FVector RangeLocHit; // 0x1218(0x0c)
	bool TutorialBlock?; // 0x1224(0x01)
	bool PickupSurv; // 0x1225(0x01)

	void HeadRotationFunc(struct FRotator Rotation); // Function KillerMasterBP.KillerMasterBP_C.HeadRotationFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void get level name(bool B, struct FString Name); // Function KillerMasterBP.KillerMasterBP_C.get level name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurfaceSoundPlayer(struct UFMODEvent* Event); // Function KillerMasterBP.KillerMasterBP_C.SurfaceSoundPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairCheckFunc(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.ChairCheckFunc // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScreenshotFunc(); // Function KillerMasterBP.KillerMasterBP_C.ScreenshotFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveSoundFunc(); // Function KillerMasterBP.KillerMasterBP_C.MoveSoundFunc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmBrokeTimer(); // Function KillerMasterBP.KillerMasterBP_C.AlarmBrokeTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void coinDropper(bool flashlight, struct ASurvivorMasterBP_C* Surv); // Function KillerMasterBP.KillerMasterBP_C.coinDropper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewFunction_2(); // Function KillerMasterBP.KillerMasterBP_C.NewFunction_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeeOtherKillers(); // Function KillerMasterBP.KillerMasterBP_C.SeeOtherKillers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickupSpeed(bool Pickup); // Function KillerMasterBP.KillerMasterBP_C.PickupSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hypno Chair Ref Killer(); // Function KillerMasterBP.KillerMasterBP_C.Hypno Chair Ref Killer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvSeeAddTimer(struct ASurvivorMasterBP_C* SurvRef, float timeAdd, bool Close?); // Function KillerMasterBP.KillerMasterBP_C.SurvSeeAddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvSeeTimer(); // Function KillerMasterBP.KillerMasterBP_C.SurvSeeTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Melee Keymaster?(bool B); // Function KillerMasterBP.KillerMasterBP_C.Melee Keymaster? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BloodLust(); // Function KillerMasterBP.KillerMasterBP_C.BloodLust // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseOffGameEnd(); // Function KillerMasterBP.KillerMasterBP_C.ChaseOffGameEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Game Mode(bool Propnight?); // Function KillerMasterBP.KillerMasterBP_C.Game Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_Stunned?(); // Function KillerMasterBP.KillerMasterBP_C.OnRep_Stunned? // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DynamicMatInit(); // Function KillerMasterBP.KillerMasterBP_C.DynamicMatInit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvChaser(); // Function KillerMasterBP.KillerMasterBP_C.SurvChaser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_HandAttack(); // Function KillerMasterBP.KillerMasterBP_C.OnRep_HandAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ElevatorTrace(); // Function KillerMasterBP.KillerMasterBP_C.ElevatorTrace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Surf Track 3000(float TimeIn); // Function KillerMasterBP.KillerMasterBP_C.Surf Track 3000 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void surv to chair(); // Function KillerMasterBP.KillerMasterBP_C.surv to chair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvCrawlInBox(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.GetSurvCrawlInBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewFunction_1(); // Function KillerMasterBP.KillerMasterBP_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocationChangerKiller(struct AActor* NewParam); // Function KillerMasterBP.KillerMasterBP_C.LocationChangerKiller // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocationCheckForSurv(bool Hit?); // Function KillerMasterBP.KillerMasterBP_C.LocationCheckForSurv // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvHpCalc(struct ASurvivorMasterBP_C* SurvRefIn, int32_t DamageIn, bool Bool); // Function KillerMasterBP.KillerMasterBP_C.SurvHpCalc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurfaceSound(enum class EPhysicalSurface InputPin); // Function KillerMasterBP.KillerMasterBP_C.SurfaceSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpeedDown(); // Function KillerMasterBP.KillerMasterBP_C.SpeedDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpeedUp(); // Function KillerMasterBP.KillerMasterBP_C.SpeedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void reduceMaxWalkSpeed(float MaxSpeedPercent); // Function KillerMasterBP.KillerMasterBP_C.reduceMaxWalkSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MouseClickStopwatch(float A, bool SuperSmash?); // Function KillerMasterBP.KillerMasterBP_C.MouseClickStopwatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void impulse forward(struct UCharacterMovementComponent* self2, struct UCharacterMovementComponent* self3); // Function KillerMasterBP.KillerMasterBP_C.impulse forward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Forward(); // Function KillerMasterBP.KillerMasterBP_C.Forward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void IncreasorSpeed__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void IncreasorSpeed__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DecreasorSpeed__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DecreasorSpeed__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void SoundTimeline__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void SoundTimeline__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void StopSoundChaseTimeline__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void StopSoundChaseTimeline__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ScaleSizer__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ScaleSizer__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void AfterStunColor__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void AfterStunColor__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5__FinishedFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_5__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5__UpdateFunc(); // Function KillerMasterBP.KillerMasterBP_C.Timeline_5__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Add_K2Node_InputKeyEvent_11(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Subtract_K2Node_InputKeyEvent_10(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Subtract_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_F3_K2Node_InputKeyEvent_9(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F3_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_One_K2Node_InputKeyEvent_8(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_One_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void InpTchEvt_Released(enum class ETouchIndex FingerIndex, struct FVector Location); // Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Released // (BlueprintEvent) // @ game+0x132e1a0
	void InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, struct FVector Location); // Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Pressed // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_7(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_F2_K2Node_InputKeyEvent_5(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F2_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Graffiti_K2Node_InputActionEvent_4(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Graffiti_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Multiply_K2Node_InputKeyEvent_4(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up Survivor_K2Node_InputActionEvent_3(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up Survivor_K2Node_InputActionEvent_2(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Attack_K2Node_InputActionEvent_1(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Attack_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_J_K2Node_InputKeyEvent_3(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_J_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Divide_K2Node_InputKeyEvent_2(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Z_K2Node_InputKeyEvent_1(struct FKey Key); // Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Z_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void TeleportServer(); // Function KillerMasterBP.KillerMasterBP_C.TeleportServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportMulti(); // Function KillerMasterBP.KillerMasterBP_C.TeleportMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CD_Widget_Strat(struct FString AbilityName); // Function KillerMasterBP.KillerMasterBP_C.CD_Widget_Strat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvSpyEyeOn(struct ASurvivorMasterBP_C* SurvRef, struct ASpyEye_C* SpyEye); // Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOn // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvSpyEyeOff(struct ASpyEye_C* SpyEye, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOff // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hitter(struct ASurvivorMasterBP_C* SurvRef, int32_t Damage, bool knife, bool Range, bool BackStab); // Function KillerMasterBP.KillerMasterBP_C.Hitter // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseWalkSpeed(bool Hited?, bool Range?); // Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseWalkSpeedMulti(); // Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeedMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseWalkSpeed(bool Hited, bool Range?); // Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseWalkSpeedMulti(); // Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeedMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Casted?(); // Function KillerMasterBP.KillerMasterBP_C.Casted? // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void custed?Mult(); // Function KillerMasterBP.KillerMasterBP_C.custed?Mult // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunAwayMulti(bool NewParam, struct ASurvivorMasterBP_C* hellpSurv, bool Flashed?); // Function KillerMasterBP.KillerMasterBP_C.SurvRunAwayMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AmmoSet(int32_t Ammo); // Function KillerMasterBP.KillerMasterBP_C.AmmoSet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AmmoRotation(struct FRotator Rotator); // Function KillerMasterBP.KillerMasterBP_C.AmmoRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUp Multi(struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.PickUp Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotationAtack(); // Function KillerMasterBP.KillerMasterBP_C.RotationAtack // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalRotationEvent(struct FRotator NewParam); // Function KillerMasterBP.KillerMasterBP_C.LocalRotationEvent // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpeedChangeServ(float NewParam); // Function KillerMasterBP.KillerMasterBP_C.SpeedChangeServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToChairMulti(struct AHypnoChairBP_C* NewParam); // Function KillerMasterBP.KillerMasterBP_C.ToChairMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void cdAtack(); // Function KillerMasterBP.KillerMasterBP_C.cdAtack // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairOverlapEndServ(); // Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEndServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairOvelapEndMulti(); // Function KillerMasterBP.KillerMasterBP_C.ChairOvelapEndMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ToChairServ(struct AHypnoChairBP_C* NewParam); // Function KillerMasterBP.KillerMasterBP_C.ToChairServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunawayServ(bool NewParam, struct ASurvivorMasterBP_C* helpSurv, bool Flashed?); // Function KillerMasterBP.KillerMasterBP_C.SurvRunawayServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExplosionSoundServ(struct UStaticMeshComponent* bullet); // Function KillerMasterBP.KillerMasterBP_C.ExplosionSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FlashLightIncreaseSpeed(); // Function KillerMasterBP.KillerMasterBP_C.FlashLightIncreaseSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChek(); // Function KillerMasterBP.KillerMasterBP_C.ChairChek // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThirdPersonCamEvent(bool Now?); // Function KillerMasterBP.KillerMasterBP_C.ThirdPersonCamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FirstPersonCamEvent(bool Now?); // Function KillerMasterBP.KillerMasterBP_C.FirstPersonCamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void RotationCameraServ(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.RotationCameraServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotationCameraMulti(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.RotationCameraMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundIn(); // Function KillerMasterBP.KillerMasterBP_C.AstralSoundIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOut(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.AstralSoundOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInvisibility(); // Function KillerMasterBP.KillerMasterBP_C.AstralSoundInvisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundAmbStart(); // Function KillerMasterBP.KillerMasterBP_C.SoundAmbStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudio(); // Function KillerMasterBP.KillerMasterBP_C.AtackAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpeedChangeMulti(float NewParam); // Function KillerMasterBP.KillerMasterBP_C.SpeedChangeMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawServ(struct FVector NewParam); // Function KillerMasterBP.KillerMasterBP_C.SphereDrawServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawMulti(struct FVector NewParam); // Function KillerMasterBP.KillerMasterBP_C.SphereDrawMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAnimServ(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.AtackAnimServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAnimMulti(); // Function KillerMasterBP.KillerMasterBP_C.AtackAnimMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MeshVisibiltyOff(); // Function KillerMasterBP.KillerMasterBP_C.MeshVisibiltyOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeleyerAttackCollision(); // Function KillerMasterBP.KillerMasterBP_C.DeleyerAttackCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MeshVisibilityOn(); // Function KillerMasterBP.KillerMasterBP_C.MeshVisibilityOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AmbientOff(); // Function KillerMasterBP.KillerMasterBP_C.AmbientOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function KillerMasterBP.KillerMasterBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void LaughServ(); // Function KillerMasterBP.KillerMasterBP_C.LaughServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LaughMulti(); // Function KillerMasterBP.KillerMasterBP_C.LaughMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunBySurvivor(float StunTime, struct ASurvivorMasterBP_C* helpSurv); // Function KillerMasterBP.KillerMasterBP_C.StunBySurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void XLocationMeshEv(); // Function KillerMasterBP.KillerMasterBP_C.XLocationMeshEv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpChek(); // Function KillerMasterBP.KillerMasterBP_C.JumpChek // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropServ(); // Function KillerMasterBP.KillerMasterBP_C.DropServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUp Serv(struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.PickUp Serv // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function KillerMasterBP.KillerMasterBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void HitterServ(struct ASurvivorMasterBP_C* SurvRef, int32_t Damage, bool Crawl, bool Knife?, bool Range, bool BackStab); // Function KillerMasterBP.KillerMasterBP_C.HitterServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShot(); // Function KillerMasterBP.KillerMasterBP_C.StartAnimShot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlantAnim(); // Function KillerMasterBP.KillerMasterBP_C.PlantAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlantAnimServ(); // Function KillerMasterBP.KillerMasterBP_C.PlantAnimServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlantAnimMulti(); // Function KillerMasterBP.KillerMasterBP_C.PlantAnimMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitterMulti(struct ASurvivorMasterBP_C* SurvRef, bool Crawl, bool Chair); // Function KillerMasterBP.KillerMasterBP_C.HitterMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairOverlapEventMulti(struct AHypnoChairBP_C* ChairRef); // Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairOverlapEventServ(struct AHypnoChairBP_C* ChairRef); // Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39 // (BlueprintEvent) // @ game+0x132e1a0
	void ShootAudio(); // Function KillerMasterBP.KillerMasterBP_C.ShootAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActivateSurv(); // Function KillerMasterBP.KillerMasterBP_C.ActivateSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void hitSuface(bool Range?, struct UStaticMeshComponent* Mesh, struct FVector Loc, struct FVector norm, struct FHitResult HitResult); // Function KillerMasterBP.KillerMasterBP_C.hitSuface // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairServ(struct AHypnoChairBP_C* Chair); // Function KillerMasterBP.KillerMasterBP_C.ChairServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairMulti(struct AHypnoChairBP_C* Chair); // Function KillerMasterBP.KillerMasterBP_C.ChairMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvPropSound(enum class EPhysicalSurface SurfaceType); // Function KillerMasterBP.KillerMasterBP_C.SurvPropSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurfaceServ(enum class EPhysicalSurface Surface, struct UStaticMeshComponent* Mesh, bool Range); // Function KillerMasterBP.KillerMasterBP_C.SurfaceServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurfaceMulti(enum class EPhysicalSurface Surface, struct UStaticMeshComponent* Mesh, bool Range); // Function KillerMasterBP.KillerMasterBP_C.SurfaceMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvImpactSound(struct ASurvivorMasterBP_C* Surv, bool knife, bool Range, bool BackStab); // Function KillerMasterBP.KillerMasterBP_C.SurvImpactSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvImpactSoundServ(struct ASurvivorMasterBP_C* Surv, enum class DamageTypeEnum damagType); // Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvImpactSoundMulti(struct ASurvivorMasterBP_C* Surv, enum class DamageTypeEnum DmgType); // Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairEvent(struct AHypnoChairBP_C* Chair); // Function KillerMasterBP.KillerMasterBP_C.ChairEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LookUpServ(float Value); // Function KillerMasterBP.KillerMasterBP_C.LookUpServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LookUpMulti(float Value); // Function KillerMasterBP.KillerMasterBP_C.LookUpMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TurnServ(float Value); // Function KillerMasterBP.KillerMasterBP_C.TurnServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TurnMulti(float Value); // Function KillerMasterBP.KillerMasterBP_C.TurnMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Pickup(); // Function KillerMasterBP.KillerMasterBP_C.Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerType(int32_t Type); // Function KillerMasterBP.KillerMasterBP_C.SetKillerType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CDATACKER(); // Function KillerMasterBP.KillerMasterBP_C.CDATACKER // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillKnifeServ(); // Function KillerMasterBP.KillerMasterBP_C.KillKnifeServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillKnifeMulti(); // Function KillerMasterBP.KillerMasterBP_C.KillKnifeMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48 // (BlueprintEvent) // @ game+0x132e1a0
	void KnifeShootSoundStart(); // Function KillerMasterBP.KillerMasterBP_C.KnifeShootSoundStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeSpawnSound(); // Function KillerMasterBP.KillerMasterBP_C.KnifeSpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WeaponImpact(struct UStaticMeshComponent* meshRef); // Function KillerMasterBP.KillerMasterBP_C.WeaponImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41 // (BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetectorSoundTrue(); // Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundTrue // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetectorSoundFalse(); // Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundFalse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUDON(); // Function KillerMasterBP.KillerMasterBP_C.HUDON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Drop(); // Function KillerMasterBP.KillerMasterBP_C.Drop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InertCamera(); // Function KillerMasterBP.KillerMasterBP_C.InertCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HotkeyStarter(struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.HotkeyStarter // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastChangeFootwear(); // Function KillerMasterBP.KillerMasterBP_C.MulticastChangeFootwear // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerChangeFootwear(); // Function KillerMasterBP.KillerMasterBP_C.ServerChangeFootwear // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpFall(); // Function KillerMasterBP.KillerMasterBP_C.JumpFall // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetCharacterOwner(); // Function KillerMasterBP.KillerMasterBP_C.SetCharacterOwner // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFootState(enum class EFootState New Style); // Function KillerMasterBP.KillerMasterBP_C.ChangeFootState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime); // Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime); // Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime); // Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime); // Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeginFootprint(); // Function KillerMasterBP.KillerMasterBP_C.BeginFootprint // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveKiller(); // Function KillerMasterBP.KillerMasterBP_C.MoveKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void offignorer(); // Function KillerMasterBP.KillerMasterBP_C.offignorer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseReal(float NewParam, float NewParam2, float NewParam3); // Function KillerMasterBP.KillerMasterBP_C.IncreaseReal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseReal(float NewParam, float NewParam2, float NewParam3); // Function KillerMasterBP.KillerMasterBP_C.DecreaseReal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairMoveEvent(float NewParam); // Function KillerMasterBP.KillerMasterBP_C.ChairMoveEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Marked(); // Function KillerMasterBP.KillerMasterBP_C.Marked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HeadRotatorServ(struct FRotator Rotator); // Function KillerMasterBP.KillerMasterBP_C.HeadRotatorServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HeadRotatorMulti(struct FRotator Rotator); // Function KillerMasterBP.KillerMasterBP_C.HeadRotatorMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotatorHead(); // Function KillerMasterBP.KillerMasterBP_C.RotatorHead // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CamEv(); // Function KillerMasterBP.KillerMasterBP_C.CamEv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnDecal(struct FName SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer?, bool ImProp?, bool Run?, bool Crouch?, struct UFMODAudioComponent* FmodAudio, int32_t KillerType, bool Crawl?, bool Shake); // Function KillerMasterBP.KillerMasterBP_C.SpawnDecal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Chair Open Stage(); // Function KillerMasterBP.KillerMasterBP_C.Chair Open Stage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomLMB(); // Function KillerMasterBP.KillerMasterBP_C.CustomLMB // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnockDownSurvServ(bool Crawl, bool Chair); // Function KillerMasterBP.KillerMasterBP_C.KnockDownSurvServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendScore(); // Function KillerMasterBP.KillerMasterBP_C.SendScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendKillerType(int32_t KillerType); // Function KillerMasterBP.KillerMasterBP_C.SendKillerType // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceivePossessed(struct AController* NewController); // Function KillerMasterBP.KillerMasterBP_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InitVoice(); // Function KillerMasterBP.KillerMasterBP_C.InitVoice // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(struct TArray<char> VoiceData, float MicLevel); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ServVoiceProc(struct TArray<char> CompressedVoiceData); // Function KillerMasterBP.KillerMasterBP_C.ServVoiceProc // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveVoice(struct TArray<char> CompressedVoiceData); // Function KillerMasterBP.KillerMasterBP_C.ReceiveVoice // (Net|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendVoiceStatusServer(bool VoiceActive?); // Function KillerMasterBP.KillerMasterBP_C.SendVoiceStatusServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadSensivity(); // Function KillerMasterBP.KillerMasterBP_C.LoadSensivity // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSee(struct AActor* NewParam); // Function KillerMasterBP.KillerMasterBP_C.AlarmSee // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToChairMoveSurv(float NewParam); // Function KillerMasterBP.KillerMasterBP_C.ToChairMoveSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ProgressBarStart(float range max); // Function KillerMasterBP.KillerMasterBP_C.ProgressBarStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MessegeToSurvSeeServ(bool See?, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MessegeToSurvSeeMulti(bool See?, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvLocationServ(struct FVector NewParam, struct FRotator NewParam2, struct ASurvivorMasterBP_C* NewParam3); // Function KillerMasterBP.KillerMasterBP_C.SurvLocationServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvLocationMulti(struct FVector NewParam, struct FRotator NewParam2, struct ASurvivorMasterBP_C* NewParam3); // Function KillerMasterBP.KillerMasterBP_C.SurvLocationMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickupAttachServ(struct ASurvivorMasterBP_C* NewParam); // Function KillerMasterBP.KillerMasterBP_C.PickupAttachServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickupAttachMulti(struct ASurvivorMasterBP_C* NewParam); // Function KillerMasterBP.KillerMasterBP_C.PickupAttachMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustopDepth(bool NewParam); // Function KillerMasterBP.KillerMasterBP_C.CustopDepth // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameFreeze(); // Function KillerMasterBP.KillerMasterBP_C.EndGameFreeze // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnHitParticlesServ(struct FVector Location, struct FRotator Rotation, bool IsHit, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnHitParticlesMulti(struct FVector Location, struct FRotator Rotation, bool IsHit, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckStatus(); // Function KillerMasterBP.KillerMasterBP_C.CheckStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedChair(); // Function KillerMasterBP.KillerMasterBP_C.FailedChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ElevatorInteract(struct AElevator_C* ref); // Function KillerMasterBP.KillerMasterBP_C.ElevatorInteract // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLevelSystem(); // Function KillerMasterBP.KillerMasterBP_C.SetLevelSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void SpawnCoins(struct ASurvivorMasterBP_C* ref); // Function KillerMasterBP.KillerMasterBP_C.SpawnCoins // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void StunSoundServ(int32_t KillerType); // Function KillerMasterBP.KillerMasterBP_C.StunSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunSoundMulti(int32_t KillerType); // Function KillerMasterBP.KillerMasterBP_C.StunSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerGrabSoundServ(); // Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerGrabSoundMulti(); // Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaserServ(bool B, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.ChaserServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaserMulti(bool B, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.ChaserMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerVisible(); // Function KillerMasterBP.KillerMasterBP_C.KillerVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseLocal(bool B, struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.ChaseLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void chaseOffSound(); // Function KillerMasterBP.KillerMasterBP_C.chaseOffSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerCatchSound(); // Function KillerMasterBP.KillerMasterBP_C.KillerCatchSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerLaugh(); // Function KillerMasterBP.KillerMasterBP_C.KillerLaugh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerServ(); // Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerMulti(); // Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterJumpServ(); // Function KillerMasterBP.KillerMasterBP_C.AfterJumpServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterJumpMulti(); // Function KillerMasterBP.KillerMasterBP_C.AfterJumpMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseOnSound(); // Function KillerMasterBP.KillerMasterBP_C.ChaseOnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopChaseOn(); // Function KillerMasterBP.KillerMasterBP_C.StopChaseOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopStopChase(); // Function KillerMasterBP.KillerMasterBP_C.StopStopChase // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlindSound(); // Function KillerMasterBP.KillerMasterBP_C.BlindSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunawaySound(); // Function KillerMasterBP.KillerMasterBP_C.SurvRunawaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffitiServ(struct FVector Location, struct FVector Forward); // Function KillerMasterBP.KillerMasterBP_C.GraffitiServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffitiMulti(struct FVector Location, struct FVector Forward); // Function KillerMasterBP.KillerMasterBP_C.GraffitiMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunColor(); // Function KillerMasterBP.KillerMasterBP_C.StunColor // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerDetectServ(); // Function KillerMasterBP.KillerMasterBP_C.KillerDetectServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerDetectMulti(); // Function KillerMasterBP.KillerMasterBP_C.KillerDetectMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PostProcessEffect(); // Function KillerMasterBP.KillerMasterBP_C.PostProcessEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPostProcess(); // Function KillerMasterBP.KillerMasterBP_C.GetPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlurEffect(bool On?); // Function KillerMasterBP.KillerMasterBP_C.BlurEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayOffServ(); // Function KillerMasterBP.KillerMasterBP_C.DelayOffServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayOffMulti(); // Function KillerMasterBP.KillerMasterBP_C.DelayOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TransformationEffect(); // Function KillerMasterBP.KillerMasterBP_C.TransformationEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalMeshUpdate(); // Function KillerMasterBP.KillerMasterBP_C.LocalMeshUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomInteractPressed(); // Function KillerMasterBP.KillerMasterBP_C.CustomInteractPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WalkShake(); // Function KillerMasterBP.KillerMasterBP_C.WalkShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpShake(); // Function KillerMasterBP.KillerMasterBP_C.JumpShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateChildPPMaterial(); // Function KillerMasterBP.KillerMasterBP_C.CreateChildPPMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScoreStunServer(struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.ScoreStunServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScoreStunMulti(struct ASurvivorMasterBP_C* SurvRef); // Function KillerMasterBP.KillerMasterBP_C.ScoreStunMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MarioStunReset(); // Function KillerMasterBP.KillerMasterBP_C.MarioStunReset // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseDelayerEvent(); // Function KillerMasterBP.KillerMasterBP_C.ChaseDelayerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameON(); // Function KillerMasterBP.KillerMasterBP_C.NicknameON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeekServ(); // Function KillerMasterBP.KillerMasterBP_C.SeekServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeekMulti(); // Function KillerMasterBP.KillerMasterBP_C.SeekMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UnstunnedChecker(); // Function KillerMasterBP.KillerMasterBP_C.UnstunnedChecker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunScoreSurvServ(struct ASurvivorMasterBP_C* Surv); // Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunScoreSurvMulti(struct ASurvivorMasterBP_C* Surv); // Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseNotValidLocal(int32_t Index); // Function KillerMasterBP.KillerMasterBP_C.ChaseNotValidLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TracerForParticles(struct UStaticMeshComponent* Mesh, struct FVector Loc, struct FVector norm, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.TracerForParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowKnockDownMessage(struct ASurvivorMasterBP_C* Surv); // Function KillerMasterBP.KillerMasterBP_C.ShowKnockDownMessage // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinDropSoundMulti(struct ACoinActor_C* ref); // Function KillerMasterBP.KillerMasterBP_C.CoinDropSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseTime(); // Function KillerMasterBP.KillerMasterBP_C.DecreaseTime // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunCheck(struct AActor* ref); // Function KillerMasterBP.KillerMasterBP_C.StunCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerServ1(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ1 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerServ2(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ2 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerServ3(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ3 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerMulti1(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti1 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerMulti2(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti2 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairChekerMulti3(); // Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti3 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairMoveOFFServ(); // Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairMoveOFFMulti(); // Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_2(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Left_K2Node_InputAxisEvent_3(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Right_K2Node_InputAxisEvent_4(float AxisValue); // Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void IntroWeapon(); // Function KillerMasterBP.KillerMasterBP_C.IntroWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinsLocal(struct ASurvivorMasterBP_C* ref); // Function KillerMasterBP.KillerMasterBP_C.CoinsLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffitiHitServ(struct FVector v3Loc, struct FVector v3For); // Function KillerMasterBP.KillerMasterBP_C.GraffitiHitServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffitiHitMulti(struct FVector v3Loc, struct FVector v3For); // Function KillerMasterBP.KillerMasterBP_C.GraffitiHitMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffitiHit(); // Function KillerMasterBP.KillerMasterBP_C.GraffitiHit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerDoor(struct AInteractableDoor_C* Door); // Function KillerMasterBP.KillerMasterBP_C.ServerDoor // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastDoor(struct AInteractableDoor_C* Door); // Function KillerMasterBP.KillerMasterBP_C.MulticastDoor // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BrokenTimeServ(struct ANewAlarmBP_C* ref); // Function KillerMasterBP.KillerMasterBP_C.BrokenTimeServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BrokenTimeMulti(struct ANewAlarmBP_C* ref); // Function KillerMasterBP.KillerMasterBP_C.BrokenTimeMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void sendServ(struct FVector NewParam); // Function KillerMasterBP.KillerMasterBP_C.sendServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void HUD_StartJump(); // Function KillerMasterBP.KillerMasterBP_C.HUD_StartJump // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUD_EndJUmp(); // Function KillerMasterBP.KillerMasterBP_C.HUD_EndJUmp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Perexod(); // Function KillerMasterBP.KillerMasterBP_C.Perexod // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchWeaponVisibility(bool On?); // Function KillerMasterBP.KillerMasterBP_C.SwitchWeaponVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HummerVis(bool B); // Function KillerMasterBP.KillerMasterBP_C.HummerVis // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastGlass(struct AInteractableDoor_C* Door); // Function KillerMasterBP.KillerMasterBP_C.MulticastGlass // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerGlass(struct AInteractableDoor_C* Door); // Function KillerMasterBP.KillerMasterBP_C.ServerGlass // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExposedSurvs(); // Function KillerMasterBP.KillerMasterBP_C.ExposedSurvs // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnHitParticlesLocal(struct FVector Location, struct FRotator Rotation, bool IsHit, struct FHitResult hit); // Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IdleSoundLocal(); // Function KillerMasterBP.KillerMasterBP_C.IdleSoundLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IdleSoundServ(); // Function KillerMasterBP.KillerMasterBP_C.IdleSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IdleSoundMulti(); // Function KillerMasterBP.KillerMasterBP_C.IdleSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UnstunDelay(); // Function KillerMasterBP.KillerMasterBP_C.UnstunDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerLocal(); // Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CollisionChairChecker(); // Function KillerMasterBP.KillerMasterBP_C.CollisionChairChecker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ZoomOut(); // Function KillerMasterBP.KillerMasterBP_C.ZoomOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropMulti(); // Function KillerMasterBP.KillerMasterBP_C.DropMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractPressed(); // Function KillerMasterBP.KillerMasterBP_C.InteractPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractReleased(); // Function KillerMasterBP.KillerMasterBP_C.InteractReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerMasterBP(int32_t EntryPoint); // Function KillerMasterBP.KillerMasterBP_C.ExecuteUbergraph_KillerMasterBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

