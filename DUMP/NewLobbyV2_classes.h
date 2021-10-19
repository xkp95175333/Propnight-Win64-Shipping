// BlueprintGeneratedClass NewLobbyV2.NewLobbyV2_C
// Size: 0x3a0 (Inherited: 0x220)
struct ANewLobbyV2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDirectionalLightComponent* MoonLight1; // 0x228(0x08)
	struct UParticleSystemComponent* P_SmokeFull1b_Edit; // 0x230(0x08)
	struct UTextRenderComponent* TextRender2; // 0x238(0x08)
	struct USceneComponent* Surv4Point; // 0x240(0x08)
	struct UTextRenderComponent* TextRender1; // 0x248(0x08)
	struct USceneComponent* Surv3Point; // 0x250(0x08)
	struct UTextRenderComponent* TextRender6; // 0x258(0x08)
	struct USceneComponent* Surv2Point; // 0x260(0x08)
	struct UTextRenderComponent* TextRender; // 0x268(0x08)
	struct USceneComponent* Surv1Point; // 0x270(0x08)
	struct UTextRenderComponent* TextRender7; // 0x278(0x08)
	struct USceneComponent* KillerPoint; // 0x280(0x08)
	struct USceneComponent* PlayersPoints; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x290(0x08)
	struct USceneComponent* RedLight-1; // 0x298(0x08)
	struct USceneComponent* RedLight-2; // 0x2a0(0x08)
	struct URectLightComponent* RectLight1; // 0x2a8(0x08)
	struct URectLightComponent* RectLight; // 0x2b0(0x08)
	struct UBoxComponent* Box; // 0x2b8(0x08)
	struct UChildActorComponent* Player5; // 0x2c0(0x08)
	struct UChildActorComponent* Player4; // 0x2c8(0x08)
	struct UChildActorComponent* Player3; // 0x2d0(0x08)
	struct UChildActorComponent* Player2; // 0x2d8(0x08)
	struct UChildActorComponent* Player1; // 0x2e0(0x08)
	struct UDirectionalLightComponent* ManiacSunLight-2; // 0x2e8(0x08)
	struct UDirectionalLightComponent* SurvSunLight-2; // 0x2f0(0x08)
	struct USceneComponent* KillerPoint-2; // 0x2f8(0x08)
	struct USceneComponent* Surv4-2; // 0x300(0x08)
	struct USceneComponent* Surv3-2; // 0x308(0x08)
	struct USceneComponent* Surv2-2; // 0x310(0x08)
	struct USceneComponent* Surv1-2; // 0x318(0x08)
	struct USceneComponent* SurvVisible; // 0x320(0x08)
	struct UDirectionalLightComponent* ManiacSunLight-1; // 0x328(0x08)
	struct UDirectionalLightComponent* SurvSunLight-1; // 0x330(0x08)
	struct USceneComponent* KillerPoint-1; // 0x338(0x08)
	struct USceneComponent* Surv4-1; // 0x340(0x08)
	struct USceneComponent* Surv3-1; // 0x348(0x08)
	struct USceneComponent* Surv2-1; // 0x350(0x08)
	struct USceneComponent* Surv1-1; // 0x358(0x08)
	struct USceneComponent* KillerVisible; // 0x360(0x08)
	struct UDirectionalLightComponent* MoonLight; // 0x368(0x08)
	struct USceneComponent* HDRIBackdrop_SceneComponent; // 0x370(0x08)
	struct UStaticMeshComponent* Floor; // 0x378(0x08)
	struct UCineCameraComponent* Cine Camera Actor_CameraComponent; // 0x380(0x08)
	struct USceneComponent* Cine Camera Actor_SceneComponent; // 0x388(0x08)
	struct USceneComponent* SharedRoot; // 0x390(0x08)
	bool Killer?; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	int32_t TempInt; // 0x39c(0x04)

	void ReceiveBeginPlay(); // Function NewLobbyV2.NewLobbyV2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function NewLobbyV2.NewLobbyV2_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SwitchCamera(bool ThisCamera?); // Function NewLobbyV2.NewLobbyV2_C.SwitchCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerVisibleType(bool Killer?); // Function NewLobbyV2.NewLobbyV2_C.PlayerVisibleType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangePlayerMesh(int32_t Player, struct APS_PropHunt_C* PlayerState, bool Local?, enum class LobbyCharacter Character); // Function NewLobbyV2.NewLobbyV2_C.ChangePlayerMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchLocalPlayerMesh(enum class LobbyCharacter Character); // Function NewLobbyV2.NewLobbyV2_C.SwitchLocalPlayerMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideAll(); // Function NewLobbyV2.NewLobbyV2_C.HideAll // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpdateSlots(); // Function NewLobbyV2.NewLobbyV2_C.UpdateSlots // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnlySlotsUpdate(bool Killer?); // Function NewLobbyV2.NewLobbyV2_C.OnlySlotsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeforeDestroy(); // Function NewLobbyV2.NewLobbyV2_C.BeforeDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_NewLobbyV2(int32_t EntryPoint); // Function NewLobbyV2.NewLobbyV2_C.ExecuteUbergraph_NewLobbyV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

