// ScriptStruct Propnight.ServerInfo
// Size: 0xa0 (Inherited: 0x00)
struct FServerInfo {
	struct FString Address; // 0x00(0x10)
	struct FString Map; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	struct FString Status; // 0x30(0x10)
	struct FString Port; // 0x40(0x10)
	struct FString Region; // 0x50(0x10)
	struct FString Seed; // 0x60(0x10)
	struct FString Name; // 0x70(0x10)
	struct FString ID; // 0x80(0x10)
	int32_t Players; // 0x90(0x04)
	int32_t Capacity; // 0x94(0x04)
	int32_t Build; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Propnight.SteamFriend
// Size: 0x28 (Inherited: 0x00)
struct FSteamFriend {
	struct FString ID; // 0x00(0x10)
	struct FString Nickname; // 0x10(0x10)
	bool Online; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};
