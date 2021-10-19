// BlueprintGeneratedClass BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C
// Size: 0x2a9 (Inherited: 0x220)
struct ABP_AudioActor_SoundSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct USoundBase* SoundToSpawn; // 0x238(0x08)
	int32_t NumberOfSpawns; // 0x240(0x04)
	float MinTimer; // 0x244(0x04)
	float MaxTimer; // 0x248(0x04)
	int32_t MinSpawns; // 0x24c(0x04)
	int32_t MaxSpawns; // 0x250(0x04)
	bool bAutoStart; // 0x254(0x01)
	bool bRepeat; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	float VolumeScale; // 0x258(0x04)
	float PitchScale; // 0x25c(0x04)
	int32_t SpawnCounter; // 0x260(0x04)
	float MinStepDuration; // 0x264(0x04)
	float MaxStepDuration; // 0x268(0x04)
	float MinVolumeRange; // 0x26c(0x04)
	float MaxVolumeRange; // 0x270(0x04)
	float MinPitchRange; // 0x274(0x04)
	float MaxPitchRange; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x280(0x08)
	struct USoundConcurrency* ConcurrencySettings; // 0x288(0x08)
	bool bIncludeHeight; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float SpawnRadius; // 0x294(0x04)
	bool bContinueSpawner; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FVector PhraseLocation; // 0x29c(0x0c)
	bool bDelayFirstTime; // 0x2a8(0x01)

	void EndOfPhraseAction(bool bSuccessful); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.EndOfPhraseAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayWordAtPhraseLocation(struct USoundBase* InSound); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.PlayWordAtPhraseLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitializeTriggerSphere(); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.InitializeTriggerSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteSequence(); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteTimer(); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_AudioActor_SoundSpawner(int32_t EntryPoint); // Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteUbergraph_BP_AudioActor_SoundSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

