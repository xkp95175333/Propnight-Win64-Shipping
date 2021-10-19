// BlueprintGeneratedClass KillerWalkShake.KillerWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UKillerWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function KillerWalkShake.KillerWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerWalkShake(int32_t EntryPoint); // Function KillerWalkShake.KillerWalkShake_C.ExecuteUbergraph_KillerWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

