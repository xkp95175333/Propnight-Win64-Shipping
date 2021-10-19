// WidgetBlueprintGeneratedClass WBP_HitMark.WBP_HitMark_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_HitMark_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_HitMarks; // 0x268(0x08)
	struct UOverlay* Overlay_38; // 0x270(0x08)
	struct ASurvivorMasterBP_C* PlayerRef; // 0x278(0x08)
	struct TArray<struct UWBP_HitMarkComponent_C*> HitMarks; // 0x280(0x10)

	void hit(struct FVector InstigatorLocation, int32_t ColorNumber); // Function WBP_HitMark.WBP_HitMark_C.hit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_HitMark.WBP_HitMark_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_HitMark(int32_t EntryPoint); // Function WBP_HitMark.WBP_HitMark_C.ExecuteUbergraph_WBP_HitMark // (Final|UbergraphFunction) // @ game+0x132e1a0
};

