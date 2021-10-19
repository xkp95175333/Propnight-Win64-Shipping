// BlueprintGeneratedClass LootboxShop.LootboxShop_C
// Size: 0x375 (Inherited: 0x220)
struct ALootboxShop_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget1; // 0x228(0x08)
	struct UWidgetComponent* Widget; // 0x230(0x08)
	struct USceneComponent* IconPoint; // 0x238(0x08)
	struct UFMODAudioComponent* FMODAudioLoop; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct UFMODAudioComponent* FMODAudioCloseDoor; // 0x250(0x08)
	struct UFMODAudioComponent* FMODAudioBeep; // 0x258(0x08)
	struct UFMODAudioComponent* FMODAudioLever; // 0x260(0x08)
	struct UStaticMeshComponent* LeverArm; // 0x268(0x08)
	struct UStaticMeshComponent* DownDoor; // 0x270(0x08)
	struct UStaticMeshComponent* UpDoor; // 0x278(0x08)
	struct USceneComponent* SpawnItemPoint; // 0x280(0x08)
	struct UStaticMeshComponent* Machine; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct FName> ItemsName; // 0x298(0x10)
	struct TArray<struct FName> RarityName; // 0x2a8(0x10)
	struct TArray<float> ItemsChance; // 0x2b8(0x10)
	struct TArray<float> RarityChance; // 0x2c8(0x10)
	float Random; // 0x2d8(0x04)
	int32_t FirstIndex; // 0x2dc(0x04)
	int32_t SecondIndex; // 0x2e0(0x04)
	int32_t TempInt; // 0x2e4(0x04)
	struct FName GetItemName; // 0x2e8(0x08)
	struct FName GetRarityName; // 0x2f0(0x08)
	struct FName DroppedItem; // 0x2f8(0x08)
	bool Block?; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct AActor* SpawnedItem; // 0x308(0x08)
	bool ItemSpawned?; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t NeedPoints; // 0x314(0x04)
	float DeltaTime; // 0x318(0x04)
	bool ArmDown?; // 0x31c(0x01)
	bool DoorOpen?; // 0x31d(0x01)
	char pad_31E[0x2]; // 0x31e(0x02)
	struct UMaterialInstanceDynamic* Lamp1; // 0x320(0x08)
	struct UMaterialInstanceDynamic* Lamp2; // 0x328(0x08)
	struct UMaterialInstanceDynamic* Lamp3; // 0x330(0x08)
	struct UMaterialInstanceDynamic* Lamp4; // 0x338(0x08)
	struct UMaterialInstanceDynamic* Lamp5; // 0x340(0x08)
	struct UMaterialInstanceDynamic* Lamp6; // 0x348(0x08)
	struct UMaterialInstanceDynamic* Moon1; // 0x350(0x08)
	struct UMaterialInstanceDynamic* Moon2; // 0x358(0x08)
	bool MaterialsReady?; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float UpLampsSpeed; // 0x364(0x04)
	float MoonLampSpeed; // 0x368(0x04)
	float RandomFlickerValue; // 0x36c(0x04)
	bool AllOff?; // 0x370(0x01)
	bool ItemDropped?; // 0x371(0x01)
	bool First?; // 0x372(0x01)
	bool Second?; // 0x373(0x01)
	bool Third?; // 0x374(0x01)

	void ReceiveBeginPlay(); // Function LootboxShop.LootboxShop_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function LootboxShop.LootboxShop_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SpawnRandomItem(struct AItemsBP_C* Class, struct FTransform SpawnTransform); // Function LootboxShop.LootboxShop_C.SpawnRandomItem // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartRollItem(); // Function LootboxShop.LootboxShop_C.StartRollItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockLootboxShopServer(bool Block?); // Function LootboxShop.LootboxShop_C.BlockLootboxShopServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlockLootboxShopMulticast(bool Block?); // Function LootboxShop.LootboxShop_C.BlockLootboxShopMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPointsSurvivor(struct AActor* Actor); // Function LootboxShop.LootboxShop_C.CheckPointsSurvivor // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnedItemDestroy(); // Function LootboxShop.LootboxShop_C.SpawnedItemDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ArmAnim(bool Down?); // Function LootboxShop.LootboxShop_C.ArmAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorAnim(bool Open?); // Function LootboxShop.LootboxShop_C.DoorAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AnimChanger(bool ArmDown?, bool DoorOpen?); // Function LootboxShop.LootboxShop_C.AnimChanger // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UpLamps(bool On?); // Function LootboxShop.LootboxShop_C.UpLamps // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateDynamicMaterial(); // Function LootboxShop.LootboxShop_C.CreateDynamicMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MoonLamps(bool On?); // Function LootboxShop.LootboxShop_C.MoonLamps // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastAnimChanger(bool ArmDown?, bool DoorOpen?); // Function LootboxShop.LootboxShop_C.MulticastAnimChanger // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerAnimChanger(bool ArmDown?, bool DoorOpen?); // Function LootboxShop.LootboxShop_C.ServerAnimChanger // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_LootboxShop(int32_t EntryPoint); // Function LootboxShop.LootboxShop_C.ExecuteUbergraph_LootboxShop // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

