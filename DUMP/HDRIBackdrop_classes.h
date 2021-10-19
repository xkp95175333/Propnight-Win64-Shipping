// BlueprintGeneratedClass HDRIBackdrop.HDRIBackdrop_C
// Size: 0x26c (Inherited: 0x220)
struct AHDRIBackdrop_C : AActor {
	struct USkyLightComponent* SkyLight; // 0x220(0x08)
	struct UStaticMeshComponent* Geometry; // 0x228(0x08)
	struct USceneComponent* SceneComponent; // 0x230(0x08)
	struct UTextureCube* Cubemap; // 0x238(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x240(0x08)
	float Intensity; // 0x248(0x04)
	float Size; // 0x24c(0x04)
	float LightingDistanceFactor; // 0x250(0x04)
	bool UseCameraProjection; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UStaticMesh* Mesh; // 0x258(0x08)
	struct FVector ProjectionCenter; // 0x260(0x0c)

	void CreateMaterial(); // Function HDRIBackdrop.HDRIBackdrop_C.CreateMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UserConstructionScript(); // Function HDRIBackdrop.HDRIBackdrop_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

