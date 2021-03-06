// ScriptStruct PingQoS.PingQoSInfo
// Size: 0x40 (Inherited: 0x00)
struct FPingQoSInfo {
	struct FString URL; // 0x00(0x10)
	struct FString IP; // 0x10(0x10)
	bool bUseIP; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t Port; // 0x24(0x04)
	struct FString Region; // 0x28(0x10)
	int32_t Ping; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

