// Enum GameAnalytics.EGAAdError
enum class EGAAdError : uint8 {
	undefined,
	unknown,
	offline,
	nofill,
	internalerror,
	invalidrequest,
	unabletoprecache,
	EGAAdError_MAX,
};

// Enum GameAnalytics.EGAAdType
enum class EGAAdType : uint8 {
	undefined,
	video,
	rewardedvideo,
	playable,
	interstitial,
	offerwall,
	banner,
	EGAAdType_MAX,
};

// Enum GameAnalytics.EGAAdAction
enum class EGAAdAction : uint8 {
	undefined,
	clicked,
	show,
	failedshow,
	rewardreceived,
	request,
	loaded,
	EGAAdAction_MAX,
};

// Enum GameAnalytics.EGAErrorSeverity
enum class EGAErrorSeverity : uint8 {
	undefined,
	debug,
	info,
	warning,
	error,
	critical,
	EGAErrorSeverity_MAX,
};

// Enum GameAnalytics.EGAProgressionStatus
enum class EGAProgressionStatus : uint8 {
	undefined,
	start,
	complete,
	fail,
	EGAProgressionStatus_MAX,
};

// Enum GameAnalytics.EGAResourceFlowType
enum class EGAResourceFlowType : uint8 {
	undefined,
	source,
	sink,
	EGAResourceFlowType_MAX,
};

