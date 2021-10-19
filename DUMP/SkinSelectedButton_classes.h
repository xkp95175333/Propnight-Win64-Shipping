// WidgetBlueprintGeneratedClass SkinSelectedButton.SkinSelectedButton_C
// Size: 0x285 (Inherited: 0x260)
struct USkinSelectedButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_26; // 0x268(0x08)
	struct UTextBlock* TextBlock_59; // 0x270(0x08)
	struct FName Name; // 0x278(0x08)
	int32_t ID; // 0x280(0x04)
	enum class SurvChars Char; // 0x284(0x01)

	struct FText GetName(); // Function SkinSelectedButton.SkinSelectedButton_C.GetName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SkinSelectedButton.SkinSelectedButton_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SkinSelectedButton(int32_t EntryPoint); // Function SkinSelectedButton.SkinSelectedButton_C.ExecuteUbergraph_SkinSelectedButton // (Final|UbergraphFunction) // @ game+0x132e1a0
};

