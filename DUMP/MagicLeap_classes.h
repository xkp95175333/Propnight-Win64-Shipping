// Class MagicLeap.InAppPurchaseComponent
// Size: 0x128 (Inherited: 0xb0)
struct UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf0(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)

	bool TryPurchaseItemAsync(struct FPurchaseItemDetails ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xedcb70
	bool TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync // (Final|Native|Public|BlueprintCallable) // @ game+0xedcad0
	bool TryGetItemsDetailsAsync(struct TArray<struct FString> ItemIds); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xedc9f0
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x132e1a0
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation> PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x132e1a0
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails> ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x132e1a0
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x132e1a0
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size: 0x190 (Inherited: 0x140)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140(0x10)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160(0x10)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x170(0x10)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x180(0x10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size: 0x1d0 (Inherited: 0x140)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x140(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170(0x10)
	char pad_180[0x50]; // 0x180(0x50)
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStabilizationDepthActor(struct AActor* InStabilizationDepthActor, bool bSetFocusActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xedc930
	void SetFocusActor(struct AActor* InFocusActor, bool bSetStabilizationActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xedc870
	void SetBaseRotation(struct FRotator InBaseRotation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xedc7f0
	void SetBasePosition(struct FVector InBasePosition); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xedc7f0
	void SetBaseOrientation(struct FQuat InBaseOrientation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xedc7f0
	bool SetAppReady(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xedc7c0
	bool IsRunningOnMagicLeapHMD(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc150
	int32_t GetPlatformAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc0c0
	int32_t GetMLSDKVersionRevision(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc0c0
	int32_t GetMLSDKVersionMinor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc0c0
	int32_t GetMLSDKVersionMajor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc0c0
	struct FString GetMLSDKVersion(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc040
	int32_t GetMinimumAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xedc0f0
	bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState State); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xedbfb0
	bool GetHeadTrackingMapEvents(struct TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xedbe70
	bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xedbdc0
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size: 0x290 (Inherited: 0x200)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x200(0x10)
	bool ScanWorld; // 0x210(0x01)
	enum class EMagicLeapMeshType MeshType; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct UBoxComponent* BoundingVolume; // 0x218(0x08)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float PerimeterOfGapsToFill; // 0x224(0x04)
	bool Planarize; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float DisconnectedSectionArea; // 0x22c(0x04)
	bool RequestNormals; // 0x230(0x01)
	bool RequestVertexConfidence; // 0x231(0x01)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
	struct TArray<struct FColor> BlockVertexColors; // 0x238(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x248(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x258(0x10)
	bool RemoveOverlappingTriangles; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UMRMeshComponent* MRMesh; // 0x270(0x08)
	int32_t BricksPerFrame; // 0x278(0x04)
	char pad_27C[0x14]; // 0x27c(0x14)

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xedc6a0
	void OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x132e1a0
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates // (Final|Native|Public|BlueprintCallable) // @ game+0xedc120
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xedbd30
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0xedbd10
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xedbc80
	void ConnectBlockSelector(struct TScriptInterface<None> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0xedbbe0
};

// Class MagicLeap.MagicLeapSettings
// Size: 0x30 (Inherited: 0x28)
struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28(0x01)
	bool bUseVulkanForZI; // 0x29(0x01)
	bool bUseMLAudioForZI; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xedc580
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size: 0x118 (Inherited: 0xb0)
struct UMagicLeapRaycastComponent : UActorComponent {
	char pad_B0[0x68]; // 0xb0(0x68)

	bool RequestRaycast(struct FMagicLeapRaycastQueryParams RequestParams, struct FDelegate ResultDelegate); // Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xedc430
	void RaycastResultDelegate__DelegateSignature(struct FMagicLeapRaycastHitResult HitResult); // DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature // (Public|Delegate) // @ game+0x132e1a0
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(struct FVector Position, struct FVector Direction, struct FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xedc180
};

