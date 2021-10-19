// BlueprintGeneratedClass EndGamePlayerMesh.EndGamePlayerMesh_C
// Size: 0x328 (Inherited: 0x280)
struct AEndGamePlayerMesh_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetComponent* NicknameWidget; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x290(0x08)
	struct UNiagaraComponent* Niagara; // 0x298(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2a0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	enum class EndGameStatus Status; // 0x2b8(0x01)
	enum class EndGameStatus SavedStatus; // 0x2b9(0x01)
	bool ImSurv?; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct UMaterialInstanceDynamic* SurvDynMat1; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat2; // 0x2c8(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat3; // 0x2d0(0x08)
	float DeathEffectTime; // 0x2d8(0x04)
	float DeathEffectDuration; // 0x2dc(0x04)
	float Float1; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FTimerHandle DeathEffectTimer; // 0x2e8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> SurvDynMaterials; // 0x2f0(0x10)
	enum class SurvChars Surv Char; // 0x300(0x01)
	bool NiagaraForDoppel; // 0x301(0x01)
	bool KnifeVis; // 0x302(0x01)
	char pad_303[0x5]; // 0x303(0x05)
	struct FString NicknameString; // 0x308(0x10)
	struct ALobbyPlayerMesh_EndGameKiller_C* KillerMesh; // 0x318(0x08)
	struct APlayerState* Player State; // 0x320(0x08)

	void SwitchVisibility(bool Visible?); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibility // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StatusUpdate(enum class EndGameStatus Status); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdate // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartDeathEffect(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.StartDeathEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeathEffectEvent(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.DeathEffectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvDeathSound(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.SurvDeathSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPlayerMesh(struct AActor* Player); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetPlayerMesh // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SpawnCoin(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.SpawnCoin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchVisibilityLocal(bool Visible?); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibilityLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MaterialsDefault(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.MaterialsDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StatusUpdateLocal(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdateLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowNickname(struct UCineCameraComponent* LookAtCamera); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.ShowNickname // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvMaterials(); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetSurvMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_EndGamePlayerMesh(int32_t EntryPoint); // Function EndGamePlayerMesh.EndGamePlayerMesh_C.ExecuteUbergraph_EndGamePlayerMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

