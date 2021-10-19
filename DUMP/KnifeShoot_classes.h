// BlueprintGeneratedClass KnifeShoot.KnifeShoot_C
// Size: 0x128 (Inherited: 0xb0)
struct UKnifeShoot_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool KnifeIN?; // 0xb8(0x01)
	bool CD?; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct AKillerMasterBP_C* KillerRef; // 0xc0(0x08)
	bool BeginPlay; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct AKnife_C* knife; // 0xd0(0x08)
	struct FRotator targetRotat; // 0xd8(0x0c)
	float InterpSpeed; // 0xe4(0x04)
	bool FIRE; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float DeltaSec; // 0xec(0x04)
	bool AimRDY; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector NewVar_1; // 0xf4(0x0c)
	struct FVector ForwardV3; // 0x100(0x0c)
	struct FVector NewVar_2; // 0x10c(0x0c)
	struct FRotator RotationKnife; // 0x118(0x0c)
	float TimeRotate; // 0x124(0x04)

	void ReceiveBeginPlay(); // Function KnifeShoot.KnifeShoot_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function KnifeShoot.KnifeShoot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Shoot Noj(struct AKillerMasterBP_C* NewParam, struct AKillerMasterBP_C* NewParam2, struct FVector ForwardVector); // Function KnifeShoot.KnifeShoot_C.Shoot Noj // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Local(); // Function KnifeShoot.KnifeShoot_C.Local // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void serv(); // Function KnifeShoot.KnifeShoot_C.serv // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotationServ(struct FRotator Rotator); // Function KnifeShoot.KnifeShoot_C.RotationServ // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServBOOL(); // Function KnifeShoot.KnifeShoot_C.ServBOOL // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MultiBool(); // Function KnifeShoot.KnifeShoot_C.MultiBool // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyKnife(); // Function KnifeShoot.KnifeShoot_C.DestroyKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnKnife(); // Function KnifeShoot.KnifeShoot_C.OnKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ThirdPersonCameraKnife(); // Function KnifeShoot.KnifeShoot_C.ThirdPersonCameraKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FirstPersonCameraKnife(); // Function KnifeShoot.KnifeShoot_C.FirstPersonCameraKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnKnife(); // Function KnifeShoot.KnifeShoot_C.SpawnKnife // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeDropSurv(); // Function KnifeShoot.KnifeShoot_C.KnifeDropSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnKnifeAfterDropSurv(); // Function KnifeShoot.KnifeShoot_C.SpawnKnifeAfterDropSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KnifeSurvAway(); // Function KnifeShoot.KnifeShoot_C.KnifeSurvAway // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnKnifeSurvRunAway(); // Function KnifeShoot.KnifeShoot_C.SpawnKnifeSurvRunAway // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CameraShake(); // Function KnifeShoot.KnifeShoot_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KnifeShoot(int32_t EntryPoint); // Function KnifeShoot.KnifeShoot_C.ExecuteUbergraph_KnifeShoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

