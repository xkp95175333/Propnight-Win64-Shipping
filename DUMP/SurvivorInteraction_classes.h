// BlueprintGeneratedClass SurvivorInteraction.SurvivorInteraction_C
// Size: 0x195 (Inherited: 0xf8)
struct USurvivorInteraction_C : USurvivorSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	bool SkillActivated?; // 0x100(0x01)
	bool BlockTick?; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct ASurvivorMasterBP_C* CrawlPlayer; // 0x108(0x08)
	float ReanimateProgress; // 0x110(0x04)
	float SelfReanimateProgress; // 0x114(0x04)
	float ReanimateAllyFullProgress; // 0x118(0x04)
	float ReanimateSelfFullProgress; // 0x11c(0x04)
	int32_t RestoreHealth; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct ANewAlarmBP_C* CurrentAlarm; // 0x128(0x08)
	bool RandomSkillCheck?; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float DeltaSeconds; // 0x134(0x04)
	struct AHypnoChairBP_C* Chair; // 0x138(0x08)
	float FullProgressHelpGetOutChair; // 0x140(0x04)
	float CurrentHelpGetOutChair; // 0x144(0x04)
	bool ProgressFull?; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float FullProgressSelfGetOutChair; // 0x14c(0x04)
	float CurrentSelfGetOutChair; // 0x150(0x04)
	int32_t RandomChance; // 0x154(0x04)
	bool RandomSelfGetOut?; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct AExit_C* Exit; // 0x160(0x08)
	bool Failed?; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	float ChanceIncreaseRate; // 0x16c(0x04)
	float PenaltyTime; // 0x170(0x04)
	float MaxSkillCheckTime; // 0x174(0x04)
	float MinSkillCheckTime; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct UFMODAudioComponent* SurvShakingAudio; // 0x180(0x08)
	float CurrentSkillCheckTime; // 0x188(0x04)
	bool SkillCheckedStarted; // 0x18c(0x01)
	bool CloseDoor; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
	float SkillCheckLevel; // 0x190(0x04)
	bool TutorialBlock?; // 0x194(0x01)

	void SpawnDecal(struct FName SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer?, bool ImProp?, bool Run?, bool Crouch?, struct UFMODAudioComponent* FmodAudio, int32_t KillerType, bool Crawl?, bool Shake); // Function SurvivorInteraction.SurvivorInteraction_C.SpawnDecal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFootState(enum class EFootState New Style); // Function SurvivorInteraction.SurvivorInteraction_C.ChangeFootState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSkillCheck(struct AActor* Actor); // Function SurvivorInteraction.SurvivorInteraction_C.SendSkillCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendFailed(struct AActor* Surv); // Function SurvivorInteraction.SurvivorInteraction_C.SendFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSuccess(struct AActor* Surv); // Function SurvivorInteraction.SurvivorInteraction_C.SendSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendGreat(struct AActor* Surv); // Function SurvivorInteraction.SurvivorInteraction_C.SendGreat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvivorInteraction.SurvivorInteraction_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function SurvivorInteraction.SurvivorInteraction_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyServerStart(struct ASurvivorMasterBP_C* CrawlPlayer); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyServerStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyMulticastStart(struct ASurvivorMasterBP_C* CrawlPlayer); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyMulticastStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyFullProgressMulticast(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyFullProgressMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Uncast(); // Function SurvivorInteraction.SurvivorInteraction_C.Uncast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyServerStop(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyServerStop // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyMulticastStop(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyMulticastStop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateSelfFullProgressMulticast(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateSelfFullProgressMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateSelfFullProgressServer(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateSelfFullProgressServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReloadingAlarmServerStart(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmServerStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReloadingAlarmMulticastStart(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmMulticastStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnInvokeWithF(); // Function SurvivorInteraction.SurvivorInteraction_C.OnInvokeWithF // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnUninvokeWithF(); // Function SurvivorInteraction.SurvivorInteraction_C.OnUninvokeWithF // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReloadingAlarmServerStop(); // Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmServerStop // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReloadingAlarmMulticastStop(); // Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmMulticastStop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorServerFinish(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerFinish // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorMulticastFinish(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastFinish // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorServerStart(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorMulticastStart(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorServerStop(); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerStop // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HelpOnChairSurvivorMulticastStop(); // Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastStop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkillCheckMain(); // Function SurvivorInteraction.SurvivorInteraction_C.SkillCheckMain // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelfGetOutChairServer(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.SelfGetOutChairServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelfGetOutChairMulticast(struct AHypnoChairBP_C* Chair); // Function SurvivorInteraction.SurvivorInteraction_C.SelfGetOutChairMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenExitServerStart(struct AExit_C* Exit); // Function SurvivorInteraction.SurvivorInteraction_C.OpenExitServerStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenExitMulticastStart(struct AExit_C* Exit); // Function SurvivorInteraction.SurvivorInteraction_C.OpenExitMulticastStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenExitServerStop(); // Function SurvivorInteraction.SurvivorInteraction_C.OpenExitServerStop // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenExitMulticastStop(); // Function SurvivorInteraction.SurvivorInteraction_C.OpenExitMulticastStop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedGetOutServer(struct AHypnoChairBP_C* Input); // Function SurvivorInteraction.SurvivorInteraction_C.FailedGetOutServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckActiveSkillCheck(); // Function SurvivorInteraction.SurvivorInteraction_C.CheckActiveSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateAllyFullProgressServer(); // Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyFullProgressServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedServer(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.FailedServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GreatServer(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.GreatServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedMulticast(struct ANewAlarmBP_C* Target); // Function SurvivorInteraction.SurvivorInteraction_C.FailedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GreatMulticast(struct ANewAlarmBP_C* Target); // Function SurvivorInteraction.SurvivorInteraction_C.GreatMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PassedServer(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.PassedServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PassedMulticast(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.PassedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPressed(); // Function SurvivorInteraction.SurvivorInteraction_C.CheckPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckSurvPosition(); // Function SurvivorInteraction.SurvivorInteraction_C.CheckSurvPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level1Server(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level1Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level1Multicast(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level1Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level2Server(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level2Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level2Multicast(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level2Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level3Server(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level3Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level3Multicast(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level3Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level4Server(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level4Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level4Multicast(struct ANewAlarmBP_C* Alarm); // Function SurvivorInteraction.SurvivorInteraction_C.Level4Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeCoinServer(struct ACoinActor_C* Target, struct AActor* Actor); // Function SurvivorInteraction.SurvivorInteraction_C.TakeCoinServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeCoinMulticast(struct ACoinActor_C* Target, struct AActor* Actor); // Function SurvivorInteraction.SurvivorInteraction_C.TakeCoinMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Chair Open Stage(); // Function SurvivorInteraction.SurvivorInteraction_C.Chair Open Stage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerRandomSelfGetOut(bool RandomSelfGetOut?); // Function SurvivorInteraction.SurvivorInteraction_C.ServerRandomSelfGetOut // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastRandomSelfGetOut(bool RandomSelfGetOut?); // Function SurvivorInteraction.SurvivorInteraction_C.MulticastRandomSelfGetOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedGetOutMulticast(); // Function SurvivorInteraction.SurvivorInteraction_C.FailedGetOutMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SelfReanimateSendProgress(float SelfReanimateReplicated); // Function SurvivorInteraction.SurvivorInteraction_C.SelfReanimateSendProgress // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnChairSkillCheck(); // Function SurvivorInteraction.SurvivorInteraction_C.OnChairSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CrawlPlayerRotation(); // Function SurvivorInteraction.SurvivorInteraction_C.CrawlPlayerRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseSkillCheckTime(); // Function SurvivorInteraction.SurvivorInteraction_C.DecreaseSkillCheckTime // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerOnChairPing(); // Function SurvivorInteraction.SurvivorInteraction_C.ServerOnChairPing // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastOnChairPing(); // Function SurvivorInteraction.SurvivorInteraction_C.MulticastOnChairPing // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowSavedMessageServer(); // Function SurvivorInteraction.SurvivorInteraction_C.ShowSavedMessageServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowSavedMessageClient(); // Function SurvivorInteraction.SurvivorInteraction_C.ShowSavedMessageClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnInvokeWithQ(); // Function SurvivorInteraction.SurvivorInteraction_C.OnInvokeWithQ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseDoorServer(struct AInteractableDoor_C* Door, bool Close?, struct ASurvivorMasterBP_C* Surv); // Function SurvivorInteraction.SurvivorInteraction_C.CloseDoorServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseDoorMulticast(struct AInteractableDoor_C* Door, bool Close?, struct ASurvivorMasterBP_C* Surv); // Function SurvivorInteraction.SurvivorInteraction_C.CloseDoorMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OverlapReloading(bool On?, struct ANewAlarmBP_C* Target); // Function SurvivorInteraction.SurvivorInteraction_C.OverlapReloading // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InteractDoor(); // Function SurvivorInteraction.SurvivorInteraction_C.InteractDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyItemServer(); // Function SurvivorInteraction.SurvivorInteraction_C.DestroyItemServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyItemMulticast(); // Function SurvivorInteraction.SurvivorInteraction_C.DestroyItemMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivorInteraction(int32_t EntryPoint); // Function SurvivorInteraction.SurvivorInteraction_C.ExecuteUbergraph_SurvivorInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

