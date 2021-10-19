// WidgetBlueprintGeneratedClass WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_HitMark_KillerAlarm_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_HitMarks; // 0x268(0x08)
	struct UOverlay* Overlay_38; // 0x270(0x08)
	struct ASurvivorMasterBP_C* PlayerRef; // 0x278(0x08)
	struct TArray<struct UWBP_HitMarkComponent_C*> HitMarks; // 0x280(0x10)
	struct UWBP_HitMarkComponent_KillerAlarm_C* TutorialHitMark; // 0x290(0x08)

	void AlarmDone(struct FVector InstigatorLocation); // Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.AlarmDone // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void TutorialAlarm(struct FVector InstigatorLocation); // Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.TutorialAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_HitMark_KillerAlarm(int32_t EntryPoint); // Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.ExecuteUbergraph_WBP_HitMark_KillerAlarm // (Final|UbergraphFunction) // @ game+0x132e1a0
};

