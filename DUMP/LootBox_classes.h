// BlueprintGeneratedClass LootBox.LootBox_C
// Size: 0x478 (Inherited: 0x220)
struct ALootBox_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere; // 0x228(0x08)
	struct UTextRenderComponent* TextRender; // 0x230(0x08)
	struct UArrowComponent* Arrow; // 0x238(0x08)
	struct UFMODAudioComponent* CurseSound; // 0x240(0x08)
	struct UPointLightComponent* CurseLight; // 0x248(0x08)
	struct UFMODAudioComponent* FMODAudio4; // 0x250(0x08)
	struct UFMODAudioComponent* FMODAudio3; // 0x258(0x08)
	struct UBoxComponent* InteractCollision; // 0x260(0x08)
	struct UParticleSystemComponent* ParticleOpen; // 0x268(0x08)
	struct UParticleSystemComponent* ParticleClosed; // 0x270(0x08)
	struct USceneComponent* Scene1; // 0x278(0x08)
	struct UPointLightComponent* PointLight; // 0x280(0x08)
	struct UParticleSystemComponent* ParticleBase; // 0x288(0x08)
	struct UFMODAudioComponent* FMODAudio2; // 0x290(0x08)
	struct UFMODAudioComponent* FMODAudio1; // 0x298(0x08)
	struct UFMODAudioComponent* FmodAudio; // 0x2a0(0x08)
	struct UStaticMeshComponent* Cap; // 0x2a8(0x08)
	struct USceneComponent* Scene; // 0x2b0(0x08)
	struct UStaticMeshComponent* Lock; // 0x2b8(0x08)
	struct UStaticMeshComponent* Tongue; // 0x2c0(0x08)
	struct UStaticMeshComponent* Box; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	float T_LightPulse_Intensity_FD5C180C4B9A99344442349B037C880D; // 0x2d8(0x04)
	enum class ETimelineDirection T_LightPulse__Direction_FD5C180C4B9A99344442349B037C880D; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* T_LightPulse; // 0x2e0(0x08)
	float T_InsideShine_Intensity_28828CFD456256C3FBB3A6AFA599EA25; // 0x2e8(0x04)
	enum class ETimelineDirection T_InsideShine__Direction_28828CFD456256C3FBB3A6AFA599EA25; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* T_InsideShine; // 0x2f0(0x08)
	float T_OpenLootbox_OpenCap_E9A3FE3D4BF5DE0D51FC96B5AC9D5136; // 0x2f8(0x04)
	float T_OpenLootbox_OpenTongue_E9A3FE3D4BF5DE0D51FC96B5AC9D5136; // 0x2fc(0x04)
	enum class ETimelineDirection T_OpenLootbox__Direction_E9A3FE3D4BF5DE0D51FC96B5AC9D5136; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UTimelineComponent* T_OpenLootbox; // 0x308(0x08)
	float T_CloseLootbox_CloseTongue_809797E34D6473C0DFD04A9AF09A8AAD; // 0x310(0x04)
	float T_CloseLootbox_CloseCap_809797E34D6473C0DFD04A9AF09A8AAD; // 0x314(0x04)
	enum class ETimelineDirection T_CloseLootbox__Direction_809797E34D6473C0DFD04A9AF09A8AAD; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UTimelineComponent* T_CloseLootbox; // 0x320(0x08)
	float T_NotEnoughMoney_LockValue_CD045F8344E6D66401BD0A9B1D892F30; // 0x328(0x04)
	enum class ETimelineDirection T_NotEnoughMoney__Direction_CD045F8344E6D66401BD0A9B1D892F30; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent* T_NotEnoughMoney; // 0x330(0x08)
	bool bLocked; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t NeedPoints; // 0x33c(0x04)
	struct TArray<struct FName> ItemsName; // 0x340(0x10)
	struct TArray<float> ItemsChance; // 0x350(0x10)
	struct TArray<struct FName> RarityName; // 0x360(0x10)
	struct TArray<float> RarityChance; // 0x370(0x10)
	struct FName GetItemName; // 0x380(0x08)
	struct FName DroppedItem; // 0x388(0x08)
	int32_t TempInt; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct AActor* SpawnedItem; // 0x398(0x08)
	bool ItemSpawned?; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	int32_t FirstIndex; // 0x3a4(0x04)
	int32_t SecondIndex; // 0x3a8(0x04)
	float Random; // 0x3ac(0x04)
	struct FName GetRarityName; // 0x3b0(0x08)
	struct ASurvivorMasterBP_C* SurvRef; // 0x3b8(0x08)
	bool Chek; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UMaterialInstanceDynamic* InsideDynMat; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* LootDynMat; // 0x3d0(0x08)
	struct TArray<bool> ItemAccessDenied; // 0x3d8(0x10)
	struct TArray<int32_t> ItemsAmount; // 0x3e8(0x10)
	struct TArray<int32_t> ItemsAmountDropped; // 0x3f8(0x10)
	bool Cursed; // 0x408(0x01)
	bool Opened?; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	int32_t OpenCount; // 0x40c(0x04)
	int32_t CloseCount; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UDataTable* Data Table; // 0x418(0x08)
	struct UDataTable* Data Table Medkit; // 0x420(0x08)
	struct UDataTable* Data Table CommonItems; // 0x428(0x08)
	float ZLocalMin; // 0x430(0x04)
	float ZLocal; // 0x434(0x04)
	struct TArray<float> r3; // 0x438(0x10)
	int32_t I; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ASurvivorMasterBP_C* SREF; // 0x450(0x08)
	int32_t CountCoins; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FText C; // 0x460(0x18)

	void CoinAngle(float X, float Y, float Z); // Function LootBox.LootBox_C.CoinAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void T_OpenLootbox__FinishedFunc(); // Function LootBox.LootBox_C.T_OpenLootbox__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_OpenLootbox__UpdateFunc(); // Function LootBox.LootBox_C.T_OpenLootbox__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_CloseLootbox__FinishedFunc(); // Function LootBox.LootBox_C.T_CloseLootbox__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_CloseLootbox__UpdateFunc(); // Function LootBox.LootBox_C.T_CloseLootbox__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_NotEnoughMoney__FinishedFunc(); // Function LootBox.LootBox_C.T_NotEnoughMoney__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_NotEnoughMoney__UpdateFunc(); // Function LootBox.LootBox_C.T_NotEnoughMoney__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_InsideShine__FinishedFunc(); // Function LootBox.LootBox_C.T_InsideShine__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_InsideShine__UpdateFunc(); // Function LootBox.LootBox_C.T_InsideShine__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_LightPulse__FinishedFunc(); // Function LootBox.LootBox_C.T_LightPulse__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void T_LightPulse__UpdateFunc(); // Function LootBox.LootBox_C.T_LightPulse__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function LootBox.LootBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void InteractLootbox(struct AActor* Actor, bool OnlyMedkit?); // Function LootBox.LootBox_C.InteractLootbox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RollItem(enum class LootBoxRollType RollType); // Function LootBox.LootBox_C.RollItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenLootBox(enum class LootBoxRollType RollType, struct FString Nickname); // Function LootBox.LootBox_C.OpenLootBox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLootBox(); // Function LootBox.LootBox_C.CloseLootBox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OpenLootboxMulti(struct FString Nickname); // Function LootBox.LootBox_C.OpenLootboxMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Spawner(struct AActor* NewParam, struct FTransform NewParam2, struct FString NewParam3); // Function LootBox.LootBox_C.Spawner // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyItemLootbox(); // Function LootBox.LootBox_C.DestroyItemLootbox // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnerMulti(struct AActor* NewParam); // Function LootBox.LootBox_C.SpawnerMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxNotEnough(); // Function LootBox.LootBox_C.LootboxNotEnough // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LootboxNotEnoughMulti(); // Function LootBox.LootBox_C.LootboxNotEnoughMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItem(struct FString Nickname); // Function LootBox.LootBox_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ColorInside(struct FString Rarity); // Function LootBox.LootBox_C.ColorInside // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InsideShine(); // Function LootBox.LootBox_C.InsideShine // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Rendering(bool On?); // Function LootBox.LootBox_C.Rendering // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CurseLightON(bool On, float Delay); // Function LootBox.LootBox_C.CurseLightON // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DelayDropItem(); // Function LootBox.LootBox_C.DelayDropItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LegendaryItem(struct FString Object); // Function LootBox.LootBox_C.LegendaryItem // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MableSkill(struct ASurvivorMasterBP_C* Surv); // Function LootBox.LootBox_C.MableSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnCoins(struct ASurvivorMasterBP_C* Surv); // Function LootBox.LootBox_C.SpawnCoins // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function LootBox.LootBox_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SurvOverlap(); // Function LootBox.LootBox_C.SurvOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function LootBox.LootBox_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function LootBox.LootBox_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x132e1a0
	void StartGameOverlap(); // Function LootBox.LootBox_C.StartGameOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SphereRadiusStartGame(); // Function LootBox.LootBox_C.SphereRadiusStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_LootBox(int32_t EntryPoint); // Function LootBox.LootBox_C.ExecuteUbergraph_LootBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

