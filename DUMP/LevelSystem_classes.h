// BlueprintGeneratedClass LevelSystem.LevelSystem_C
// Size: 0x100 (Inherited: 0xb0)
struct ULevelSystem_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AKillerMasterBP_C* KillerRef; // 0xb8(0x08)
	struct ASurvivorMasterBP_C* SurvivorRef; // 0xc0(0x08)
	int32_t LvlNew; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<int32_t> LvlExp; // 0xd0(0x10)
	int32_t LvlReal; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<int32_t> SkillLvl; // 0xe8(0x10)
	bool UpLvl; // 0xf8(0x01)
	bool BLvlCalc; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t MaxLvl; // 0xfc(0x04)

	void lvlup(); // Function LevelSystem.LevelSystem_C.lvlup // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function LevelSystem.LevelSystem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LvlUpConfirmed(int32_t SkillUP); // Function LevelSystem.LevelSystem_C.LvlUpConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function LevelSystem.LevelSystem_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void 1SkillUp(); // Function LevelSystem.LevelSystem_C.1SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 2SkillUp(); // Function LevelSystem.LevelSystem_C.2SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 3SkillUp(); // Function LevelSystem.LevelSystem_C.3SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPawn(); // Function LevelSystem.LevelSystem_C.CheckPawn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_LevelSystem(int32_t EntryPoint); // Function LevelSystem.LevelSystem_C.ExecuteUbergraph_LevelSystem // (Final|UbergraphFunction) // @ game+0x132e1a0
};

