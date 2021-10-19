// BlueprintGeneratedClass Regeneration.Regeneration_C
// Size: 0x101 (Inherited: 0xf8)
struct URegeneration_C : USurvivorSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	bool TestMode?; // 0x100(0x01)

	void ReceiveBeginPlay(); // Function Regeneration.Regeneration_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Regeneration.Regeneration_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServerSelfRegeneration(); // Function Regeneration.Regeneration_C.ServerSelfRegeneration // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastSelfRegeneration(); // Function Regeneration.Regeneration_C.MulticastSelfRegeneration // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Regeneration(int32_t EntryPoint); // Function Regeneration.Regeneration_C.ExecuteUbergraph_Regeneration // (Final|UbergraphFunction) // @ game+0x132e1a0
};

