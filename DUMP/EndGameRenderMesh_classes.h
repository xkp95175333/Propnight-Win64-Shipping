// BlueprintGeneratedClass EndGameRenderMesh.EndGameRenderMesh_C
// Size: 0x248 (Inherited: 0x220)
struct AEndGameRenderMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x228(0x08)
	struct USpringArmComponent* SpringArm; // 0x230(0x08)
	struct UChildActorComponent* ChildActor; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function EndGameRenderMesh.EndGameRenderMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void OpenDoor(); // Function EndGameRenderMesh.EndGameRenderMesh_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_EndGameRenderMesh(int32_t EntryPoint); // Function EndGameRenderMesh.EndGameRenderMesh_C.ExecuteUbergraph_EndGameRenderMesh // (Final|UbergraphFunction) // @ game+0x132e1a0
};

