// BlueprintGeneratedClass SurvParticleActor.SurvParticleActor_C
// Size: 0x240 (Inherited: 0x220)
struct ASurvParticleActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh; // 0x228(0x08)
	struct UNiagaraComponent* Niagara; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function SurvParticleActor.SurvParticleActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Destr(); // Function SurvParticleActor.SurvParticleActor_C.Destr // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvParticleActor(int32_t EntryPoint); // Function SurvParticleActor.SurvParticleActor_C.ExecuteUbergraph_SurvParticleActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

