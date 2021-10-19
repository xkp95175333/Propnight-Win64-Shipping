// BlueprintGeneratedClass BP_PartImp.BP_PartImp_C
// Size: 0x34b (Inherited: 0x220)
struct ABP_PartImp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct UNiagaraComponent* NiagaraCompnent; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsHit; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t Surface_Type; // 0x244(0x04)
	struct TArray<struct UNiagaraSystem*> VFX; // 0x248(0x10)
	struct FHitResult Hit Information; // 0x258(0x8c)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct AKillerMasterBP_C* Actor Information; // 0x2e8(0x08)
	int32_t NewVar_1; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TMap<struct UPhysicalMaterial*, int32_t> Phys Mat; // 0x2f8(0x50)
	bool NewVar_2; // 0x348(0x01)
	bool NewVar_3; // 0x349(0x01)
	bool Condition; // 0x34a(0x01)

	void Drawer(struct AKillerMasterBP_C* ref, struct FHitResult hit); // Function BP_PartImp.BP_PartImp_C.Drawer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvHit(); // Function BP_PartImp.BP_PartImp_C.SurvHit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_PartImp(int32_t EntryPoint); // Function BP_PartImp.BP_PartImp_C.ExecuteUbergraph_BP_PartImp // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

