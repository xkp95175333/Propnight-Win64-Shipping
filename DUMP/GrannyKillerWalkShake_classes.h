// BlueprintGeneratedClass GrannyKillerWalkShake.GrannyKillerWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UGrannyKillerWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function GrannyKillerWalkShake.GrannyKillerWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GrannyKillerWalkShake(int32_t EntryPoint); // Function GrannyKillerWalkShake.GrannyKillerWalkShake_C.ExecuteUbergraph_GrannyKillerWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

