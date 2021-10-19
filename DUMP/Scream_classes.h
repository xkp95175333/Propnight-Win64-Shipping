// BlueprintGeneratedClass Scream.Scream_C
// Size: 0x109 (Inherited: 0xe8)
struct UScream_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct AActor*> SurvRefs; // 0xf0(0x10)
	struct ArangeSphereScream_C* sphereActor; // 0x100(0x08)
	bool B; // 0x108(0x01)

	void Cast(); // Function Scream.Scream_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutlineRange(); // Function Scream.Scream_C.OutlineRange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OffOutlineRange(); // Function Scream.Scream_C.OffOutlineRange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function Scream.Scream_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Scream(int32_t EntryPoint); // Function Scream.Scream_C.ExecuteUbergraph_Scream // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

