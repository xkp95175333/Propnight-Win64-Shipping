// BlueprintGeneratedClass LobbyPlayerMesh.LobbyPlayerMesh_C
// Size: 0x2b3 (Inherited: 0x220)
struct ALobbyPlayerMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* EndGameMesh; // 0x228(0x08)
	struct USkeletalMeshComponent* RedGirl; // 0x230(0x08)
	struct USkeletalMeshComponent* GreenGirl; // 0x238(0x08)
	struct USkeletalMeshComponent* NewSurv; // 0x240(0x08)
	struct USkeletalMeshComponent* Surv; // 0x248(0x08)
	struct USkeletalMeshComponent* AsianGirl; // 0x250(0x08)
	struct USkeletalMeshComponent* Hammer_SkeletalMeshComponent0; // 0x258(0x08)
	struct USkeletalMeshComponent* Keymaster; // 0x260(0x08)
	struct USkeletalMeshComponent* knife_SkeletalMeshComponent0; // 0x268(0x08)
	struct USkeletalMeshComponent* Granny; // 0x270(0x08)
	struct USkeletalMeshComponent* Doppel_A_Pose_propnight_doppelganger_batterfly_knife_lock_low_SkeletalMeshComponent0; // 0x278(0x08)
	struct UNiagaraComponent* DoppelNiagaraSystemV3_NiagaraComponent0; // 0x280(0x08)
	struct USkeletalMeshComponent* Doppel; // 0x288(0x08)
	struct USkeletalMeshComponent* Banshee; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct APS_PropHunt_C* Player; // 0x2a0(0x08)
	enum class LobbyCharacter Character; // 0x2a8(0x01)
	bool LocalBlock?; // 0x2a9(0x01)
	bool GameStarted?; // 0x2aa(0x01)
	bool Surv?; // 0x2ab(0x01)
	int32_t SkinID; // 0x2ac(0x04)
	enum class LobbyCharacter Char; // 0x2b0(0x01)
	bool Scale Lock?; // 0x2b1(0x01)
	bool DevCheatLBM; // 0x2b2(0x01)

	void RedGirlSkin(); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.RedGirlSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinCheat(); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.SkinCheat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewFunction_1(enum class SurvChars Char); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Skin IDDuplicat Checker(bool Bool); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.Skin IDDuplicat Checker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvSkinChanger(enum class LobbyCharacter Char, struct USkeletalMeshComponent* Mesh); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.SurvSkinChanger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGame(); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.EndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeMesh(enum class LobbyCharacter Character, bool LocalBlock?, bool ScaleLock?); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.ChangeMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayerState(struct APS_PropHunt_C* Player, bool LocalBlock?); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.SetPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void HideAll(bool OnlyMesh?); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.HideAll // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScaleChange(); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.ScaleChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_LobbyPlayerMesh(int32_t EntryPoint); // Function LobbyPlayerMesh.LobbyPlayerMesh_C.ExecuteUbergraph_LobbyPlayerMesh // (Final|UbergraphFunction) // @ game+0x132e1a0
};

