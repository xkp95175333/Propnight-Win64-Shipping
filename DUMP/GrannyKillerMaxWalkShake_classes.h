// BlueprintGeneratedClass GrannyKillerMaxWalkShake.GrannyKillerMaxWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UGrannyKillerMaxWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function GrannyKillerMaxWalkShake.GrannyKillerMaxWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GrannyKillerMaxWalkShake(int32_t EntryPoint); // Function GrannyKillerMaxWalkShake.GrannyKillerMaxWalkShake_C.ExecuteUbergraph_GrannyKillerMaxWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

