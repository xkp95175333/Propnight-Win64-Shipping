// BlueprintGeneratedClass Astral.Astral_C
// Size: 0xc31 (Inherited: 0xe8)
struct UAstral_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float Timer; // 0xf0(0x04)
	bool Casted?; // 0xf4(0x01)
	char pad_F5[0xb]; // 0xf5(0x0b)
	struct FPostProcessSettings postProcessMonochrome; // 0x100(0x550)
	struct FPostProcessSettings postProcessNormal; // 0x650(0x550)
	float TransitionTime; // 0xba0(0x04)
	float TurnOnDuration; // 0xba4(0x04)
	float TurnOffDuration; // 0xba8(0x04)
	float TurnOffAttackDuration; // 0xbac(0x04)
	float ErodeSubtractDef; // 0xbb0(0x04)
	char pad_BB4[0x4]; // 0xbb4(0x04)
	struct UMaterialInstanceDynamic* KillerDynMat1; // 0xbb8(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat2; // 0xbc0(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat3; // 0xbc8(0x08)
	float Float1; // 0xbd0(0x04)
	bool TransitionOn; // 0xbd4(0x01)
	bool TransitionOff; // 0xbd5(0x01)
	char pad_BD6[0x2]; // 0xbd6(0x02)
	struct UMaterialInstanceDynamic* KillerDynMatInvis; // 0xbd8(0x08)
	struct UMaterialInstanceDynamic* KillerDynMatInvisFPP; // 0xbe0(0x08)
	float InvisRefractionTPP; // 0xbe8(0x04)
	float InvisRefractionFPP; // 0xbec(0x04)
	float InvisRefractionZero; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct UMaterialInstanceDynamic* KillerDynMatFPP; // 0xbf8(0x08)
	bool IsAfterAttack; // 0xc00(0x01)
	char pad_C01[0x7]; // 0xc01(0x07)
	struct UMaterialInstanceDynamic* HamDynMatFPP; // 0xc08(0x08)
	struct UMaterialInstanceDynamic* HamDynMatInvisFPP; // 0xc10(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat4; // 0xc18(0x08)
	struct UMaterialInstanceDynamic* Ham Mat Tpp; // 0xc20(0x08)
	struct UMaterialInstanceDynamic* HamDynInvisTPP; // 0xc28(0x08)
	bool Keymaster; // 0xc30(0x01)

	void ReceiveBeginPlay(); // Function Astral.Astral_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function Astral.Astral_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function Astral.Astral_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityServ(); // Function Astral.Astral_C.VisibilityServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityMulti(); // Function Astral.Astral_C.VisibilityMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffServ(bool AfterAttack); // Function Astral.Astral_C.AstralOffServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffMulti(bool AfterAttack); // Function Astral.Astral_C.AstralOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffLocal(bool AfterAttack); // Function Astral.Astral_C.AstralOffLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function Astral.Astral_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnInvoke(); // Function Astral.Astral_C.OnInvoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Astral(int32_t EntryPoint); // Function Astral.Astral_C.ExecuteUbergraph_Astral // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

