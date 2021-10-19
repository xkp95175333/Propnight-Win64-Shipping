// BlueprintGeneratedClass TutorialTrigger.TutorialTrigger_C
// Size: 0x24a (Inherited: 0x228)
struct ATutorialTrigger_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct AActor* DoorTrigger; // 0x230(0x08)
	struct AActor* SurvPart2-1; // 0x238(0x08)
	struct AActor* SurvPart2-2; // 0x240(0x08)
	bool QuestTrigger?; // 0x248(0x01)
	bool Block; // 0x249(0x01)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TutorialTrigger.TutorialTrigger_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void DoorTriggerEvent(struct UObject* Object); // Function TutorialTrigger.TutorialTrigger_C.DoorTriggerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvPart2-2Event(struct UObject* Object); // Function TutorialTrigger.TutorialTrigger_C.SurvPart2-2Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvPart2-1Event(struct UObject* Object); // Function TutorialTrigger.TutorialTrigger_C.SurvPart2-1Event // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void QuestEvent(); // Function TutorialTrigger.TutorialTrigger_C.QuestEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Surv(); // Function TutorialTrigger.TutorialTrigger_C.Surv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_TutorialTrigger(int32_t EntryPoint); // Function TutorialTrigger.TutorialTrigger_C.ExecuteUbergraph_TutorialTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

