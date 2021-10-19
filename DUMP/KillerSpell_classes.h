// BlueprintGeneratedClass KillerSpell.KillerSpell_C
// Size: 0xe8 (Inherited: 0xd4)
struct UKillerSpell_C : USpell_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AKillerMasterBP_C* Killer; // 0xe0(0x08)

	void Consume(); // Function KillerSpell.KillerSpell_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function KillerSpell.KillerSpell_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerSpell(int32_t EntryPoint); // Function KillerSpell.KillerSpell_C.ExecuteUbergraph_KillerSpell // (Final|UbergraphFunction) // @ game+0x132e1a0
};

