// BlueprintGeneratedClass KillerWalkGrabbedShake.KillerWalkGrabbedShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UKillerWalkGrabbedShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function KillerWalkGrabbedShake.KillerWalkGrabbedShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerWalkGrabbedShake(int32_t EntryPoint); // Function KillerWalkGrabbedShake.KillerWalkGrabbedShake_C.ExecuteUbergraph_KillerWalkGrabbedShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

