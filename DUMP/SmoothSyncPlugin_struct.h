// Enum SmoothSyncPlugin.RestState
enum class RestState : uint8 {
	AT_REST,
	JUST_STARTED_MOVING,
	MOVING,
	RestState_MAX,
};

// Enum SmoothSyncPlugin.ExtrapolationMode
enum class ExtrapolationMode : uint8 {
	UNLIMITED,
	LIMITED,
	NONE,
	ExtrapolationMode_MAX,
};

// Enum SmoothSyncPlugin.SyncMode
enum class SyncMode : uint8 {
	XYZ,
	XY,
	XZ,
	YZ,
	X,
	Y,
	Z,
	NONE,
	SyncMode_MAX,
};

