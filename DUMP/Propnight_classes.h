// Class Propnight.AGM_Propnight
// Size: 0x1a8 (Inherited: 0x1a8)
struct UAGM_Propnight : UGameInstance {
};

// Class Propnight.BlueprintCopyTextMethod
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintCopyTextMethod : UBlueprintFunctionLibrary {

	struct FString PasteMessageFromClipboard(); // Function Propnight.BlueprintCopyTextMethod.PasteMessageFromClipboard // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1003e20
	struct FIntPoint GetImportedTextureSize(struct UTexture2D* Texture); // Function Propnight.BlueprintCopyTextMethod.GetImportedTextureSize // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1003d80
	void CopyMessageToClipboard(struct FString Text); // Function Propnight.BlueprintCopyTextMethod.CopyMessageToClipboard // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1003cf0
};

// Class Propnight.GSN_Prophunt
// Size: 0x238 (Inherited: 0x238)
struct AGSN_Prophunt : AGameSession {

	void SetMaxPlayers(int32_t maxPlayerClients); // Function Propnight.GSN_Prophunt.SetMaxPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0x1004050
};

// Class Propnight.HTTP_Wrapper
// Size: 0xb8 (Inherited: 0xb0)
struct UHTTP_Wrapper : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	void ShutdownGame(); // Function Propnight.HTTP_Wrapper.ShutdownGame // (Final|Native|Public|BlueprintCallable) // @ game+0x1005010
	struct FString ServerInfoToJSON(struct FServerInfo ServerInfo); // Function Propnight.HTTP_Wrapper.ServerInfoToJSON // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1004e50
	void SendRequest(struct FString Address); // Function Propnight.HTTP_Wrapper.SendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x1004db0
	void SendPOSTRequestWithHeader(struct FString Address, struct FString Content, bool IsServer, struct FString Header, struct FString headerValue); // Function Propnight.HTTP_Wrapper.SendPOSTRequestWithHeader // (Final|Native|Public|BlueprintCallable) // @ game+0x1004bc0
	void SendPOSTRequest(struct FString Address, struct FString Content, bool IsServer); // Function Propnight.HTTP_Wrapper.SendPOSTRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x1004a80
	void OnResponse(struct FString Content); // Function Propnight.HTTP_Wrapper.OnResponse // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnError(); // Function Propnight.HTTP_Wrapper.OnError // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	struct TArray<struct FServerInfo> JSONToArray(struct FString Json); // Function Propnight.HTTP_Wrapper.JSONToArray // (Final|Native|Public|BlueprintCallable) // @ game+0x1004830
	struct FString GetUrl(); // Function Propnight.HTTP_Wrapper.GetUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x10047b0
};

// Class Propnight.NewATPCCameraFOVObject
// Size: 0x40 (Inherited: 0x38)
struct UNewATPCCameraFOVObject : UATPCCameraFOVObject {
	bool IsOverride; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void CameraReset(); // Function Propnight.NewATPCCameraFOVObject.CameraReset // (Final|Native|Public|BlueprintCallable) // @ game+0x1005210
};

// Class Propnight.PC_PropnightMainMenu
// Size: 0x5c0 (Inherited: 0x570)
struct APC_PropnightMainMenu : APlayerController {
	char pad_570[0x40]; // 0x570(0x40)
	struct FString CBuildID; // 0x5b0(0x10)

	void LabFunction(); // Function Propnight.PC_PropnightMainMenu.LabFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x1005470
	bool CheckIsSteamModuleAvailable(); // Function Propnight.PC_PropnightMainMenu.CheckIsSteamModuleAvailable // (Final|Native|Public|BlueprintCallable) // @ game+0x1005440
	bool CheckIsSteamInitialized(); // Function Propnight.PC_PropnightMainMenu.CheckIsSteamInitialized // (Final|Native|Public|BlueprintCallable) // @ game+0x1005410
};

// Class Propnight.PhysicsCharacter
// Size: 0x4e0 (Inherited: 0x4c0)
struct APhysicsCharacter : ACharacter {
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct USceneComponent* realComponentToSync; // 0x4c8(0x08)
	struct UPrimitiveComponent* PrimitiveComponent; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void setPhysicsComponent(struct USceneComponent* theComponent); // Function Propnight.PhysicsCharacter.setPhysicsComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1005700
	void PhysicsTick(float SubstepDeltaTime); // Function Propnight.PhysicsCharacter.PhysicsTick // (Native|Event|Public|BlueprintEvent) // @ game+0x1005670
};

