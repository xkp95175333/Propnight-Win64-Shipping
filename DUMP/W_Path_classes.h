// WidgetBlueprintGeneratedClass W_Path.W_Path_C
// Size: 0x2a9 (Inherited: 0x260)
struct UW_Path_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_EntryContainer; // 0x268(0x08)
	struct URichTextBlock* RichTextBlock_92; // 0x270(0x08)
	struct TArray<struct UW_PathEntry_C*> Path; // 0x278(0x10)
	struct UW_PathEntry_C* RootEntry; // 0x288(0x08)
	struct UWidget* RootWidget; // 0x290(0x08)
	struct TArray<int32_t> NeedRemove; // 0x298(0x10)
	bool HasRoot; // 0x2a8(0x01)

	void SetEnabled(bool IsEnabled); // Function W_Path.W_Path_C.SetEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetRootWidget(struct UWidget* Widget); // Function W_Path.W_Path_C.SetRootWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsRoot(struct FText EntryName, bool Result); // Function W_Path.W_Path_C.IsRoot // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void FindEntry(struct FText EntryName, int32_t EntryIndex); // Function W_Path.W_Path_C.FindEntry // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void PreConstruct(bool IsDesignTime); // Function W_Path.W_Path_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function W_Path.W_Path_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void AddEntryToPath(struct FText EntryName, struct UWidget* EntryWidget); // Function W_Path.W_Path_C.AddEntryToPath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RemoveEntryFromPath(struct FText EntryName); // Function W_Path.W_Path_C.RemoveEntryFromPath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RootClicked(); // Function W_Path.W_Path_C.RootClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Entry_OnClick(struct FText EntryName); // Function W_Path.W_Path_C.Entry_OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearPath(); // Function W_Path.W_Path_C.ClearPath // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_W_Path(int32_t EntryPoint); // Function W_Path.W_Path_C.ExecuteUbergraph_W_Path // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

