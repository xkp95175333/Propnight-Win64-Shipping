// WidgetBlueprintGeneratedClass W_BrowserLoading.W_BrowserLoading_C
// Size: 0x27c (Inherited: 0x260)
struct UW_BrowserLoading_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UImage* Image_40; // 0x270(0x08)
	float Angle; // 0x278(0x04)

	void PreConstruct(bool IsDesignTime); // Function W_BrowserLoading.W_BrowserLoading_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_BrowserLoading.W_BrowserLoading_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_BrowserLoading.W_BrowserLoading_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_BrowserLoading(int32_t EntryPoint); // Function W_BrowserLoading.W_BrowserLoading_C.ExecuteUbergraph_W_BrowserLoading // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

