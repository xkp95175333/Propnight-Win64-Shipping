// BlueprintGeneratedClass SurvFart.SurvFart_C
// Size: 0x108 (Inherited: 0xf8)
struct USurvFart_C : USurvivorSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UFMODAudioComponent* Sound; // 0x100(0x08)

	void Cast(); // Function SurvFart.SurvFart_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastFart(); // Function SurvFart.SurvFart_C.MulticastFart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerFart(); // Function SurvFart.SurvFart_C.ServerFart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvFart(int32_t EntryPoint); // Function SurvFart.SurvFart_C.ExecuteUbergraph_SurvFart // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

