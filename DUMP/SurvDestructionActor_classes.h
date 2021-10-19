// BlueprintGeneratedClass SurvDestructionActor.SurvDestructionActor_C
// Size: 0x260 (Inherited: 0x220)
struct ASurvDestructionActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDestructibleComponent* Destructible; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x238(0x10)
	float Float1; // 0x248(0x04)
	float EffectDuration; // 0x24c(0x04)
	float EffectTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FTimerHandle MaterialEffectEvent; // 0x258(0x08)

	void AfterSpawn(struct UDestructibleMesh* NewMesh); // Function SurvDestructionActor.SurvDestructionActor_C.AfterSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartDestroy(); // Function SurvDestructionActor.SurvDestructionActor_C.StartDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MaterialEffect(); // Function SurvDestructionActor.SurvDestructionActor_C.MaterialEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvDestructionActor(int32_t EntryPoint); // Function SurvDestructionActor.SurvDestructionActor_C.ExecuteUbergraph_SurvDestructionActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

