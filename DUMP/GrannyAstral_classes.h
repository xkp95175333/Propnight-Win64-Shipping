// BlueprintGeneratedClass GrannyAstral.GrannyAstral_C
// Size: 0x1a0 (Inherited: 0xe8)
struct UGrannyAstral_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AKillerMesh_C* SpawnedMesh; // 0xf0(0x08)
	float Timer; // 0xf8(0x04)
	bool SkillActivated?; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FVector4 MonochromeColor; // 0x100(0x10)
	struct FVector4 NormalColor; // 0x110(0x10)
	struct FVector MeshLocation; // 0x120(0x0c)
	bool FarAway?; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct AKnife_C* knife; // 0x130(0x08)
	struct TArray<struct ASurvivorMasterBP_C*> SurvsArray; // 0x138(0x10)
	bool Tutorial?; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UMaterialInstanceDynamic* KillerDynMat1; // 0x150(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat2; // 0x158(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat3; // 0x160(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat4; // 0x168(0x08)
	bool TransitionOn; // 0x170(0x01)
	bool TransitionOff; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	float TransitionTime; // 0x174(0x04)
	float TurnOnDuration; // 0x178(0x04)
	float Float1; // 0x17c(0x04)
	float ErodeSubtractDef; // 0x180(0x04)
	float TurnOffDuration; // 0x184(0x04)
	float TurnOffAttackDuration; // 0x188(0x04)
	bool On?; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UMaterialInstanceDynamic* KillerDynMat5; // 0x190(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat6; // 0x198(0x08)

	void ReceiveBeginPlay(); // Function GrannyAstral.GrannyAstral_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function GrannyAstral.GrannyAstral_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function GrannyAstral.GrannyAstral_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityKillerServer(bool SkillActive?); // Function GrannyAstral.GrannyAstral_C.VisibilityKillerServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibilityKillerMulticast(bool SkillActive?); // Function GrannyAstral.GrannyAstral_C.VisibilityKillerMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportCurrentPosition(); // Function GrannyAstral.GrannyAstral_C.TeleportCurrentPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportOldPosition(); // Function GrannyAstral.GrannyAstral_C.TeleportOldPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportOldPositionActivate(); // Function GrannyAstral.GrannyAstral_C.TeleportOldPositionActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportNewPositionActivate(); // Function GrannyAstral.GrannyAstral_C.TeleportNewPositionActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroySpawnedMeshServer(); // Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroySpawnedMeshMulticast(); // Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportKillerServer(); // Function GrannyAstral.GrannyAstral_C.TeleportKillerServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportKillerMulticast(); // Function GrannyAstral.GrannyAstral_C.TeleportKillerMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CameraPPChanger(bool On?); // Function GrannyAstral.GrannyAstral_C.CameraPPChanger // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvisibleEvent(float DeltaTime); // Function GrannyAstral.GrannyAstral_C.InvisibleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnInvoke(); // Function GrannyAstral.GrannyAstral_C.OnInvoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function GrannyAstral.GrannyAstral_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GrannyAstral(int32_t EntryPoint); // Function GrannyAstral.GrannyAstral_C.ExecuteUbergraph_GrannyAstral // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

