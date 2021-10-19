// BlueprintGeneratedClass Banshee.Banshee_C
// Size: 0x12f8 (Inherited: 0x1226)
struct ABanshee_C : AKillerMasterBP_C {
	char pad_1226[0x2]; // 0x1226(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1228(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x1230(0x08)
	struct UNiagaraComponent* PN_Shockwave; // 0x1238(0x08)
	struct UCurse_C* Curse; // 0x1240(0x08)
	struct UFMODAudioComponent* FMODJump; // 0x1248(0x08)
	struct UFMODAudioComponent* FMODAudio3; // 0x1250(0x08)
	struct UFMODAudioComponent* ScreamFMOD; // 0x1258(0x08)
	struct UFMODAudioComponent* CurseS; // 0x1260(0x08)
	struct UFMODAudioComponent* FastSoundFmod; // 0x1268(0x08)
	struct UFMODAudioComponent* RushSoundFmod; // 0x1270(0x08)
	struct UBoxComponent* Box1_1; // 0x1278(0x08)
	struct UScream_C* Scream; // 0x1280(0x08)
	float Timeline_5_0_Value_AE6778D44E9C7E800202E5B157E4247D; // 0x1288(0x04)
	enum class ETimelineDirection Timeline_5_0__Direction_AE6778D44E9C7E800202E5B157E4247D; // 0x128c(0x01)
	char pad_128D[0x3]; // 0x128d(0x03)
	struct UTimelineComponent* Timeline_5_1; // 0x1290(0x08)
	float Timeline_4_0_Value_0DF127DB457CBB3190707499D9292828; // 0x1298(0x04)
	enum class ETimelineDirection Timeline_4_0__Direction_0DF127DB457CBB3190707499D9292828; // 0x129c(0x01)
	char pad_129D[0x3]; // 0x129d(0x03)
	struct UTimelineComponent* Timeline_4_1; // 0x12a0(0x08)
	bool RMBPRESS; // 0x12a8(0x01)
	char pad_12A9[0x3]; // 0x12a9(0x03)
	float TimeSpeed; // 0x12ac(0x04)
	float TimeSpeedDur; // 0x12b0(0x04)
	float NewVar_4_1; // 0x12b4(0x04)
	bool FlyOff; // 0x12b8(0x01)
	bool BRCD; // 0x12b9(0x01)
	char pad_12BA[0x2]; // 0x12ba(0x02)
	int32_t CDSV; // 0x12bc(0x04)
	struct AActor* CurseActor; // 0x12c0(0x08)
	bool Down; // 0x12c8(0x01)
	bool JumpPressed; // 0x12c9(0x01)
	char pad_12CA[0x6]; // 0x12ca(0x06)
	struct UFMODAudioComponent* FMODAudio2_1; // 0x12d0(0x08)
	bool FlyDelay; // 0x12d8(0x01)
	bool ScreamAnim; // 0x12d9(0x01)
	bool CurseAnim; // 0x12da(0x01)
	char pad_12DB[0x1]; // 0x12db(0x01)
	float DelayFlyTime; // 0x12dc(0x04)
	struct TArray<struct AActor*> hotkeyActorsArray; // 0x12e0(0x10)
	struct AActor* Other Actor_1; // 0x12f0(0x08)

