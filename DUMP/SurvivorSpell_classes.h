// BlueprintGeneratedClass SurvivorSpell.SurvivorSpell_C
// Size: 0xf8 (Inherited: 0xd4)
struct USurvivorSpell_C : USpell_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ASurvivorMasterBP_C* Survivor; // 0xe0(0x08)
	bool ShowIcon?; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct ABP_Spectator_C* Spectator; // 0xf0(0x08)

	void ReceiveBeginPlay(); // Function SurvivorSpell.SurvivorSpell_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvivorSpell.SurvivorSpell_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function SurvivorSpell.SurvivorSpell_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvivorSpell(int32_t EntryPoint); // Function SurvivorSpell.SurvivorSpell_C.ExecuteUbergraph_SurvivorSpell // (Final|UbergraphFunction) // @ game+0x132e1a0
};

