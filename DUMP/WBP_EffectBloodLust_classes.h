// WidgetBlueprintGeneratedClass WBP_EffectBloodLust.WBP_EffectBloodLust_C
// Size: 0x32d (Inherited: 0x260)
struct UWBP_EffectBloodLust_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x270(0x08)
	struct UHorizontalBox* HorizontalBox_403; // 0x278(0x08)
	struct UImage* Image_122; // 0x280(0x08)
	struct UImage* Image_298; // 0x288(0x08)
	struct UImage* Image_Blood; // 0x290(0x08)
	struct UImage* Image_Blood_3; // 0x298(0x08)
	struct UImage* Image_Blood_4; // 0x2a0(0x08)
	struct UImage* Image_Blood_5; // 0x2a8(0x08)
	struct UImage* Image_Blood_6; // 0x2b0(0x08)
	struct UImage* Image_Blood_7; // 0x2b8(0x08)
	struct UImage* Image_Blood_8; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_132; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BloodRush; // 0x2d8(0x08)
	struct UMaterial* Material; // 0x2e0(0x08)
	struct UMaterialInstanceDynamic* Material INstance; // 0x2e8(0x08)
	float Global_Time; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UObject* Book; // 0x2f8(0x08)
	struct UObject* Pot; // 0x300(0x08)
	struct UObject* Anbrosia; // 0x308(0x08)
	float Duration; // 0x310(0x04)
	bool Chase?; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	int32_t Level; // 0x318(0x04)
	bool MOVETOAFK; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float XZ_TIME); // 0x320(0x04)
	float PROGRESS_BAR; // 0x324(0x04)
	float LevelBL; // 0x328(0x04)
	bool SSSR; // 0x32c(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Level_Up(); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Level_Up // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LevelRush?(float Level, bool SSSR, bool AstralIn?); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.LevelRush? // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Hunter_LevelRush(float DeltaTime, bool Chase?); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Hunter_LevelRush // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_EffectBloodLust(int32_t EntryPoint); // Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.ExecuteUbergraph_WBP_EffectBloodLust // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

