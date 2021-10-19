// BlueprintGeneratedClass SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C
// Size: 0x1bc (Inherited: 0xf8)
struct USurvivorSoundsMaster-2D_C : USurvivorSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct FFMODEventInstance ChasingFMODSound; // 0x100(0x08)
	struct FFMODEventInstance LevelAmbient; // 0x108(0x08)
	float KillerAmbientValue; // 0x110(0x04)
	float DeltaSeconds; // 0x114(0x04)
	float NewDelay; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct AKillerMasterBP_C* KillerActor; // 0x120(0x08)
	bool NewCall?; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct USoundBase* HeartbeatSound1; // 0x130(0x08)
	struct USoundBase* HeartbeatSound2; // 0x138(0x08)
	bool Stop; // 0x140(0x01)
	bool chase; // 0x141(0x01)
	bool chaseb; // 0x142(0x01)
	bool StopMusic?; // 0x143(0x01)
	bool NewVar_1; // 0x144(0x01)
	bool change?; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float ChaseParameter; // 0x148(0x04)
	float NewChaseParameter; // 0x14c(0x04)
	bool bAfterChase; // 0x150(0x01)
	bool AllSoundsCustomStop?; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float Volume; // 0x154(0x04)
	struct TArray<struct AKillerMasterBP_C*> Killers; // 0x158(0x10)
	float TempFloat1; // 0x168(0x04)
	float TempFloat2; // 0x16c(0x04)
	float VolumeZ; // 0x170(0x04)
	bool bZ; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float DeltaTime; // 0x178(0x04)
	float KillerRange; // 0x17c(0x04)
	struct FFMODEventInstance KillerClose; // 0x180(0x08)
	float CloseKiller; // 0x188(0x04)
	float MaxNoiseValue; // 0x18c(0x04)
	bool NoiseB; // 0x190(0x01)
	bool LvlAmbBlock; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	float NoiseSoundFloat; // 0x194(0x04)
	float HeartbeatFloat; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FFMODEventInstance HeartBeatFmod; // 0x1a0(0x08)
	struct FFMODEventInstance SurvShoulder; // 0x1a8(0x08)
	struct FVector KillerLoc; // 0x1b0(0x0c)

	void PotionSound(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.PotionSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EnergyDrinkSound(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.EnergyDrinkSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeMoney(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.TakeMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TakeItem(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.TakeItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopKiller(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.StopKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GrabSound(enum class ItemType ItemType); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.GrabSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseON(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseON // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChaseOff(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseOff // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IncreaseSoundLevelChase(float Time); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.IncreaseSoundLevelChase // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChaseChange(float Time); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LevelAmbienceCustomStop(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.LevelAmbienceCustomStop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterChase(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.AfterChase // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AllSoundsFade(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.AllSoundsFade // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSkillCheck(struct AActor* Actor); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendSkillCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendFailed(struct AActor* Surv); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSuccess(struct AActor* Surv); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendGreat(struct AActor* Surv); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendGreat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetDistanceKiller(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.GetDistanceKiller // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NoiseSound(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.NoiseSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Checker(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.Checker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NoiseDelay(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.NoiseDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void heartbeatNew(); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.heartbeatNew // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HeartbeatInterp(float Float); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.HeartbeatInterp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivorSoundsMaster-2D(int32_t EntryPoint); // Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ExecuteUbergraph_SurvivorSoundsMaster-2D // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

