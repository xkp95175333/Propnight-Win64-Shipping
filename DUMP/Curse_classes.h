// BlueprintGeneratedClass Curse.Curse_C
// Size: 0xf5 (Inherited: 0xe8)
struct UCurse_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float DelayTime; // 0xf0(0x04)
	bool PlantRdy?; // 0xf4(0x01)

	void BoostExitServ(struct AExit_C* Exit); // Function Curse.Curse_C.BoostExitServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostExitMulti(struct AExit_C* Exit); // Function Curse.Curse_C.BoostExitMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxBlockServ(struct ALootBox_C* LootBox); // Function Curse.Curse_C.LootboxBlockServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxBlockMulti(struct ALootBox_C* LootBox); // Function Curse.Curse_C.LootboxBlockMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostAlarmServ(struct ANewAlarmBP_C* Alarm); // Function Curse.Curse_C.BoostAlarmServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostAlarmMulti(struct ANewAlarmBP_C* Alarm); // Function Curse.Curse_C.BoostAlarmMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function Curse.Curse_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Curse.Curse_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BoostChairServ(struct AHypnoChairBP_C* Chair); // Function Curse.Curse_C.BoostChairServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BoostChairMulti(struct AHypnoChairBP_C* Chair); // Function Curse.Curse_C.BoostChairMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function Curse.Curse_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Curse(int32_t EntryPoint); // Function Curse.Curse_C.ExecuteUbergraph_Curse // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

