// Enum MagicLeapImageTracker.EMagicLeapImageTargetOrientation
enum class EMagicLeapImageTargetOrientation : uint8 {
	ForwardAxisAsNormal,
	UpAxisAsNormal,
	EMagicLeapImageTargetOrientation_MAX,
};

// Enum MagicLeapImageTracker.EMagicLeapImageTargetStatus
enum class EMagicLeapImageTargetStatus : uint8 {
	Tracked,
	Unreliable,
	NotTracked,
	EMagicLeapImageTargetStatus_MAX,
};

// ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetState
// Size: 0x1c (Inherited: 0x00)
struct FMagicLeapImageTargetState {
	enum class EMagicLeapImageTargetStatus TrackingStatus; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetSettings
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapImageTargetSettings {
	struct UTexture2D* ImageTexture; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	float LongerDimension; // 0x18(0x04)
	bool bIsStationary; // 0x1c(0x01)
	bool bIsEnabled; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

