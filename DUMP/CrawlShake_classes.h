// BlueprintGeneratedClass CrawlShake.CrawlShake_C
// Size: 0x1ac (Inherited: 0x180)
struct UCrawlShake_C : UMatineeCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FROscillator ShakeRot; // 0x188(0x24)

	void ReceivePlayShake(float Scale); // Function CrawlShake.CrawlShake_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_CrawlShake(int32_t EntryPoint); // Function CrawlShake.CrawlShake_C.ExecuteUbergraph_CrawlShake // (Final|UbergraphFunction) // @ game+0x132e1a0
};

