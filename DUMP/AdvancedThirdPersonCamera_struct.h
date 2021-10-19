// Enum AdvancedThirdPersonCamera.EATPCInterpolationType
enum class EATPCInterpolationType : uint8 {
	SmoothInterpolation,
	ConstInterpolation,
	EATPCInterpolationType_MAX,
};

// Enum AdvancedThirdPersonCamera.EATPCCameraModeScriptTickGroup
enum class EATPCCameraModeScriptTickGroup : uint8 {
	PreCameraObjectTick,
	PostCameraObjectTick,
	EATPCCameraModeScriptTickGroup_MAX,
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCCameraMode
// Size: 0x218 (Inherited: 0x00)
struct FATPCCameraMode {
	bool bEnableLocationSettings; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FATPCLocationSettings LocationSettings; // 0x08(0x88)
	bool bEnableRotationSettings; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FATPCRotationSettings RotationSettings; // 0x98(0xa8)
	bool bEnableFOVSettings; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FATPCFOVSettings FOVSettings; // 0x148(0x18)
	bool bEnableFadeSettings; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FATPCFadeSettings FadeSettings; // 0x168(0x30)
	bool bEnableFollowTerrainSettings; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FATPCFollowTerrainSettings FollowTerrainSettings; // 0x1a0(0x28)
	bool bEnableCameraShakesSettings; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct FATPCCameraShakesSettings CameraShakesSettings; // 0x1d0(0x18)
	struct FATPCLockOnTargetSettings LockOnTargetSettings; // 0x1e8(0x2c)
	char pad_214[0x4]; // 0x214(0x04)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCLockOnTargetSettings
// Size: 0x2c (Inherited: 0x00)
struct FATPCLockOnTargetSettings {
	bool bResetTargetOnChangeCameraMode; // 0x00(0x01)
	bool RotateCameraByYaw; // 0x01(0x01)
	bool RotateCameraByPitch; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float CameraRotationSpeed; // 0x04(0x04)
	float AdditionalSmoothRotationSpeed; // 0x08(0x04)
	bool bUseRotationLimits; // 0x0c(0x01)
	bool bUseMaxLockDistance; // 0x0d(0x01)
	bool bResetTargetOnReachMaxDistance; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float MaxLockDistance; // 0x10(0x04)
	bool bUseCheckTargetVisibility; // 0x14(0x01)
	bool bResetLockOnLostVisibleTarget; // 0x15(0x01)
	enum class ECollisionChannel CheckVisibilityTraceChannel; // 0x16(0x01)
	bool bHardLockOnTarget; // 0x17(0x01)
	bool bPauseLockAfterPlayerInput; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PauseLockAfterPlayerInputTime; // 0x1c(0x04)
	bool bUseDesiredConeRotation; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float DeisredConeRotationYaw; // 0x24(0x04)
	bool bEnableDebug; // 0x28(0x01)
	bool bShowTarget; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCCameraShakesSettings
// Size: 0x18 (Inherited: 0x00)
struct FATPCCameraShakesSettings {
	struct UCameraShakeBase* EnterToModeCameraShake; // 0x00(0x08)
	struct UCameraShakeBase* RegularCameraShake; // 0x08(0x08)
	bool bNeedStopAllCameraShakeOnEnterToCameraMode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCFollowTerrainSettings
// Size: 0x28 (Inherited: 0x00)
struct FATPCFollowTerrainSettings {
	struct UCurveVector* TerrainAngleSocketOffsetCurve; // 0x00(0x08)
	float SocketOffsetInterpSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* TerrainAngleRotationOffsetCurve; // 0x10(0x08)
	float AngleRotationInterpSpeed; // 0x18(0x04)
	float AngleDelayChange; // 0x1c(0x04)
	bool bEnableDebug; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCFadeSettings
// Size: 0x30 (Inherited: 0x00)
struct FATPCFadeSettings {
	float FadeInTime; // 0x00(0x04)
	float FadeOutTime; // 0x04(0x04)
	float MaterialFadeMinValue; // 0x08(0x04)
	float MaterialFadeMaxValue; // 0x0c(0x04)
	struct TArray<struct FName> MaterialFadeParamNames; // 0x10(0x10)
	enum class ECollisionChannel FadeChannel; // 0x20(0x01)
	bool bFadeSelfIfCollision; // 0x21(0x01)
	bool bUseCustomFadeOutTimeForSelfFade; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float SelfFadeCustomFadeOutTime; // 0x24(0x04)
	float SelfFadeCheckRadius; // 0x28(0x04)
	bool bSelfFadeAttachedActors; // 0x2c(0x01)
	bool bDrawDebugFadeShape; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCFOVSettings
// Size: 0x18 (Inherited: 0x00)
struct FATPCFOVSettings {
	float CameraFOV; // 0x00(0x04)
	float InterpolationSpeed; // 0x04(0x04)
	struct UCurveFloat* PitchRotationFOVModifier; // 0x08(0x08)
	struct UCurveFloat* MovementSpeedFOVModifier; // 0x10(0x08)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCRotationSettings
// Size: 0xa8 (Inherited: 0x00)
struct FATPCRotationSettings {
	float ViewPitchMin; // 0x00(0x04)
	float ViewPitchMax; // 0x04(0x04)
	float ViewYawMin; // 0x08(0x04)
	float ViewYawMax; // 0x0c(0x04)
	float ViewInterpolationSpeed; // 0x10(0x04)
	bool bEnableRotationOffset; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FATPCRotationOffsetSettings RotationOffsetSettings; // 0x18(0x18)
	bool bEnableRoofCollisionCheckSettings; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FATPCRoofCollisionCheckSettings RoofCollisionCheckSettings; // 0x38(0x58)
	bool bEnableViewRotationToActorRotation; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FATPCViewRotationToActorRotationSettings ViewRotationToActorRotationSettings; // 0x94(0x14)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCViewRotationToActorRotationSettings
// Size: 0x14 (Inherited: 0x00)
struct FATPCViewRotationToActorRotationSettings {
	bool bIterruptOnActorRotationChanged; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxDeltaForChange; // 0x04(0x04)
	float StartChangeDelay; // 0x08(0x04)
	float ChangeRotationSpeed; // 0x0c(0x04)
	float ChangeRotationSpeedInterpSpeed; // 0x10(0x04)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCRoofCollisionCheckSettings
// Size: 0x58 (Inherited: 0x00)
struct FATPCRoofCollisionCheckSettings {
	struct TArray<enum class EObjectTypeQuery> TraceObjectTypes; // 0x00(0x10)
	struct FVector EyesBoxTraceHalfSize; // 0x10(0x0c)
	float RoofTraceAngleFirst; // 0x1c(0x04)
	struct FVector RoofBoxTraceHalfSizeFirst; // 0x20(0x0c)
	float RoofTraceAngleSecond; // 0x2c(0x04)
	struct FVector RoofBoxTraceHalfSizeSecond; // 0x30(0x0c)
	struct FATPCRotationOffsetSettings RotationOffsetSettings; // 0x3c(0x18)
	bool bEnableDebug; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCRotationOffsetSettings
// Size: 0x18 (Inherited: 0x00)
struct FATPCRotationOffsetSettings {
	float StartOffsetDelay; // 0x00(0x04)
	float ChangeRotationSpeed; // 0x04(0x04)
	enum class EATPCInterpolationType InterpolationType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PitchOffset; // 0x0c(0x04)
	bool bActivateOnlyIfMovement; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinMovementSpeedForActivate; // 0x14(0x04)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCLocationSettings
// Size: 0x88 (Inherited: 0x00)
struct FATPCLocationSettings {
	bool bEnableCameraLocationLag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FATPCCameraLocationLagSettings CameraLocationLagSettings; // 0x04(0x14)
	bool bEnableCameraRotationLag; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FATPCCameraRotationLagSettings CameraRotationLagSettings; // 0x1c(0x0c)
	bool bDoCollisionTest; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ProbeSize; // 0x2c(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x30(0x01)
	bool bDoMovementCollisionTest; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MovementCollisionTestDuration; // 0x34(0x04)
	float MovementCollisionTestMinLocationDelta; // 0x38(0x04)
	enum class ECollisionChannel MovementCollisionTestCollisionChannel; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinCameraDistance; // 0x40(0x04)
	float MaxCameraDistance; // 0x44(0x04)
	bool bSetDistanceToDefaultOnChangeCameraMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float DefaultCameraDistance; // 0x4c(0x04)
	bool bCacheDistanceForCurrentCameraMode; // 0x50(0x01)
	enum class EATPCInterpolationType ZoomInterpolationType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float ZoomSpeed; // 0x54(0x04)
	float ZoomDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UCurveVector* SocketOffsetCurve; // 0x60(0x08)
	float SocketOffsetInterpSpeed; // 0x68(0x04)
	struct FVector TargetOffset; // 0x6c(0x0c)
	float TargetOffsetInterpSpeed; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* PitchDistanceCurve; // 0x80(0x08)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCCameraRotationLagSettings
// Size: 0x0c (Inherited: 0x00)
struct FATPCCameraRotationLagSettings {
	float CameraLagSpeed; // 0x00(0x04)
	bool bUseCameraLagSubstepping; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CameraLagMaxTimeStep; // 0x08(0x04)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCCameraLocationLagSettings
// Size: 0x14 (Inherited: 0x00)
struct FATPCCameraLocationLagSettings {
	bool bEnableCameraLagForXY; // 0x00(0x01)
	bool bEnableCameraLagForZ; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CameraLagSpeed; // 0x04(0x04)
	float CameraLagMaxDistance; // 0x08(0x04)
	bool bDrawDebugLagMarkers; // 0x0c(0x01)
	bool bUseCameraLagSubstepping; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float CameraLagMaxTimeStep; // 0x10(0x04)
};

// ScriptStruct AdvancedThirdPersonCamera.ATPCOverrideCameraRotation
// Size: 0x14 (Inherited: 0x00)
struct FATPCOverrideCameraRotation {
	struct FRotator Rotation; // 0x00(0x0c)
	bool bUseRotationLimits; // 0x0c(0x01)
	bool bAllowPlayerInput; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float InterpSpeedAfterPlayerInput; // 0x10(0x04)
};

