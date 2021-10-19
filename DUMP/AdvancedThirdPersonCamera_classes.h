// Class AdvancedThirdPersonCamera.ATPCArrowDebugActor
// Size: 0x238 (Inherited: 0x220)
struct AATPCArrowDebugActor : AActor {
	struct USceneComponent* SceneRootcomponent; // 0x220(0x08)
	struct UArrowComponent* ArrowComponent; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)

	void PickActor(struct AActor* Actor); // Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa61b70
};

// Class AdvancedThirdPersonCamera.ATPCCameraBaseObject
// Size: 0x30 (Inherited: 0x28)
struct UATPCCameraBaseObject : UObject {
	struct UATPCCameraComponent* OwningCamera; // 0x28(0x08)

	void Validate(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate // (Native|Public|BlueprintCallable) // @ game+0xa62d20
	void K2_Validate(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void K2_Tick(float DeltaSeconds); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnExitCameraMode(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnEnterCameraMode(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	struct APlayerController* GetPlayerController(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61620
	struct APlayerCameraManager* GetPlayerCameraManager(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa615f0
	struct APawn* GetOwningPawn(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa615c0
	struct UATPCCameraComponent* GetOwningCamera(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61590
	struct AActor* GetOwningActor(); // Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61560
};

// Class AdvancedThirdPersonCamera.ATPCCameraComponent
// Size: 0x530 (Inherited: 0x200)
struct UATPCCameraComponent : USceneComponent {
	struct FMulticastInlineDelegate OnCameraModeChangedDelegate; // 0x1f8(0x10)
	struct FGameplayTag DefaultCameraModeTag; // 0x20c(0x08)
	struct TArray<struct UATPCCameraModeDataAsset*> CameraModesAssets; // 0x218(0x10)
	struct TMap<struct FGameplayTag, struct UATPCCameraModeDataAsset*> SortedCameraModes; // 0x228(0x50)
	struct UATPCCameraModeDataAsset* CustomCameraMode; // 0x278(0x08)
	char pad_280[0x8]; // 0x280(0x08)
	bool bPrintErrorsToScreen; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UATPCCameraLocationObject* LocationObjectClass; // 0x290(0x08)
	struct UATPCCameraFOVObject* FOVObjectClass; // 0x298(0x08)
	struct UATPCCameraFadingObject* FadingObjectClass; // 0x2a0(0x08)
	struct UATPCCameraFollowTerrainObject* FollowTerrainObjectClass; // 0x2a8(0x08)
	struct UATPCCameraShakesObject* CameraShakesObjectClass; // 0x2b0(0x08)
	struct UATPCCameraLockOnTargetObject* LockOnTargetObjectClass; // 0x2b8(0x08)
	struct UATPCCameraLocationObject* LocationObject; // 0x2c0(0x08)
	struct UATPCCameraFOVObject* FOVObject; // 0x2c8(0x08)
	struct UATPCCameraFadingObject* FadingObject; // 0x2d0(0x08)
	struct UATPCCameraFollowTerrainObject* FollowTerrainObject; // 0x2d8(0x08)
	struct UATPCCameraShakesObject* CameraShakesObject; // 0x2e0(0x08)
	struct UATPCCameraLockOnTargetObject* LockOnTargetObject; // 0x2e8(0x08)
	struct TArray<struct UATPCCameraBaseObject*> CameraObjList; // 0x2f0(0x10)
	struct UATPCCameraModeDataAsset* EmptyCameraMode; // 0x300(0x08)
	struct FATPCCameraMode CameraModeDEV; // 0x308(0x218)
	char pad_520[0x10]; // 0x520(0x10)

	void ZoomOut(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut // (Final|Native|Public|BlueprintCallable) // @ game+0xa62e60
	void ZoomIn(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn // (Final|Native|Public|BlueprintCallable) // @ game+0xa62e40
	void ValidateComponents(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents // (Native|Public|BlueprintCallable) // @ game+0xa62db0
	void SetCustomCameraMode(struct UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode // (Native|Public|BlueprintCallable) // @ game+0xa62370
	void SetCameraMode(struct FGameplayTag CameraModeTag, bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode // (Native|Public|BlueprintCallable) // @ game+0xa622a0
	void SetCameraDistance(float NewDistance, bool bInterpolate); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xa620e0
	void ResetCustomCameraMode(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode // (Final|Native|Public|BlueprintCallable) // @ game+0xa61db0
	void RemoveCameraMode(struct FGameplayTag CameraModeName); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode // (Final|Native|Public|BlueprintCallable) // @ game+0xa61c00
	void OnCameraModeChangedDelegate__DelegateSignature(); // DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
	bool IsSetCustomCameraMode(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa619a0
	bool HasCameraMode(struct FGameplayTag CameraModeName); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa617b0
	struct FGameplayTag GetInitialCameraModeTag(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xa61400
	struct FGameplayTag GetDesiredCameraModeTag(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xa613c0
	struct FGameplayTag GetCurrentCameraModeTag(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa612d0
	struct UATPCCameraModeDataAsset* GetCurrentCameraMode(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa612a0
	struct UATPCCameraShakesObject* GetCameraShakesObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61250
	struct FRotator GetCameraRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa611d0
	struct FGameplayTag GetCameraModeTagFromOverlapCameraVolume(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61190
	struct UATPCCameraModeDataAsset* GetCameraMode(struct FGameplayTag CameraModeName); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa610f0
	struct UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa610d0
	struct UATPCCameraLocationObject* GetCameraLocationObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa610b0
	struct FVector GetCameraLocation(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61030
	struct UATPCCameraFOVObject* GetCameraFOVObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60fd0
	struct UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61010
	struct UATPCCameraFadingObject* GetCameraFadingObject(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60ff0
	float GetCameraDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60f70
	struct AATPCCameraVolume* FindOverlapCameraVolume(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60f00
	void ClearAllCameraModes(); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes // (Final|Native|Public|BlueprintCallable) // @ game+0xa60ea0
	bool CanSetCameraMode(struct FGameplayTag CameraModeTag); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xa60e00
	void AddCameraMode(struct FGameplayTag CameraModeName, struct UATPCCameraModeDataAsset* CameraMode); // Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode // (Final|Native|Public|BlueprintCallable) // @ game+0xa609e0
};

// Class AdvancedThirdPersonCamera.ATPCCameraFadingObject
// Size: 0xe0 (Inherited: 0x30)
struct UATPCCameraFadingObject : UATPCCameraBaseObject {
	char pad_30[0xb0]; // 0x30(0xb0)

	void RemoveManualFadeActor(struct AActor* Actor); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa61d20
	void RemoveIgnoredActor(struct AActor* Actor); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa61c90
	void ClearManualFadeActors(); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors // (Final|Native|Public|BlueprintCallable) // @ game+0xa60ee0
	void ClearIgnoredActors(); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors // (Final|Native|Public|BlueprintCallable) // @ game+0xa60ec0
	void AddManualFadeActor(struct AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa60b40
	void AddIgnoredActor(struct AActor* Actor); // Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa60ab0
};

// Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
// Size: 0x60 (Inherited: 0x30)
struct UATPCCameraFollowTerrainObject : UATPCCameraBaseObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class AdvancedThirdPersonCamera.ATPCCameraFOVObject
// Size: 0x38 (Inherited: 0x30)
struct UATPCCameraFOVObject : UATPCCameraBaseObject {
	char pad_30[0x8]; // 0x30(0x08)

	void SetOverrideFOV(float NewFOV, bool bWithInterp); // Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.SetOverrideFOV // (Final|Native|Public|BlueprintCallable) // @ game+0xa62910
	void ResetOverrideFOV(bool bWithInterp); // Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.ResetOverrideFOV // (Final|Native|Public|BlueprintCallable) // @ game+0xa62050
	bool IsOverrideFOV(); // Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.IsOverrideFOV // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61970
	float GetOverrideFOV(); // Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetOverrideFOV // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa614f0
	float GetCurrentFOV(); // Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61310
};

// Class AdvancedThirdPersonCamera.ATPCCameraLocationObject
// Size: 0x210 (Inherited: 0x30)
struct UATPCCameraLocationObject : UATPCCameraBaseObject {
	char pad_30[0x1e0]; // 0x30(0x1e0)

	void SetViewRotation(struct FRotator Rotation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa62c90
	void SetOverrideOffsetCameraRotationSettings(struct FATPCRotationOffsetSettings Settings, bool bWithInterp); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideOffsetCameraRotationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa629f0
	void SetOverrideCameraRotation(struct FATPCOverrideCameraRotation NewOverrideRotation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa62850
	void SetOverrideCameraLocation(struct FVector NewOverrideLocation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa627c0
	void SetOverrideCameraDistance(float NewOverrideDistance, bool bWithInterpolation, float InterpSpeed); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xa626a0
	void SetCustomTargetOffset(struct FVector NewTargetOffset, bool bWithInterpolation, float InterpSpeed); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomTargetOffset // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa62570
	void SetCustomSocketOffset(struct FVector NewSocketOffset, bool bWithInterpolation, float InterpSpeed); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomSocketOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa62440
	void SetCameraDistance(float NewDist, bool bInterpolate); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xa621c0
	void ResetOverrideCameraRotationSettings(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotationSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xa62030
	void ResetOverrideCameraRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation // (Final|Native|Public|BlueprintCallable) // @ game+0xa62010
	void ResetOverrideCameraLocation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraLocation // (Final|Native|Public|BlueprintCallable) // @ game+0xa61ff0
	void ResetOverrideCameraDistance(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xa61f60
	void ResetCustomTargetOffset(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomTargetOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xa61ed0
	void ResetCustomSocketOffset(bool bWithInterpolation); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomSocketOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xa61e40
	bool IsOverrideCameraRotationSettings(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotationSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61940
	bool IsOverrideCameraRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61910
	bool IsOverrideCameraLocation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa618e0
	bool IsOverrideCameraDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa618b0
	bool HasCustomTargetOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomTargetOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61880
	bool HasCustomSocketOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomSocketOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61850
	struct FRotator GetViewRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61770
	struct FVector GetTargetOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61730
	struct FVector GetSocketOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61680
	float GetRealCameraDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61650
	struct FATPCRotationOffsetSettings GetOverrideOffsetCameraRotationSettings(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideOffsetCameraRotationSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61520
	struct FATPCOverrideCameraRotation GetOverrideCameraRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa614b0
	struct FVector GetOverrideCameraLocation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61470
	float GetOverrideCameraDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61440
	struct FVector GetCustomTargetOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomTargetOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61380
	struct FVector GetCustomSocketOffset(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomSocketOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61340
	float GetCameraTargetDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61270
	struct FRotator GetCameraRotation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61210
	struct FVector GetCameraLocation(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa61070
	float GetCameraDistance(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60fa0
	struct FVector GetAllSocketOffsets(); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xa60f30
	void AttachCameraToComponent(struct USceneComponent* ParentComponent, struct FVector RelativeLocation, struct FName SocketName, bool bWithInterp, float InterpSpeed); // Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa60c60
};

// Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
// Size: 0x70 (Inherited: 0x30)
struct UATPCCameraLockOnTargetObject : UATPCCameraBaseObject {
	struct FMulticastInlineDelegate OnTargetChangeDelegate; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct AATPCArrowDebugActor* TargetDebugActor; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)

	bool SetTargetActorWithResetTimer(struct AActor* NewTargetActor, float TargetResetTime); // Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActorWithResetTimer // (Native|Public|BlueprintCallable) // @ game+0xa62bb0
	bool SetTargetActor(struct AActor* NewTargetActor); // Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor // (Native|Public|BlueprintCallable) // @ game+0xa62b10
	void OnTargetChangeDelegate__DelegateSignature(struct AActor* NewTarget); // DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
	struct AActor* GetTargetActor(); // Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa616c0
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
// Size: 0x260 (Inherited: 0x30)
struct UATPCCameraModeDataAsset : UDataAsset {
	struct FGameplayTag CameraModeTag; // 0x30(0x08)
	struct FATPCCameraMode CameraModeSettings; // 0x38(0x218)
	struct TArray<struct UATPCCameraModeScript*> CameraModeScripts; // 0x250(0x10)
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript
// Size: 0x40 (Inherited: 0x28)
struct UATPCCameraModeScript : UObject {
	struct UATPCCameraComponent* OwningCamera; // 0x28(0x08)
	bool bEnableTick; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class EATPCCameraModeScriptTickGroup TickGroup; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)

	void K2_Tick(struct UATPCCameraComponent* Camera, float DeltaSeconds); // Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnExitCameraMode(struct UATPCCameraComponent* Camera); // Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnEnterCameraMode(struct UATPCCameraComponent* Camera); // Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
// Size: 0x50 (Inherited: 0x40)
struct UATPCCameraModeScript_ChangeMovementSpeed : UATPCCameraModeScript {
	float NewMaxMovementSpeed; // 0x40(0x04)
	bool bRestoreOldMovementSpeedOnExitCameraMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float OldMaxMovementSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
// Size: 0x48 (Inherited: 0x40)
struct UATPCCameraModeScript_PawnUseControllerRotation : UATPCCameraModeScript {
	bool OrientRotationToMovement; // 0x40(0x01)
	bool UseControllerDesiredRotation; // 0x41(0x01)
	bool bRestoreOldValuesOnExitCameraMode; // 0x42(0x01)
	bool OldOrientRotationToMovement; // 0x43(0x01)
	bool OldUseControllerDesiredRotation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
// Size: 0x48 (Inherited: 0x40)
struct UATPCCameraModeScript_RotateActorToTarget : UATPCCameraModeScript {
	float RotationSpeed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AdvancedThirdPersonCamera.ATPCCameraShakesObject
// Size: 0x40 (Inherited: 0x30)
struct UATPCCameraShakesObject : UATPCCameraBaseObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class AdvancedThirdPersonCamera.ATPCCameraVolume
// Size: 0x278 (Inherited: 0x258)
struct AATPCCameraVolume : AVolume {
	struct FGameplayTag CameraModeTag; // 0x258(0x08)
	bool bChangeCameraModeWithInterp; // 0x260(0x01)
	bool bCheckFilterActorClassWithCamera; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)
	struct TArray<struct AActor*> FilterActorClassesWithCamera; // 0x268(0x10)

	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap // (Final|Native|Protected) // @ game+0xa61aa0
	void OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap // (Final|Native|Protected) // @ game+0xa619d0
};

// Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
// Size: 0x200 (Inherited: 0x200)
struct UATPCLockOnTargetLocationComponent : USceneComponent {

	struct FVector GetTargetLocation(); // Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xa616f0
};

