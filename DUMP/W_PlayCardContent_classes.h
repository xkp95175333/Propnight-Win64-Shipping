// WidgetBlueprintGeneratedClass W_PlayCardContent.W_PlayCardContent_C
// Size: 0x270 (Inherited: 0x260)
struct UW_PlayCardContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct FName CardTypeName; // 0x268(0x08)

	void InitCard(struct FName CardTypeName, struct FCardStruct CardStruct); // Function W_PlayCardContent.W_PlayCardContent_C.InitCard // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_PlayCardContent.W_PlayCardContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnInit(struct FCardStruct CardStruct); // Function W_PlayCardContent.W_PlayCardContent_C.OnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_PlayCardContent(int32_t EntryPoint); // Function W_PlayCardContent.W_PlayCardContent_C.ExecuteUbergraph_W_PlayCardContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

