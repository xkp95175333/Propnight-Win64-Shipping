// BlueprintGeneratedClass Shoot.Shoot_C
// Size: 0xf0 (Inherited: 0xb0)
struct UShoot_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AKillerMasterBP_C* Killer; // 0xb8(0x08)
	bool CD; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t Ammo; // 0xc4(0x04)
	bool NewVar_1; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float DeltaSec; // 0xcc(0x04)
	bool FIRE; // 0xd0(0x01)
	bool AimRDY; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float timeFire; // 0xd4(0x04)
	struct FRotator targetRotat; // 0xd8(0x0c)
	float InterpSpeed; // 0xe4(0x04)
	int32_t Damage; // 0xe8(0x04)
	float Radius; // 0xec(0x04)

	void OnRep_Ammo(); // Function Shoot.Shoot_C.OnRep_Ammo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AmmoCheck(); // Function Shoot.Shoot_C.AmmoCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateServ(struct FRotator NewParam, bool NewParam2); // Function Shoot.Shoot_C.RotateServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateBulletServ(struct FVector NewParam); // Function Shoot.Shoot_C.CreateBulletServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void On Invoke(); // Function Shoot.Shoot_C.On Invoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateBulletMulti(struct FVector NewParam); // Function Shoot.Shoot_C.CreateBulletMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Shoot.Shoot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function Shoot.Shoot_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CameraShake(); // Function Shoot.Shoot_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Shoot(int32_t EntryPoint); // Function Shoot.Shoot_C.ExecuteUbergraph_Shoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

