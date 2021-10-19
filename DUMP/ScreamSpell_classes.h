// BlueprintGeneratedClass ScreamSpell.ScreamSpell_C
// Size: 0xf4 (Inherited: 0xe8)
struct UScreamSpell_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float ShakeDuration; // 0xf0(0x04)

	void GetFilteredProps(struct TArray<struct ASurvivorMasterBP_C*> Players, struct TArray<struct ASurvivorMasterBP_C*> Result); // Function ScreamSpell.ScreamSpell_C.GetFilteredProps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function ScreamSpell.ScreamSpell_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function ScreamSpell.ScreamSpell_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServScream(struct TArray<struct ASurvivorMasterBP_C*> Targets); // Function ScreamSpell.ScreamSpell_C.ServScream // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MultiScream(struct TArray<struct ASurvivorMasterBP_C*> Targets); // Function ScreamSpell.ScreamSpell_C.MultiScream // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ScreamSpell(int32_t EntryPoint); // Function ScreamSpell.ScreamSpell_C.ExecuteUbergraph_ScreamSpell // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

