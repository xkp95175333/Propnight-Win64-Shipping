// BlueprintGeneratedClass BrokenTime.BrokenTime_C
// Size: 0x118 (Inherited: 0x100)
struct UBrokenTime_C : UPerkKiller_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct ANewAlarmBP_C*> Out Actors; // 0x108(0x10)

	void ReceiveBeginPlay(); // Function BrokenTime.BrokenTime_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropActivatePerkEffect(); // Function BrokenTime.BrokenTime_C.CursedPropActivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropDeactivatePerkEffect(); // Function BrokenTime.BrokenTime_C.CursedPropDeactivatePerkEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BrokenTime(int32_t EntryPoint); // Function BrokenTime.BrokenTime_C.ExecuteUbergraph_BrokenTime // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

