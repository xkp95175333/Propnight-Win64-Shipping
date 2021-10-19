// WidgetBlueprintGeneratedClass ProgressBarWBP.ProgressBarWBP_C
// Size: 0x294 (Inherited: 0x260)
struct UProgressBarWBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_327; // 0x268(0x08)
	struct UImage* Image_Alarm; // 0x270(0x08)
	struct UProgressBar* ProgressBar_41; // 0x278(0x08)
	struct USizeBox* SizeBox_Charger; // 0x280(0x08)
	float TimeCurrent; // 0x288(0x04)
	float RangeMax; // 0x28c(0x04)
	float Alpha; // 0x290(0x04)

	float GetPercent_1(); // Function ProgressBarWBP.ProgressBarWBP_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function ProgressBarWBP.ProgressBarWBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ProgressBarWBP.ProgressBarWBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ProgressBarWBP(int32_t EntryPoint); // Function ProgressBarWBP.ProgressBarWBP_C.ExecuteUbergraph_ProgressBarWBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

