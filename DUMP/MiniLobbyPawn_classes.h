// BlueprintGeneratedClass MiniLobbyPawn.MiniLobbyPawn_C
// Size: 0x328 (Inherited: 0x280)
struct AMiniLobbyPawn_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVoipManagerComponent* VoipManager; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct FString Nickname; // 0x298(0x10)
	struct UTexture2D* Avatar; // 0x2a8(0x08)
	struct A3DLobbyMesh_C* LobbyMesh; // 0x2b0(0x08)
	int32_t SurvSkin; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FPlayerInfo InfoMiniLobby; // 0x2c0(0x18)
	struct FVector Temp1; // 0x2d8(0x0c)
	struct FRotator Temp2; // 0x2e4(0x0c)
	struct ACamLobby_C* LobbyCamRef; // 0x2f0(0x08)
	bool VoiceActive?; // 0x2f8(0x01)
	bool Allow Voice; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct UVoipAudioComponent* VoipAudio; // 0x300(0x08)
	enum class SurvChars Surv Char; // 0x308(0x01)
	bool KillerChar; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct ANewLobby_C* NewLobbyReference; // 0x310(0x08)
	struct ANewLobbyV2_C* LobbyV2; // 0x318(0x08)
	struct UW_LoadingTutorial_C* WLoadingT; // 0x320(0x08)

	void OnRep_Surv Char(); // Function MiniLobbyPawn.MiniLobbyPawn_C.OnRep_Surv Char // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_V_K2Node_InputKeyEvent_2(struct FKey Key); // Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_V_K2Node_InputKeyEvent_1(struct FKey Key); // Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void CreateSurvMesh(enum class SurvChars SurvChar); // Function MiniLobbyPawn.MiniLobbyPawn_C.CreateSurvMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void SendNickname(struct FString Nickname, struct UTexture2D* Avatar, struct FPlayerInfo infp); // Function MiniLobbyPawn.MiniLobbyPawn_C.SendNickname // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AcceptServerInfo(struct FString MapName, bool Public); // Function MiniLobbyPawn.MiniLobbyPawn_C.AcceptServerInfo // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RequireServerInfo(); // Function MiniLobbyPawn.MiniLobbyPawn_C.RequireServerInfo // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AvatarApplyMulti(); // Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarApplyMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AvatarUpdate(); // Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetLocationCamLobby(); // Function MiniLobbyPawn.MiniLobbyPawn_C.SetLocationCamLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LobbyCamInit(); // Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyCamInit // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendBecomeSpectator(); // Function MiniLobbyPawn.MiniLobbyPawn_C.SendBecomeSpectator // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ProcessRequiredLobbyState(struct FS_LobbyStateTransport State, struct FS_GameSettings Settings, struct FS_ServerSettings ServerSettings); // Function MiniLobbyPawn.MiniLobbyPawn_C.ProcessRequiredLobbyState // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RequireLobbyState(); // Function MiniLobbyPawn.MiniLobbyPawn_C.RequireLobbyState // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LobbyWaitEnd(); // Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyWaitEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceivePossessed(struct AController* NewController); // Function MiniLobbyPawn.MiniLobbyPawn_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OpenLobby(); // Function MiniLobbyPawn.MiniLobbyPawn_C.OpenLobby // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LobbyReturn(); // Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void InitVoice(); // Function MiniLobbyPawn.MiniLobbyPawn_C.InitVoice // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendVoiceStatusServer(bool VoiceActive?); // Function MiniLobbyPawn.MiniLobbyPawn_C.SendVoiceStatusServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveVoice(struct TArray<char> CompressedVoiceData); // Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveVoice // (Net|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServVoiceProc(struct TArray<char> CompressedVoiceData); // Function MiniLobbyPawn.MiniLobbyPawn_C.ServVoiceProc // (Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(struct TArray<char> VoiceData, float MicLevel); // Function MiniLobbyPawn.MiniLobbyPawn_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x132e1a0
	void CreateKillerMesh(enum class KillerType KillerType); // Function MiniLobbyPawn.MiniLobbyPawn_C.CreateKillerMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InitUI(); // Function MiniLobbyPawn.MiniLobbyPawn_C.InitUI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendKillerType(enum class KillerType KillerChar, struct UObject* Object); // Function MiniLobbyPawn.MiniLobbyPawn_C.SendKillerType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ServLobbyWaitEndV2(); // Function MiniLobbyPawn.MiniLobbyPawn_C.ServLobbyWaitEndV2 // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SendSurvType(enum class SurvChars SurvChar, struct UObject* Object); // Function MiniLobbyPawn.MiniLobbyPawn_C.SendSurvType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EndGameCamera(); // Function MiniLobbyPawn.MiniLobbyPawn_C.EndGameCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Puk(struct FS_GameSettings Game Settings, struct FS_ServerSettings Server Settings, struct FString Server ID); // Function MiniLobbyPawn.MiniLobbyPawn_C.Puk // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_MiniLobbyPawn(int32_t EntryPoint); // Function MiniLobbyPawn.MiniLobbyPawn_C.ExecuteUbergraph_MiniLobbyPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

