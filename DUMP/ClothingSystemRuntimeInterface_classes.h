// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // @ game+0x24fb8e0
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0x1eb45f0
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb8a0
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb870
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb840
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb810
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb7e0
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fb7b0
	void EnableGravityOverride(struct FVector InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24fb720
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // @ game+0x24fb700
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // @ game+0x1eb4610
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x04)
	int32_t MaxBoneWeights; // 0x7c(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

