// BlueprintGeneratedClass KillerMesh.KillerMesh_C
// Size: 0x2a0 (Inherited: 0x220)
struct AKillerMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	bool Tutorial?; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float TransitionTime; // 0x23c(0x04)
	float TurnOffDuration; // 0x240(0x04)
	float ErodeSubtractDef; // 0x244(0x04)
	float TurnOnDuration; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UMaterialInstanceDynamic* KillerDynMat1; // 0x250(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat2; // 0x258(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat3; // 0x260(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat4; // 0x268(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat5; // 0x270(0x08)
	float Float1; // 0x278(0x04)
	bool TransitionOff; // 0x27c(0x01)
	bool TransitionOn; // 0x27d(0x01)
	bool On?; // 0x27e(0x01)
	char pad_27F[0x1]; // 0x27f(0x01)
	struct TArray<struct UMaterialInstanceDynamic*> arrayDynMatInst; // 0x280(0x10)
	struct AKnife_C* KnifeRef; // 0x290(0x08)
	struct UMaterialInstanceDynamic* KillerDynMat6; // 0x298(0x08)

	void UserConstructionScript(); // Function KillerMesh.KillerMesh_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function KillerMesh.KillerMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function KillerMesh.KillerMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void TransitionEvent(float Time); // Function KillerMesh.KillerMesh_C.TransitionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerMesh(int32_t EntryPoint); // Function KillerMesh.KillerMesh_C.ExecuteUbergraph_KillerMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

