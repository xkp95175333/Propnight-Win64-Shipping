// BlueprintGeneratedClass Banshee_Tutorial.Banshee_Tutorial_C
// Size: 0x1308 (Inherited: 0x12f8)
struct ABanshee_Tutorial_C : ABanshee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12f8(0x08)
	struct UW_Tutorial_Quest_C* QuestWidget; // 0x1300(0x08)

	void ReceiveBeginPlay(); // Function Banshee_Tutorial.Banshee_Tutorial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void Pickup(); // Function Banshee_Tutorial.Banshee_Tutorial_C.Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairEvent(struct AHypnoChairBP_C* Chair); // Function Banshee_Tutorial.Banshee_Tutorial_C.ChairEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Banshee_Tutorial(int32_t EntryPoint); // Function Banshee_Tutorial.Banshee_Tutorial_C.ExecuteUbergraph_Banshee_Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

