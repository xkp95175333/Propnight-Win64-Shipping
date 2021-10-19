// BlueprintGeneratedClass DeathSparks.DeathSparks_C
// Size: 0x240 (Inherited: 0x220)
struct ADeathSparks_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* Chair; // 0x228(0x08)
	struct UParticleSystemComponent* Centre; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function DeathSparks.DeathSparks_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_DeathSparks(int32_t EntryPoint); // Function DeathSparks.DeathSparks_C.ExecuteUbergraph_DeathSparks // (Final|UbergraphFunction) // @ game+0x132e1a0
};

