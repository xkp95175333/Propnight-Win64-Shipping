// BlueprintGeneratedClass ItemsBP.ItemsBP_C
// Size: 0x2f0 (Inherited: 0x220)
struct AItemsBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Item; // 0x228(0x08)
	struct USceneComponent* ItemPlace; // 0x230(0x08)
	struct UCapsuleComponent* ItemCapsule; // 0x238(0x08)
	struct UPointLightComponent* PointLight; // 0x240(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	float Timeline_0_NewTrack_0_CAD16150485926BBF07399BEB76406FB; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CAD16150485926BBF07399BEB76406FB; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	struct FItemStructure ItemVar; // 0x270(0x28)
	float EaseAlpha; // 0x298(0x04)
	float LocalZ; // 0x29c(0x04)
	float DefaultLightIntensity; // 0x2a0(0x04)
	bool EaseUp; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	int32_t ItemSpawnIndex; // 0x2a8(0x04)
	bool Block?; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float TempFloat; // 0x2b0(0x04)
	int32_t TempInt; // 0x2b4(0x04)
	int32_t Temp2Int; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FName> ItemsName; // 0x2c0(0x10)
	int32_t Random; // 0x2d0(0x04)
	float RollCount; // 0x2d4(0x04)
	bool LootboxSpawnedItem?; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct ALootboxShop_C* LootboxShopActor; // 0x2e0(0x08)
	struct ALootBox_C* LootboxActor; // 0x2e8(0x08)

	void Timeline_0__FinishedFunc(); // Function ItemsBP.ItemsBP_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function ItemsBP.ItemsBP_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function ItemsBP.ItemsBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function ItemsBP.ItemsBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ImpulseItem(); // Function ItemsBP.ItemsBP_C.ImpulseItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropImpulseItem(struct FVector Impulse); // Function ItemsBP.ItemsBP_C.DropImpulseItem // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RandomSkin(float DeltaTime); // Function ItemsBP.ItemsBP_C.RandomSkin // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootBox(struct ALootboxShop_C* Actor); // Function ItemsBP.ItemsBP_C.LootBox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootBoxTake(struct ALootBox_C* NewParam, struct FVector NewParam2, struct FVector NewParam3); // Function ItemsBP.ItemsBP_C.LootBoxTake // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UberEvent(struct FVector NewParam, struct FVector NewParam2); // Function ItemsBP.ItemsBP_C.UberEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ItemsBP(int32_t EntryPoint); // Function ItemsBP.ItemsBP_C.ExecuteUbergraph_ItemsBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

