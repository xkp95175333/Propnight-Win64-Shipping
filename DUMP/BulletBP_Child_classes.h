// BlueprintGeneratedClass BulletBP_Child.BulletBP_Child_C
// Size: 0x2e8 (Inherited: 0x2d4)
struct ABulletBP_Child_C : ABulletBP_C {
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e0(0x08)

	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult hit); // Function BulletBP_Child.BulletBP_Child_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BulletBP_Child(int32_t EntryPoint); // Function BulletBP_Child.BulletBP_Child_C.ExecuteUbergraph_BulletBP_Child // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

