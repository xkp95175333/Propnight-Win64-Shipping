// Class PingQoS.PingQoSSubsystem
// Size: 0x60 (Inherited: 0x30)
struct UPingQoSSubsystem : UEngineSubsystem {
	struct FMulticastInlineDelegate OnPingCompleted; // 0x30(0x10)
	char pad_40[0x20]; // 0x40(0x20)

	bool Update(); // Function PingQoS.PingQoSSubsystem.Update // (Native|Public|BlueprintCallable) // @ game+0xb52180
	void Init(struct TArray<struct FPingQoSInfo> SetInfo); // Function PingQoS.PingQoSSubsystem.Init // (Native|Public|BlueprintCallable) // @ game+0xb51f40
};

