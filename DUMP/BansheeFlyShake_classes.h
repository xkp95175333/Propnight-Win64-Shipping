// BlueprintGeneratedClass BansheeFlyShake.BansheeFlyShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UBansheeFlyShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function BansheeFlyShake.BansheeFlyShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BansheeFlyShake(int32_t EntryPoint); // Function BansheeFlyShake.BansheeFlyShake_C.ExecuteUbergraph_BansheeFlyShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

