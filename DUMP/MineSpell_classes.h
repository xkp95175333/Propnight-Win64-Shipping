// BlueprintGeneratedClass MineSpell.MineSpell_C
// Size: 0x10c (Inherited: 0xe8)
struct UMineSpell_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool SkillActivated?; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct AMine_C*> Mines; // 0xf8(0x10)
	int32_t Count; // 0x108(0x04)

	void OnRep_Mines(); // Function MineSpell.MineSpell_C.OnRep_Mines // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function MineSpell.MineSpell_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function MineSpell.MineSpell_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function MineSpell.MineSpell_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnMineServer(); // Function MineSpell.MineSpell_C.SpawnMineServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActorDestroyed(struct AMine_C* Mine); // Function MineSpell.MineSpell_C.ActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientCount(int32_t Count); // Function MineSpell.MineSpell_C.ClientCount // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlantServer(bool On?); // Function MineSpell.MineSpell_C.PlantServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlantMulticast(bool On?); // Function MineSpell.MineSpell_C.PlantMulticast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MineSpell(int32_t EntryPoint); // Function MineSpell.MineSpell_C.ExecuteUbergraph_MineSpell // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

