// BlueprintGeneratedClass BansheeWalkShake.BansheeWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UBansheeWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function BansheeWalkShake.BansheeWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BansheeWalkShake(int32_t EntryPoint); // Function BansheeWalkShake.BansheeWalkShake_C.ExecuteUbergraph_BansheeWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

