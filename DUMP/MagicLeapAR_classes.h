// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void StartLuminARSession(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ULuminARSessionConfig* Configuration); // Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xee1ea0
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	bool LuminARLineTrace(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct TSet<enum class ELuminARLineTraceChannel> TraceChannels, struct TArray<struct FARTraceResult> OutHitResults); // Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xee1be0
	enum class ELuminARTrackingState GetTrackingState(); // Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xee1b90
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, enum class EMagicLeapImageTargetOrientation InAxisOrientation); // Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xee1810
	struct ULuminARCandidateImage* AddLuminRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xee15e0
};

// Class MagicLeapAR.LuminAROrigin
// Size: 0x2e0 (Inherited: 0x220)
struct ALuminAROrigin : AAROriginActor {
	struct UMRMeshComponent* MRMeshComponent; // 0x220(0x08)
	struct UMaterialInterface* PlaneSurfaceMaterial; // 0x228(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x230(0x08)
	char pad_238[0xa8]; // 0x238(0xa8)
};

// Class MagicLeapAR.LuminARSessionConfig
// Size: 0x1a0 (Inherited: 0x110)
struct ULuminARSessionConfig : UARSessionConfig {
	struct FMagicLeapPlanesQuery PlanesQuery; // 0x110(0x60)
	int32_t MaxPlaneQueryResults; // 0x170(0x04)
	int32_t MinPlaneArea; // 0x174(0x04)
	bool bArbitraryOrientationPlaneDetection; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FVector PlaneSearchExtents; // 0x17c(0x0c)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x188(0x10)
	bool bDiscardZeroExtentPlanes; // 0x198(0x01)
	bool bDefaultUseUnreliablePose; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
};

// Class MagicLeapAR.LuminARLightEstimate
// Size: 0x50 (Inherited: 0x40)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	struct TArray<float> AmbientIntensityNits; // 0x40(0x10)

	struct TArray<float> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xee1a90
};

// Class MagicLeapAR.LuminARCandidateImage
// Size: 0x60 (Inherited: 0x58)
struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58(0x01)
	bool bImageIsStationary; // 0x59(0x01)
	enum class EMagicLeapImageTargetOrientation AxisOrientation; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)

	bool GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xee1bc0
	bool GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xee1b70
	enum class EMagicLeapImageTargetOrientation GetAxisOrientation(); // Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xee1b50
};

