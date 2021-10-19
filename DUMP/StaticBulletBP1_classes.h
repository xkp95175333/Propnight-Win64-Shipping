// BlueprintGeneratedClass StaticBulletBP1.StaticBulletBP1_C
// Size: 0x248 (Inherited: 0x220)
struct AStaticBulletBP1_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Cube; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	bool Hited?; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float Time; // 0x23c(0x04)
	struct AKillerMasterBP_C* KillerRef; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function StaticBulletBP1.StaticBulletBP1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Boom(float Time, struct AKillerMasterBP_C* Killer); // Function StaticBulletBP1.StaticBulletBP1_C.Boom // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function StaticBulletBP1.StaticBulletBP1_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawServ(); // Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereDrawMulti(); // Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_StaticBulletBP1(int32_t EntryPoint); // Function StaticBulletBP1.StaticBulletBP1_C.ExecuteUbergraph_StaticBulletBP1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

