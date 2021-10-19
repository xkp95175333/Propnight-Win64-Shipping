// BlueprintGeneratedClass MapStormBP.MapStormBP_C
// Size: 0x2ca (Inherited: 0x220)
struct AMapStormBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Thunder; // 0x228(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Timeline_1_NewTrack_0_D67461CE416563FB2B48E2B80652FA43; // 0x240(0x04)
	enum class ETimelineDirection Timeline_1__Direction_D67461CE416563FB2B48E2B80652FA43; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* Timeline_2; // 0x248(0x08)
	float Timeline_0_NewTrack_0_A19B948C4F191372C1CF8DB1F06EA309; // 0x250(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A19B948C4F191372C1CF8DB1F06EA309; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* Timeline_1; // 0x258(0x08)
	struct TArray<struct AStormLight_Blueprint_C*> Lights; // 0x260(0x10)
	struct TArray<struct AStaticMeshActor*> Windows; // 0x270(0x10)
	struct TArray<struct ABP_LightBeam_C*> LightBeams; // 0x280(0x10)
	float RandomTime; // 0x290(0x04)
	float Time; // 0x294(0x04)
	float LightsIntense; // 0x298(0x04)
	float BeamsBrightness; // 0x29c(0x04)
	struct UMaterialInstanceDynamic* NewVar_1; // 0x2a0(0x08)
	struct UMaterialInterface* NewVar_2; // 0x2a8(0x08)
	struct FLinearColor NewVar_3; // 0x2b0(0x10)
	int32_t ThunderType; // 0x2c0(0x04)
	float Volume; // 0x2c4(0x04)
	bool JustSound; // 0x2c8(0x01)
	bool Block; // 0x2c9(0x01)

	void PlayFMOD(); // Function MapStormBP.MapStormBP_C.PlayFMOD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void WindowsChange(bool NewParam); // Function MapStormBP.MapStormBP_C.WindowsChange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeamsChange(float NewParam); // Function MapStormBP.MapStormBP_C.BeamsChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightsChange(float NewParam, bool NewParam1); // Function MapStormBP.MapStormBP_C.LightsChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function MapStormBP.MapStormBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function MapStormBP.MapStormBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__FinishedFunc(); // Function MapStormBP.MapStormBP_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_1__UpdateFunc(); // Function MapStormBP.MapStormBP_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function MapStormBP.MapStormBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function MapStormBP.MapStormBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LightEvent(float NewParam, float NewParam2); // Function MapStormBP.MapStormBP_C.LightEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightsOffServ(); // Function MapStormBP.MapStormBP_C.LightsOffServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LightsOffMulti(); // Function MapStormBP.MapStormBP_C.LightsOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RandomizerTimeServ(float Time); // Function MapStormBP.MapStormBP_C.RandomizerTimeServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RandomizerTime(float Time); // Function MapStormBP.MapStormBP_C.RandomizerTime // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StormBlocker(); // Function MapStormBP.MapStormBP_C.StormBlocker // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MapStormBP(int32_t EntryPoint); // Function MapStormBP.MapStormBP_C.ExecuteUbergraph_MapStormBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

