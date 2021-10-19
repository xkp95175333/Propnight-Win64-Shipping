// BlueprintGeneratedClass SurvivorMasterBP.SurvivorMasterBP_C
// Size: 0x16f8 (Inherited: 0x4e0)
struct ASurvivorMasterBP_C : APhysicsCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UCameraComponent* FPPCamera; // 0x4e8(0x08)
	struct USpringArmComponent* SpringArm1; // 0x4f0(0x08)
	struct UNiagaraComponent* StaticMeshNiagaraDestructable; // 0x4f8(0x08)
	struct USurvPropDestruction_C* SurvPropDestruction; // 0x500(0x08)
	struct UFMODAudioComponent* FMODPropBurningAudio; // 0x508(0x08)
	struct UWidgetComponent* NicknameWidget; // 0x510(0x08)
	struct UWidgetComponent* SurvRoleWidget; // 0x518(0x08)
	struct UNiagaraComponent* StaticMeshNiagaraCursed; // 0x520(0x08)
	struct UNiagaraComponent* SkeletalMeshNiagara; // 0x528(0x08)
	struct UNiagaraComponent* StaticMeshNiagara; // 0x530(0x08)
	struct USpringArmComponent* PropArm; // 0x538(0x08)
	struct UChildActorComponent* PropFPPCamera; // 0x540(0x08)
	struct UGraffityMaker_C* GraffityMaker; // 0x548(0x08)
	struct UFMODAudioComponent* FMODOnceVoices; // 0x550(0x08)
	struct UFMODAudioComponent* FMODLoopVoices; // 0x558(0x08)
	struct UFMODAudioComponent* FMODChair; // 0x560(0x08)
	struct USphereComponent* StaticMeshContainer; // 0x568(0x08)
	struct UStaticMeshComponent* PlayerStaticMesh; // 0x570(0x08)
	struct USceneComponent* StunScene; // 0x578(0x08)
	struct USoundChatSounds_C* SoundChatSounds; // 0x580(0x08)
	struct USceneComponent* FPPCamerasPlace; // 0x588(0x08)
	struct UCheckInteractable_C* CheckInteractable; // 0x590(0x08)
	struct UAlarmsWidgetSize_C* AlarmsWidgetSize; // 0x598(0x08)
	struct UCableComponent* Cable; // 0x5a0(0x08)
	struct UFMODAudioComponent* FMODAudio2; // 0x5a8(0x08)
	struct UItemWorker_C* ItemWorker; // 0x5b0(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x5b8(0x08)
	struct USkeletalMeshComponent* InvisFPPMesh; // 0x5c0(0x08)
	struct USkeletalMeshComponent* InvisMesh; // 0x5c8(0x08)
	struct UVoipManagerComponent* VoipManager; // 0x5d0(0x08)
	struct UVoipAudioComponent* VoipAudio; // 0x5d8(0x08)
	struct USceneComponent* DropItemPosition; // 0x5e0(0x08)
	struct UBoxComponent* InteractBox; // 0x5e8(0x08)
	struct USceneComponent* InteractBoxContainer; // 0x5f0(0x08)
	struct USpotLightComponent* SpotLight; // 0x5f8(0x08)
	struct USceneComponent* AudioListener; // 0x600(0x08)
	struct UATPCCameraComponent* ATPCCamera; // 0x608(0x08)
	struct USceneComponent* Scene; // 0x610(0x08)
	struct USurvFart_C* SurvFart; // 0x618(0x08)
	struct USpringArmComponent* SpringArm; // 0x620(0x08)
	struct URegeneration_C* Regeneration1; // 0x628(0x08)
	struct USurvivorSoundsMaster-2D_C* SurvivorSoundMaster; // 0x630(0x08)
	struct USurvivorInteraction_C* SurvInteraction; // 0x638(0x08)
	struct USceneComponent* DefaultPointProp; // 0x640(0x08)
	struct UBoxComponent* Box1; // 0x648(0x08)
	struct UFMODAudioComponent* FMODPropLoopAudio; // 0x650(0x08)
	struct USceneComponent* FPPMeshContainer; // 0x658(0x08)
	struct UFMODAudioComponent* FMODPropHitAudio; // 0x660(0x08)
	struct USceneComponent* CameraGrapplePoint; // 0x668(0x08)
	struct USkeletalMeshComponent* FPPMesh; // 0x670(0x08)
	struct UCameraComponent* FollowCamera; // 0x678(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x680(0x08)
	struct UPostProcessComponent* PostProcess; // 0x688(0x08)
	struct UFootprintComponent_C* FootprintComponent; // 0x690(0x08)
	struct USmoothSync* SmoothSync; // 0x698(0x08)
	float Timeline_4_Alpha_4D4D07A64AF531E051135BB4A10EAAE4; // 0x6a0(0x04)
	enum class ETimelineDirection Timeline_4__Direction_4D4D07A64AF531E051135BB4A10EAAE4; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* Timeline_5; // 0x6a8(0x08)
	float Timeline_3_Alpha_EDD8D8BB42BC6EFFD204ACB3F90E9A23; // 0x6b0(0x04)
	enum class ETimelineDirection Timeline_3__Direction_EDD8D8BB42BC6EFFD204ACB3F90E9A23; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	struct UTimelineComponent* Timeline_4; // 0x6b8(0x08)
	float ZoomOutTimeline_Alpha_56FD6C724DFA377C7F5A27A71D58F2DB; // 0x6c0(0x04)
	enum class ETimelineDirection ZoomOutTimeline__Direction_56FD6C724DFA377C7F5A27A71D58F2DB; // 0x6c4(0x01)
	char pad_6C5[0x3]; // 0x6c5(0x03)
	struct UTimelineComponent* ZoomOutTimeline; // 0x6c8(0x08)
	float Timeline_0_Alpha_D8903D0E43C9C9AC8C494192B318AADB; // 0x6d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_D8903D0E43C9C9AC8C494192B318AADB; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x6d8(0x08)
	enum class ETimelineDirection DropItemHold__Direction_5E24FDAC43B39BF64E2B2E89568AAD81; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct UTimelineComponent* DropItemHold; // 0x6e8(0x08)
	float DeathEffectTimeline_Lerp_1AD56D5F482733F5B7FF21945C716C1A; // 0x6f0(0x04)
	enum class ETimelineDirection DeathEffectTimeline__Direction_1AD56D5F482733F5B7FF21945C716C1A; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	struct UTimelineComponent* DeathEffectTimeline; // 0x6f8(0x08)
	float Timeline_2_Alpha_F590837A4D182D3C48036EA9ACD1FE91; // 0x700(0x04)
	enum class ETimelineDirection Timeline_2__Direction_F590837A4D182D3C48036EA9ACD1FE91; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct UTimelineComponent* Timeline_3; // 0x708(0x08)
	float BlurTimeline_Alpha_E678B1E44A3CA3CCBC33F2870F4D589F; // 0x710(0x04)
	enum class ETimelineDirection BlurTimeline__Direction_E678B1E44A3CA3CCBC33F2870F4D589F; // 0x714(0x01)
	char pad_715[0x3]; // 0x715(0x03)
	struct UTimelineComponent* BlurTimeline; // 0x718(0x08)
	float CapsuleTimeline_Alpha_3931415B4DA717316CBCC4B2447C088F; // 0x720(0x04)
	enum class ETimelineDirection CapsuleTimeline__Direction_3931415B4DA717316CBCC4B2447C088F; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct UTimelineComponent* CapsuleTimeline; // 0x728(0x08)
	float TimelineFOV_Alpha_BB6E0F3D4368D461E87B1DA7C8A0706C; // 0x730(0x04)
	enum class ETimelineDirection TimelineFOV__Direction_BB6E0F3D4368D461E87B1DA7C8A0706C; // 0x734(0x01)
	char pad_735[0x3]; // 0x735(0x03)
	struct UTimelineComponent* TimelineFOV; // 0x738(0x08)
	float CameraInteract_NewTrack_0_D42A0B284E3720C10D21618BBE3F6A57; // 0x740(0x04)
	enum class ETimelineDirection CameraInteract__Direction_D42A0B284E3720C10D21618BBE3F6A57; // 0x744(0x01)
	char pad_745[0x3]; // 0x745(0x03)
	struct UTimelineComponent* CameraInteract; // 0x748(0x08)
	float Rope_NewTrack_0_79166F2E47E56ABEB7D4D381CFC3C44E; // 0x750(0x04)
	enum class ETimelineDirection Rope__Direction_79166F2E47E56ABEB7D4D381CFC3C44E; // 0x754(0x01)
	char pad_755[0x3]; // 0x755(0x03)
	struct UTimelineComponent* Rope; // 0x758(0x08)
	float HitTimeline_Pitch_033072B4460D8031F3574FA1B2C15E3C; // 0x760(0x04)
	enum class ETimelineDirection HitTimeline__Direction_033072B4460D8031F3574FA1B2C15E3C; // 0x764(0x01)
	char pad_765[0x3]; // 0x765(0x03)
	struct UTimelineComponent* HitTimeline; // 0x768(0x08)
	float Timeline_1_NewTrack_0_28424CF84D5D555B496C44BDBC6E5372; // 0x770(0x04)
	enum class ETimelineDirection Timeline_1__Direction_28424CF84D5D555B496C44BDBC6E5372; // 0x774(0x01)
	char pad_775[0x3]; // 0x775(0x03)
	struct UTimelineComponent* Timeline_2; // 0x778(0x08)
	float PPColorChange_Lerp_E61BC77648192EB1FD5307BB391141EA; // 0x780(0x04)
	enum class ETimelineDirection PPColorChange__Direction_E61BC77648192EB1FD5307BB391141EA; // 0x784(0x01)
	char pad_785[0x3]; // 0x785(0x03)
	struct UTimelineComponent* PPColorChange; // 0x788(0x08)
	enum class ETimelineDirection HitEventTimeline__Direction_06B7D53F4BE6AE8DE3FE4B9B18752BCB; // 0x790(0x01)
	char pad_791[0x7]; // 0x791(0x07)
	struct UTimelineComponent* HitEventTimeline; // 0x798(0x08)
	float TimelineJump_Jump_74BC80A542EA939C26100EB00C9A924D; // 0x7a0(0x04)
	enum class ETimelineDirection TimelineJump__Direction_74BC80A542EA939C26100EB00C9A924D; // 0x7a4(0x01)
	char pad_7A5[0x3]; // 0x7a5(0x03)
	struct UTimelineComponent* TimelineJump; // 0x7a8(0x08)
	float LerpAlphaTimeline_Lerp_281CB55F46C7C7F578BF9F88611AAA8F; // 0x7b0(0x04)
	enum class ETimelineDirection LerpAlphaTimeline__Direction_281CB55F46C7C7F578BF9F88611AAA8F; // 0x7b4(0x01)
	char pad_7B5[0x3]; // 0x7b5(0x03)
	struct UTimelineComponent* LerpAlphaTimeline; // 0x7b8(0x08)
	float BaseTurnRate; // 0x7c0(0x04)
	float BaseLookUpRate; // 0x7c4(0x04)
	float RunSpeed; // 0x7c8(0x04)
	float CrouchSpeed; // 0x7cc(0x04)
	float WalkSpeed; // 0x7d0(0x04)
	float CrawlSpeed; // 0x7d4(0x04)
	int32_t Health; // 0x7d8(0x04)
	bool Hitted?; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	float MeleeSpeedUpPercent; // 0x7e0(0x04)
	enum class MovementTypeEnum MovementType; // 0x7e4(0x01)
	bool SpeedUpAfterMeleeHit?; // 0x7e5(0x01)
	bool ImProp?; // 0x7e6(0x01)
	char pad_7E7[0x1]; // 0x7e7(0x01)
	struct FVector ForwardVector; // 0x7e8(0x0c)
	struct FVector RightVector; // 0x7f4(0x0c)
	struct AActor* Item; // 0x800(0x08)
	struct TArray<struct AItemsBPHand_C*> ItemsInventory; // 0x808(0x10)
	struct AItemsBPHand_C* ItemToSpawn; // 0x818(0x08)
	int32_t InventoryIndex; // 0x820(0x04)
	bool StartRotate?; // 0x824(0x01)
	char pad_825[0x3]; // 0x825(0x03)
	float DeltaSeconds; // 0x828(0x04)
	bool StopMove?; // 0x82c(0x01)
	char pad_82D[0x3]; // 0x82d(0x03)
	float LerpAlpha; // 0x830(0x04)
	bool ItemFound?; // 0x834(0x01)
	char pad_835[0x3]; // 0x835(0x03)
	struct FVector JumpVector; // 0x838(0x0c)
	float HealingProgress; // 0x844(0x04)
	bool EmptyInventory?; // 0x848(0x01)
	char pad_849[0x3]; // 0x849(0x03)
	struct FRotator AxisRotator; // 0x84c(0x0c)
	float ReanimateProgress; // 0x858(0x04)
	bool Grapple?; // 0x85c(0x01)
	bool OnChair?; // 0x85d(0x01)
	char pad_85E[0x2]; // 0x85e(0x02)
	float ZeroSpeed; // 0x860(0x04)
	float RightLeft; // 0x864(0x04)
	bool PressA?; // 0x868(0x01)
	bool PressD?; // 0x869(0x01)
	char pad_86A[0x2]; // 0x86a(0x02)
	float BreakFreeProgress; // 0x86c(0x04)
	bool Shake?; // 0x870(0x01)
	char pad_871[0x7]; // 0x871(0x07)
	struct AActor* KillerActor; // 0x878(0x08)
	struct USoundBase* HeartbeatSound1; // 0x880(0x08)
	float NewDelay; // 0x888(0x04)
	bool change?; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	float FinalDelay; // 0x890(0x04)
	bool NewCall?; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	float PrevDelay; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)
	struct USurvivalProgressBarWidget_C* SurvivalProgressBar; // 0x8a0(0x08)
	struct USurvivalSkillCheckWidget_C* SurvivalSkillCheck; // 0x8a8(0x08)
	float ProgressUI; // 0x8b0(0x04)
	float FullHealTime; // 0x8b4(0x04)
	float FullReanimateTime; // 0x8b8(0x04)
	float CurrentHelpGetOutChair; // 0x8bc(0x04)
	float FullHelpGetOutChair; // 0x8c0(0x04)
	float FullOpenExit; // 0x8c4(0x04)
	float FullReloaingAlarm; // 0x8c8(0x04)
	float CurrentGetOutChair; // 0x8cc(0x04)
	struct AActor* ChairActor; // 0x8d0(0x08)
	float FullGetOutChair; // 0x8d8(0x04)
	int32_t RandomChance; // 0x8dc(0x04)
	struct USurvivalHealthWidget_C* SurvivalHealth; // 0x8e0(0x08)
	struct USurvivalInventoryWidget_C* SurvivalInventory; // 0x8e8(0x08)
	struct AItemsBPHand_C* CurrentItem; // 0x8f0(0x08)
	bool AddItem?; // 0x8f8(0x01)
	bool DeleteItem?; // 0x8f9(0x01)
	bool ItemSwitch?; // 0x8fa(0x01)
	char pad_8FB[0x5]; // 0x8fb(0x05)
	struct FMulticastInlineDelegate ED_MovementType; // 0x900(0x10)
	struct UCoolDownWBP_C* SurvivalAbility; // 0x910(0x08)
	bool Ability1Reloading?; // 0x918(0x01)
	bool Ability2Reloading?; // 0x919(0x01)
	char pad_91A[0x2]; // 0x91a(0x02)
	float FullGetOutKillerHand; // 0x91c(0x04)
	bool FailedSkillCheck?; // 0x920(0x01)
	bool RandomSkillCheck?; // 0x921(0x01)
	char pad_922[0x6]; // 0x922(0x06)
	struct ANewAlarmBP_C* CurrentAlarm; // 0x928(0x08)
	struct FString Skill1; // 0x930(0x10)
	struct FString Skill2; // 0x940(0x10)
	struct FString Skill3Rotate; // 0x950(0x10)
	struct FString Skill3Flashlight; // 0x960(0x10)
	struct FString Skill3Empty; // 0x970(0x10)
	float KillingTime; // 0x980(0x04)
	char pad_984[0x4]; // 0x984(0x04)
	struct UInteractableButtonsWidget_C* InteractableButtons; // 0x988(0x08)
	struct FText AlarmText; // 0x990(0x18)
	struct FText ReanimateText; // 0x9a8(0x18)
	struct FText HealAllyText; // 0x9c0(0x18)
	struct FText HealSelfText; // 0x9d8(0x18)
	struct FText OpenExitText; // 0x9f0(0x18)
	struct FText PickUpText; // 0xa08(0x18)
	bool UpdateInteractable?; // 0xa20(0x01)
	char pad_A21[0x7]; // 0xa21(0x07)
	struct FText FlashlightText; // 0xa28(0x18)
	struct FText RotateText; // 0xa40(0x18)
	bool RotateInteractableActive?; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct FString BreakFreeText; // 0xa60(0x10)
	bool ChairInteractableActive?; // 0xa70(0x01)
	char pad_A71[0x3]; // 0xa71(0x03)
	float TorqueValue; // 0xa74(0x04)
	struct FPropData PropData; // 0xa78(0x90)
	float CurrentStamina; // 0xb08(0x04)
	int32_t MaxHP; // 0xb0c(0x04)
	bool IsOwner?; // 0xb10(0x01)
	enum class EFootprintStyle CurrentFootwear; // 0xb11(0x01)
	char pad_B12[0x6]; // 0xb12(0x06)
	struct USurvivalStaminaBarWidget_C* StaminaBar; // 0xb18(0x08)
	float MaxStamina; // 0xb20(0x04)
	bool StaminaActive?; // 0xb24(0x01)
	bool PressedRun?; // 0xb25(0x01)
	bool JumpButtonPressed?; // 0xb26(0x01)
	bool SlowIncrease?; // 0xb27(0x01)
	float StaminaDecreaseAmountValue; // 0xb28(0x04)
	float StaminaJumpAmountValue; // 0xb2c(0x04)
	float MaxValueProgressUI; // 0xb30(0x04)
	bool StaticHit?; // 0xb34(0x01)
	char pad_B35[0x3]; // 0xb35(0x03)
	float RotateInterpSpeed; // 0xb38(0x04)
	bool CanJump?; // 0xb3c(0x01)
	char pad_B3D[0x3]; // 0xb3d(0x03)
	float ImpulseThreshold; // 0xb40(0x04)
	float ImpulseThresholdMax; // 0xb44(0x04)
	float VolumeSensitivity; // 0xb48(0x04)
	float MaxVolume; // 0xb4c(0x04)
	bool PropSoundActive?; // 0xb50(0x01)
	char pad_B51[0x3]; // 0xb51(0x03)
	float PropSpeed; // 0xb54(0x04)
	bool TestSwitchActive?; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	float CurrentCharacterSpeed; // 0xb5c(0x04)
	float PropTempValue; // 0xb60(0x04)
	char pad_B64[0x4]; // 0xb64(0x04)
	struct AActor* CalculateRayHitActor; // 0xb68(0x08)
	struct USoundBase* HeartbeatSound2; // 0xb70(0x08)
	bool StartRegeneration?; // 0xb78(0x01)
	bool StartSelfReanimate?; // 0xb79(0x01)
	char pad_B7A[0x2]; // 0xb7a(0x02)
	float SelfReanimateValue; // 0xb7c(0x04)
	float SelfReanimateFullValue; // 0xb80(0x04)
	bool CrawlStatusStart?; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	float StaminaIncreaseAmountValue; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct AActor* NewOutline; // 0xb90(0x08)
	struct AActor* OldOutline; // 0xb98(0x08)
	struct FLinearColor CloseColorOutline; // 0xba0(0x10)
	struct UMaterialInstanceDynamic* MaterialOutline; // 0xbb0(0x08)
	struct FLinearColor OpenColorOutline; // 0xbb8(0x10)
	struct FLinearColor DefaultColorOutline; // 0xbc8(0x10)
	struct AActor* LastExitActor; // 0xbd8(0x08)
	struct FFMODEventInstance ChasingFMODSound; // 0xbe0(0x08)
	struct ANewAlarmBP_C* AlarmRef; // 0xbe8(0x08)
	float MaxHealthCalculateValue; // 0xbf0(0x04)
	bool GameStart?; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	float KillerAmbientValue; // 0xbf8(0x04)
	bool ZeroStamina?; // 0xbfc(0x01)
	char pad_BFD[0x3]; // 0xbfd(0x03)
	struct FFMODEventInstance LevelAmbient; // 0xc00(0x08)
	bool FreeCam?; // 0xc08(0x01)
	char pad_C09[0x3]; // 0xc09(0x03)
	int32_t RestoreHealth; // 0xc0c(0x04)
	float JumpAlpha; // 0xc10(0x04)
	struct FVector TempVector; // 0xc14(0x0c)
	struct FText EscapeText; // 0xc20(0x18)
	struct UCameraComponent* ActiveCamera; // 0xc38(0x08)
	bool FPP?; // 0xc40(0x01)
	char pad_C41[0x7]; // 0xc41(0x07)
	struct UFMODAudioComponent* SurvTransform; // 0xc48(0x08)
	struct UFMODAudioComponent* flashlight; // 0xc50(0x08)
	float MouseSensitive; // 0xc58(0x04)
	bool KillerAstral?; // 0xc5c(0x01)
	bool ReloadingAlarm?; // 0xc5d(0x01)
	char pad_C5E[0x2]; // 0xc5e(0x02)
	int32_t Points; // 0xc60(0x04)
	bool EndJump?; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	struct UWaypointWidget_C* WaypointWidget; // 0xc68(0x08)
	struct FString Skill4; // 0xc70(0x10)
	bool Ability4Reloading?; // 0xc80(0x01)
	bool OpenDoor?; // 0xc81(0x01)
	bool MeleeAttack?; // 0xc82(0x01)
	bool RangeAttack?; // 0xc83(0x01)
	float RangeSpeedUpPercent; // 0xc84(0x04)
	bool SpeedUpAfterRangeHit?; // 0xc88(0x01)
	char pad_C89[0x3]; // 0xc89(0x03)
	float MaxWalkSpeed; // 0xc8c(0x04)
	bool ImHealing?; // 0xc90(0x01)
	char pad_C91[0x3]; // 0xc91(0x03)
	int32_t MaxHPForRegeneration; // 0xc94(0x04)
	bool UseFlashlight?; // 0xc98(0x01)
	bool Escape?; // 0xc99(0x01)
	char pad_C9A[0x2]; // 0xc9a(0x02)
	struct FVector Temp2Vector; // 0xc9c(0x0c)
	float RotateLerp; // 0xca8(0x04)
	bool RotateHitted?; // 0xcac(0x01)
	bool ImHealingAlly?; // 0xcad(0x01)
	char pad_CAE[0x2]; // 0xcae(0x02)
	struct FVector4 NormalColor; // 0xcb0(0x10)
	struct FVector4 MonochromeColor; // 0xcc0(0x10)
	bool GetReady?; // 0xcd0(0x01)
	bool HelpGetOutChair?; // 0xcd1(0x01)
	enum class DamageTypeEnum DamageType; // 0xcd2(0x01)
	char pad_CD3[0x5]; // 0xcd3(0x05)
	struct FText BleedingText; // 0xcd8(0x18)
	bool KnifeInTheBody?; // 0xcf0(0x01)
	char pad_CF1[0x3]; // 0xcf1(0x03)
	float MaxPullOut; // 0xcf4(0x04)
	float CurrentPullOut; // 0xcf8(0x04)
	struct FRotator HeadRotation; // 0xcfc(0x0c)
	bool Move?; // 0xd08(0x01)
	bool HealingMe?; // 0xd09(0x01)
	enum class SurvStateEnum SurvStateEnum; // 0xd0a(0x01)
	bool StartRotateProp?; // 0xd0b(0x01)
	struct FRotator RotateProp; // 0xd0c(0x0c)
	struct AItemsBPHand_C* ItemVar; // 0xd18(0x08)
	int32_t ItemSpawnIndex; // 0xd20(0x04)
	char pad_D24[0xc]; // 0xd24(0x0c)
	struct FTransform SpawnItemLocation; // 0xd30(0x30)
	bool BreakFreeFull?; // 0xd60(0x01)
	char pad_D61[0x3]; // 0xd61(0x03)
	float YawMod; // 0xd64(0x04)
	struct UMaterialInstanceDynamic* SurvDynMat1; // 0xd68(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat2; // 0xd70(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat3; // 0xd78(0x08)
	float DeathEffectTime; // 0xd80(0x04)
	float DeathEffectDuration; // 0xd84(0x04)
	struct FTimerHandle DeathEffectTimer; // 0xd88(0x08)
	float Float1; // 0xd90(0x04)
	bool SoundsStop?; // 0xd94(0x01)
	char pad_D95[0x3]; // 0xd95(0x03)
	struct TArray<struct ASurvivorMasterBP_C*> AllSurvs; // 0xd98(0x10)
	struct UMaterialInterface* SurvBodyHitMaterial; // 0xda8(0x08)
	struct UMaterialInterface* SurvPastedClothHitMaterial; // 0xdb0(0x08)
	struct UMaterialInterface* SurvClothHitMaterial; // 0xdb8(0x08)
	struct UMaterialInterface* SurvBodyDefaultMaterial; // 0xdc0(0x08)
	struct UMaterialInterface* SurvPastedClothDefaultMaterial; // 0xdc8(0x08)
	struct UMaterialInterface* SurvClothDefaultMaterial; // 0xdd0(0x08)
	struct AHUD_PropHunt_C* HUDRef; // 0xdd8(0x08)
	bool Allow Voice; // 0xde0(0x01)
	bool VoiceActive?; // 0xde1(0x01)
	char pad_DE2[0x2]; // 0xde2(0x02)
	float EnergyDrinkBoost; // 0xde4(0x04)
	bool Boosted?; // 0xde8(0x01)
	bool Invulnerability?; // 0xde9(0x01)
	char pad_DEA[0x2]; // 0xdea(0x02)
	float InvulnerabilityTime; // 0xdec(0x04)
	struct FText LootboxShopText; // 0xdf0(0x18)
	bool BeginPlayOver?; // 0xe08(0x01)
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FString CoinText; // 0xe10(0x10)
	struct FString ScoreText; // 0xe20(0x10)
	struct ASurvivorMasterBP_C* LastHittedSurv; // 0xe30(0x08)
	bool HelpLeader?; // 0xe38(0x01)
	char pad_E39[0x3]; // 0xe39(0x03)
	struct FVector StartPos; // 0xe3c(0x0c)
	struct FVector TargetPos; // 0xe48(0x0c)
	float DistanceForGraple; // 0xe54(0x04)
	float MovedDistance; // 0xe58(0x04)
	float Speed; // 0xe5c(0x04)
	bool InGraple; // 0xe60(0x01)
	bool HookInHands; // 0xe61(0x01)
	char pad_E62[0x6]; // 0xe62(0x06)
	struct UCurveFloat* HeightCurve; // 0xe68(0x08)
	struct USurvivalEffectsUI_C* SurvEffectsUI; // 0xe70(0x08)
	enum class SurvClass SurvClass; // 0xe78(0x01)
	bool KillerSee?; // 0xe79(0x01)
	char pad_E7A[0x2]; // 0xe7a(0x02)
	float BreakFreeProgressSaved; // 0xe7c(0x04)
	int32_t KillerType; // 0xe80(0x04)
	float SelfReanimateProgressReplicated; // 0xe84(0x04)
	bool Smooth?; // 0xe88(0x01)
	bool CDInteract; // 0xe89(0x01)
	char pad_E8A[0x2]; // 0xe8a(0x02)
	float Bias; // 0xe8c(0x04)
	struct TArray<struct ALootBox_C*> LootBoxs; // 0xe90(0x10)
	float XAxis; // 0xea0(0x04)
	float YAxis; // 0xea4(0x04)
	bool StartRotatePropSoundActive?; // 0xea8(0x01)
	bool Freeze; // 0xea9(0x01)
	char pad_EAA[0x2]; // 0xeaa(0x02)
	struct FVector OldCharPos; // 0xeac(0x0c)
	struct FVector OldWidgetPos; // 0xeb8(0x0c)
	char pad_EC4[0x4]; // 0xec4(0x04)
	struct AActor* TempCalculateRay; // 0xec8(0x08)
	float PhysicsTickDeltaTime; // 0xed0(0x04)
	float BoostExit; // 0xed4(0x04)
	float animationSpeed; // 0xed8(0x04)
	bool SecondJumpProp?; // 0xedc(0x01)
	char pad_EDD[0x3]; // 0xedd(0x03)
	struct TArray<struct AActor*> NicknamePropActorsIgnore; // 0xee0(0x10)
	struct FVector CustomOffset; // 0xef0(0x0c)
	struct FVector StandartOffset; // 0xefc(0x0c)
	bool TransformChangeHealth?; // 0xf08(0x01)
	char pad_F09[0x7]; // 0xf09(0x07)
	struct ADoppelganger_C* Doppelganger; // 0xf10(0x08)
	enum class SurvSkills SurvSkill; // 0xf18(0x01)
	char pad_F19[0x3]; // 0xf19(0x03)
	int32_t NeedPointsLootbox; // 0xf1c(0x04)
	float DefaultFOV; // 0xf20(0x04)
	int32_t ChairStage; // 0xf24(0x04)
	float AirTime; // 0xf28(0x04)
	bool Intro?; // 0xf2c(0x01)
	char pad_F2D[0x3]; // 0xf2d(0x03)
	struct UMaterialInstanceDynamic* MaterialBlur; // 0xf30(0x08)
	struct FString NicknameString; // 0xf38(0x10)
	struct APostProcessVolume* PostProcessVolumeVar; // 0xf48(0x08)
	struct FPostProcessSettings DefaultPostProcessSettings; // 0xf50(0x550)
	struct UMaterialInstanceDynamic* MaterialVignette; // 0x14a0(0x08)
	struct FRotator PropCorrectionRotation; // 0x14a8(0x0c)
	float ScenePropHealth; // 0x14b4(0x04)
	struct TArray<struct FVector> SavedPoints; // 0x14b8(0x10)
	float TempFloat; // 0x14c8(0x04)
	bool TempBool; // 0x14cc(0x01)
	char pad_14CD[0x3]; // 0x14cd(0x03)
	float TempFloat2; // 0x14d0(0x04)
	struct FVector Temp3Vector; // 0x14d4(0x0c)
	struct FVector Temp4Vector; // 0x14e0(0x0c)
	struct FRotator TempRotation; // 0x14ec(0x0c)
	struct FRotator TempRotation2; // 0x14f8(0x0c)
	float TempFloat3; // 0x1504(0x04)
	bool NewVar_1; // 0x1508(0x01)
	char pad_1509[0x3]; // 0x1509(0x03)
	float ProgressUISpectator; // 0x150c(0x04)
	float MaxProgressUISpectator; // 0x1510(0x04)
	float LastAirTime; // 0x1514(0x04)
	bool PullOut?; // 0x1518(0x01)
	char pad_1519[0x3]; // 0x1519(0x03)
	struct FVector PropMovementInterpVar; // 0x151c(0x0c)
	bool BlockLMB?; // 0x1528(0x01)
	bool BlockRMB?; // 0x1529(0x01)
	bool Tutorial?; // 0x152a(0x01)
	bool PropHuntMode?; // 0x152b(0x01)
	enum class E_Mode Mode; // 0x152c(0x01)
	bool isAI; // 0x152d(0x01)
	char pad_152E[0x2]; // 0x152e(0x02)
	struct ASurvivorMasterBP_C* HealAlly; // 0x1530(0x08)
	bool LobbbyWait?; // 0x1538(0x01)
	bool IsaacBoosted?; // 0x1539(0x01)
	char pad_153A[0x2]; // 0x153a(0x02)
	float IsaacTimeBoost; // 0x153c(0x04)
	bool PressedCrouch?; // 0x1540(0x01)
	char pad_1541[0x3]; // 0x1541(0x03)
	int32_t AliveTime; // 0x1544(0x04)
	struct AActor* PropObject; // 0x1548(0x08)
	bool LocalBoolProp; // 0x1550(0x01)
	enum class SurvChars SurvChar; // 0x1551(0x01)
	bool OutlineBlock; // 0x1552(0x01)
	bool Small Prop?; // 0x1553(0x01)
	bool OnlyTPP?; // 0x1554(0x01)
	bool CustomPlayAnimWalk?; // 0x1555(0x01)
	char pad_1556[0x2]; // 0x1556(0x02)
	struct TArray<struct UMaterialInstanceDynamic*> PropMaterials; // 0x1558(0x10)
	float DistanceTraveled; // 0x1568(0x04)
	char pad_156C[0x4]; // 0x156c(0x04)
	struct FText PingText; // 0x1570(0x18)
	bool SurvTrack3000Block?; // 0x1588(0x01)
	bool BlockHelp?; // 0x1589(0x01)
	char pad_158A[0x2]; // 0x158a(0x02)
	int32_t PropJumpCount; // 0x158c(0x04)
	int32_t DefaultJumpCount; // 0x1590(0x04)
	float PropSoundVolumeModifier; // 0x1594(0x04)
	float BreakFreeBonusVar; // 0x1598(0x04)
	float BlockTime; // 0x159c(0x04)
	bool FullHP?; // 0x15a0(0x01)
	char pad_15A1[0x3]; // 0x15a1(0x03)
	int32_t NeedPointsMedkit; // 0x15a4(0x04)
	bool DrDolittle?; // 0x15a8(0x01)
	bool DrDolittleInteractReady?; // 0x15a9(0x01)
	bool AlarmFinished?; // 0x15aa(0x01)
	bool RushActive?; // 0x15ab(0x01)
	float StaminaRushDecreaseAmountValue; // 0x15ac(0x04)
	bool Rush?; // 0x15b0(0x01)
	char pad_15B1[0x3]; // 0x15b1(0x03)
	float BlockTimeMultiply; // 0x15b4(0x04)
	bool CursedPropChallenge?; // 0x15b8(0x01)
	char pad_15B9[0x3]; // 0x15b9(0x03)
	float CursedPropChallengeValue; // 0x15bc(0x04)
	float CursedPropChallengeMaxValue; // 0x15c0(0x04)
	char pad_15C4[0x4]; // 0x15c4(0x04)
	struct ABasePropBP_C* Cursed Prop; // 0x15c8(0x08)
	struct FText HoudiniText; // 0x15d0(0x18)
	struct UMaterialInstanceDynamic* MaterialVignette2; // 0x15e8(0x08)
	struct FVector ImpactPoint; // 0x15f0(0x0c)
	bool WallJump?; // 0x15fc(0x01)
	char pad_15FD[0x3]; // 0x15fd(0x03)
	struct ABP_Spectator_C* BP_Spectator; // 0x1600(0x08)
	char pad_1608[0x8]; // 0x1608(0x08)
	struct FTransform ParticleTransform; // 0x1610(0x30)
	enum class SurvRole SurvRole; // 0x1640(0x01)
	char pad_1641[0x7]; // 0x1641(0x07)
	struct TArray<float> r3; // 0x1648(0x10)
	int32_t I; // 0x1658(0x04)
	float ZLocalMin; // 0x165c(0x04)
	float ZLocal; // 0x1660(0x04)
	char pad_1664[0x4]; // 0x1664(0x04)
	struct ASurvivorMasterBP_C* SREF; // 0x1668(0x08)
	int32_t CountCoins; // 0x1670(0x04)
	int32_t SupportHealedCount; // 0x1674(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> PropDynMaterials; // 0x1678(0x10)
	struct TArray<struct AInteractableDoor_C*> DoorArray; // 0x1688(0x10)
	float DamageMarkerAngle; // 0x1698(0x04)
	bool escapeLoop; // 0x169c(0x01)
	char pad_169D[0x3]; // 0x169d(0x03)
	struct UMaterialInstanceDynamic* SoftOutline; // 0x16a0(0x08)
	struct UFMODAudioComponent* BleedingSound; // 0x16a8(0x08)
	struct UFMODAudioComponent* EscapeStruggle; // 0x16b0(0x08)
	float ChaseValue; // 0x16b8(0x04)
	float PropDistance; // 0x16bc(0x04)
	bool IntroAnim?; // 0x16c0(0x01)
	bool TestViewB; // 0x16c1(0x01)
	bool CanBurning?; // 0x16c2(0x01)
	bool Burning?; // 0x16c3(0x01)
	bool EnergyDrnkAnimB; // 0x16c4(0x01)
	bool KBookAnimB; // 0x16c5(0x01)
	char pad_16C6[0x2]; // 0x16c6(0x02)
	int32_t SkinID; // 0x16c8(0x04)
	int32_t DestructionLvl; // 0x16cc(0x04)
	struct TArray<struct FCoinMaxStruct> MaxScoreInt; // 0x16d0(0x10)
	struct TArray<int32_t> MaxScoreTemp; // 0x16e0(0x10)
	bool IsMessageBlocked; // 0x16f0(0x01)
	bool CheatEnabled; // 0x16f1(0x01)
	char pad_16F2[0x2]; // 0x16f2(0x02)
	float AxisForwardFloat; // 0x16f4(0x04)

	void HeadRotationFunc(struct FRotator Rotation); // Function SurvivorMasterBP.SurvivorMasterBP_C.HeadRotationFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void get level name(bool B, struct FString Name); // Function SurvivorMasterBP.SurvivorMasterBP_C.get level name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Exp Score Calc(int32_t Points, enum class CoinEnum CoinType); // Function SurvivorMasterBP.SurvivorMasterBP_C.Exp Score Calc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Init Max Score(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Init Max Score // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinAngle(float X, float Y, float Z); // Function SurvivorMasterBP.SurvivorMasterBP_C.CoinAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropJumpWall(float Jump); // Function SurvivorMasterBP.SurvivorMasterBP_C.PropJumpWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_ProgressUI(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_ProgressUI // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PassiveSkill(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WallCheck(struct AActor* Actor, bool NewParam); // Function SurvivorMasterBP.SurvivorMasterBP_C.WallCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpeedChecker(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpeedChecker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DisableInDirect(bool Up); // Function SurvivorMasterBP.SurvivorMasterBP_C.DisableInDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractBoxOverlap(struct AActor* ClassFilter, struct UObject* NotEqual, struct AActor* Actor); // Function SurvivorMasterBP.SurvivorMasterBP_C.InteractBoxOverlap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	void GrapleMovement(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GrapleMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HookShot(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HookShot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelectObjectPropMove(struct FVector Velocity); // Function SurvivorMasterBP.SurvivorMasterBP_C.SelectObjectPropMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangePropCollision(struct FPropData PropData); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangePropCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitImpactSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitImpactSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	bool CheckActiveActions(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckActiveActions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	bool CheckFullHealthFinal(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFullHealthFinal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	bool CheckFullHealth(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFullHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	bool CheckZeroHealthWithoutCrawl(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckZeroHealthWithoutCrawl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	bool CheckZeroHealth(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckZeroHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	void CheckMoved(bool PressedAndMoved, bool NotPressedAndMoved); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMoved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x132e1a0
	void CalculatePersonHealth(int32_t Health, struct FPropData Data, int32_t NewHealth); // Function SurvivorMasterBP.SurvivorMasterBP_C.CalculatePersonHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculatePropHealth(int32_t Health, struct FPropData Data, int32_t NewHealth); // Function SurvivorMasterBP.SurvivorMasterBP_C.CalculatePropHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReduceHealth(int32_t Damage, int32_t HP); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReduceHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_SurvivalHealth(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_SurvivalHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropJump(float Jump); // Function SurvivorMasterBP.SurvivorMasterBP_C.PropJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_CurrentTransform(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_CurrentTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetItem(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetItemToLastIndex(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetItemToLastIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItem(struct AActor* Item, struct APawn* Pawn); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UserConstructionScript(); // Function SurvivorMasterBP.SurvivorMasterBP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LerpAlphaTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.LerpAlphaTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void LerpAlphaTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.LerpAlphaTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void TimelineJump__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineJump__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void TimelineJump__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineJump__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void HitEventTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitEventTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void HitEventTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitEventTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void PPColorChange__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChange__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void PPColorChange__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChange__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void HitTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void HitTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Rope__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Rope__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Rope__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Rope__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraInteract__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CameraInteract__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraInteract__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CameraInteract__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void TimelineFOV__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineFOV__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void TimelineFOV__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineFOV__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CapsuleTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CapsuleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CapsuleTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CapsuleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void BlurTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BlurTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void BlurTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BlurTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DropItemHold__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DropItemHold__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void DropItemHold__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DropItemHold__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ZoomOutTimeline__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOutTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ZoomOutTimeline__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOutTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__FinishedFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__UpdateFunc(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_19(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_19 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_18(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_18 // (BlueprintEvent) // @ game+0x132e1a0
	void InpTchEvt_Released(enum class ETouchIndex FingerIndex, struct FVector Location); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpTchEvt_Released // (BlueprintEvent) // @ game+0x132e1a0
	void InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, struct FVector Location); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpTchEvt_Pressed // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Run_K2Node_InputActionEvent_17(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Run_K2Node_InputActionEvent_17 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Run_K2Node_InputActionEvent_16(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Run_K2Node_InputActionEvent_16 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_13(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_13 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Graffiti_K2Node_InputActionEvent_15(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Graffiti_K2Node_InputActionEvent_15 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Home_K2Node_InputKeyEvent_11(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Home_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_10(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_9(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_5(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_4(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_3(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up_K2Node_InputActionEvent_14(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C. Pick Up_K2Node_InputActionEvent_14 // (BlueprintEvent) // @ game+0x132e1a0
	void  Pick Up_K2Node_InputActionEvent_13(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C. Pick Up_K2Node_InputActionEvent_13 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Turn Into Prop_K2Node_InputActionEvent_12(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Turn Into Prop_K2Node_InputActionEvent_12 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_(Prop) Turn Into Survivor_K2Node_InputActionEvent_11(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Turn Into Survivor_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_10(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_9(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Drop Item_K2Node_InputActionEvent_8(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Drop Item_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Drop Item_K2Node_InputActionEvent_7(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Drop Item_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Distraction Sounds_K2Node_InputActionEvent_6(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Distraction Sounds_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Voice Commands_K2Node_InputActionEvent_5(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Voice Commands_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Voice Commands_K2Node_InputActionEvent_4(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Voice Commands_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Divide_K2Node_InputKeyEvent_2(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Multiply_K2Node_InputKeyEvent_1(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Item 1_K2Node_InputActionEvent_3(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 1_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Item 2_K2Node_InputActionEvent_2(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 2_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Item 3_K2Node_InputActionEvent_1(struct FKey Key); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 3_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void AddInteractable(struct AActor* Actor, struct FKey Key, struct FText Text); // Function SurvivorMasterBP.SurvivorMasterBP_C.AddInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveInteractable(struct AActor* Actor); // Function SurvivorMasterBP.SurvivorMasterBP_C.RemoveInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Chair Open Stage(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Chair Open Stage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnDecal(struct FName SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer?, bool ImProp?, bool Run?, bool Crouch?, struct UFMODAudioComponent* FmodAudio, int32_t KillerType, bool Crawl?, bool Shake); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnDecal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeginFootprint(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BeginFootprint // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFootState(enum class EFootState New Style); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeFootState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetCharacterOwner(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetCharacterOwner // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerChangeFootwear(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerChangeFootwear // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastChangeFootwear(); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastChangeFootwear // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvMesh(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GetSurvMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPropMesh(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GetPropMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54 // (BlueprintEvent) // @ game+0x132e1a0
	void MovementSpeed(float MovForward); // Function SurvivorMasterBP.SurvivorMasterBP_C.MovementSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetMovementType(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetMovementType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void RotateEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RotateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Prop(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Prop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPerson(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPerson // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPerson(struct FVector Vector, struct FVector Temp2Vector); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPerson // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerProp(struct AActor* HitActor); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerProp // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemMovementEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ItemMovementEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetVectors(struct FVector Forward, struct FVector Right, struct FRotator AxisRotator); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetVectors // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastProp(struct AActor* HitActor); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastProp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void HittedMulticast(int32_t Damage, int32_t TrueDamage, enum class DamageTypeEnum DamageType, bool Moved?, bool Invulnerability?); // Function SurvivorMasterBP.SurvivorMasterBP_C.HittedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test1(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test1 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test1multi(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test1multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetMoveFloat(float RightLeft); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetMoveFloat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetOutServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GetOutServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemSlotUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ItemSlotUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemSwitch(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ItemSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvAbility(struct FString In); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGrapple(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StartGrapple // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopGrapple(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StopGrapple // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServExittedDoor(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServExittedDoor // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropSurvivor(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DropSurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUpSurvivor(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PickUpSurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void CheckUpdateInteractable(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckUpdateInteractable // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CalculateFlashlightUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CalculateFlashlightUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateInteractable(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RotateInteractable // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairBreakFreeInteractable(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChairBreakFreeInteractable // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerMovementType(enum class MovementTypeEnum Type); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerMovementType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastMovementType(enum class MovementTypeEnum Type); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastMovementType // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPressedAndMoved(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckPressedAndMoved // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StaminaDecrease(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaDecrease // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StaminaIncrease(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaIncrease // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VelocityCheck(); // Function SurvivorMasterBP.SurvivorMasterBP_C.VelocityCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult hit); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ServerSpeedChange(float MaxWalkSpeed); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerSpeedChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CrawlMovementType(enum class MovementTypeEnum Type); // Function SurvivorMasterBP.SurvivorMasterBP_C.CrawlMovementType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PropOutlineEffect(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PropOutlineEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PutOnChair(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PutOnChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvCustomDepthOff(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvCustomDepthOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AmbientAndChasingOff(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AmbientAndChasingOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TPP(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TPP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FPP(); // Function SurvivorMasterBP.SurvivorMasterBP_C.FPP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeControllerRotationMulticast(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeControllerRotationMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeControllerRotationServer(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeControllerRotationServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeMeshLocalVisibility(bool On?, bool Prop?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeMeshLocalVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckFPP(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFPP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropCheckMesh(bool FPPMesh, bool TPPMesh, bool CustomChangeMesh); // Function SurvivorMasterBP.SurvivorMasterBP_C.PropCheckMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerAstral(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.KillerAstral // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndJumpCheck(); // Function SurvivorMasterBP.SurvivorMasterBP_C.EndJumpCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerMarkServer(struct FVector KillerLocation); // Function SurvivorMasterBP.SurvivorMasterBP_C.KillerMarkServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerMarkMulticast(struct FVector KillerLocation); // Function SurvivorMasterBP.SurvivorMasterBP_C.KillerMarkMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopAllActions(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StopAllActions // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopHealAlly(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StopHealAlly // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopHealSelf(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StopHealSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeMaterial(bool Moved?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test2(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test2 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EscapeClient(); // Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeClient // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPropSound(float ImpulseThreshold); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropSound // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPropSound(float ImpulseThreshold); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPropSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvImpactSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvImpactSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotationHeadServer(struct FRotator HeadRotation); // Function SurvivorMasterBP.SurvivorMasterBP_C.RotationHeadServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PPColorChangeEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChangeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckMoveServer(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMoveServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test123(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test123 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test12314(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test12314 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckDamageType(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckDamageType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendServerDamageType(float BaseDamage, struct UDamageType* DamageTypeClass); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendServerDamageType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void testdamage(); // Function SurvivorMasterBP.SurvivorMasterBP_C.testdamage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PeriodicDamageStart(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PeriodicDamageStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PeriodicDamageStop(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PeriodicDamageStop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutStart(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutStop(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutStop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutFinishServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutFinishServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutFinishMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutFinishMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotationHeadMulticast(struct FRotator HeadRotation); // Function SurvivorMasterBP.SurvivorMasterBP_C.RotationHeadMulticast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSurvPosition(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendSurvPosition // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GrannyAstral(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstral // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test3333(); // Function SurvivorMasterBP.SurvivorMasterBP_C.test3333 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 3333(); // Function SurvivorMasterBP.SurvivorMasterBP_C.3333 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GrannyAstralHideItems(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstralHideItems // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GrannyAstralChangeSurvCollision(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstralChangeSurvCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendRotateServer(bool StartRotateProp?, struct FRotator RotateProp); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendRotateServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendRotateMulticast(bool StartRotateProp?, struct FRotator RotateProp); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendRotateMulticast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test777(bool NewParam); // Function SurvivorMasterBP.SurvivorMasterBP_C.test777 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void test888(bool NewParam); // Function SurvivorMasterBP.SurvivorMasterBP_C.test888 // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BreakFreeFullServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BreakFreeFullServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BreakFreeFullMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BreakFreeFullMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GrappleFailed(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GrappleFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalProp(struct AActor* InputPin); // Function SurvivorMasterBP.SurvivorMasterBP_C.LocalProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalPerson(struct FVector Temp2Vector); // Function SurvivorMasterBP.SurvivorMasterBP_C.LocalPerson // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopInteraction(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StopInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CameraHitAction(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CameraHitAction // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Nickname(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Nickname // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameOff(); // Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CharacterCustomDepth(float Duration); // Function SurvivorMasterBP.SurvivorMasterBP_C.CharacterCustomDepth // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameRotate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameRotate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPropStart(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPersonStart(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPersonStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OtherSurvOutline(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvOutline // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OtherSurvOutlineUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvOutlineUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SmoothSyncToggle(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SmoothSyncToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetDefaultMaterial(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GetDefaultMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendScore(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceivePossessed(struct AController* NewController); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InitVoice(); // Function SurvivorMasterBP.SurvivorMasterBP_C.InitVoice // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(struct TArray<char> VoiceData, float MicLevel); // Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ServVoiceProc(struct TArray<char> CompressedVoiceData); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServVoiceProc // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveVoice(struct TArray<char> CompressedVoiceData); // Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveVoice // (Net|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendVoiceStatusServer(bool VoiceActive?); // Function SurvivorMasterBP.SurvivorMasterBP_C.SendVoiceStatusServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItemCustom(struct AItemsBP_C* Rare); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnItemCustom // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckBoost(float DeltaTime); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckBoost // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckInvulnerability(float DeltaTime); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckInvulnerability // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckInvis(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckInvis // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundIn(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundLoop(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOut(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInServ(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInMulti(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInvisibiltyServ(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInvisibiltyServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInvisibilityMulti(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInvisibilityMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOutServ(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOutServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOutMulti(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOutMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreasePointsServer(int32_t PlayerScore, struct FString ScoreText); // Function SurvivorMasterBP.SurvivorMasterBP_C.DecreasePointsServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreasePointsMulticast(int32_t PlayerScore, struct FString ScoreText); // Function SurvivorMasterBP.SurvivorMasterBP_C.DecreasePointsMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Sensitivy(); // Function SurvivorMasterBP.SurvivorMasterBP_C.Sensitivy // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGameCamera(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Smooth(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.Smooth // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameVisible(); // Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckItem(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RopeTrick(struct FVector Target); // Function SurvivorMasterBP.SurvivorMasterBP_C.RopeTrick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvClassSpawnItem(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvClassSpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BFPServ(float NewParam); // Function SurvivorMasterBP.SurvivorMasterBP_C.BFPServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BFPMulti(float NewParam); // Function SurvivorMasterBP.SurvivorMasterBP_C.BFPMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerTypeCheck(); // Function SurvivorMasterBP.SurvivorMasterBP_C.KillerTypeCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SmoothTick(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SmoothTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckMovementSpeed(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMovementSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TurnOffIndirect(struct UStaticMeshComponent* Mesh, float Bias); // Function SurvivorMasterBP.SurvivorMasterBP_C.TurnOffIndirect // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeItem(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TakeItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameFreeze(bool Exit?); // Function SurvivorMasterBP.SurvivorMasterBP_C.EndGameFreeze // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutAnimServer(bool StopBleedingOn?); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutAnimServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PullOutAnimMulticast(bool StopBleedingOn?); // Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutAnimMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameLerp(struct FVector A); // Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLevelSystem(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetLevelSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PhysicsTick(float SubstepDeltaTime); // Function SurvivorMasterBP.SurvivorMasterBP_C.PhysicsTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServerPropJump(float JumpAlpha, bool Wall?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropJump // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPropJump(float JumpAlpha, bool Wall?); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPropJump // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropJumpSound(float JumpAlpha, bool Wall?); // Function SurvivorMasterBP.SurvivorMasterBP_C.PropJumpSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameProp(); // Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvOnChairCamera(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvOnChairCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpottedSurv(bool SurvMesh, bool PropMesh, float Time); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpottedSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PassiveServ(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PassiveMulti(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGameFPPCamera(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameFPPCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OtherSurvsPP(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvsPP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckSpottedAndChangeFOV(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckSpottedAndChangeFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmsVisible(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AlarmsVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function SurvivorMasterBP.SurvivorMasterBP_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeCrouchCapsuleHalfHeight(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeCrouchCapsuleHalfHeight // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckAirTime(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckAirTime // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerJumpEndSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerJumpEndSound // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastJumpEndSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastJumpEndSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerJump(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerJump // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastJump(); // Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastJump // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvMovementVoices(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMovementVoices // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvMistakeVoice(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMistakeVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvMovementVoicesUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMovementVoicesUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvGrabVoice(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvGrabVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvEscapedVoice(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvEscapedVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffityServ(struct FVector Location, struct FVector Forward); // Function SurvivorMasterBP.SurvivorMasterBP_C.GraffityServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GraffityMulti(struct FVector Location, struct FVector Forward); // Function SurvivorMasterBP.SurvivorMasterBP_C.GraffityMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeCamera(struct AActor* Actor); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MaterialsDefault(); // Function SurvivorMasterBP.SurvivorMasterBP_C.MaterialsDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlurUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BlurUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TransformationEffect(bool EnergyDrink?); // Function SurvivorMasterBP.SurvivorMasterBP_C.TransformationEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPostProcess(); // Function SurvivorMasterBP.SurvivorMasterBP_C.GetPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalMeshUpdate(); // Function SurvivorMasterBP.SurvivorMasterBP_C.LocalMeshUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PointsTick(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PointsTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSpectatorVariables(float ProgressUISpectator, float MaxProgressUISpectator); // Function SurvivorMasterBP.SurvivorMasterBP_C.UpdateSpectatorVariables // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WalkShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.WalkShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.JumpShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialExitCam(bool On?, struct AActor* NewViewTarget); // Function SurvivorMasterBP.SurvivorMasterBP_C.TutorialExitCam // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideLobby(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HideLobby // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerRaiseLobby(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerRaiseLobby // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitAndRun(float Delta); // Function SurvivorMasterBP.SurvivorMasterBP_C.HitAndRun // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunCheck(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunCheck1(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheck1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunCheckReset(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheckReset // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PCProp(struct AActor* Pin); // Function SurvivorMasterBP.SurvivorMasterBP_C.PCProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathCameraEffect(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathCameraEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffOutlineProp(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OffOutlineProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectPropEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectPropEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StunShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialUnfreeze(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TutorialUnfreeze // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PingEvent(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.PingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportServer(bool B); // Function SurvivorMasterBP.SurvivorMasterBP_C.TeleportServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportMulti(bool B); // Function SurvivorMasterBP.SurvivorMasterBP_C.TeleportMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseTime(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DecreaseTime // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffOrient(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OffOrient // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedPostProcess(float Time); // Function SurvivorMasterBP.SurvivorMasterBP_C.FailedPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Left_K2Node_InputAxisEvent_2(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Right_K2Node_InputAxisEvent_3(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_4(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_5(float AxisValue); // Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void TestBlockChair(); // Function SurvivorMasterBP.SurvivorMasterBP_C.TestBlockChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void asdasdasd(); // Function SurvivorMasterBP.SurvivorMasterBP_C.asdasdasd // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockChairTick(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BlockChairTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UnblockChair(); // Function SurvivorMasterBP.SurvivorMasterBP_C.UnblockChair // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockSkillCheck(); // Function SurvivorMasterBP.SurvivorMasterBP_C.BlockSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PingShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PingShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RushSwitcher(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.RushSwitcher // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpecialSwitcher(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpecialSwitcher // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropChallengeSwitcher(bool Start?, struct ABasePropBP_C* CursedProp); // Function SurvivorMasterBP.SurvivorMasterBP_C.CursedPropChallengeSwitcher // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropChallengeTick(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CursedPropChallengeTick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndChallenge(struct ABasePropBP_C* CursedProp); // Function SurvivorMasterBP.SurvivorMasterBP_C.EndChallenge // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseShake(float Float); // Function SurvivorMasterBP.SurvivorMasterBP_C.ChaseShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RunSpectatorOnChair(); // Function SurvivorMasterBP.SurvivorMasterBP_C.RunSpectatorOnChair // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WallJumpParticleServer(struct FTransform SpawnTransform); // Function SurvivorMasterBP.SurvivorMasterBP_C.WallJumpParticleServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WallJumpParticleMulticast(struct FTransform SpawnTransform); // Function SurvivorMasterBP.SurvivorMasterBP_C.WallJumpParticleMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvulnerabilityMulticastSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.InvulnerabilityMulticastSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinSpawnerSupport(struct ASurvivorMasterBP_C* Surv); // Function SurvivorMasterBP.SurvivorMasterBP_C.CoinSpawnerSupport // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BleedingTextLocal(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.BleedingTextLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FartSpawnCoin(struct ASurvivorMasterBP_C* Surv); // Function SurvivorMasterBP.SurvivorMasterBP_C.FartSpawnCoin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRolePP(bool On?); // Function SurvivorMasterBP.SurvivorMasterBP_C.SurvRolePP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SupportHeal(struct ASurvivorMasterBP_C* Surv); // Function SurvivorMasterBP.SurvivorMasterBP_C.SupportHeal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpSoundServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpSoundMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractableDoorButton(); // Function SurvivorMasterBP.SurvivorMasterBP_C.InteractableDoorButton // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUD_StartJump(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HUD_StartJump // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HUD_EndJUmp(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HUD_EndJUmp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FindAllDoors(); // Function SurvivorMasterBP.SurvivorMasterBP_C.FindAllDoors // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DetectDoor(); // Function SurvivorMasterBP.SurvivorMasterBP_C.DetectDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffATPC(); // Function SurvivorMasterBP.SurvivorMasterBP_C.OffATPC // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientCalculateDamageDirection(struct FVector Location); // Function SurvivorMasterBP.SurvivorMasterBP_C.ClientCalculateDamageDirection // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerCalculateDamageDirection(struct AActor* InstigatedBy); // Function SurvivorMasterBP.SurvivorMasterBP_C.ServerCalculateDamageDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EscapeLoopEvent(); // Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EscapeLoopEventServ(); // Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEventServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EscapeLoopEventMulti(); // Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEventMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.AlarmShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpottedShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SpottedShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HealSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSoundServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HealSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSoundMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HealSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelloSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelloSoundServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelloSoundMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThanksSound(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThanksSoundServer(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThanksSoundMulticast(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ZoomOut(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUpItemShake(); // Function SurvivorMasterBP.SurvivorMasterBP_C.PickUpItemShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSkinIDLocal(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSkinIDServ(int32_t ID); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSkinIDMulti(int32_t ID); // Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartGameLootBox(); // Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameLootBox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckChairPlayers(); // Function SurvivorMasterBP.SurvivorMasterBP_C.CheckChairPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowKnockDownMessage(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ShowKnockDownMessage // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowDeathNotification_Server(struct APS_PropHunt_C* SurvState); // Function SurvivorMasterBP.SurvivorMasterBP_C.ShowDeathNotification_Server // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowDeathNotification_All(struct FString Nickname, enum class SurvChars SurvChar); // Function SurvivorMasterBP.SurvivorMasterBP_C.ShowDeathNotification_All // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinRedHead(); // Function SurvivorMasterBP.SurvivorMasterBP_C.SkinRedHead // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivorMasterBP(int32_t EntryPoint); // Function SurvivorMasterBP.SurvivorMasterBP_C.ExecuteUbergraph_SurvivorMasterBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void ED_MovementType__DelegateSignature(); // Function SurvivorMasterBP.SurvivorMasterBP_C.ED_MovementType__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

