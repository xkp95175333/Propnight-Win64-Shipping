// WidgetBlueprintGeneratedClass WaypointWidgetComponent.WaypointWidgetComponent_C
// Size: 0x280 (Inherited: 0x260)
struct UWaypointWidgetComponent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Distance; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x278(0x08)

	void SetDistance(float Distance); // Function WaypointWidgetComponent.WaypointWidgetComponent_C.SetDistance // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeImage(enum class MarkTypeEnum Index); // Function WaypointWidgetComponent.WaypointWidgetComponent_C.ChangeImage // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_WaypointWidgetComponent(int32_t EntryPoint); // Function WaypointWidgetComponent.WaypointWidgetComponent_C.ExecuteUbergraph_WaypointWidgetComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

