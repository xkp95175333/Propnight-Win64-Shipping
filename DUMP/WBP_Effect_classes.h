// WidgetBlueprintGeneratedClass WBP_Effect.WBP_Effect_C
// Size: 0x2dc (Inherited: 0x260)
struct UWBP_Effect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_403; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_122; // 0x288(0x08)
	struct UImage* Image_201; // 0x290(0x08)
	struct UTextBlock* TextBlock; // 0x298(0x08)
	struct UTextBlock* TextBlock_132; // 0x2a0(0x08)
	struct UMaterial* Material; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* Material INstance; // 0x2b0(0x08)
	float Time; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UObject* Book; // 0x2c0(0x08)
	struct UObject* Pot; // 0x2c8(0x08)
	struct UObject* Anbrosia; // 0x2d0(0x08)
	float Duration; // 0x2d8(0x04)

	void Construct(); // Function WBP_Effect.WBP_Effect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Effect.WBP_Effect_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SetImageType(int32_t Index, float Duration); // Function WBP_Effect.WBP_Effect_C.SetImageType // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_Effect(int32_t EntryPoint); // Function WBP_Effect.WBP_Effect_C.ExecuteUbergraph_WBP_Effect // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

