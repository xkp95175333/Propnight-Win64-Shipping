// BlueprintGeneratedClass Footprint_Actor.Footprint_Actor_C
// Size: 0x23c (Inherited: 0x220)
struct AFootprint_Actor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* FootprintDecal; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Duration; // 0x238(0x04)

	void ReceiveBeginPlay(); // Function Footprint_Actor.Footprint_Actor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Footprint_Actor(int32_t EntryPoint); // Function Footprint_Actor.Footprint_Actor_C.ExecuteUbergraph_Footprint_Actor // (Final|UbergraphFunction) // @ game+0x132e1a0
};

