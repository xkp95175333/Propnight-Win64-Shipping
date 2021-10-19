// BlueprintGeneratedClass SurvPropDestruction.SurvPropDestruction_C
// Size: 0x101 (Inherited: 0xf8)
struct USurvPropDestruction_C : USurvivorSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	bool CD?; // 0x100(0x01)

	void CallDestruction(int32_t Stage); // Function SurvPropDestruction.SurvPropDestruction_C.CallDestruction // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CallDestructionHit(float VectorLenght); // Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CallDestructionHitServer(); // Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CallDestructionHitMulticast(); // Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropHitCD(); // Function SurvPropDestruction.SurvPropDestruction_C.PropHitCD // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvPropDestruction(int32_t EntryPoint); // Function SurvPropDestruction.SurvPropDestruction_C.ExecuteUbergraph_SurvPropDestruction // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

