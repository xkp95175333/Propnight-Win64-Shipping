// BlueprintGeneratedClass BP_Spectator.BP_Spectator_C
// Size: 0x344 (Inherited: 0x280)
struct ABP_Spectator_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCameraComponent* Camera; // 0x288(0x08)
	struct UVoipManagerComponent* VoipManager; // 0x290(0x08)
	struct USphereComponent* Sphere1; // 0x298(0x08)
	struct UStaticMeshComponent* Sphere; // 0x2a0(0x08)
	struct USoundChatSounds_C* SoundChatSounds; // 0x2a8(0x08)
	struct UAlarmsWidgetSize_C* AlarmsWidgetSize; // 0x2b0(0x08)
	struct UFootprintComponent_C* FootprintComponent; // 0x2b8(0x08)
	struct UATPCCameraComponent* ATPCCamera; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	float Timeline_0_distance_53E7CC384B3361E71E46DB96F09DA0D2; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_53E7CC384B3361E71E46DB96F09DA0D2; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2d8(0x08)
	int32_t PlayerIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct AActor* SelectedActor; // 0x2e8(0x08)
	bool Block?; // 0x2f0(0x01)
	bool AllowVoice; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UVoipAudioComponent* VoipAudio; // 0x2f8(0x08)
	bool VoiceActive?; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct APawn* MyCharForIgnore; // 0x308(0x08)
	struct AHUD_PropHunt_C* As HUD Prop Hunt; // 0x310(0x08)
	float XAxis; // 0x318(0x04)
	float YAxis; // 0x31c(0x04)
	float BaseLookUpRate; // 0x320(0x04)
	float BaseTurnRate; // 0x324(0x04)
	struct FVector CustomOffset; // 0x328(0x0c)
	struct FVector StandartOffset; // 0x334(0x0c)
	float Sensivity; // 0x340(0x04)

	void GetNext_IgnoreMeStart(struct ASurvivorMasterBP_C* Survivor, struct USceneComponent* DefaultPointProp, struct AKillerMasterBP_C* Killer); // Function BP_Spectator.BP_Spectator_C.GetNext_IgnoreMeStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPrevProphunt(struct AActor* Ac, struct USceneComponent* DefaultPointProp); // Function BP_Spectator.BP_Spectator_C.GetPrevProphunt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNextProphunt(struct APawn* Player, struct USceneComponent* DefaultPointProp); // Function BP_Spectator.BP_Spectator_C.GetNextProphunt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPrev(struct AActor* Ac, struct USceneComponent* DefaultPointProp); // Function BP_Spectator.BP_Spectator_C.GetPrev // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNext(struct ASurvivorMasterBP_C* Survivor, struct USceneComponent* DefaultPointProp, struct AKillerMasterBP_C* Killer); // Function BP_Spectator.BP_Spectator_C.GetNext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__FinishedFunc(); // Function BP_Spectator.BP_Spectator_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x132e1a0
	void Timeline_0__UpdateFunc(); // Function BP_Spectator.BP_Spectator_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Previous Player_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_Spectator.BP_Spectator_C.InpActEvt_Previous Player_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Next Player_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_Spectator.BP_Spectator_C.InpActEvt_Next Player_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_E_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_Spectator.BP_Spectator_C.InpActEvt_E_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BP_Spectator.BP_Spectator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue); // Function BP_Spectator.BP_Spectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue); // Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41 // (BlueprintEvent) // @ game+0x132e1a0
	void NicknameRotationUpdate(); // Function BP_Spectator.BP_Spectator_C.NicknameRotationUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function BP_Spectator.BP_Spectator_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void NextSurvCustomChange(); // Function BP_Spectator.BP_Spectator_C.NextSurvCustomChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void DetachAndFade(); // Function BP_Spectator.BP_Spectator_C.DetachAndFade // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SwitchSpectator(bool Spectating?); // Function BP_Spectator.BP_Spectator_C.SwitchSpectator // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndSpectate(); // Function BP_Spectator.BP_Spectator_C.EndSpectate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExitColl(); // Function BP_Spectator.BP_Spectator_C.ExitColl // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceivePossessed(struct AController* NewController); // Function BP_Spectator.BP_Spectator_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void InitVoice(); // Function BP_Spectator.BP_Spectator_C.InitVoice // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(struct TArray<char> VoiceData, float MicLevel); // Function BP_Spectator.BP_Spectator_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void ServVoiceProc(struct TArray<char> CompressedVoiceData); // Function BP_Spectator.BP_Spectator_C.ServVoiceProc // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveVoice(struct TArray<char> CompressedVoiceData); // Function BP_Spectator.BP_Spectator_C.ReceiveVoice // (Net|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendVoiceStatusServer(bool VoiceActive?); // Function BP_Spectator.BP_Spectator_C.SendVoiceStatusServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveDestroyed(); // Function BP_Spectator.BP_Spectator_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteE(); // Function BP_Spectator.BP_Spectator_C.ExecuteE // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue); // Function BP_Spectator.BP_Spectator_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39 // (BlueprintEvent) // @ game+0x132e1a0
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue); // Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54 // (BlueprintEvent) // @ game+0x132e1a0
	void CameraChair(); // Function BP_Spectator.BP_Spectator_C.CameraChair // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SurvOnChairCamera(); // Function BP_Spectator.BP_Spectator_C.SurvOnChairCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNameSurvWidget(); // Function BP_Spectator.BP_Spectator_C.GetNameSurvWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientDestroySpectatorUI(); // Function BP_Spectator.BP_Spectator_C.ClientDestroySpectatorUI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_Spectator(int32_t EntryPoint); // Function BP_Spectator.BP_Spectator_C.ExecuteUbergraph_BP_Spectator // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

