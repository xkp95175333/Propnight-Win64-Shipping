// BlueprintGeneratedClass ChargeSpell.ChargeSpell_C
// Size: 0xf1 (Inherited: 0xe8)
struct UChargeSpell_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool Casted?; // 0xf0(0x01)

	void MultiImpulse(); // Function ChargeSpell.ChargeSpell_C.MultiImpulse // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function ChargeSpell.ChargeSpell_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEndCooldown(); // Function ChargeSpell.ChargeSpell_C.OnEndCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServImpulse(); // Function ChargeSpell.ChargeSpell_C.ServImpulse // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function ChargeSpell.ChargeSpell_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ChargeSpell(int32_t EntryPoint); // Function ChargeSpell.ChargeSpell_C.ExecuteUbergraph_ChargeSpell // (Final|UbergraphFunction) // @ game+0x132e1a0
};

