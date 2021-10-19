// WidgetBlueprintGeneratedClass PlayerNickName.PlayerNickName_C
// Size: 0x279 (Inherited: 0x260)
struct UPlayerNickName_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* NicknameWidget; // 0x268(0x08)
	bool On; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float Time; // 0x274(0x04)
	bool End; // 0x278(0x01)

	struct FText Get_NicknameWidget_Text_1(); // Function PlayerNickName.PlayerNickName_C.Get_NicknameWidget_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerNickName.PlayerNickName_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PlayerNickName(int32_t EntryPoint); // Function PlayerNickName.PlayerNickName_C.ExecuteUbergraph_PlayerNickName // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

