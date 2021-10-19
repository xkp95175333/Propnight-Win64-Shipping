// BlueprintGeneratedClass PerkKiller.PerkKiller_C
// Size: 0x100 (Inherited: 0xd0)
struct UPerkKiller_C : UPerk_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct AKillerMasterBP_C* Killer; // 0xd8(0x08)
	bool CursedProp?; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct ABasePropBP_C* CursedProp; // 0xe8(0x08)
	struct TArray<struct ABasePropBP_C*> Props; // 0xf0(0x10)

	void ReceiveBeginPlay(); // Function PerkKiller.PerkKiller_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function PerkKiller.PerkKiller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropActivate(); // Function PerkKiller.PerkKiller_C.CursedPropActivate // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropDeactivate(); // Function PerkKiller.PerkKiller_C.CursedPropDeactivate // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropActivatePerkEffect(); // Function PerkKiller.PerkKiller_C.CursedPropActivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropDeactivatePerkEffect(); // Function PerkKiller.PerkKiller_C.CursedPropDeactivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropVisualEffectSwitcher(struct ABasePropBP_C* Prop, bool On?); // Function PerkKiller.PerkKiller_C.CursedPropVisualEffectSwitcher // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PerkKiller(int32_t EntryPoint); // Function PerkKiller.PerkKiller_C.ExecuteUbergraph_PerkKiller // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

