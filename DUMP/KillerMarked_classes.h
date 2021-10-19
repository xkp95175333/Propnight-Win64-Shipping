// WidgetBlueprintGeneratedClass KillerMarked.KillerMarked_C
// Size: 0x278 (Inherited: 0x260)
struct UKillerMarked_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Text; // 0x268(0x08)
	bool Off; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float Time; // 0x274(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillerMarked.KillerMarked_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void MarkOn(); // Function KillerMarked.KillerMarked_C.MarkOn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_KillerMarked(int32_t EntryPoint); // Function KillerMarked.KillerMarked_C.ExecuteUbergraph_KillerMarked // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

