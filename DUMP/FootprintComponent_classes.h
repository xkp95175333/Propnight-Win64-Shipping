// BlueprintGeneratedClass FootprintComponent.FootprintComponent_C
// Size: 0x146 (Inherited: 0xb0)
struct UFootprintComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USceneComponent* Mesh; // 0xb8(0x08)
	enum class EFootprintStyle CurrentFootwear; // 0xc0(0x01)
	enum class EFootState FootState; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	float MaxMudSteps; // 0xc4(0x04)
	float CurrentMudSteps; // 0xc8(0x04)
	float MaxSandSteps; // 0xcc(0x04)
	float CurrentSandSteps; // 0xd0(0x04)
	bool Left; // 0xd4(0x01)
	bool Right; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	struct FVector Location; // 0xd8(0x0c)
	struct FRotator Rotation; // 0xe4(0x0c)
	float MaxWetSteps; // 0xf0(0x04)
	float CurrentWetSteps; // 0xf4(0x04)
	float MaxBloodSteps; // 0xf8(0x04)
	float CurrentBloodSteps; // 0xfc(0x04)
	float CurrentMulticastSteps; // 0x100(0x04)
	float CurrentMaxSteps; // 0x104(0x04)
	struct AFootprint_Actor_C* FootprintActor; // 0x108(0x08)
	struct UMaterialInstance* Decal; // 0x110(0x08)
	float ImpulseThreshold; // 0x118(0x04)
	float VolumeSensitivity; // 0x11c(0x04)
	float VolumeFootprint; // 0x120(0x04)
	float ImpulseThresholdMax; // 0x124(0x04)
	float MaxVolume; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UFMODAudioComponent* FmodAudio; // 0x130(0x08)
	bool JumpEnd; // 0x138(0x01)
	bool Killer?; // 0x139(0x01)
	bool ImProp?; // 0x13a(0x01)
	bool JumpStart; // 0x13b(0x01)
	bool Run?; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	int32_t KillerType; // 0x140(0x04)
	bool Crouch?; // 0x144(0x01)
	bool Crawl?; // 0x145(0x01)

	void GetVolumeOneFloorProp(float Volume); // Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloorProp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetVolumeOneFloor(float Volume); // Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetVolumeProp(float Volume); // Function FootprintComponent.FootprintComponent_C.GetVolumeProp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void HayFMOD(struct UFMODAudioComponent* InputFmod); // Function FootprintComponent.FootprintComponent_C.HayFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Earth FMOD(struct UFMODAudioComponent* InputFmod); // Function FootprintComponent.FootprintComponent_C.Earth FMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetVolumeByZDiff(struct AActor* Actor, float Volume); // Function FootprintComponent.FootprintComponent_C.GetVolumeByZDiff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PlayJumpSound(struct UFMODEvent* FMODObj, struct UFMODAudioComponent* Comp); // Function FootprintComponent.FootprintComponent_C.PlayJumpSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetVolume(float Volume); // Function FootprintComponent.FootprintComponent_C.GetVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void TileFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.TileFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerTypeFunc(bool Keymaster, bool Granny, bool Doppelganger); // Function FootprintComponent.FootprintComponent_C.KillerTypeFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MetalFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.MetalFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WetFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.WetFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GlassFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.GlassFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CarpetFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.CarpetFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DefaultFMOD(struct UFMODAudioComponent* InputPin); // Function FootprintComponent.FootprintComponent_C.DefaultFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnFootprint(struct FVector Location, struct FRotator Rotation, bool Left, bool Right, bool JumpStart, bool JumpEnd, enum class EPhysicalSurface SurfaceType, struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.SpawnFootprint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerSpawnFootprint(struct FVector Location, struct FRotator Rotation, struct UMaterialInstance* Decal Material, float Current Steps, float MaxSteps); // Function FootprintComponent.FootprintComponent_C.ServerSpawnFootprint // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastFootprintMaterial(struct UMaterialInstance* Decal Material, struct AFootprint_Actor_C* Footprint Actor, float CurrentSteps, float MaxSteps); // Function FootprintComponent.FootprintComponent_C.MulticastFootprintMaterial // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerSpawnSound(struct USoundBase* Sound, struct FVector Location, float Volume); // Function FootprintComponent.FootprintComponent_C.ServerSpawnSound // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastSpawnSound(struct USoundBase* Sound, struct FVector Location, float Volume); // Function FootprintComponent.FootprintComponent_C.MulticastSpawnSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayLocally(struct USoundBase* Sound, struct FVector Location, float Volume); // Function FootprintComponent.FootprintComponent_C.PlayLocally // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DefaultSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.DefaultSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CarpetSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.CarpetSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GlassSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.GlassSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WetSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.WetSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MetalSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.MetalSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TileSound(struct UFMODAudioComponent* FmodAudio); // Function FootprintComponent.FootprintComponent_C.TileSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EarthSound(struct UFMODAudioComponent* InputFmod); // Function FootprintComponent.FootprintComponent_C.EarthSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HaySound(struct UFMODAudioComponent* InputFmod); // Function FootprintComponent.FootprintComponent_C.HaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnDecal(struct FName SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer?, bool ImProp?, bool Run?, bool Crouch?, struct UFMODAudioComponent* FmodAudio, int32_t KillerType, bool Crawl?, bool Shake); // Function FootprintComponent.FootprintComponent_C.SpawnDecal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Chair Open Stage(); // Function FootprintComponent.FootprintComponent_C.Chair Open Stage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFootState(enum class EFootState New Style); // Function FootprintComponent.FootprintComponent_C.ChangeFootState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_FootprintComponent(int32_t EntryPoint); // Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

