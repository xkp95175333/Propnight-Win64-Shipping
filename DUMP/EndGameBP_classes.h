// BlueprintGeneratedClass EndGameBP.EndGameBP_C
// Size: 0x470 (Inherited: 0x220)
struct AEndGameBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URectLightComponent* RectLight6; // 0x228(0x08)
	struct URectLightComponent* RectLight8; // 0x230(0x08)
	struct USceneComponent* KillerPoint; // 0x238(0x08)
	struct URectLightComponent* RectLight5; // 0x240(0x08)
	struct UBoxComponent* OverlapHiddenActors; // 0x248(0x08)
	struct URectLightComponent* RectLight3; // 0x250(0x08)
	struct USceneComponent* NewCameraEndPoint; // 0x258(0x08)
	struct USceneComponent* NewCameraPoint; // 0x260(0x08)
	struct USceneComponent* EndPoint2Killer; // 0x268(0x08)
	struct USceneComponent* EndPointKiller; // 0x270(0x08)
	struct USceneComponent* StartPointKiller; // 0x278(0x08)
	struct USceneComponent* Surv6Point; // 0x280(0x08)
	struct USceneComponent* Surv7Point; // 0x288(0x08)
	struct USceneComponent* Surv5Point; // 0x290(0x08)
	struct USceneComponent* Surv4Point; // 0x298(0x08)
	struct USceneComponent* Surv3Point; // 0x2a0(0x08)
	struct USceneComponent* Surv2Point; // 0x2a8(0x08)
	struct USceneComponent* KillerPoint3; // 0x2b0(0x08)
	struct USceneComponent* KillerPoint2; // 0x2b8(0x08)
	struct USceneComponent* Surv1Point; // 0x2c0(0x08)
	struct USceneComponent* PlayersPoints; // 0x2c8(0x08)
	struct USceneComponent* EndPoint; // 0x2d0(0x08)
	struct USceneComponent* EndPoint2; // 0x2d8(0x08)
	struct USceneComponent* LookPoint; // 0x2e0(0x08)
	struct USceneComponent* StartPoint; // 0x2e8(0x08)
	struct UCineCameraComponent* CineCamera; // 0x2f0(0x08)
	struct USceneComponent* CameraLoc; // 0x2f8(0x08)
	struct USkeletalMeshComponent* Killer1; // 0x300(0x08)
	struct USkeletalMeshComponent* Killer2; // 0x308(0x08)
	struct USkeletalMeshComponent* Killer3; // 0x310(0x08)
	struct USkeletalMeshComponent* Surv2; // 0x318(0x08)
	struct USkeletalMeshComponent* Surv7; // 0x320(0x08)
	struct USkeletalMeshComponent* Surv6; // 0x328(0x08)
	struct USkeletalMeshComponent* Surv5; // 0x330(0x08)
	struct USkeletalMeshComponent* Surv4; // 0x338(0x08)
	struct USkeletalMeshComponent* Surv3; // 0x340(0x08)
	struct USkeletalMeshComponent* Surv1; // 0x348(0x08)
	struct UStaticMeshComponent* Plane; // 0x350(0x08)
	struct UTextRenderComponent* TextRender9; // 0x358(0x08)
	struct UTextRenderComponent* TextRender8; // 0x360(0x08)
	struct UTextRenderComponent* TextRender7; // 0x368(0x08)
	struct UTextRenderComponent* TextRender6; // 0x370(0x08)
	struct UTextRenderComponent* TextRender5; // 0x378(0x08)
	struct UTextRenderComponent* TextRender4; // 0x380(0x08)
	struct UTextRenderComponent* TextRender3; // 0x388(0x08)
	struct UTextRenderComponent* TextRender2; // 0x390(0x08)
	struct UTextRenderComponent* TextRender1; // 0x398(0x08)
	struct UTextRenderComponent* TextRender; // 0x3a0(0x08)
	struct USceneComponent* SharedRoot; // 0x3a8(0x08)
	float NewEndGameTimeline_Alpha_A4F1A862465DD968E89DDA84774FF1C2; // 0x3b0(0x04)
	enum class ETimelineDirection NewEndGameTimeline__Direction_A4F1A862465DD968E89DDA84774FF1C2; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct UTimelineComponent* NewEndGameTimeline; // 0x3b8(0x08)
	struct FVector KillerCameraLerp_Rotation_C501199D4FD4696A79504BB37BB9C5AF; // 0x3c0(0x0c)
	struct FVector KillerCameraLerp_Location_C501199D4FD4696A79504BB37BB9C5AF; // 0x3cc(0x0c)
	float KillerCameraLerp_Camera_C501199D4FD4696A79504BB37BB9C5AF; // 0x3d8(0x04)
	enum class ETimelineDirection KillerCameraLerp__Direction_C501199D4FD4696A79504BB37BB9C5AF; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct UTimelineComponent* KillerCameraLerp; // 0x3e0(0x08)
	struct FVector CameraLerp_Rotation_10464FBF4DA3C40F9E525C843F3343B9; // 0x3e8(0x0c)
	struct FVector CameraLerp_Location_10464FBF4DA3C40F9E525C843F3343B9; // 0x3f4(0x0c)
	float CameraLerp_Camera_10464FBF4DA3C40F9E525C843F3343B9; // 0x400(0x04)
	enum class ETimelineDirection CameraLerp__Direction_10464FBF4DA3C40F9E525C843F3343B9; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct UTimelineComponent* CameraLerp; // 0x408(0x08)
	struct TArray<struct USceneComponent*> alarmsArray; // 0x410(0x10)
	int32_t AlarmsCount; // 0x420(0x04)
	int32_t EndGameType; // 0x424(0x04)
	bool ChangedLoc?; // 0x428(0x01)
	bool ChangedKillerLoc?; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct TArray<struct AActor*> HiddenActors; // 0x430(0x10)
	bool Teleported?; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct USceneComponent*> Points; // 0x448(0x10)
	struct TArray<struct USceneComponent*> Meshs; // 0x458(0x10)
	struct USceneComponent* Temp; // 0x468(0x08)

	void CameraLerp__FinishedFunc(); // Function EndGameBP.EndGameBP_C.CameraLerp__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void CameraLerp__UpdateFunc(); // Function EndGameBP.EndGameBP_C.CameraLerp__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void KillerCameraLerp__FinishedFunc(); // Function EndGameBP.EndGameBP_C.KillerCameraLerp__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void KillerCameraLerp__UpdateFunc(); // Function EndGameBP.EndGameBP_C.KillerCameraLerp__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NewEndGameTimeline__FinishedFunc(); // Function EndGameBP.EndGameBP_C.NewEndGameTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void NewEndGameTimeline__UpdateFunc(); // Function EndGameBP.EndGameBP_C.NewEndGameTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_7(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_5(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_4(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_3(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_2(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_1(struct FKey Key); // Function EndGameBP.EndGameBP_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void TestEndGame(bool On?); // Function EndGameBP.EndGameBP_C.TestEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartLerpCamera(); // Function EndGameBP.EndGameBP_C.StartLerpCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CameraLocChange(); // Function EndGameBP.EndGameBP_C.CameraLocChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmsEvMulti(); // Function EndGameBP.EndGameBP_C.AlarmsEvMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AlarmsEvent(bool AllOff?); // Function EndGameBP.EndGameBP_C.AlarmsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchChairVisibilityServer(struct FString PlayerSlot, bool Dead?); // Function EndGameBP.EndGameBP_C.SwitchChairVisibilityServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameVisibility(bool SurvWin?); // Function EndGameBP.EndGameBP_C.EndGameVisibility // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchChairVisibility(struct FString PlayerSlot, bool Dead?); // Function EndGameBP.EndGameBP_C.SwitchChairVisibility // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LookAtEvent(); // Function EndGameBP.EndGameBP_C.LookAtEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void TeleportEndGame(struct AActor* Actor, struct FString LobbySlotName, bool Dead?, bool NotChair?); // Function EndGameBP.EndGameBP_C.TeleportEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function EndGameBP.EndGameBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function EndGameBP.EndGameBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void EndGameTypeSet(bool SurvWin?, int32_t EndGameType); // Function EndGameBP.EndGameBP_C.EndGameTypeSet // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ChangeFOV(bool On?); // Function EndGameBP.EndGameBP_C.ChangeFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void KillerCamera(); // Function EndGameBP.EndGameBP_C.KillerCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvCamera(); // Function EndGameBP.EndGameBP_C.SurvCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void VisibleMeshOff(); // Function EndGameBP.EndGameBP_C.VisibleMeshOff // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void NewEndGame(); // Function EndGameBP.EndGameBP_C.NewEndGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void HideActors(bool Hide?); // Function EndGameBP.EndGameBP_C.HideActors // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_EndGameBP(int32_t EntryPoint); // Function EndGameBP.EndGameBP_C.ExecuteUbergraph_EndGameBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

