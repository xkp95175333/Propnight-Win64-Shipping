// BlueprintGeneratedClass NewLobby.NewLobby_C
// Size: 0x2c8 (Inherited: 0x220)
struct ANewLobby_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URectLightComponent* RectLight57_LightComponent0; // 0x228(0x08)
	struct URectLightComponent* RectLight56_LightComponent0; // 0x230(0x08)
	struct URectLightComponent* RectLight55_LightComponent0; // 0x238(0x08)
	struct URectLightComponent* RectLight54_LightComponent0; // 0x240(0x08)
	struct UCineCameraComponent* CineCameraActor1_CameraComponent; // 0x248(0x08)
	struct USceneComponent* CineCameraActor1_SceneComponent; // 0x250(0x08)
	struct USkeletalMeshComponent* RedGirl; // 0x258(0x08)
	struct USkeletalMeshComponent* GreenGirl; // 0x260(0x08)
	struct USkeletalMeshComponent* NewSurv; // 0x268(0x08)
	struct USkeletalMeshComponent* Surv; // 0x270(0x08)
	struct USkeletalMeshComponent* AsianGirl; // 0x278(0x08)
	struct USkeletalMeshComponent* Hammer_SkeletalMeshComponent0; // 0x280(0x08)
	struct USkeletalMeshComponent* Keymaster; // 0x288(0x08)
	struct USkeletalMeshComponent* knife_SkeletalMeshComponent0; // 0x290(0x08)
	struct USkeletalMeshComponent* Granny; // 0x298(0x08)
	struct UNiagaraComponent* DoppelNiagaraSystemV3_NiagaraComponent0; // 0x2a0(0x08)
	struct USkeletalMeshComponent* Doppel_A_Pose_propnight_doppelganger_batterfly_knife_lock_low_SkeletalMeshComponent0; // 0x2a8(0x08)
	struct USkeletalMeshComponent* Doppel; // 0x2b0(0x08)
	struct USkeletalMeshComponent* Banshee; // 0x2b8(0x08)
	struct USceneComponent* SharedRoot; // 0x2c0(0x08)

	void HideAll(); // Function NewLobby.NewLobby_C.HideAll // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideActor(bool Visible?); // Function NewLobby.NewLobby_C.HideActor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchCamera(bool ThisCamera?); // Function NewLobby.NewLobby_C.SwitchCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CharacterSwitcher(enum class LobbyCharacter Character); // Function NewLobby.NewLobby_C.CharacterSwitcher // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function NewLobby.NewLobby_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function NewLobby.NewLobby_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_NewLobby(int32_t EntryPoint); // Function NewLobby.NewLobby_C.ExecuteUbergraph_NewLobby // (Final|UbergraphFunction) // @ game+0x132e1a0
};

