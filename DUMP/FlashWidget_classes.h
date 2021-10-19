// WidgetBlueprintGeneratedClass FlashWidget.FlashWidget_C
// Size: 0x280 (Inherited: 0x260)
struct UFlashWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UImage* FlashImage; // 0x270(0x08)
	struct UImage* SceneTexture; // 0x278(0x08)

	void FlashCapture(float PlaybackSpeed, bool Granny, bool MarioStun); // Function FlashWidget.FlashWidget_C.FlashCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_FlashWidget(int32_t EntryPoint); // Function FlashWidget.FlashWidget_C.ExecuteUbergraph_FlashWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

