// BlueprintGeneratedClass BP_CF_PlayerPosition.BP_CF_PlayerPosition_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_CF_PlayerPosition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FVector BendPos; // 0x230(0x0c)
	int32_t PlayerPawnIndex; // 0x23c(0x04)
	float BendPosLength; // 0x240(0x04)
	float PlayerSpeed; // 0x244(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_CF_PlayerPosition.BP_CF_PlayerPosition_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_CF_PlayerPosition(int32_t EntryPoint); // Function BP_CF_PlayerPosition.BP_CF_PlayerPosition_C.ExecuteUbergraph_BP_CF_PlayerPosition // (Final|UbergraphFunction) // @ game+0x132e1a0
};

