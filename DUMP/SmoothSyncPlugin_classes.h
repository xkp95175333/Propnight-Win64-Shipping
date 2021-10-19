// Class SmoothSyncPlugin.SmoothSync
// Size: 0x370 (Inherited: 0xb0)
struct USmoothSync : UActorComponent {
	char pad_B0[0x4c]; // 0xb0(0x4c)
	float interpolationBackTime; // 0xfc(0x04)
	enum class ExtrapolationMode ExtrapolationMode; // 0x100(0x01)
	bool useExtrapolationTimeLimit; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	float extrapolationTimeLimit; // 0x104(0x04)
	bool useExtrapolationDistanceLimit; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float extrapolationDistanceLimit; // 0x10c(0x04)
	float sendPositionThreshold; // 0x110(0x04)
	float sendRotationThreshold; // 0x114(0x04)
	float sendScaleThreshold; // 0x118(0x04)
	float sendVelocityThreshold; // 0x11c(0x04)
	float sendAngularVelocityThreshold; // 0x120(0x04)
	float receivedPositionThreshold; // 0x124(0x04)
	float receivedRotationThreshold; // 0x128(0x04)
	float positionSnapThreshold; // 0x12c(0x04)
	float rotationSnapThreshold; // 0x130(0x04)
	float scaleSnapThreshold; // 0x134(0x04)
	float timeSmoothing; // 0x138(0x04)
	float positionLerpSpeed; // 0x13c(0x04)
	float rotationLerpSpeed; // 0x140(0x04)
	float scaleLerpSpeed; // 0x144(0x04)
	enum class SyncMode syncPosition; // 0x148(0x01)
	enum class SyncMode syncRotation; // 0x149(0x01)
	enum class SyncMode syncScale; // 0x14a(0x01)
	enum class SyncMode syncVelocity; // 0x14b(0x01)
	enum class SyncMode syncAngularVelocity; // 0x14c(0x01)
	bool syncMovementMode; // 0x14d(0x01)
	bool isPositionCompressed; // 0x14e(0x01)
	bool isRotationCompressed; // 0x14f(0x01)
	bool isScaleCompressed; // 0x150(0x01)
	bool isVelocityCompressed; // 0x151(0x01)
	bool isAngularVelocityCompressed; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	float sendRate; // 0x154(0x04)
	bool isUsingOriginRebasing; // 0x158(0x01)
	bool alwaysSendOrigin; // 0x159(0x01)
	char pad_15A[0x9e]; // 0x15a(0x9e)
	struct USceneComponent* realComponentToSync; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)
	float InterpolationTime; // 0x218(0x04)
	char pad_21C[0x134]; // 0x21c(0x134)
	float atRestPositionThreshold; // 0x350(0x04)
	float atRestRotationThreshold; // 0x354(0x04)
	char pad_358[0x18]; // 0x358(0x18)

	void teleport(); // Function SmoothSyncPlugin.SmoothSync.teleport // (Final|Native|Public|BlueprintCallable) // @ game+0x7aac90
	void SmoothSyncTeleportServerToClients(struct FVector Position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate) // @ game+0x7aa940
	void SmoothSyncTeleportClientToServer(struct FVector Position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x7aa750
	void SmoothSyncEnableServerToClients(bool enable); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients // (Net|Native|Event|NetMulticast|Public|NetValidate) // @ game+0x7aa690
	void SmoothSyncEnableClientToServer(bool enable); // Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x7aa5d0
	void setSceneComponentToSync(struct USceneComponent* theComponent); // Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync // (Final|Native|Public|BlueprintCallable) // @ game+0x7aac00
	void ServerSendsTransformToEveryone(struct TArray<char> Value); // Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone // (Net|Native|Event|NetMulticast|Public|NetValidate) // @ game+0x7aa510
	void PropSync(); // Function SmoothSyncPlugin.SmoothSync.PropSync // (Final|Native|Public|BlueprintCallable) // @ game+0x7aa4f0
	void PrintState(); // Function SmoothSyncPlugin.SmoothSync.PrintState // (Final|Native|Public|BlueprintCallable) // @ game+0x7aa4d0
	void forceStateSendNextFrame(); // Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x7aabe0
	void enableSmoothSync(bool enable); // Function SmoothSyncPlugin.SmoothSync.enableSmoothSync // (Final|Native|Public|BlueprintCallable) // @ game+0x7aab50
	void ClientSendsTransformToServer(struct TArray<char> Value); // Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x7aa410
	void clearBuffer(); // Function SmoothSyncPlugin.SmoothSync.clearBuffer // (Final|Native|Public|BlueprintCallable) // @ game+0x7aab30
	void AcunaMatata(); // Function SmoothSyncPlugin.SmoothSync.AcunaMatata // (Final|Native|Public|BlueprintCallable) // @ game+0x7aa3f0
};

