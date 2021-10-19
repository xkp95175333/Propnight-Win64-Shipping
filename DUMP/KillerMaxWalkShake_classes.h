// BlueprintGeneratedClass KillerMaxWalkShake.KillerMaxWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UKillerMaxWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function KillerMaxWalkShake.KillerMaxWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerMaxWalkShake(int32_t EntryPoint); // Function KillerMaxWalkShake.KillerMaxWalkShake_C.ExecuteUbergraph_KillerMaxWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

