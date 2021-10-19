// WidgetBlueprintGeneratedClass WBP_HitMarkComponent.WBP_HitMarkComponent_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_HitMarkComponent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x268(0x08)
	struct UImage* Image_38; // 0x270(0x08)
	float LifeTime; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FMulticastInlineDelegate OnRemoved; // 0x280(0x10)
	struct FVector InstigatorLocation; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct ASurvivorMasterBP_C* PlayerRef; // 0x2a0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HitMarkComponent.WBP_HitMarkComponent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Construct(); // Function WBP_HitMarkComponent.WBP_HitMarkComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_HitMarkComponent(int32_t EntryPoint); // Function WBP_HitMarkComponent.WBP_HitMarkComponent_C.ExecuteUbergraph_WBP_HitMarkComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnRemoved__DelegateSignature(); // Function WBP_HitMarkComponent.WBP_HitMarkComponent_C.OnRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

