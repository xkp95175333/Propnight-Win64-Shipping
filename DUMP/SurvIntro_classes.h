// BlueprintGeneratedClass SurvIntro.SurvIntro_C
// Size: 0x2a2 (Inherited: 0x220)
struct ASurvIntro_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URectLightComponent* RectLight6; // 0x228(0x08)
	struct URectLightComponent* RectLight5; // 0x230(0x08)
	struct URectLightComponent* RectLight4; // 0x238(0x08)
	struct URectLightComponent* RectLight; // 0x240(0x08)
	struct URectLightComponent* RectLight2; // 0x248(0x08)
	struct URectLightComponent* RectLight1; // 0x250(0x08)
	struct UStaticMeshComponent* Sphere; // 0x258(0x08)
	struct USceneComponent* EndPoint; // 0x260(0x08)
	struct USceneComponent* StartPoint; // 0x268(0x08)
	struct UCineCameraComponent* CineCamera; // 0x270(0x08)
	struct USceneComponent* Main; // 0x278(0x08)
	struct USceneComponent* TargetPoint; // 0x280(0x08)
	float StartTimeline_Focus_Distance_598CCCFC44D033BBCC5443B94BFA1CB9; // 0x288(0x04)
	float StartTimeline_Alpha_598CCCFC44D033BBCC5443B94BFA1CB9; // 0x28c(0x04)
	enum class ETimelineDirection StartTimeline__Direction_598CCCFC44D033BBCC5443B94BFA1CB9; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* StartTimeline; // 0x298(0x08)
	bool Nicknames?; // 0x2a0(0x01)
	bool forKiller; // 0x2a1(0x01)

	void StartTimeline__FinishedFunc(); // Function SurvIntro.SurvIntro_C.StartTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void StartTimeline__UpdateFunc(); // Function SurvIntro.SurvIntro_C.StartTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NicknameRotate(); // Function SurvIntro.SurvIntro_C.NicknameRotate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameToggle(bool On?); // Function SurvIntro.SurvIntro_C.NicknameToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void End(); // Function SurvIntro.SurvIntro_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvIntro.SurvIntro_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function SurvIntro.SurvIntro_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFOV(bool On?); // Function SurvIntro.SurvIntro_C.ChangeFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeValueFOV(float Value); // Function SurvIntro.SurvIntro_C.ChangeValueFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvIntro(int32_t EntryPoint); // Function SurvIntro.SurvIntro_C.ExecuteUbergraph_SurvIntro // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

