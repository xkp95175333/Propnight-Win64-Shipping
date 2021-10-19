// WidgetBlueprintGeneratedClass WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C
// Size: 0x2c9 (Inherited: 0x260)
struct UWBP_HitMarkComponent_KillerAlarm_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_38; // 0x280(0x08)
	struct USizeBox* SizeBox_2; // 0x288(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ColorArrow; // 0x290(0x08)
	float LifeTime; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnRemoved; // 0x2a0(0x10)
	struct FVector InstigatorLocation; // 0x2b0(0x0c)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct ASurvivorMasterBP_C* PlayerRef; // 0x2c0(0x08)
	bool Tutorial?; // 0x2c8(0x01)

	void Construct(); // Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void StartRemove(); // Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.StartRemove // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm(int32_t EntryPoint); // Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnRemoved__DelegateSignature(); // Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.OnRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

