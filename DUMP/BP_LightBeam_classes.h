// BlueprintGeneratedClass BP_LightBeam.BP_LightBeam_C
// Size: 0x276 (Inherited: 0x220)
struct ABP_LightBeam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBillboardComponent* UISprite; // 0x228(0x08)
	struct UStaticMeshComponent* GodRayMesh; // 0x230(0x08)
	struct AActor* Light; // 0x238(0x08)
	float Width; // 0x240(0x04)
	float Length; // 0x244(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x248(0x08)
	struct FLinearColor Color_1; // 0x250(0x10)
	float Brightness; // 0x260(0x04)
	float Fade distance; // 0x264(0x04)
	bool Animated; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FRandomStream RandomTime; // 0x26c(0x08)
	bool SpotLight; // 0x274(0x01)
	bool Use light for rotation; // 0x275(0x01)

	void UserConstructionScript(); // Function BP_LightBeam.BP_LightBeam_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddBeam(); // Function BP_LightBeam.BP_LightBeam_C.AddBeam // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_LightBeam(int32_t EntryPoint); // Function BP_LightBeam.BP_LightBeam_C.ExecuteUbergraph_BP_LightBeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