// Class Propnight.ProphuntGameInstance
// Size: 0x2b0 (Inherited: 0x1a8)
struct UProphuntGameInstance : UGameInstance {
	char pad_1A8[0x108]; // 0x1a8(0x108)

	void WriteSteamAppidFile(); // Function Propnight.ProphuntGameInstance.WriteSteamAppidFile // (Final|Native|Public|BlueprintCallable) // @ game+0x10072d0
	bool WithEditor(); // Function Propnight.ProphuntGameInstance.WithEditor // (Final|Native|Public|BlueprintCallable) // @ game+0x10072a0
	void UninitializeVivox(); // Function Propnight.ProphuntGameInstance.UninitializeVivox // (Final|Native|Public|BlueprintCallable) // @ game+0x1007280
	void SetVoiceChatOutputVolume(int32_t Value); // Function Propnight.ProphuntGameInstance.SetVoiceChatOutputVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x10071f0
	void SetVoiceChatMuted(bool bMuted); // Function Propnight.ProphuntGameInstance.SetVoiceChatMuted // (Final|Native|Public|BlueprintCallable) // @ game+0x1007160
	void SetVoiceChatInputVolume(int32_t Value); // Function Propnight.ProphuntGameInstance.SetVoiceChatInputVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x10070d0
	void SetSteamLobbyUserData(struct FString Key, struct FString Value); // Function Propnight.ProphuntGameInstance.SetSteamLobbyUserData // (Final|Native|Public|BlueprintCallable) // @ game+0x1006fd0
	void SetLobbyData(struct FString Key, struct FString Value); // Function Propnight.ProphuntGameInstance.SetLobbyData // (Final|Native|Public|BlueprintCallable) // @ game+0x1006ed0
	void SendSteamLobbyMessage(struct FString Message); // Function Propnight.ProphuntGameInstance.SendSteamLobbyMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1006e30
	void RestoreSteamLobbyMembers(); // Function Propnight.ProphuntGameInstance.RestoreSteamLobbyMembers // (Final|Native|Public|BlueprintCallable) // @ game+0x1006e10
	void ReleaseSteam(); // Function Propnight.ProphuntGameInstance.ReleaseSteam // (Final|Native|Public|BlueprintCallable) // @ game+0x1006df0
	void PushToTalk(bool bPressed); // Function Propnight.ProphuntGameInstance.PushToTalk // (Final|Native|Public|BlueprintCallable) // @ game+0x1006d60
	void OnUserLeaveLobby(struct FString Name, struct FString ID); // Function Propnight.ProphuntGameInstance.OnUserLeaveLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnUserEnterLobby(struct FString Name, struct FString ID); // Function Propnight.ProphuntGameInstance.OnUserEnterLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnSteamMessage(struct FString Ticket); // Function Propnight.ProphuntGameInstance.OnSteamMessage // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnLobbyUserDataUpdated(struct FString ID, struct FString Entity); // Function Propnight.ProphuntGameInstance.OnLobbyUserDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnLobbyCreatedExt(); // Function Propnight.ProphuntGameInstance.OnLobbyCreatedExt // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnJoinLobby(); // Function Propnight.ProphuntGameInstance.OnJoinLobby // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnFriendGoneOffline(struct FString ID); // Function Propnight.ProphuntGameInstance.OnFriendGoneOffline // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnFriendComeOnline(struct FString ID); // Function Propnight.ProphuntGameInstance.OnFriendComeOnline // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Logout(); // Function Propnight.ProphuntGameInstance.Logout // (Final|Native|Public|BlueprintCallable) // @ game+0x1006d40
	void LeaveVoiceChat(); // Function Propnight.ProphuntGameInstance.LeaveVoiceChat // (Final|Native|Public|BlueprintCallable) // @ game+0x1006d20
	void LeaveSteamLobby(); // Function Propnight.ProphuntGameInstance.LeaveSteamLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1006d00
	void JoinVoiceChatImpl(struct FString ChannelName, int32_t TeamNum); // Function Propnight.ProphuntGameInstance.JoinVoiceChatImpl // (Final|Native|Public|BlueprintCallable) // @ game+0x1006c20
	void JoinSteamLobby(struct FString LobbyId); // Function Propnight.ProphuntGameInstance.JoinSteamLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1006b80
	bool IsAnyoneOnMySteamLobby(); // Function Propnight.ProphuntGameInstance.IsAnyoneOnMySteamLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1006b50
	void InviteSteamFriend(struct FString FriendID); // Function Propnight.ProphuntGameInstance.InviteSteamFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x1006ab0
	void InitializeVivox_Impl(); // Function Propnight.ProphuntGameInstance.InitializeVivox_Impl // (Final|Native|Public|BlueprintCallable) // @ game+0x1006a90
	bool InitializeSteam(); // Function Propnight.ProphuntGameInstance.InitializeSteam // (Final|Native|Public|BlueprintCallable) // @ game+0x1006a60
	struct FString GetSteamNickname(); // Function Propnight.ProphuntGameInstance.GetSteamNickname // (Final|Native|Public|BlueprintCallable) // @ game+0x10069e0
	struct FString GetSteamLobbyOwnerID(); // Function Propnight.ProphuntGameInstance.GetSteamLobbyOwnerID // (Final|Native|Public|BlueprintCallable) // @ game+0x1006960
	struct TArray<struct FString> GetSteamLobbyMembersData(struct FString Key); // Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersData // (Final|Native|Public|BlueprintCallable) // @ game+0x1006810
	struct FString GetSteamID(); // Function Propnight.ProphuntGameInstance.GetSteamID // (Final|Native|Public|BlueprintCallable) // @ game+0x1006790
	struct TArray<struct FSteamFriend> GetSteamFriends(); // Function Propnight.ProphuntGameInstance.GetSteamFriends // (Final|Native|Public|BlueprintCallable) // @ game+0x1006690
	void CreateLobby(); // Function Propnight.ProphuntGameInstance.CreateLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1006670
	void CallSteamCallback(); // Function Propnight.ProphuntGameInstance.CallSteamCallback // (Final|Native|Public|BlueprintCallable) // @ game+0x1006650
	bool AmILobbyOwner(); // Function Propnight.ProphuntGameInstance.AmILobbyOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x1006620
};

