// BlueprintGeneratedClass BansheeMaxWalkShake.BansheeMaxWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UBansheeMaxWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function BansheeMaxWalkShake.BansheeMaxWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BansheeMaxWalkShake(int32_t EntryPoint); // Function BansheeMaxWalkShake.BansheeMaxWalkShake_C.ExecuteUbergraph_BansheeMaxWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

