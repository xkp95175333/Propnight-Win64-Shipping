// BlueprintGeneratedClass WalkShake.WalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function WalkShake.WalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WalkShake(int32_t EntryPoint); // Function WalkShake.WalkShake_C.ExecuteUbergraph_WalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

