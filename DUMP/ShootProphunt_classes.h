// BlueprintGeneratedClass ShootProphunt.ShootProphunt_C
// Size: 0x112 (Inherited: 0xb0)
struct UShootProphunt_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AKillerMasterBP_C* Killer; // 0xb8(0x08)
	bool CD; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t Ammo; // 0xc4(0x04)
	bool FIRE; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FRotator targetRotat; // 0xcc(0x0c)
	float InterpSpeed; // 0xd8(0x04)
	float ReloadDelay; // 0xdc(0x04)
	int32_t FullAMMO; // 0xe0(0x04)
	bool AimRDY; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float DeltaSec; // 0xe8(0x04)
	float timeFire; // 0xec(0x04)
	int32_t Damage; // 0xf0(0x04)
	float Radius; // 0xf4(0x04)
	float ReloadTimeA; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString SpellName; // 0x100(0x10)
	bool Shoot?; // 0x110(0x01)
	bool ShootCD?; // 0x111(0x01)

	void Invoke(); // Function ShootProphunt.ShootProphunt_C.Invoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReloadAmmo(float Time); // Function ShootProphunt.ShootProphunt_C.ReloadAmmo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateServ(struct FRotator NewParam); // Function ShootProphunt.ShootProphunt_C.RotateServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateBulletServ(struct FVector NewParam); // Function ShootProphunt.ShootProphunt_C.CreateBulletServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateBulletMulti(struct FVector NewParam); // Function ShootProphunt.ShootProphunt_C.CreateBulletMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function ShootProphunt.ShootProphunt_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CDWBP(); // Function ShootProphunt.ShootProphunt_C.CDWBP // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function ShootProphunt.ShootProphunt_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void UnInvoke(); // Function ShootProphunt.ShootProphunt_C.UnInvoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Shoot(); // Function ShootProphunt.ShootProphunt_C.Shoot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ShootProphunt(int32_t EntryPoint); // Function ShootProphunt.ShootProphunt_C.ExecuteUbergraph_ShootProphunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

