// BlueprintGeneratedClass KeymasterLevelSystem.KeymasterLevelSystem_C
// Size: 0x160 (Inherited: 0x100)
struct UKeymasterLevelSystem_C : ULevelSystem_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct AKeymaster_C* KeymasterRef; // 0x108(0x08)
	struct TArray<int32_t> DamageLvls; // 0x110(0x10)
	struct TArray<float> RaduisLvls; // 0x120(0x10)
	struct TArray<float> EyeDurationLvls; // 0x130(0x10)
	float Duration; // 0x140(0x04)
	float CDAstral; // 0x144(0x04)
	struct TArray<float> CDAstralLvls; // 0x148(0x10)
	int32_t Damage; // 0x158(0x04)
	float Radius; // 0x15c(0x04)

	void ReceiveTick(float DeltaSeconds); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void 1SkillUp(); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.1SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 2SkillUp(); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.2SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void 3SkillUp(); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.3SkillUp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DurationServ(float Value); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DurationMulti(float Value); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KeymasterLevelSystem(int32_t EntryPoint); // Function KeymasterLevelSystem.KeymasterLevelSystem_C.ExecuteUbergraph_KeymasterLevelSystem // (Final|UbergraphFunction) // @ game+0x132e1a0
};

