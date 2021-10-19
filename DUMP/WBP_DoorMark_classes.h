// WidgetBlueprintGeneratedClass WBP_DoorMark.WBP_DoorMark_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_DoorMark_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Disappear; // 0x268(0x08)
	struct UWidgetAnimation* Appear; // 0x270(0x08)
	struct UImage* Image_Circle; // 0x278(0x08)
	struct UImage* Image_Point; // 0x280(0x08)

	void PlayAppearAnim(); // Function WBP_DoorMark.WBP_DoorMark_C.PlayAppearAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayDisappear(); // Function WBP_DoorMark.WBP_DoorMark_C.PlayDisappear // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakePoint(); // Function WBP_DoorMark.WBP_DoorMark_C.MakePoint // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeCircle(); // Function WBP_DoorMark.WBP_DoorMark_C.MakeCircle // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeInvisible(); // Function WBP_DoorMark.WBP_DoorMark_C.MakeInvisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_DoorMark.WBP_DoorMark_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void MakeVisible(); // Function WBP_DoorMark.WBP_DoorMark_C.MakeVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_DoorMark(int32_t EntryPoint); // Function WBP_DoorMark.WBP_DoorMark_C.ExecuteUbergraph_WBP_DoorMark // (Final|UbergraphFunction) // @ game+0x132e1a0
};

