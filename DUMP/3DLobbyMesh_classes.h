// BlueprintGeneratedClass 3DLobbyMesh.3DLobbyMesh_C
// Size: 0x2d2 (Inherited: 0x220)
struct A3DLobbyMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* HammerIntro; // 0x228(0x08)
	struct USkeletalMeshComponent* Surv_RedGirls; // 0x230(0x08)
	struct USkeletalMeshComponent* Surv_Mable; // 0x238(0x08)
	struct USkeletalMeshComponent* Surv_Chris; // 0x240(0x08)
	struct USkeletalMeshComponent* Surv_Taiga; // 0x248(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2DMasked; // 0x250(0x08)
	struct URectLightComponent* RectLight1; // 0x258(0x08)
	struct URectLightComponent* RectLight; // 0x260(0x08)
	struct USkeletalMeshComponent* Banshee; // 0x268(0x08)
	struct UNiagaraComponent* Niagara; // 0x270(0x08)
	struct USkeletalMeshComponent* knife; // 0x278(0x08)
	struct USkeletalMeshComponent* Doppelganger; // 0x280(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x288(0x08)
	struct UPointLightComponent* PointLight; // 0x290(0x08)
	struct USkeletalMeshComponent* Surv_Isaac; // 0x298(0x08)
	struct USkeletalMeshComponent* Keymaster; // 0x2a0(0x08)
	struct USkeletalMeshComponent* Granny; // 0x2a8(0x08)
	struct USpringArmComponent* SpringArm; // 0x2b0(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	bool Killer?; // 0x2c8(0x01)
	enum class KillerType KillerType; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	int32_t SurvSkin; // 0x2cc(0x04)
	enum class SurvChars SurvChar; // 0x2d0(0x01)
	enum class SurvChars TrueSurvSkin; // 0x2d1(0x01)

	void ReceiveBeginPlay(); // Function 3DLobbyMesh.3DLobbyMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void UpdateMesh(); // Function 3DLobbyMesh.3DLobbyMesh_C.UpdateMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideAllMesh(bool Hide?); // Function 3DLobbyMesh.3DLobbyMesh_C.HideAllMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_3DLobbyMesh(int32_t EntryPoint); // Function 3DLobbyMesh.3DLobbyMesh_C.ExecuteUbergraph_3DLobbyMesh // (Final|UbergraphFunction) // @ game+0x132e1a0
};

