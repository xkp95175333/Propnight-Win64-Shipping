// BlueprintGeneratedClass GrannyTutorial.GrannyTutorial_C
// Size: 0x12c8 (Inherited: 0x12a1)
struct AGrannyTutorial_C : AGranny_C {
	char pad_12A1[0x7]; // 0x12a1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12a8(0x08)
	struct UAstralTutorial_C* AstralTutorial; // 0x12b0(0x08)
	bool NewVar_5_1; // 0x12b8(0x01)
	char pad_12B9[0x7]; // 0x12b9(0x07)
	struct ATriggerTeleportPrototypeLevel_C* teleporter; // 0x12c0(0x08)

	void UserConstructionScript(); // Function GrannyTutorial.GrannyTutorial_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function GrannyTutorial.GrannyTutorial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Part2-2(); // Function GrannyTutorial.GrannyTutorial_C.Part2-2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Part2-1(); // Function GrannyTutorial.GrannyTutorial_C.Part2-1 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvRunAwayMulti(bool NewParam, struct ASurvivorMasterBP_C* hellpSurv, bool Flashed?); // Function GrannyTutorial.GrannyTutorial_C.SurvRunAwayMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GrannyTutorial(int32_t EntryPoint); // Function GrannyTutorial.GrannyTutorial_C.ExecuteUbergraph_GrannyTutorial // (Final|UbergraphFunction) // @ game+0x132e1a0
};

