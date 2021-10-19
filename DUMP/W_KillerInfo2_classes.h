// WidgetBlueprintGeneratedClass W_KillerInfo2.W_KillerInfo2_C
// Size: 0x288 (Inherited: 0x260)
struct UW_KillerInfo2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UImage* Image_152; // 0x270(0x08)
	struct UTextBlock* SkillDesc; // 0x278(0x08)
	struct UTextBlock* SkillName; // 0x280(0x08)

	void SetInfo(struct FText SkillName, struct FText SkillDesc, struct UObject* Image); // Function W_KillerInfo2.W_KillerInfo2_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_KillerInfo2(int32_t EntryPoint); // Function W_KillerInfo2.W_KillerInfo2_C.ExecuteUbergraph_W_KillerInfo2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

