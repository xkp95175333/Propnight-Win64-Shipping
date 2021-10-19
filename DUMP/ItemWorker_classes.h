// BlueprintGeneratedClass ItemWorker.ItemWorker_C
// Size: 0xf50 (Inherited: 0xb0)
struct UItemWorker_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t HealpackCharge; // 0xb8(0x04)
	bool IsPressed; // 0xbc(0x01)
	enum class ItemType ItemType; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct ASurvivorMasterBP_C* Player; // 0xc0(0x08)
	float HealDuration; // 0xc8(0x04)
	float SpentTime; // 0xcc(0x04)
	struct AItemsBPHand_C* CurrentItem; // 0xd0(0x08)
	bool IsHealing; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct ASurvivorMasterBP_C* HealTarget; // 0xe0(0x08)
	struct UFMODAudioComponent* HealSoundComponent; // 0xe8(0x08)
	struct TArray<struct FItemStructure> ItemsInventory; // 0xf0(0x10)
	struct FTransform SpawnItemLocation; // 0x100(0x30)
	struct AItemsBPHand_C* ClassItemToSpawn; // 0x130(0x08)
	int32_t InventoryIndex; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct AActor* Item; // 0x140(0x08)
	bool ItemFound?; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct AActor*> PickUpItems; // 0x150(0x10)
	struct UMaterialInstanceDynamic* SurvDynMat1; // 0x160(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat2; // 0x168(0x08)
	struct UMaterialInstanceDynamic* SurvDynMat3; // 0x170(0x08)
	struct UMaterialInstanceDynamic* SurvDynMatFPP; // 0x178(0x08)
	struct UMaterialInstanceDynamic* SurvDynMatInvis; // 0x180(0x08)
	struct UMaterialInstanceDynamic* SurvDynMatInvisFPP; // 0x188(0x08)
	bool TransitionOn; // 0x190(0x01)
	bool TransitionOff; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	float TransitionTime; // 0x194(0x04)
	float TurnOffDuration; // 0x198(0x04)
	float TurnOnDuration; // 0x19c(0x04)
	float InvisRefractionZero; // 0x1a0(0x04)
	float InvisRefractionFPP; // 0x1a4(0x04)
	float InvisRefractionTPP; // 0x1a8(0x04)
	float Float1; // 0x1ac(0x04)
	float ErodeSubtractDef; // 0x1b0(0x04)
	float CurrentTimerInvis; // 0x1b4(0x04)
	bool Casted?; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FPostProcessSettings postProcessNormal; // 0x1c0(0x550)
	struct FPostProcessSettings postProcessMonochrome; // 0x710(0x550)
	float TimerInvis; // 0xc60(0x04)
	char pad_C64[0x4]; // 0xc64(0x04)
	struct ALootboxShop_C* LootboxShop; // 0xc68(0x08)
	bool CanUsePicklock?; // 0xc70(0x01)
	char pad_C71[0x3]; // 0xc71(0x03)
	int32_t SkillCheckCount; // 0xc74(0x04)
	float DeltaSecond; // 0xc78(0x04)
	float CurrentPicklockProgress; // 0xc7c(0x04)
	float FullPicklockProgress; // 0xc80(0x04)
	bool Block?; // 0xc84(0x01)
	bool UsePicklock?; // 0xc85(0x01)
	char pad_C86[0x2]; // 0xc86(0x02)
	struct FText PicklockText; // 0xc88(0x18)
	bool ItemTake?; // 0xca0(0x01)
	char pad_CA1[0x7]; // 0xca1(0x07)
	struct FItemStructure Medic; // 0xca8(0x28)
	struct FItemStructure Reporter; // 0xcd0(0x28)
	struct FItemStructure Alchemist; // 0xcf8(0x28)
	struct FItemStructure Gamer; // 0xd20(0x28)
	struct FItemStructure Apprentice; // 0xd48(0x28)
	struct FItemStructure Thief; // 0xd70(0x28)
	bool TakeAnim?; // 0xd98(0x01)
	char pad_D99[0x7]; // 0xd99(0x07)
	struct FText UseItemText; // 0xda0(0x18)
	struct FText SelfHealText; // 0xdb8(0x18)
	struct FText ItemName; // 0xdd0(0x18)
	bool ItemSwap?; // 0xde8(0x01)
	char pad_DE9[0x7]; // 0xde9(0x07)
	struct ALootBox_C* Lotbox; // 0xdf0(0x08)
	bool DropItemBlock?; // 0xdf8(0x01)
	bool FirstItem?; // 0xdf9(0x01)
	char pad_DFA[0x6]; // 0xdfa(0x06)
	struct FItemStructure Slot1; // 0xe00(0x28)
	struct FItemStructure Slot2; // 0xe28(0x28)
	struct FItemStructure Slot3; // 0xe50(0x28)
	int32_t TempInt; // 0xe78(0x04)
	char pad_E7C[0x4]; // 0xe7c(0x04)
	struct FItemStructure TempDrop; // 0xe80(0x28)
	bool FlashlightCanUse?; // 0xea8(0x01)
	char pad_EA9[0x7]; // 0xea9(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> SurvDynMaterialsTPP; // 0xeb0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> SurvDynMaterialsFPP; // 0xec0(0x10)
	bool HoudiniPerk?; // 0xed0(0x01)
	char pad_ED1[0x7]; // 0xed1(0x07)
	struct FText HoudiniText; // 0xed8(0x18)
	struct FItemStructure CurrentSlot; // 0xef0(0x28)
	bool InventoryFull?; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	struct AActor* ItemMesh; // 0xf20(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MeshMaterInst; // 0xf28(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MeshInvisMaterInst; // 0xf38(0x10)
	struct AKillerMasterBP_C* StunKiller; // 0xf48(0x08)

	void SetItem(); // Function ItemWorker.ItemWorker_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItem(struct AActor* ItemClass, struct APawn* Pawn, int32_t Index, bool OnlySpawnInventory?); // Function ItemWorker.ItemWorker_C.SpawnItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetItemToLastIndex(); // Function ItemWorker.ItemWorker_C.SetItemToLastIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function ItemWorker.ItemWorker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function ItemWorker.ItemWorker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ServerHealSelf(struct ASurvivorMasterBP_C* Survivor, bool Legendary?); // Function ItemWorker.ItemWorker_C.ServerHealSelf // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeWithE(); // Function ItemWorker.ItemWorker_C.InvokeWithE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Release(); // Function ItemWorker.ItemWorker_C.Release // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeWithQ(); // Function ItemWorker.ItemWorker_C.InvokeWithQ // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealSelf(); // Function ItemWorker.ItemWorker_C.HealSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OwningClientHealSelf(); // Function ItemWorker.ItemWorker_C.OwningClientHealSelf // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerAddHealthToPlayer(struct ASurvivorMasterBP_C* Player, int32_t Health, bool ScoreOff?); // Function ItemWorker.ItemWorker_C.ServerAddHealthToPlayer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopHealSelf(); // Function ItemWorker.ItemWorker_C.StopHealSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerStopHealSelf(bool DestroyHealpack, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.ServerStopHealSelf // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OwningClientStopHealSelf(); // Function ItemWorker.ItemWorker_C.OwningClientStopHealSelf // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyItem(struct ASurvivorMasterBP_C* Player, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.DestroyItem // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealScore(bool Other?, struct AActor* Surv); // Function ItemWorker.ItemWorker_C.HealScore // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastHealSelfStart(struct ASurvivorMasterBP_C* Survivor, struct ASurvivorMasterBP_C* SurvivorSelf, bool SelfHealing?); // Function ItemWorker.ItemWorker_C.MulticastHealSelfStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastHealSelfStop(struct ASurvivorMasterBP_C* Survivor, struct ASurvivorMasterBP_C* SurvivorSelf); // Function ItemWorker.ItemWorker_C.MulticastHealSelfStop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void flashlight(struct ASurvivorMasterBP_C* Player); // Function ItemWorker.ItemWorker_C.flashlight // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastFlashlight(struct AKillerMasterBP_C* Target, struct ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int32_t IndexToRemove, bool KillerFlashed?); // Function ItemWorker.ItemWorker_C.MulticastFlashlight // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerFlashlight(struct AKillerMasterBP_C* Target, struct ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int32_t IndexToRemove, bool KillerFlashed?); // Function ItemWorker.ItemWorker_C.ServerFlashlight // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FlashlightSpotLight(struct ASurvivorMasterBP_C* Player); // Function ItemWorker.ItemWorker_C.FlashlightSpotLight // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EnergyDrink(); // Function ItemWorker.ItemWorker_C.EnergyDrink // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropAllItems(struct FTransform SpawnLocation); // Function ItemWorker.ItemWorker_C.DropAllItems // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnPickUpItem(struct FItemStructure Item, struct FTransform SpawnTransform, bool Death?); // Function ItemWorker.ItemWorker_C.SpawnPickUpItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerSpawnPickUpItem(struct FItemStructure Item, struct FTransform SpawnLocation); // Function ItemWorker.ItemWorker_C.ServerSpawnPickUpItem // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyPickup(struct AActor* DestroyItem); // Function ItemWorker.ItemWorker_C.DestroyPickup // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyPickupMulticast(struct AActor* DestroyItem); // Function ItemWorker.ItemWorker_C.DestroyPickupMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ToSpawnItem(); // Function ItemWorker.ItemWorker_C.ToSpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItemServer(struct AItemsBPHand_C* ItemToBeSpawned, struct APawn* Pawn, int32_t Index, bool TakeAnim?, struct FItemStructure Slot1, struct FItemStructure Slot2, struct FItemStructure Slot3, bool OnlySpawnInventory?); // Function ItemWorker.ItemWorker_C.SpawnItemServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnItemMulticast(struct AActor* Item, struct APawn* Pawn, int32_t Index, bool TakeAnim?, struct FItemStructure Slot1, struct FItemStructure Slot2, struct FItemStructure Slot3, bool OnlySpawnInventory?); // Function ItemWorker.ItemWorker_C.SpawnItemMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokePickUpItem(); // Function ItemWorker.ItemWorker_C.InvokePickUpItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemUsed(int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.ItemUsed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItem(); // Function ItemWorker.ItemWorker_C.HideItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ShowItem(); // Function ItemWorker.ItemWorker_C.ShowItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeFirstSlot(); // Function ItemWorker.ItemWorker_C.InvokeFirstSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeSecondSlot(); // Function ItemWorker.ItemWorker_C.InvokeSecondSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeThirdSlot(); // Function ItemWorker.ItemWorker_C.InvokeThirdSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemHide(); // Function ItemWorker.ItemWorker_C.ItemHide // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemHideServer(); // Function ItemWorker.ItemWorker_C.ItemHideServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemHideMulticast(); // Function ItemWorker.ItemWorker_C.ItemHideMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemsImpulse(); // Function ItemWorker.ItemWorker_C.ItemsImpulse // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropItem(int32_t ItemIndex, struct FTransform DropPosition, struct FItemStructure Inventory); // Function ItemWorker.ItemWorker_C.DropItem // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalDropItem(bool FullInventoryAndDrop); // Function ItemWorker.ItemWorker_C.LocalDropItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItemHand(); // Function ItemWorker.ItemWorker_C.HideItemHand // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerEnergyDrink(float Time, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.ServerEnergyDrink // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastEnergyDrink(float Time, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.MulticastEnergyDrink // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvulnerabilityPotion(); // Function ItemWorker.ItemWorker_C.InvulnerabilityPotion // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerInvulnerabilityPotion(float Time, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.ServerInvulnerabilityPotion // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastInvulnerabilityPotion(float Time, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.MulticastInvulnerabilityPotion // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMaterialsAndCreateDynMaterials(); // Function ItemWorker.ItemWorker_C.GetMaterialsAndCreateDynMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvisUpdate(float DeltaTime); // Function ItemWorker.ItemWorker_C.InvisUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffServ(); // Function ItemWorker.ItemWorker_C.AstralOffServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffMulti(); // Function ItemWorker.ItemWorker_C.AstralOffMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOffLocal(); // Function ItemWorker.ItemWorker_C.AstralOffLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOnLocal(float TimerInvis, bool CD?); // Function ItemWorker.ItemWorker_C.AstralOnLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOnServer(float TimerInvis, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.AstralOnServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralOnMulti(float TimerInvis, bool CD?, int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.AstralOnMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KeymasterBook(); // Function ItemWorker.ItemWorker_C.KeymasterBook // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemDestroyedLootboxShopServer(struct ALootboxShop_C* Actor); // Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemDestroyedLootboxShopMulticast(struct ALootboxShop_C* Actor); // Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Picklock(); // Function ItemWorker.ItemWorker_C.Picklock // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockSoundServer(bool Loop?, bool Success?); // Function ItemWorker.ItemWorker_C.PicklockSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockSoundMulticast(bool Loop?, bool Success?); // Function ItemWorker.ItemWorker_C.PicklockSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPicklock(); // Function ItemWorker.ItemWorker_C.CheckPicklock // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockSound(bool Loop?, bool Success?); // Function ItemWorker.ItemWorker_C.PicklockSound // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkillCheckMain(); // Function ItemWorker.ItemWorker_C.SkillCheckMain // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckActiveSkillCheck(); // Function ItemWorker.ItemWorker_C.CheckActiveSkillCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckPressed(); // Function ItemWorker.ItemWorker_C.CheckPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedServer(struct AActor* Target); // Function ItemWorker.ItemWorker_C.FailedServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level1Server(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level1Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level2Server(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level2Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level3Server(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level3Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level4Server(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level4Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailedMulticast(struct AActor* Target); // Function ItemWorker.ItemWorker_C.FailedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level1Multicast(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level1Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level2Multicast(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level2Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level3Multicast(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level3Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Level4Multicast(struct AActor* Target); // Function ItemWorker.ItemWorker_C.Level4Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockUsed(); // Function ItemWorker.ItemWorker_C.PicklockUsed // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockEnd(); // Function ItemWorker.ItemWorker_C.PicklockEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockShowText(); // Function ItemWorker.ItemWorker_C.PicklockShowText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockEndServer(); // Function ItemWorker.ItemWorker_C.PicklockEndServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockEndMulticast(); // Function ItemWorker.ItemWorker_C.PicklockEndMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundLocal(bool Loop?, bool In?); // Function ItemWorker.ItemWorker_C.AstralSoundLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundServer(bool Loop?, bool In?); // Function ItemWorker.ItemWorker_C.AstralSoundServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AstralSoundMulticast(bool Loop?, bool In?); // Function ItemWorker.ItemWorker_C.AstralSoundMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvAstralSkill(float TimerInvis); // Function ItemWorker.ItemWorker_C.SurvAstralSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvClassAddItem(enum class SurvClass SurvClass); // Function ItemWorker.ItemWorker_C.SurvClassAddItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpawnClassItem(bool OnlySpawnInventory?); // Function ItemWorker.ItemWorker_C.SpawnClassItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideTexts(); // Function ItemWorker.ItemWorker_C.HideTexts // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DestroyItemMulticast(int32_t IndexToRemove); // Function ItemWorker.ItemWorker_C.DestroyItemMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemDropped(); // Function ItemWorker.ItemWorker_C.ItemDropped // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemDestroyLootboxServ(struct ALootBox_C* NewParam); // Function ItemWorker.ItemWorker_C.ItemDestroyLootboxServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ItemDestroyLootboxMulti(struct ALootBox_C* NewParam); // Function ItemWorker.ItemWorker_C.ItemDestroyLootboxMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideItemText(); // Function ItemWorker.ItemWorker_C.HideItemText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeItemPosition(bool FPP?); // Function ItemWorker.ItemWorker_C.ChangeItemPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HealpackChargesAdd(int32_t Charges); // Function ItemWorker.ItemWorker_C.HealpackChargesAdd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockChargesAdd(int32_t Charges); // Function ItemWorker.ItemWorker_C.PicklockChargesAdd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopProgressChairServ(bool Pause?, struct AHypnoChairBP_C* Chair); // Function ItemWorker.ItemWorker_C.StopProgressChairServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StopProgressChairMulti(bool Pause?, struct AHypnoChairBP_C* Chair); // Function ItemWorker.ItemWorker_C.StopProgressChairMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckKillingTimeChair(); // Function ItemWorker.ItemWorker_C.CheckKillingTimeChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PicklockHideText(); // Function ItemWorker.ItemWorker_C.PicklockHideText // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OtherSurvHealLerp(); // Function ItemWorker.ItemWorker_C.OtherSurvHealLerp // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FlashlightCheck(); // Function ItemWorker.ItemWorker_C.FlashlightCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChrisBoost(float Time); // Function ItemWorker.ItemWorker_C.ChrisBoost // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokeNextItem(); // Function ItemWorker.ItemWorker_C.InvokeNextItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InvokePrevItem(); // Function ItemWorker.ItemWorker_C.InvokePrevItem // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActivateSlot(int32_t SlotIndex); // Function ItemWorker.ItemWorker_C.ActivateSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DeactivateSlot(); // Function ItemWorker.ItemWorker_C.DeactivateSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateItemMesh(struct AActor* Class, bool Destroy?, bool Delay?); // Function ItemWorker.ItemWorker_C.CreateItemMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DropItemSlot(int32_t ItemId); // Function ItemWorker.ItemWorker_C.DropItemSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerSound(bool Play?); // Function ItemWorker.ItemWorker_C.ServerSound // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastSound(bool Play?); // Function ItemWorker.ItemWorker_C.MulticastSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MulticastSoundOnce(); // Function ItemWorker.ItemWorker_C.MulticastSoundOnce // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServerSoundOnce(); // Function ItemWorker.ItemWorker_C.ServerSoundOnce // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ItemWorker(int32_t EntryPoint); // Function ItemWorker.ItemWorker_C.ExecuteUbergraph_ItemWorker // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

