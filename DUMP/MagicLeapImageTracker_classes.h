// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x270 (Inherited: 0x200)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	struct UTexture2D* TargetImageTexture; // 0x1f8(0x08)
	struct FString Name; // 0x200(0x10)
	float LongerDimension; // 0x210(0x04)
	bool bIsStationary; // 0x214(0x01)
	bool bUseUnreliablePose; // 0x215(0x01)
	enum class EMagicLeapImageTargetOrientation AxisOrientation; // 0x216(0x01)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x218(0x10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x228(0x10)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x238(0x10)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x248(0x10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x258(0x10)
	char pad_26F[0x1]; // 0x26f(0x01)

	bool SetTargetAsync(struct UTexture2D* ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0xefc010
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0xefbf60
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xefbf90
	bool IsImageTrackingEnabled(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xefbf30
	int32_t GetMaxSimultaneousTargets(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xefbf00
	void EnableImageTracking(bool bEnable); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xefbe80
};

