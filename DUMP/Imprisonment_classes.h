// BlueprintGeneratedClass Imprisonment.Imprisonment_C
// Size: 0x118 (Inherited: 0x100)
struct UImprisonment_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ASurvivorMasterBP_C*> SurvRefs; // 0x108(0x10)

	void ReceiveBeginPlay(); // Function Imprisonment.Imprisonment_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropActivatePerkEffect(); // Function Imprisonment.Imprisonment_C.CursedPropActivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropDeactivatePerkEffect(); // Function Imprisonment.Imprisonment_C.CursedPropDeactivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Imprisonment(int32_t EntryPoint); // Function Imprisonment.Imprisonment_C.ExecuteUbergraph_Imprisonment // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

