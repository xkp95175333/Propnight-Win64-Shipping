// BlueprintGeneratedClass MaxWalkShake.MaxWalkShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UMaxWalkShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function MaxWalkShake.MaxWalkShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MaxWalkShake(int32_t EntryPoint); // Function MaxWalkShake.MaxWalkShake_C.ExecuteUbergraph_MaxWalkShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

