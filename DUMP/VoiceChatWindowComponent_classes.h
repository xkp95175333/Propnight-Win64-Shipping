// WidgetBlueprintGeneratedClass VoiceChatWindowComponent.VoiceChatWindowComponent_C
// Size: 0x288 (Inherited: 0x260)
struct UVoiceChatWindowComponent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_126; // 0x268(0x08)
	struct UTextBlock* NicknameText; // 0x270(0x08)
	struct UHorizontalBox* VoiceChatBox; // 0x278(0x08)
	struct AActor* Owner; // 0x280(0x08)

	enum class ESlateVisibility Get_VoiceChatBox_Visibility_1(); // Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.Get_VoiceChatBox_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void SendOwner(struct AActor* Actor); // Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.SendOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_VoiceChatWindowComponent(int32_t EntryPoint); // Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.ExecuteUbergraph_VoiceChatWindowComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

