// BlueprintGeneratedClass SurvOnChair.SurvOnChair_C
// Size: 0x64 (Inherited: 0x40)
struct USurvOnChair_C : UATPCCameraModeScript {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	struct FVector StandartOffset; // 0x48(0x0c)
	bool Tick?; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FVector CustomOffset; // 0x58(0x0c)

	void K2_Tick(struct UATPCCameraComponent* Camera, float DeltaSeconds); // Function SurvOnChair.SurvOnChair_C.K2_Tick // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnEnterCameraMode(struct UATPCCameraComponent* Camera); // Function SurvOnChair.SurvOnChair_C.K2_OnEnterCameraMode // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void K2_OnExitCameraMode(struct UATPCCameraComponent* Camera); // Function SurvOnChair.SurvOnChair_C.K2_OnExitCameraMode // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvOnChair(int32_t EntryPoint); // Function SurvOnChair.SurvOnChair_C.ExecuteUbergraph_SurvOnChair // (Final|UbergraphFunction) // @ game+0x132e1a0
};

