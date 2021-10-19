// BlueprintGeneratedClass DoppelgangerSpell2.DoppelgangerSpell2_C
// Size: 0x110 (Inherited: 0xe8)
struct UDoppelgangerSpell2_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct ANewAlarmBP_C*> Alarms; // 0xf0(0x10)
	struct TArray<struct AActor*> SpottedSurvs; // 0x100(0x10)

	void ReceiveBeginPlay(); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActivateSpellMulticast(); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActivateSpellServ(); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_DoppelgangerSpell2(int32_t EntryPoint); // Function DoppelgangerSpell2.DoppelgangerSpell2_C.ExecuteUbergraph_DoppelgangerSpell2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

