// BlueprintGeneratedClass FMODEventLooper.FMODEventLooper_C
// Size: 0x24c (Inherited: 0x220)
struct AFMODEventLooper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x228(0x08)
	float Delay; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UFMODEvent* Event; // 0x238(0x08)
	bool WithDelay; // 0x240(0x01)
	bool OverrideAttenuation; // 0x241(0x01)
	char pad_242[0x2]; // 0x242(0x02)
	float MinDistance; // 0x244(0x04)
	float MaxDistance; // 0x248(0x04)

	void UserConstructionScript(); // Function FMODEventLooper.FMODEventLooper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function FMODEventLooper.FMODEventLooper_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function FMODEventLooper.FMODEventLooper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_FMODEventLooper(int32_t EntryPoint); // Function FMODEventLooper.FMODEventLooper_C.ExecuteUbergraph_FMODEventLooper // (Final|UbergraphFunction) // @ game+0x132e1a0
};

