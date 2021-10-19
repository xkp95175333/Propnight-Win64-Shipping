// BlueprintGeneratedClass PS_PropHunt.PS_PropHunt_C
// Size: 0x4fe (Inherited: 0x320)
struct APS_PropHunt_C : APlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool IsDead; // 0x330(0x01)
	bool IsKiller; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FString NamePS; // 0x338(0x10)
	enum class E_SurvivorStatus Status; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FString NickNamePS; // 0x350(0x10)
	int32_t KillerType; // 0x360(0x04)
	int32_t PlayerScore; // 0x364(0x04)
	struct FString ScoreText; // 0x368(0x10)
	enum class SurvClass SurvClass; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UTexture2D* AvatarPS; // 0x380(0x08)
	int32_t PlayerFinalScore; // 0x388(0x04)
	bool Ready?; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct FPlayerInfo Info; // 0x390(0x18)
	int32_t SurvSkinID; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<int32_t> SurvSkinArray; // 0x3b0(0x10)
	int32_t Exp; // 0x3c0(0x04)
	int32_t Lvl; // 0x3c4(0x04)
	struct TArray<struct AActor*> AliveSurvivors; // 0x3c8(0x10)
	int32_t Scores; // 0x3d8(0x04)
	int32_t MaxScore_AlarmGame; // 0x3dc(0x04)
	int32_t MaxScore_REVIVE; // 0x3e0(0x04)
	int32_t MaxScore_OutChair; // 0x3e4(0x04)
	int32_t MaxScore_OutChair_Self; // 0x3e8(0x04)
	int32_t MaxScore_OutChair_Self_PickLock; // 0x3ec(0x04)
	int32_t MaxScore_OutGrip; // 0x3f0(0x04)
	int32_t MaxScore_FLASH; // 0x3f4(0x04)
	int32_t MaxScore_HealALLY; // 0x3f8(0x04)
	int32_t MaxScore_HealSELF; // 0x3fc(0x04)
	int32_t MaxScore_HIT; // 0x400(0x04)
	int32_t MaxScore_DOWNED; // 0x404(0x04)
	int32_t MaxScore_CHAIR; // 0x408(0x04)
	int32_t MaxScore_Stun; // 0x40c(0x04)
	int32_t MAXSCOREBLOCK_AlarmGame; // 0x410(0x04)
	int32_t MAXSCOREBLOCK_REVIVE; // 0x414(0x04)
	int32_t MAXSCOREBLOCK_OutChair; // 0x418(0x04)
	int32_t MAXSCOREBLOCK_OutChair_Self; // 0x41c(0x04)
	int32_t MAXSCOREBLOCK_OutChair_Self_PickLock; // 0x420(0x04)
	int32_t MAXSCOREBLOCK_OutGrip; // 0x424(0x04)
	int32_t MAXSCOREBLOCK_FLASH; // 0x428(0x04)
	int32_t MAXSCOREBLOCK_HealALLY; // 0x42c(0x04)
	int32_t MAXSCOREBLOCK_HealSELF; // 0x430(0x04)
	int32_t MAXSCOREBLOCK_Stun; // 0x434(0x04)
	int32_t MAXSCOREBLOCK_HIT; // 0x438(0x04)
	int32_t MAXSCOREBLOCK_DOWNED; // 0x43c(0x04)
	int32_t MAXSCOREBLOCK_CHAIR; // 0x440(0x04)
	int32_t KillScoreCounter; // 0x444(0x04)
	enum class SurvChars SurvChar; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	int32_t Assists; // 0x44c(0x04)
	int32_t ObjectivesDone; // 0x450(0x04)
	int32_t DamageTaken; // 0x454(0x04)
	int32_t DamageDone; // 0x458(0x04)
	int32_t PointsGained; // 0x45c(0x04)
	enum class SurvCategory SurvCategory; // 0x460(0x01)
	bool TopCategory?; // 0x461(0x01)
	enum class KillerCategory KillerCategory; // 0x462(0x01)
	char pad_463[0x1]; // 0x463(0x01)
	int32_t CategoryValue; // 0x464(0x04)
	int32_t SurvivalTime; // 0x468(0x04)
	int32_t Stuns; // 0x46c(0x04)
	int32_t Kills; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<enum class SurvCategory> SurvAllCategory; // 0x478(0x10)
	struct TArray<enum class KillerCategory> KillerAllCategory; // 0x488(0x10)
	struct TArray<int32_t> AllCategoryValue; // 0x498(0x10)
	bool TopSeveralCategory?; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct APawn* SwapSender; // 0x4b0(0x08)
	int32_t Alarms; // 0x4b8(0x04)
	int32_t TempRandom; // 0x4bc(0x04)
	int32_t Likes; // 0x4c0(0x04)
	enum class KillerCategory KillerSecondCategory; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	int32_t SecondCategoryValue; // 0x4c8(0x04)
	enum class SurvCategory SurvSecondCategory; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct TArray<struct APawn*> SwapSenders; // 0x4d0(0x10)
	int32_t DistanceTraveled; // 0x4e0(0x04)
	enum class KillerType KillerChar; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	float BonusCounter; // 0x4e8(0x04)
	int32_t MvpCategory; // 0x4ec(0x04)
	int32_t MvpAllCategory; // 0x4f0(0x04)
	enum class SurvCategory MvpCategoryEnum; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	int32_t ID; // 0x4f8(0x04)
	bool IsTalking; // 0x4fc(0x01)
	bool SkinCheat; // 0x4fd(0x01)

	void HasAnyPawnSwap(bool HasAny); // Function PS_PropHunt.PS_PropHunt_C.HasAnyPawnSwap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void HasPawnSwap(struct APawn* Pawn, bool Has); // Function PS_PropHunt.PS_PropHunt_C.HasPawnSwap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void ClearSwapSenders(); // Function PS_PropHunt.PS_PropHunt_C.ClearSwapSenders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddSwapSender(struct APawn* Sender); // Function PS_PropHunt.PS_PropHunt_C.AddSwapSender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckMode(bool Propnight?); // Function PS_PropHunt.PS_PropHunt_C.CheckMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnRep_SurvSkinID(); // Function PS_PropHunt.PS_PropHunt_C.OnRep_SurvSkinID // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetStatus(enum class E_SurvivorStatus Status); // Function PS_PropHunt.PS_PropHunt_C.SetStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmNormal(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.AlarmNormal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlmostPerfect(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.AlmostPerfect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillScore(); // Function PS_PropHunt.PS_PropHunt_C.KillScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutFromHandsScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.OutFromHandsScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunScore(struct AActor* Surv, bool IsGrabbed?); // Function PS_PropHunt.PS_PropHunt_C.StunScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChairScore(struct AActor* Killer); // Function PS_PropHunt.PS_PropHunt_C.ChairScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CrawlScore(struct AActor* Killer); // Function PS_PropHunt.PS_PropHunt_C.CrawlScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HitScore(struct AActor* Killer, int32_t Damage); // Function PS_PropHunt.PS_PropHunt_C.HitScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvHealScore(struct AActor* Surv, bool Other?); // Function PS_PropHunt.PS_PropHunt_C.SurvHealScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FlashScore(struct AActor* Surv, bool IsGrabbed?); // Function PS_PropHunt.PS_PropHunt_C.FlashScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DoorOpenScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.DoorOpenScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExitScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.ExitScore // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ZeroScoreSendText(struct AActor* Actor); // Function PS_PropHunt.PS_PropHunt_C.ZeroScoreSendText // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutChairScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.OutChairScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReanimateScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.ReanimateScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutChairSelfScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.OutChairSelfScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmSuper(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.AlarmSuper // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmGood(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.AlarmGood // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmScore(struct TArray<struct AActor*> Surfs); // Function PS_PropHunt.PS_PropHunt_C.AlarmScore // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ScoreCalc(struct AActor* Surv, struct FString ScoreText); // Function PS_PropHunt.PS_PropHunt_C.ScoreCalc // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OutChairPickLockScore(struct AActor* Surv); // Function PS_PropHunt.PS_PropHunt_C.OutChairPickLockScore // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DamageTakenEvent(int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.DamageTakenEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PointsGainedEvent(int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.PointsGainedEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AssistsEvent(); // Function PS_PropHunt.PS_PropHunt_C.AssistsEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ObjectivesDoneEvent(); // Function PS_PropHunt.PS_PropHunt_C.ObjectivesDoneEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DamageDoneEvent(int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.DamageDoneEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSurvCategory(enum class SurvCategory Type, int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.SetSurvCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerCategory(enum class KillerCategory Type, int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.SetKillerCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetSurvTopCategory(enum class SurvCategory SurvCategory); // Function PS_PropHunt.PS_PropHunt_C.SetSurvTopCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetKillerTopCategory(enum class KillerCategory KillerCategory); // Function PS_PropHunt.PS_PropHunt_C.SetKillerTopCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvivalTimeEvent(int32_t Count); // Function PS_PropHunt.PS_PropHunt_C.SurvivalTimeEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StunsEvent(); // Function PS_PropHunt.PS_PropHunt_C.StunsEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillsEvent(); // Function PS_PropHunt.PS_PropHunt_C.KillsEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinServ(int32_t I, struct ASurvivorMasterBP_C* Surv, struct FString Text); // Function PS_PropHunt.PS_PropHunt_C.CoinServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CoinMulti(int32_t I, struct ASurvivorMasterBP_C* syrv, struct FString Text); // Function PS_PropHunt.PS_PropHunt_C.CoinMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvCategory(); // Function PS_PropHunt.PS_PropHunt_C.GetSurvCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetKillerCategory(); // Function PS_PropHunt.PS_PropHunt_C.GetKillerCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayerLikes(); // Function PS_PropHunt.PS_PropHunt_C.PlayerLikes // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvSecondCategory(); // Function PS_PropHunt.PS_PropHunt_C.GetSurvSecondCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetKillerSecondCategory(); // Function PS_PropHunt.PS_PropHunt_C.GetKillerSecondCategory // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DistanceTraveledEvent(); // Function PS_PropHunt.PS_PropHunt_C.DistanceTraveledEvent // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropServer(int32_t Points, struct ASurvivorMasterBP_C* Surv); // Function PS_PropHunt.PS_PropHunt_C.CursedPropServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CursedPropMulticast(int32_t Points, struct ASurvivorMasterBP_C* Surv); // Function PS_PropHunt.PS_PropHunt_C.CursedPropMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FartCoin(struct AActor* Actor); // Function PS_PropHunt.PS_PropHunt_C.FartCoin // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeamScoreAddCoins(struct AActor* Actor, int32_t Scores); // Function PS_PropHunt.PS_PropHunt_C.TeamScoreAddCoins // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MvpSurv(); // Function PS_PropHunt.PS_PropHunt_C.MvpSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function PS_PropHunt.PS_PropHunt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function PS_PropHunt.PS_PropHunt_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ApplyName(struct FString Name, struct UTexture2D* Avatar); // Function PS_PropHunt.PS_PropHunt_C.ApplyName // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LocalSkinLobby(enum class SurvChars Char); // Function PS_PropHunt.PS_PropHunt_C.LocalSkinLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServSkinLobby(int32_t ID); // Function PS_PropHunt.PS_PropHunt_C.ServSkinLobby // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MultiSkinLobby(int32_t ID); // Function PS_PropHunt.PS_PropHunt_C.MultiSkinLobby // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ActiveVoice(bool Active); // Function PS_PropHunt.PS_PropHunt_C.ActiveVoice // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinCheatPSLocal(); // Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SkinCheatPSServer(bool B); // Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PS_PropHunt(int32_t EntryPoint); // Function PS_PropHunt.PS_PropHunt_C.ExecuteUbergraph_PS_PropHunt // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