	void OnRep_ScreamAnim(); // Function Banshee.Banshee_C.OnRep_ScreamAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseActorFind(struct AActor* InputPin); // Function Banshee.Banshee_C.CurseActorFind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4_0__FinishedFunc(); // Function Banshee.Banshee_C.Timeline_4_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_4_0__UpdateFunc(); // Function Banshee.Banshee_C.Timeline_4_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5_0__FinishedFunc(); // Function Banshee.Banshee_C.Timeline_5_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_5_0__UpdateFunc(); // Function Banshee.Banshee_C.Timeline_5_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_7(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Jump_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Jump_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 2_K2Node_InputActionEvent_5(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 2_K2Node_InputActionEvent_4(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 1_K2Node_InputActionEvent_3(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 3_K2Node_InputActionEvent_2(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Use Skill 3_K2Node_InputActionEvent_1(struct FKey Key); // Function Banshee.Banshee_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Banshee.Banshee_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Banshee.Banshee_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Banshee.Banshee_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Banshee.Banshee_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void MoveSound(bool B); // Function Banshee.Banshee_C.MoveSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveSoundServ(bool B); // Function Banshee.Banshee_C.MoveSoundServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveSoundMulti(bool B); // Function Banshee.Banshee_C.MoveSoundMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundRush(bool B); // Function Banshee.Banshee_C.SoundRush // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundRushServ(bool B); // Function Banshee.Banshee_C.SoundRushServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SoundRushMulti(bool B); // Function Banshee.Banshee_C.SoundRushMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseSound(); // Function Banshee.Banshee_C.CurseSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseSoundServ(); // Function Banshee.Banshee_C.CurseSoundServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseSoundMulti(); // Function Banshee.Banshee_C.CurseSoundMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScreamLocal(); // Function Banshee.Banshee_C.ScreamLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScreamServ(); // Function Banshee.Banshee_C.ScreamServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScreamMulti(); // Function Banshee.Banshee_C.ScreamMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoveSoundMake(); // Function Banshee.Banshee_C.MoveSoundMake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudio(); // Function Banshee.Banshee_C.AtackAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudioServ(); // Function Banshee.Banshee_C.AtackAudioServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AtackAudioMulti(); // Function Banshee.Banshee_C.AtackAudioMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundStartServ(bool B); // Function Banshee.Banshee_C.JumpSoundStartServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundStartMulti(bool B); // Function Banshee.Banshee_C.JumpSoundStartMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseKeyStart(); // Function Banshee.Banshee_C.CurseKeyStart // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerCatchSound(); // Function Banshee.Banshee_C.KillerCatchSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerLaugh(); // Function Banshee.Banshee_C.KillerLaugh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerMulti(); // Function Banshee.Banshee_C.JumpSoundKillerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlindSound(); // Function Banshee.Banshee_C.BlindSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerDetectMulti(); // Function Banshee.Banshee_C.KillerDetectMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunawaySound(); // Function Banshee.Banshee_C.SurvRunawaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayOffMulti(); // Function Banshee.Banshee_C.DelayOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayFast(); // Function Banshee.Banshee_C.PlayFast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopFast(); // Function Banshee.Banshee_C.StopFast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterJumpMulti(); // Function Banshee.Banshee_C.AfterJumpMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayMove(); // Function Banshee.Banshee_C.PlayMove // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopMove(); // Function Banshee.Banshee_C.StopMove // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LandJump(); // Function Banshee.Banshee_C.LandJump // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerVisible(); // Function Banshee.Banshee_C.KillerVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void hotkerStarterCurse(); // Function Banshee.Banshee_C.hotkerStarterCurse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NoActorsCurse(); // Function Banshee.Banshee_C.NoActorsCurse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShot(); // Function Banshee.Banshee_C.StartAnimShot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotServ(); // Function Banshee.Banshee_C.StartAnimShotServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartAnimShotMulti(); // Function Banshee.Banshee_C.StartAnimShotMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SeekMulti(); // Function Banshee.Banshee_C.SeekMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_2(float AxisValue); // Function Banshee.Banshee_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue); // Function Banshee.Banshee_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void BansheeScream(); // Function Banshee.Banshee_C.BansheeScream // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BansheeFly(); // Function Banshee.Banshee_C.BansheeFly // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerBreakGlass(struct AInteractableDoor_C* Door); // Function Banshee.Banshee_C.ServerBreakGlass // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BansheeBreakGlass(struct AInteractableDoor_C* Door); // Function Banshee.Banshee_C.BansheeBreakGlass // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JumpSoundKillerLocal(); // Function Banshee.Banshee_C.JumpSoundKillerLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Banshee(int32_t EntryPoint); // Function Banshee.Banshee_C.ExecuteUbergraph_Banshee // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

