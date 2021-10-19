// BlueprintGeneratedClass SurvTutorial.SurvTutorial_C
// Size: 0x1728 (Inherited: 0x16f8)
struct ASurvTutorial_C : ASurvivorMasterBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x16f8(0x08)
	struct TArray<struct AActor*> TutorialGrannys; // 0x1700(0x10)
	struct AActor* Part2Granny; // 0x1710(0x08)
	struct UW_Tutorial_Quest_C* QuestWidget; // 0x1718(0x08)
	bool FirstProp?; // 0x1720(0x01)
	bool Puppet?; // 0x1721(0x01)
	bool Prop?; // 0x1722(0x01)
	char pad_1723[0x1]; // 0x1723(0x01)
	float QuestDelayTime; // 0x1724(0x04)

	void UserConstructionScript(); // Function SurvTutorial.SurvTutorial_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function SurvTutorial.SurvTutorial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SurvTutorial.SurvTutorial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServerJump(); // Function SurvTutorial.SurvTutorial_C.ServerJump // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PropOutlineEffect(); // Function SurvTutorial.SurvTutorial_C.PropOutlineEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Prop(); // Function SurvTutorial.SurvTutorial_C.Prop // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RotateEvent(); // Function SurvTutorial.SurvTutorial_C.RotateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerPerson(); // Function SurvTutorial.SurvTutorial_C.ServerPerson // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalProp(struct AActor* InputPin); // Function SurvTutorial.SurvTutorial_C.LocalProp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetOutServer(); // Function SurvTutorial.SurvTutorial_C.GetOutServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HittedMulticast(int32_t Damage, int32_t TrueDamage, enum class DamageTypeEnum DamageType, bool Moved?, bool Invulnerability?); // Function SurvTutorial.SurvTutorial_C.HittedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BeginFootprint(); // Function SurvTutorial.SurvTutorial_C.BeginFootprint // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvTutorial(int32_t EntryPoint); // Function SurvTutorial.SurvTutorial_C.ExecuteUbergraph_SurvTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

