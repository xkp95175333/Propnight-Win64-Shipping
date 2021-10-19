// BlueprintGeneratedClass BansheeScreamShake.BansheeScreamShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UBansheeScreamShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function BansheeScreamShake.BansheeScreamShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BansheeScreamShake(int32_t EntryPoint); // Function BansheeScreamShake.BansheeScreamShake_C.ExecuteUbergraph_BansheeScreamShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

