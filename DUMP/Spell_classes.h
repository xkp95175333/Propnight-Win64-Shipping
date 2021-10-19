// BlueprintGeneratedClass Spell.Spell_C
// Size: 0xd4 (Inherited: 0xb0)
struct USpell_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float Cooldown; // 0xb8(0x04)
	bool Usable; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FString Name; // 0xc0(0x10)
	float CurrentCooldown; // 0xd0(0x04)

	void ReceiveTick(float DeltaSeconds); // Function Spell.Spell_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function Spell.Spell_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnInvoke(); // Function Spell.Spell_C.OnInvoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function Spell.Spell_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnUninvoke(); // Function Spell.Spell_C.OnUninvoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Uncast(); // Function Spell.Spell_C.Uncast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnEndCooldown(); // Function Spell.Spell_C.OnEndCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Spell(int32_t EntryPoint); // Function Spell.Spell_C.ExecuteUbergraph_Spell // (Final|UbergraphFunction) // @ game+0x132e1a0
};

