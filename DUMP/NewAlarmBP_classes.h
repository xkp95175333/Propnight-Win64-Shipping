// BlueprintGeneratedClass NewAlarmBP.NewAlarmBP_C
// Size: 0x4e3 (Inherited: 0x220)
struct ANewAlarmBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct UParticleSystemComponent* P_AlarmFull; // 0x230(0x08)
	struct UParticleSystemComponent* P_AlarmCurse; // 0x238(0x08)
	struct UParticleSystemComponent* P_AlarmBreak1; // 0x240(0x08)
	struct UCapsuleComponent* Capsule; // 0x248(0x08)
	struct UParticleSystemComponent* P_AlarmSmoke; // 0x250(0x08)
	struct UParticleSystemComponent* P_AlarmProgress; // 0x258(0x08)
	struct UPointLightComponent* NightmareLight1; // 0x260(0x08)
	struct UFMODAudioComponent* FMODAudioHelperThird; // 0x268(0x08)
	struct UFMODAudioComponent* FMODAudioHelperSecond; // 0x270(0x08)
	struct USceneComponent* CoinSpwner; // 0x278(0x08)
	struct UFMODAudioComponent* CurseAudio; // 0x280(0x08)
	struct UFMODAudioComponent* FMODAlarmProgress; // 0x288(0x08)
	struct UPointLightComponent* CurseLight; // 0x290(0x08)
	struct UParticleSystemComponent* LightBeamParticle; // 0x298(0x08)
	struct UBoxComponent* Box1; // 0x2a0(0x08)
	struct UWidgetComponent* Widget; // 0x2a8(0x08)
	struct USceneComponent* WidgetContainer; // 0x2b0(0x08)
	struct USkeletalMeshComponent* Alarm_rig; // 0x2b8(0x08)
	struct UFMODAudioComponent* FMODFailed; // 0x2c0(0x08)
	struct UBoxComponent* Box; // 0x2c8(0x08)
	struct UFMODAudioComponent* FMODAlarmNoise; // 0x2d0(0x08)
	struct UFMODAudioComponent* FMODReloadingAlarm; // 0x2d8(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x2e0(0x08)
	struct UPointLightComponent* PointLight; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	float Timeline_6_NewTrack_0_79FBDF634800A6E1C50B3B9FE43A640C; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_6__Direction_79FBDF634800A6E1C50B3B9FE43A640C; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_7; // 0x300(0x08)
	float Propmachine_LightEmi_80EE49C34236407460455F9F899A3043; // 0x308(0x04)
	enum class ETimelineDirection Propmachine__Direction_80EE49C34236407460455F9F899A3043; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* propmachine; // 0x310(0x08)
	float Timeline_5_Lerp_539EB76C41BFEB191228CDB1D68DA17A; // 0x318(0x04)
	enum class ETimelineDirection Timeline_5__Direction_539EB76C41BFEB191228CDB1D68DA17A; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* Timeline_6; // 0x320(0x08)
	float Timeline_4_NewTrack_0_E893B9C746576B6E9153299EE00955BA; // 0x328(0x04)
	enum class ETimelineDirection Timeline_4__Direction_E893B9C746576B6E9153299EE00955BA; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent* Timeline_5; // 0x330(0x08)
	float CrackEmissionTimeline_NewTrack_0_88EF93874DE27168A83ACA991C96E2F1; // 0x338(0x04)
	enum class ETimelineDirection CrackEmissionTimeline__Direction_88EF93874DE27168A83ACA991C96E2F1; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct UTimelineComponent* CrackEmissionTimeline; // 0x340(0x08)
	float Timeline_3_NewTrack_0_90A7A9AF4446AF853B71AAA3059C147E; // 0x348(0x04)
	enum class ETimelineDirection Timeline_3__Direction_90A7A9AF4446AF853B71AAA3059C147E; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UTimelineComponent* Timeline_4; // 0x350(0x08)
	float Timeline_2_NewTrack_0_7F02F97E42A66FFE1FB8739FCE7826B5; // 0x358(0x04)
	enum class ETimelineDirection Timeline_2__Direction_7F02F97E42A66FFE1FB8739FCE7826B5; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x360(0x08)
	float Timeline_1_NewTrack_0_EF3489634043E5245C774D8350860F8E; // 0x368(0x04)
	enum class ETimelineDirection Timeline_1__Direction_EF3489634043E5245C774D8350860F8E; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x370(0x08)
	float Timeline_0_NewTrack_0_6392CBD2429CCE588C622091FADED503; // 0x378(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6392CBD2429CCE588C622091FADED503; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x380(0x08)
	float AlphaLerp_Alpha_81F2A34B4B26167A49B34BAD07BCC0A7; // 0x388(0x04)
	enum class ETimelineDirection AlphaLerp__Direction_81F2A34B4B26167A49B34BAD07BCC0A7; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* AlphaLerp; // 0x390(0x08)
	float ReloadingTime; // 0x398(0x04)
	float ReloadingTimeRem; // 0x39c(0x04)
	bool ReloadingStarts?; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TArray<struct AActor*> actorsArray; // 0x3a8(0x10)
	bool Finished?; // 0x3b8(0x01)
	bool BlockAlarm?; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct TArray<struct AKillerMasterBP_C*> KillersRef; // 0x3c0(0x10)
	struct AActor* ActorSurvRef; // 0x3d0(0x08)
	struct ASurvivorMasterBP_C* SurfRef; // 0x3d8(0x08)
	bool SkillCheck?; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float OldProgress; // 0x3e4(0x04)
	float Alpha; // 0x3e8(0x04)
	float BoostModeValue; // 0x3ec(0x04)
	bool SurvCountsChange?; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	int32_t BoostedSurvs; // 0x3f4(0x04)
	bool FailedBlock?; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FVector2D SizeWidget; // 0x3fc(0x08)
	bool FailedAnimStart?; // 0x404(0x01)
	bool UseParticle?; // 0x405(0x01)
	bool Cursed; // 0x406(0x01)
	char pad_407[0x1]; // 0x407(0x01)
	float RushBoost; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct FVector> SpwnCoinsV3; // 0x410(0x10)
	struct TArray<struct FVector> SpwnCoinsV3SkillCheck; // 0x420(0x10)
	int32_t CountCoins; // 0x430(0x04)
	int32_t I; // 0x434(0x04)
	struct FVector v3Coins; // 0x438(0x0c)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<float> r3; // 0x448(0x10)
	struct ASurvivorMasterBP_C* SREF; // 0x458(0x08)
	bool IsPaused; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float OldReloadingTime; // 0x464(0x04)
	bool IsPlayer; // 0x468(0x01)
	bool BrokenTime; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	float Delta Seconds; // 0x46c(0x04)
	float Reloading Time; // 0x470(0x04)
	float Reloading Time_1; // 0x474(0x04)
	bool BrokenB; // 0x478(0x01)
	bool Bait; // 0x479(0x01)
	bool BTimeIsTick; // 0x47a(0x01)
	char pad_47B[0x1]; // 0x47b(0x01)
	struct FLinearColor CurseLightCol; // 0x47c(0x10)
	bool CurseVisible; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	int32_t Tinkers; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct TArray<struct AKillerMasterBP_C*> Killers; // 0x498(0x10)
	bool SoundOff?; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UMaterialInstanceDynamic* LightBeamDynMat; // 0x4b0(0x08)
	int32_t CreakInt; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UMaterialInstanceDynamic* AlarmMaterial; // 0x4c0(0x08)
	int32_t MaterialLevel; // 0x4c8(0x04)
	bool Crack?; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	int32_t OldCreak; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UMaterialInstanceDynamic* PropmachineMaterial; // 0x4d8(0x08)
	bool TutorialBlock?; // 0x4e0(0x01)
	bool KillerTutorial?; // 0x4e1(0x01)
	bool SurvTutorial?; // 0x4e2(0x01)

	void TimeIsTicking(); // Function NewAlarmBP.NewAlarmBP_C.TimeIsTicking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AudioHelperFunc(int32_t Selection); // Function NewAlarmBP.NewAlarmBP_C.AudioHelperFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void XYmaker(float X, float Y, float Z); // Function NewAlarmBP.NewAlarmBP_C.XYmaker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlphaLerp__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void AlphaLerp__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CrackEmissionTimeline__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CrackEmissionTimeline__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_5__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_5__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Propmachine__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Propmachine__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Propmachine__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Propmachine__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__FinishedFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_6__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__UpdateFunc(); // Function NewAlarmBP.NewAlarmBP_C.Timeline_6__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void SendSkillCheck(struct AActor* Actor); // Function NewAlarmBP.NewAlarmBP_C.SendSkillCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function NewAlarmBP.NewAlarmBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartReloading(struct AActor* Actor); // Function NewAlarmBP.NewAlarmBP_C.StartReloading // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopReloadingServ(struct AActor* SurvActor); // Function NewAlarmBP.NewAlarmBP_C.StopReloadingServ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedAlarm(struct ASurvivorMasterBP_C* SurvRef); // Function NewAlarmBP.NewAlarmBP_C.FailedAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GreatAlarm(struct ASurvivorMasterBP_C* SurvRef); // Function NewAlarmBP.NewAlarmBP_C.GreatAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function NewAlarmBP.NewAlarmBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthSetAlarm(bool On); // Function NewAlarmBP.NewAlarmBP_C.CustomDepthSetAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WipeAlarm(); // Function NewAlarmBP.NewAlarmBP_C.WipeAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthOffAlarm(); // Function NewAlarmBP.NewAlarmBP_C.CustomDepthOffAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPlayAudio(bool Active?); // Function NewAlarmBP.NewAlarmBP_C.ServerPlayAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastPlayAudio(bool Active?); // Function NewAlarmBP.NewAlarmBP_C.MulticastPlayAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActorToSurv(); // Function NewAlarmBP.NewAlarmBP_C.ActorToSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkillChekSound(struct ASurvivorMasterBP_C* SurvRef); // Function NewAlarmBP.NewAlarmBP_C.SkillChekSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Passed(struct ASurvivorMasterBP_C* Surv); // Function NewAlarmBP.NewAlarmBP_C.Passed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TimelineStart(); // Function NewAlarmBP.NewAlarmBP_C.TimelineStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostMode(); // Function NewAlarmBP.NewAlarmBP_C.BoostMode // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomEve(); // Function NewAlarmBP.NewAlarmBP_C.CustomEve // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendGreat(struct AActor* Surv); // Function NewAlarmBP.NewAlarmBP_C.SendGreat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSuccess(struct AActor* Surv); // Function NewAlarmBP.NewAlarmBP_C.SendSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendFailed(struct AActor* Surv); // Function NewAlarmBP.NewAlarmBP_C.SendFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level1(struct ASurvivorMasterBP_C* Surv); // Function NewAlarmBP.NewAlarmBP_C.Level1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level2(struct ASurvivorMasterBP_C* Surv); // Function NewAlarmBP.NewAlarmBP_C.Level2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level3(struct ASurvivorMasterBP_C* Surv); // Function NewAlarmBP.NewAlarmBP_C.Level3 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level4(struct ASurvivorMasterBP_C* Surv); // Function NewAlarmBP.NewAlarmBP_C.Level4 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItem(struct ASurvivorMasterBP_C* Surv, bool Condition); // Function NewAlarmBP.NewAlarmBP_C.HideItem // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItemServ(struct ASurvivorMasterBP_C* Surv, bool Condition); // Function NewAlarmBP.NewAlarmBP_C.HideItemServ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FullAlarmMulticast(); // Function NewAlarmBP.NewAlarmBP_C.FullAlarmMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeginAttach(); // Function NewAlarmBP.NewAlarmBP_C.BeginAttach // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ParticleSwitch(bool Active?); // Function NewAlarmBP.NewAlarmBP_C.ParticleSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FakeFailedAlarm(); // Function NewAlarmBP.NewAlarmBP_C.FakeFailedAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseLightON(bool On, float Delay); // Function NewAlarmBP.NewAlarmBP_C.CurseLightON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnlySurvsVisible(); // Function NewAlarmBP.NewAlarmBP_C.OnlySurvsVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClockTickSound(float Progress); // Function NewAlarmBP.NewAlarmBP_C.ClockTickSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoppelFaking(bool On?); // Function NewAlarmBP.NewAlarmBP_C.DoppelFaking // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AllAlarmsReady(); // Function NewAlarmBP.NewAlarmBP_C.AllAlarmsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FullAllAlarmMulticast(float Progress); // Function NewAlarmBP.NewAlarmBP_C.FullAllAlarmMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmNotification(); // Function NewAlarmBP.NewAlarmBP_C.AlarmNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinSpawn(bool SkillCheck?, struct ASurvivorMasterBP_C* SREF); // Function NewAlarmBP.NewAlarmBP_C.CoinSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WidgetVisible(); // Function NewAlarmBP.NewAlarmBP_C.WidgetVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopFadeWidgetAlarm(); // Function NewAlarmBP.NewAlarmBP_C.StopFadeWidgetAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Color(); // Function NewAlarmBP.NewAlarmBP_C.Color // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailAlarmMulti(); // Function NewAlarmBP.NewAlarmBP_C.FailAlarmMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideInteractableButton(); // Function NewAlarmBP.NewAlarmBP_C.HideInteractableButton // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowIteractableButton(); // Function NewAlarmBP.NewAlarmBP_C.ShowIteractableButton // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendInfoForHitMarkKiller_AlarmDone(); // Function NewAlarmBP.NewAlarmBP_C.SendInfoForHitMarkKiller_AlarmDone // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreakSound(); // Function NewAlarmBP.NewAlarmBP_C.CreakSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FinishCrack(); // Function NewAlarmBP.NewAlarmBP_C.FinishCrack // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSound2D(bool Start?); // Function NewAlarmBP.NewAlarmBP_C.AlarmSound2D // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvOverlap(); // Function NewAlarmBP.NewAlarmBP_C.SurvOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AllySkillcheck(struct ASurvivorMasterBP_C* AllySurv, bool Failed?); // Function NewAlarmBP.NewAlarmBP_C.AllySkillcheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void StartGameOverlap(); // Function NewAlarmBP.NewAlarmBP_C.StartGameOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereRadiusStartGame(); // Function NewAlarmBP.NewAlarmBP_C.SphereRadiusStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmTutorialStageStart(); // Function NewAlarmBP.NewAlarmBP_C.AlarmTutorialStageStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialAlarm(); // Function NewAlarmBP.NewAlarmBP_C.TutorialAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialHitMark(); // Function NewAlarmBP.NewAlarmBP_C.TutorialHitMark // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TutorialRemoveHitMark(); // Function NewAlarmBP.NewAlarmBP_C.TutorialRemoveHitMark // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvTutorial(bool End?); // Function NewAlarmBP.NewAlarmBP_C.SurvTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_NewAlarmBP(int32_t EntryPoint); // Function NewAlarmBP.NewAlarmBP_C.ExecuteUbergraph_NewAlarmBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

