// BlueprintGeneratedClass IntroRail.IntroRail_C
// Size: 0x28a (Inherited: 0x240)
struct AIntroRail_C : ACameraRig_Rail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct URectLightComponent* RectLight2; // 0x248(0x08)
	struct URectLightComponent* RectLight; // 0x250(0x08)
	struct URectLightComponent* RectLight1; // 0x258(0x08)
	struct UCineCameraComponent* CineCamera; // 0x260(0x08)
	struct USceneComponent* TargetPoint; // 0x268(0x08)
	float StartTimeline_Focus_Distance_83FB9F8F401897F4D30BEAB0968C1557; // 0x270(0x04)
	float StartTimeline_Alpha_83FB9F8F401897F4D30BEAB0968C1557; // 0x274(0x04)
	enum class ETimelineDirection StartTimeline__Direction_83FB9F8F401897F4D30BEAB0968C1557; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* StartTimeline; // 0x280(0x08)
	bool Nicknames?; // 0x288(0x01)
	bool forKiller; // 0x289(0x01)

	void StartTimeline__FinishedFunc(); // Function IntroRail.IntroRail_C.StartTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void StartTimeline__UpdateFunc(); // Function IntroRail.IntroRail_C.StartTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NicknameToggle(bool On?); // Function IntroRail.IntroRail_C.NicknameToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NicknameRotate(); // Function IntroRail.IntroRail_C.NicknameRotate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void End(); // Function IntroRail.IntroRail_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFOV(bool On?); // Function IntroRail.IntroRail_C.ChangeFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function IntroRail.IntroRail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function IntroRail.IntroRail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ChangeValueFOV(float Value); // Function IntroRail.IntroRail_C.ChangeValueFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_IntroRail(int32_t EntryPoint); // Function IntroRail.IntroRail_C.ExecuteUbergraph_IntroRail // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

