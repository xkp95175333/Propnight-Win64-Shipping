// WidgetBlueprintGeneratedClass AlarmProgressWidget.AlarmProgressWidget_C
// Size: 0x280 (Inherited: 0x260)
struct UAlarmProgressWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar_85; // 0x268(0x08)
	struct USizeBox* SizeBox_1; // 0x270(0x08)
	struct AActor* Owner; // 0x278(0x08)

	float GetPercent_1(); // Function AlarmProgressWidget.AlarmProgressWidget_C.GetPercent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Construct(); // Function AlarmProgressWidget.AlarmProgressWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AlarmProgressWidget.AlarmProgressWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_AlarmProgressWidget(int32_t EntryPoint); // Function AlarmProgressWidget.AlarmProgressWidget_C.ExecuteUbergraph_AlarmProgressWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

