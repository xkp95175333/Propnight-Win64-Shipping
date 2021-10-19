// BlueprintGeneratedClass ChaseShake.ChaseShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UChaseShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function ChaseShake.ChaseShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ChaseShake(int32_t EntryPoint); // Function ChaseShake.ChaseShake_C.ExecuteUbergraph_ChaseShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

