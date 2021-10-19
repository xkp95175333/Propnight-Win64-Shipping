// BlueprintGeneratedClass MainMenuCameraActor.MainMenuCameraActor_C
// Size: 0x349 (Inherited: 0x220)
struct AMainMenuCameraActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* NewSurvPosition; // 0x228(0x08)
	struct USceneComponent* NewCamera; // 0x230(0x08)
	struct USceneComponent* IsaacPoint; // 0x238(0x08)
	struct USceneComponent* TaigaPoint; // 0x240(0x08)
	struct USceneComponent* MablePoint; // 0x248(0x08)
	struct USceneComponent* ChrisPoint; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct URectLightComponent* RectLight3; // 0x260(0x08)
	struct URectLightComponent* RectLight2; // 0x268(0x08)
	struct URectLightComponent* RectLight; // 0x270(0x08)
	struct UCineCameraComponent* CineCamera; // 0x278(0x08)
	struct USceneComponent* Point2; // 0x280(0x08)
	struct USceneComponent* Point1; // 0x288(0x08)
	struct USceneComponent* DefaultCameraPoint; // 0x290(0x08)
	struct USceneComponent* SharedRoot; // 0x298(0x08)
	struct FVector NewCameraBackTimeline_Rotation_E607634644F1975D7540B3B1EBF44EEE; // 0x2a0(0x0c)
	struct FVector NewCameraBackTimeline_Location_E607634644F1975D7540B3B1EBF44EEE; // 0x2ac(0x0c)
	float NewCameraBackTimeline_Focus_E607634644F1975D7540B3B1EBF44EEE; // 0x2b8(0x04)
	enum class ETimelineDirection NewCameraBackTimeline__Direction_E607634644F1975D7540B3B1EBF44EEE; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* NewCameraBackTimeline; // 0x2c0(0x08)
	struct FVector NewCameraForwardTimeline_Rotation_C5EA47564EC099B5186CD09AFF7DD53B; // 0x2c8(0x0c)
	struct FVector NewCameraForwardTimeline_Location_C5EA47564EC099B5186CD09AFF7DD53B; // 0x2d4(0x0c)
	float NewCameraForwardTimeline_Focus_C5EA47564EC099B5186CD09AFF7DD53B; // 0x2e0(0x04)
	enum class ETimelineDirection NewCameraForwardTimeline__Direction_C5EA47564EC099B5186CD09AFF7DD53B; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* NewCameraForwardTimeline; // 0x2e8(0x08)
	struct FVector CameraPoint2Timeline_Rotation_EE3A4378463FDC9DC349308970E009BF; // 0x2f0(0x0c)
	struct FVector CameraPoint2Timeline_Location_EE3A4378463FDC9DC349308970E009BF; // 0x2fc(0x0c)
	float CameraPoint2Timeline_FocalLenght_EE3A4378463FDC9DC349308970E009BF; // 0x308(0x04)
	enum class ETimelineDirection CameraPoint2Timeline__Direction_EE3A4378463FDC9DC349308970E009BF; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* CameraPoint2Timeline; // 0x310(0x08)
	struct FVector CameraPoint1Timeline_Rotation_E10221AB429DA27310900598424A0349; // 0x318(0x0c)
	struct FVector CameraPoint1Timeline_Location_E10221AB429DA27310900598424A0349; // 0x324(0x0c)
	float CameraPoint1Timeline_Focus_E10221AB429DA27310900598424A0349; // 0x330(0x04)
	enum class ETimelineDirection CameraPoint1Timeline__Direction_E10221AB429DA27310900598424A0349; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* CameraPoint1Timeline; // 0x338(0x08)
	int32_t Random; // 0x340(0x04)
	int32_t SkinID; // 0x344(0x04)
	enum class MainMenuCameraEnum Camera; // 0x348(0x01)

	void defaultSkinLoad(enum class SurvChars Char); // Function MainMenuCameraActor.MainMenuCameraActor_C.defaultSkinLoad // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewCameraForwardTimeline__FinishedFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraForwardTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NewCameraForwardTimeline__UpdateFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraForwardTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NewCameraBackTimeline__FinishedFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraBackTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NewCameraBackTimeline__UpdateFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraBackTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraPoint2Timeline__FinishedFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint2Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraPoint2Timeline__UpdateFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint2Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraPoint1Timeline__FinishedFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint1Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraPoint1Timeline__UpdateFunc(); // Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint1Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraEvent(enum class MainMenuCameraEnum Camera); // Function MainMenuCameraActor.MainMenuCameraActor_C.CameraEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function MainMenuCameraActor.MainMenuCameraActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void SetSkinSurvMainMenu(); // Function MainMenuCameraActor.MainMenuCameraActor_C.SetSkinSurvMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MainMenuCameraActor(int32_t EntryPoint); // Function MainMenuCameraActor.MainMenuCameraActor_C.ExecuteUbergraph_MainMenuCameraActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

