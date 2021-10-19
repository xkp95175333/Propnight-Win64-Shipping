// BlueprintGeneratedClass Perk.Perk_C
// Size: 0xd0 (Inherited: 0xb0)
struct UPerk_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool PerkFind?; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString PerkName; // 0xc0(0x10)

	void ReceiveBeginPlay(); // Function Perk.Perk_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Perk(int32_t EntryPoint); // Function Perk.Perk_C.ExecuteUbergraph_Perk // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

