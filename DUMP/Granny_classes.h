// BlueprintGeneratedClass Granny.Granny_C
// Size: 0x12a1 (Inherited: 0x1226)
struct AGranny_C : AKillerMasterBP_C {
	char pad_1226[0x2]; // 0x1226(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1228(0x08)
	struct USkeletalMeshComponent* FPPSMInvis; // 0x1230(0x08)
	struct USkeletalMeshComponent* MeshInvis; // 0x1238(0x08)
	struct UAstral_C* Astral; // 0x1240(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x1248(0x08)
	struct UMineSpell_C* MineSpell; // 0x1250(0x08)
	struct UFMODAudioComponent* FMODAudio2_1; // 0x1258(0x08)
	struct UKnifeShoot_C* KnifeShoot; // 0x1260(0x08)
	struct UGrannyAstral_C* GrannyAstral; // 0x1268(0x08)
	float Timeline_6_NewTrack_0_8F17A98B4A22CE5C14557F88A7B533A0; // 0x1270(0x04)
	enum class ETimelineDirection Timeline_6__Direction_8F17A98B4A22CE5C14557F88A7B533A0; // 0x1274(0x01)
	char pad_1275[0x3]; // 0x1275(0x03)
	struct UTimelineComponent* Timeline_7; // 0x1278(0x08)
	float AstralTimeline_Alpha_5454405F4AD75BD4D8210CA26B2BE808; // 0x1280(0x04)
	enum class ETimelineDirection AstralTimeline__Direction_5454405F4AD75BD4D8210CA26B2BE808; // 0x1284(0x01)
	char pad_1285[0x3]; // 0x1285(0x03)
	struct UTimelineComponent* AstralTimeline; // 0x1288(0x08)
	bool RMB; // 0x1290(0x01)
	bool AstralBuild; // 0x1291(0x01)
	bool Move?; // 0x1292(0x01)
	char pad_1293[0x5]; // 0x1293(0x05)
	struct UMaterialInstanceDynamic* AstralMaterial; // 0x1298(0x08)
	bool bKSS; // 0x12a0(0x01)

	void AstralTimeline__FinishedFunc(); // Function Granny.Granny_C.AstralTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void AstralTimeline__UpdateFunc(); // Function Granny.Granny_C.AstralTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__FinishedFunc(); // Function Granny.Granny_C.Timeline_6__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_6__UpdateFunc(); // Function Granny.Granny_C.Timeline_6__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 1_K2Node_InputActionEvent_4(struct FKey Key); // Function Granny.Granny_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 2_K2Node_InputActionEvent_3(struct FKey Key); // Function Granny.Granny_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Attack_K2Node_InputActionEvent_2(struct FKey Key); // Function Granny.Granny_C.InpActEvt_Attack_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 3_K2Node_InputActionEvent_1(struct FKey Key); // Function Granny.Granny_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Granny.Granny_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void CD_Widget_Strat(struct FString AbilityName); // Function Granny.Granny_C.CD_Widget_Strat // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeServ(struct FVector NewParam); // Function Granny.Granny_C.KnifeServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeMulti(struct FVector NewParam); // Function Granny.Granny_C.KnifeMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetmulti(); // Function Granny.Granny_C.KnifeDetmulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetServ(); // Function Granny.Granny_C.KnifeDetServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudio(); // Function Granny.Granny_C.AtackAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WeaponImpact(struct UStaticMeshComponent* meshRef); // Function Granny.Granny_C.WeaponImpact // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WeaponImpactServ(struct UStaticMeshComponent* Mesh); // Function Granny.Granny_C.WeaponImpactServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WeaponImpactMulti(struct UStaticMeshComponent* Mesh); // Function Granny.Granny_C.WeaponImpactMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetectorSoundTrue(); // Function Granny.Granny_C.KnifeDetectorSoundTrue // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDetectorSoundFalse(); // Function Granny.Granny_C.KnifeDetectorSoundFalse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeShootSoundStart(); // Function Granny.Granny_C.KnifeShootSoundStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeSpawnSound(); // Function Granny.Granny_C.KnifeSpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundIn(); // Function Granny.Granny_C.AstralSoundIn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundInvisibility(); // Function Granny.Granny_C.AstralSoundInvisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOut(bool NewParam); // Function Granny.Granny_C.AstralSoundOut // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShot(); // Function Granny.Granny_C.StartAnimShot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotServ(); // Function Granny.Granny_C.StartAnimShotServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotMulti(); // Function Granny.Granny_C.StartAnimShotMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Atack Audio Serv(); // Function Granny.Granny_C.Atack Audio Serv // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudioMulti(); // Function Granny.Granny_C.AtackAudioMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralTeleportFinish(); // Function Granny.Granny_C.AstralTeleportFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOutServ(bool NewParam); // Function Granny.Granny_C.AstralSoundOutServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundOutMulti(bool NewParam); // Function Granny.Granny_C.AstralSoundOutMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PickUp Multi(struct ASurvivorMasterBP_C* SurvRef); // Function Granny.Granny_C.PickUp Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerCatchSound(); // Function Granny.Granny_C.KillerCatchSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerLaugh(); // Function Granny.Granny_C.KillerLaugh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerMulti(); // Function Granny.Granny_C.JumpSoundKillerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterJumpMulti(); // Function Granny.Granny_C.AfterJumpMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlindSound(); // Function Granny.Granny_C.BlindSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunawaySound(); // Function Granny.Granny_C.SurvRunawaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropMulti(); // Function Granny.Granny_C.DropMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToChairMulti(struct AHypnoChairBP_C* NewParam); // Function Granny.Granny_C.ToChairMulti // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunAwayMulti(bool NewParam, struct ASurvivorMasterBP_C* hellpSurv, bool Flashed?); // Function Granny.Granny_C.SurvRunAwayMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckMoveServer(bool On?); // Function Granny.Granny_C.CheckMoveServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralPostProcess(bool On?); // Function Granny.Granny_C.AstralPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateChildPPMaterial(); // Function Granny.Granny_C.CreateChildPPMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThirdPersonCamEvent(bool Now?); // Function Granny.Granny_C.ThirdPersonCamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FirstPersonCamEvent(bool Now?); // Function Granny.Granny_C.FirstPersonCamEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerDetectMulti(); // Function Granny.Granny_C.KillerDetectMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayOffMulti(); // Function Granny.Granny_C.DelayOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeekMulti(); // Function Granny.Granny_C.SeekMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Perexod(); // Function Granny.Granny_C.Perexod // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MineKnifeSpawningSound(); // Function Granny.Granny_C.MineKnifeSpawningSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MineKnifeSpawningSoundServ(); // Function Granny.Granny_C.MineKnifeSpawningSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MineKnifeSpawningSoundMulti(); // Function Granny.Granny_C.MineKnifeSpawningSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerLocal(); // Function Granny.Granny_C.JumpSoundKillerLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MeshVisibiltyOff(); // Function Granny.Granny_C.MeshVisibiltyOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MeshVisibilityOn(); // Function Granny.Granny_C.MeshVisibilityOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Granny(int32_t EntryPoint); // Function Granny.Granny_C.ExecuteUbergraph_Granny // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

