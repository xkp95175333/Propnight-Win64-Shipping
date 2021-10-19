// WidgetBlueprintGeneratedClass SurvRole.SurvRole_C
// Size: 0x288 (Inherited: 0x260)
struct USurvRole_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NeedHeal; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_58; // 0x278(0x08)
	struct ASurvivorMasterBP_C* Surv; // 0x280(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SurvRole.SurvRole_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ChangeRoleImage(enum class SurvRole Role, struct ASurvivorMasterBP_C* Surv, bool Off?); // Function SurvRole.SurvRole_C.ChangeRoleImage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SurvRole(int32_t EntryPoint); // Function SurvRole.SurvRole_C.ExecuteUbergraph_SurvRole // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

