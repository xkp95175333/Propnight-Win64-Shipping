// BlueprintGeneratedClass HypnoChairBP.HypnoChairBP_C
// Size: 0x419 (Inherited: 0x220)
struct AHypnoChairBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* SurvEndPointResque; // 0x228(0x08)
	struct UStaticMeshComponent* Cube; // 0x230(0x08)
	struct UTextRenderComponent* TextRender; // 0x238(0x08)
	struct USceneComponent* CoinScene; // 0x240(0x08)
	struct USpotLightComponent* BlockLight; // 0x248(0x08)
	struct USceneComponent* SurvResquePoint; // 0x250(0x08)
	struct USceneComponent* SurvEndPoint; // 0x258(0x08)
	struct USceneComponent* SurvOnChairStart; // 0x260(0x08)
	struct USceneComponent* Surv'sPlace1; // 0x268(0x08)
	struct USceneComponent* ToChairStartPoint; // 0x270(0x08)
	struct USceneComponent* OtherSurvPoint; // 0x278(0x08)
	struct USceneComponent* Surv'sPlace; // 0x280(0x08)
	struct USceneComponent* ChairPoint; // 0x288(0x08)
	struct UFMODAudioComponent* CurseAudio; // 0x290(0x08)
	struct UPointLightComponent* CurseLight; // 0x298(0x08)
	struct UChildActorComponent* BP_LightBeam; // 0x2a0(0x08)
	struct UPointLightComponent* PointLight1; // 0x2a8(0x08)
	struct USpotLightComponent* SpotLight; // 0x2b0(0x08)
	struct UBoxComponent* Collision; // 0x2b8(0x08)
	struct USkeletalMeshComponent* Chair; // 0x2c0(0x08)
	struct UPointLightComponent* PointLight; // 0x2c8(0x08)
	struct UBoxComponent* Box; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	float Timeline_3_Alpha_F3F0C8904CBEA5AE70123CBC7FBDFDA4; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_3__Direction_F3F0C8904CBEA5AE70123CBC7FBDFDA4; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* Timeline_4; // 0x2e8(0x08)
	float Timeline_2_NewTrack_0_0311E6074BB66B2271E34EB9869F9BBA; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_2__Direction_0311E6074BB66B2271E34EB9869F9BBA; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_3; // 0x2f8(0x08)
	float Timeline_1_NewTrack_0_966DA6584CA8AA6E67197F92AF48677A; // 0x300(0x04)
	enum class ETimelineDirection Timeline_1__Direction_966DA6584CA8AA6E67197F92AF48677A; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_2; // 0x308(0x08)
	float Timeline_0_NewTrack_0_5E3A22F04FF737AFFFB011B0FC191AC8; // 0x310(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5E3A22F04FF737AFFFB011B0FC191AC8; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* Timeline_1; // 0x318(0x08)
	enum class ETimelineDirection Resque__Direction_580C4035489EA3A3CA303D89E7AED415; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UTimelineComponent* Resque; // 0x328(0x08)
	float CloseAll_NewTrack_0_1C99BF13488FF0864006ADB4FDC86585; // 0x330(0x04)
	enum class ETimelineDirection CloseAll__Direction_1C99BF13488FF0864006ADB4FDC86585; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* CloseAll; // 0x338(0x08)
	float KillingTimeRem; // 0x340(0x04)
	bool Killing?; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float KillingTime; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct AActor* SurvOnChair; // 0x350(0x08)
	int32_t RandomChance; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct AKillerMasterBP_C* KillerRef; // 0x360(0x08)
	float AnimSpeed; // 0x368(0x04)
	bool SurvResque?; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	float L_hand; // 0x370(0x04)
	float R_hand; // 0x374(0x04)
	float L_leg; // 0x378(0x04)
	float R_leg; // 0x37c(0x04)
	bool Start?; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	struct FVector OriginalLocation; // 0x384(0x0c)
	bool LocationChangeStart; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	float LocationChangerTime; // 0x394(0x04)
	bool LocationChange?; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct ASurvivorMasterBP_C* survToChair; // 0x3a0(0x08)
	int32_t OpenStage; // 0x3a8(0x04)
	bool Close; // 0x3ac(0x01)
	bool Pause; // 0x3ad(0x01)
	bool UsePicklock?; // 0x3ae(0x01)
	bool Cursed; // 0x3af(0x01)
	float BoostTime; // 0x3b0(0x04)
	bool Block; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct UMaterialInstanceDynamic* LampMat; // 0x3b8(0x08)
	bool backToStartDelay; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<float> r3; // 0x3c8(0x10)
	int32_t I; // 0x3d8(0x04)
	float ZLocalMin; // 0x3dc(0x04)
	float ZLocal; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct ASurvivorMasterBP_C* SREF; // 0x3e8(0x08)
	int32_t CountCoins; // 0x3f0(0x04)
	float DeathEffectTime; // 0x3f4(0x04)
	float DeathEffectDuration; // 0x3f8(0x04)
	float Float1; // 0x3fc(0x04)
	struct FTimerHandle DeathEffectTimer; // 0x400(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynMatArr; // 0x408(0x10)
	bool Tutorial?; // 0x418(0x01)

	void CoinAngle(float X, float Y, float Z); // Function HypnoChairBP.HypnoChairBP_C.CoinAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Stule Open(); // Function HypnoChairBP.HypnoChairBP_C.Stule Open // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StarterToPlace(); // Function HypnoChairBP.HypnoChairBP_C.StarterToPlace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseAll__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.CloseAll__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CloseAll__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.CloseAll__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Resque__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.Resque__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Resque__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.Resque__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_2__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__FinishedFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_3__UpdateFunc(); // Function HypnoChairBP.HypnoChairBP_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void SurvResque(struct ASurvivorMasterBP_C* SurvRef); // Function HypnoChairBP.HypnoChairBP_C.SurvResque // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedGetOut(); // Function HypnoChairBP.HypnoChairBP_C.FailedGetOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffCustomDepthServer(); // Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffCustomDepthMulti(); // Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillingSurvServ(struct AActor* Surv, int32_t NewParam); // Function HypnoChairBP.HypnoChairBP_C.KillingSurvServ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthOff(); // Function HypnoChairBP.HypnoChairBP_C.CustomDepthOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void GGgame(); // Function HypnoChairBP.HypnoChairBP_C.GGgame // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CustomDepthSet(bool NewParam); // Function HypnoChairBP.HypnoChairBP_C.CustomDepthSet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function HypnoChairBP.HypnoChairBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SurvOnChairPosition(); // Function HypnoChairBP.HypnoChairBP_C.SurvOnChairPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartToPlace(float NewParam); // Function HypnoChairBP.HypnoChairBP_C.StartToPlace // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BackToStart(); // Function HypnoChairBP.HypnoChairBP_C.BackToStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenStageEvent(); // Function HypnoChairBP.HypnoChairBP_C.OpenStageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseChair(); // Function HypnoChairBP.HypnoChairBP_C.CloseChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLeft(); // Function HypnoChairBP.HypnoChairBP_C.CloseLeft // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseRight(); // Function HypnoChairBP.HypnoChairBP_C.CloseRight // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLeg(); // Function HypnoChairBP.HypnoChairBP_C.CloseLeg // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLeftMulti(); // Function HypnoChairBP.HypnoChairBP_C.CloseLeftMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseRightMulti(); // Function HypnoChairBP.HypnoChairBP_C.CloseRightMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseLightON(bool On, float Delay); // Function HypnoChairBP.HypnoChairBP_C.CurseLightON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetPosition(); // Function HypnoChairBP.HypnoChairBP_C.ResetPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLampMaterial(); // Function HypnoChairBP.HypnoChairBP_C.GetLampMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LampAnim(bool On?); // Function HypnoChairBP.HypnoChairBP_C.LampAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function HypnoChairBP.HypnoChairBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void BackToChair(); // Function HypnoChairBP.HypnoChairBP_C.BackToChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinSpawnerChair(struct ASurvivorMasterBP_C* Surv, bool Tinkerer?, bool Self?); // Function HypnoChairBP.HypnoChairBP_C.CoinSpawnerChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BreakChair(struct ASurvivorMasterBP_C* Surv); // Function HypnoChairBP.HypnoChairBP_C.BreakChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeMaterial(bool Damaged?); // Function HypnoChairBP.HypnoChairBP_C.ChangeMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectEvent(); // Function HypnoChairBP.HypnoChairBP_C.DeathEffectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DynMatGet(); // Function HypnoChairBP.HypnoChairBP_C.DynMatGet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathSurvChair(); // Function HypnoChairBP.HypnoChairBP_C.DeathSurvChair // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvLeave(); // Function HypnoChairBP.HypnoChairBP_C.SurvLeave // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_HypnoChairBP(int32_t EntryPoint); // Function HypnoChairBP.HypnoChairBP_C.ExecuteUbergraph_HypnoChairBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

