// BlueprintGeneratedClass JumpShakeForProps.JumpShakeForProps_C
// Size: 0x1d0 (Inherited: 0x180)
struct UJumpShakeForProps_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)
	struct FVOscillator ShakeLoc; // 0x1ac(0x24)

	void ReceivePlayShake(float Scale); // Function JumpShakeForProps.JumpShakeForProps_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_JumpShakeForProps(int32_t EntryPoint); // Function JumpShakeForProps.JumpShakeForProps_C.ExecuteUbergraph_JumpShakeForProps // (Final|UbergraphFunction) // @ game+0x132e1a0
};

