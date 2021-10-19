// BlueprintGeneratedClass GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C
// Size: 0x708 (Inherited: 0x6f4)
struct AGS_PropHunt_Tutorial_C : AGS_PropHunt_C {
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct FFMODEventInstance GameEndEvent; // 0x700(0x08)

	void ReceiveTick(float DeltaSeconds); // Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void DecreaseAlarmsCountEvent(struct TArray<struct AActor*> Surfs); // Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.DecreaseAlarmsCountEvent // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvTutorialEnd(); // Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.SurvTutorialEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Wipe(); // Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.Wipe // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GS_PropHunt_Tutorial(int32_t EntryPoint); // Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ExecuteUbergraph_GS_PropHunt_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

