// BlueprintGeneratedClass PerkManager.PerkManager_C
// Size: 0xe0 (Inherited: 0xb0)
struct UPerkManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPerk_C* Perk1; // 0xb8(0x08)
	struct UPerk_C* Perk2; // 0xc0(0x08)
	struct UPerk_C* Perk3; // 0xc8(0x08)
	struct FString PerksName; // 0xd0(0x10)

	void ReceiveBeginPlay(); // Function PerkManager.PerkManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function PerkManager.PerkManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AddPerk1(bool Surv?, struct UActorComponent* Perk); // Function PerkManager.PerkManager_C.AddPerk1 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddPerk2(bool Surv?, struct UActorComponent* Perk); // Function PerkManager.PerkManager_C.AddPerk2 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddPerk3(bool Surv?, struct UActorComponent* Perk); // Function PerkManager.PerkManager_C.AddPerk3 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PerksNames(bool Surv?, struct UActorComponent* Perk); // Function PerkManager.PerkManager_C.PerksNames // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPerk1(); // Function PerkManager.PerkManager_C.CheckPerk1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPerk2(); // Function PerkManager.PerkManager_C.CheckPerk2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPerk3(); // Function PerkManager.PerkManager_C.CheckPerk3 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PerkManager(int32_t EntryPoint); // Function PerkManager.PerkManager_C.ExecuteUbergraph_PerkManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