// Class Propnight.PropnightBeaconHost
// Size: 0x310 (Inherited: 0x308)
struct APropnightBeaconHost : AOnlineBeaconHost {
	char pad_308[0x8]; // 0x308(0x08)

	bool Start(); // Function Propnight.PropnightBeaconHost.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x1007560
	void AddHost(struct AOnlineBeaconHostObject* HostObject); // Function Propnight.PropnightBeaconHost.AddHost // (Final|Native|Public|BlueprintCallable) // @ game+0x10074d0
};

// Class Propnight.PropnightBeaconHostObject
// Size: 0x250 (Inherited: 0x248)
struct APropnightBeaconHostObject : AOnlineBeaconHostObject {
	struct AOnlineBeaconClient* PNClientBeaconType; // 0x248(0x08)

	void UpdatePNClientBeaconType(); // Function Propnight.PropnightBeaconHostObject.UpdatePNClientBeaconType // (Final|Native|Public|BlueprintCallable) // @ game+0x1007710
};

// Class Propnight.PropnightGameMode
// Size: 0x2c0 (Inherited: 0x2c0)
struct APropnightGameMode : AGameModeBase {
};

// Class Propnight.PropnightOnlineBeaconClient
// Size: 0x2b0 (Inherited: 0x2b0)
struct APropnightOnlineBeaconClient : AOnlineBeaconClient {

	bool Start(struct FString Address, int32_t Port, bool portOverride); // Function Propnight.PropnightOnlineBeaconClient.Start // (Final|Native|Private|BlueprintCallable) // @ game+0x1007d50
	void Ready(); // Function Propnight.PropnightOnlineBeaconClient.Ready // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1007d30
	void OnReady(); // Function Propnight.PropnightOnlineBeaconClient.OnReady // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Disconnect(); // Function Propnight.PropnightOnlineBeaconClient.Disconnect // (Final|Native|Private|BlueprintCallable) // @ game+0x1007d10
};

// Class Propnight.PropnightPlayerController
// Size: 0x570 (Inherited: 0x570)
struct APropnightPlayerController : APlayerController {

	void ClientJoinVoice(struct FString ChannelName, int32_t TeamNum); // Function Propnight.PropnightPlayerController.ClientJoinVoice // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1008070
};

