// BlueprintGeneratedClass PC_MainMenu.PC_MainMenu_C
// Size: 0x730 (Inherited: 0x5c0)
struct APC_MainMenu_C : APC_PropnightMainMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UBP_PC_MenuPlayfab_C* BP_PC_MenuPlayfab; // 0x5c8(0x08)
	struct UBP_HTTP_Wrapper_C* BP_HTTP_Wrapper; // 0x5d0(0x08)
	struct FString PlayFabTitleID; // 0x5d8(0x10)
	struct FString LoginDataSlotName; // 0x5e8(0x10)
	struct FString ID; // 0x5f8(0x10)
	bool IsLoggedIn; // 0x608(0x01)
	bool IsBusy; // 0x609(0x01)
	char pad_60A[0x6]; // 0x60a(0x06)
	struct UObject* ServerListReq; // 0x610(0x08)
	struct FString BuildId; // 0x618(0x10)
	struct FString Region; // 0x628(0x10)
	struct UObject* ServerListResponse; // 0x638(0x08)
	bool HasActiveServer; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct FString ActiveSessionID; // 0x648(0x10)
	struct FString Address; // 0x658(0x10)
	struct UObject* ServerDetailsRequest; // 0x668(0x08)
	struct UObject* ServerDetailsResponse; // 0x670(0x08)
	struct FString Opaopa; // 0x678(0x10)
	struct TArray<struct FBlueprintSessionResult> Sessions; // 0x688(0x10)
	struct FString SaveNameData; // 0x698(0x10)
	struct USaveGame* UserDataLocal; // 0x6a8(0x08)
	bool Logined; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct AMainMenuCameraActor_C* CameraActor; // 0x6b8(0x08)
	int32_t Tab; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct FString ServerId; // 0x6c8(0x10)
	bool IsCreatingServer; // 0x6d8(0x01)
	char pad_6D9[0x3]; // 0x6d9(0x03)
	int32_t AutoJoinAttempts; // 0x6dc(0x04)
	bool IsAutoConnect; // 0x6e0(0x01)
	bool IsSearching; // 0x6e1(0x01)
	char pad_6E2[0x6]; // 0x6e2(0x06)
	struct TArray<struct FPingQoSInfo> LastPingQoSResult; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnPlayfabReady; // 0x6f8(0x10)
	struct FMulticastInlineDelegate OnMatchFoundEvent; // 0x708(0x10)
	bool IsExit; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)
	struct FString stringCheat; // 0x720(0x10)

	void GetIsExit(bool Is); // Function PC_MainMenu.PC_MainMenu_C.GetIsExit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerId(struct FString ID); // Function PC_MainMenu.PC_MainMenu_C.GetServerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheatNumbers(struct FString S); // Function PC_MainMenu.PC_MainMenu_C.CheatNumbers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeSearchData(int32_t Role, struct UPlayFabJsonObject* Data); // Function PC_MainMenu.PC_MainMenu_C.MakeSearchData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadToPS(); // Function PC_MainMenu.PC_MainMenu_C.LoadToPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadUserData(bool NewParam); // Function PC_MainMenu.PC_MainMenu_C.LoadUserData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReleaseButton(bool Fail); // Function PC_MainMenu.PC_MainMenu_C.ReleaseButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AddSession(struct FBlueprintSessionResult Session); // Function PC_MainMenu.PC_MainMenu_C.AddSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void IsValidSession(struct FBlueprintSessionResult Session, bool IsValid); // Function PC_MainMenu.PC_MainMenu_C.IsValidSession // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetListServersV2(struct TArray<struct FBlueprintSessionResult> Sessions); // Function PC_MainMenu.PC_MainMenu_C.SetListServersV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClearServers(); // Function PC_MainMenu.PC_MainMenu_C.ClearServers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CanJoin(bool Can); // Function PC_MainMenu.PC_MainMenu_C.CanJoin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServersDev(); // Function PC_MainMenu.PC_MainMenu_C.GetServersDev // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetListServers(struct TArray<struct UObject*> Servers); // Function PC_MainMenu.PC_MainMenu_C.SetListServers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void UnmarkBusy(); // Function PC_MainMenu.PC_MainMenu_C.UnmarkBusy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MarkBusy(); // Function PC_MainMenu.PC_MainMenu_C.MarkBusy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SetPlayFabId(struct FString ID); // Function PC_MainMenu.PC_MainMenu_C.SetPlayFabId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SaveLoginData(struct FString Login); // Function PC_MainMenu.PC_MainMenu_C.SaveLoginData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetID(struct FString ID); // Function PC_MainMenu.PC_MainMenu_C.GetID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetLoginData(bool HasData, struct USG_EOSDeviceLogin_C* Data); // Function PC_MainMenu.PC_MainMenu_C.GetLoginData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_Escape_K2Node_InputKeyEvent_13(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Escape_K2Node_InputKeyEvent_13 // (BlueprintEvent) // @ game+0x132e1a0
	void OnFailure_B03CFE9141A130F504FC5BB140CBD9F7(); // Function PC_MainMenu.PC_MainMenu_C.OnFailure_B03CFE9141A130F504FC5BB140CBD9F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7(); // Function PC_MainMenu.PC_MainMenu_C.OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_F4_K2Node_InputKeyEvent_12(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F4_K2Node_InputKeyEvent_12 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_F5_K2Node_InputKeyEvent_11(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F5_K2Node_InputKeyEvent_11 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_10(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_10 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_8(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_8 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_7(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_5(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_4(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_3(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_2(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x132e1a0
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_1(struct FKey Key); // Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x132e1a0
	void CancelSearch(); // Function PC_MainMenu.PC_MainMenu_C.CancelSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailJoin(); // Function PC_MainMenu.PC_MainMenu_C.FailJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ManualSearch(); // Function PC_MainMenu.PC_MainMenu_C.ManualSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SettingsExecute(); // Function PC_MainMenu.PC_MainMenu_C.SettingsExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoginWithEOSDevice(); // Function PC_MainMenu.PC_MainMenu_C.LoginWithEOSDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Upload(); // Function PC_MainMenu.PC_MainMenu_C.Upload // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailCreateSession(); // Function PC_MainMenu.PC_MainMenu_C.FailCreateSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailSessionList(); // Function PC_MainMenu.PC_MainMenu_C.FailSessionList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void loginedEos(); // Function PC_MainMenu.PC_MainMenu_C.loginedEos // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetButtonVisibility(); // Function PC_MainMenu.PC_MainMenu_C.ResetButtonVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSessionCreated(struct FString Map); // Function PC_MainMenu.PC_MainMenu_C.OnSessionCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FindGame(); // Function PC_MainMenu.PC_MainMenu_C.FindGame // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServersV2(); // Function PC_MainMenu.PC_MainMenu_C.GetServersV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerV2(bool Private, struct FString MapName); // Function PC_MainMenu.PC_MainMenu_C.CreateServerV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function PC_MainMenu.PC_MainMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void OnTravelError(); // Function PC_MainMenu.PC_MainMenu_C.OnTravelError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnNetworkError(); // Function PC_MainMenu.PC_MainMenu_C.OnNetworkError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnError(); // Function PC_MainMenu.PC_MainMenu_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnLoginFail(); // Function PC_MainMenu.PC_MainMenu_C.OnLoginFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function PC_MainMenu.PC_MainMenu_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerV3(struct FS_GameSettings Settings, struct FS_ServerSettings ServerSettings); // Function PC_MainMenu.PC_MainMenu_C.CreateServerV3 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFoundSessions(struct TArray<struct FBlueprintSessionResult> Sessions); // Function PC_MainMenu.PC_MainMenu_C.OnFoundSessions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerV4(struct FString Map, struct FString Mode, struct FString Region); // Function PC_MainMenu.PC_MainMenu_C.CreateServerV4 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListServers(int32_t Tab); // Function PC_MainMenu.PC_MainMenu_C.ListServers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnResponse(struct FString response); // Function PC_MainMenu.PC_MainMenu_C.OnResponse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ResetAutoConnect(); // Function PC_MainMenu.PC_MainMenu_C.ResetAutoConnect // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void StartSearch(int32_t Role); // Function PC_MainMenu.PC_MainMenu_C.StartSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSearchFail(); // Function PC_MainMenu.PC_MainMenu_C.OnSearchFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnCancelTicket(); // Function PC_MainMenu.PC_MainMenu_C.OnCancelTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMatch(); // Function PC_MainMenu.PC_MainMenu_C.OnMatch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMatchFail(); // Function PC_MainMenu.PC_MainMenu_C.OnMatchFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnLoginOK(); // Function PC_MainMenu.PC_MainMenu_C.OnLoginOK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPreConnect(); // Function PC_MainMenu.PC_MainMenu_C.OnPreConnect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinToTicket(struct FString Ticket); // Function PC_MainMenu.PC_MainMenu_C.JoinToTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateLobby(); // Function PC_MainMenu.PC_MainMenu_C.CreateLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPingCompleted(struct TArray<struct FPingQoSInfo> Result); // Function PC_MainMenu.PC_MainMenu_C.OnPingCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSearchOK(); // Function PC_MainMenu.PC_MainMenu_C.OnSearchOK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnMatchFound(); // Function PC_MainMenu.PC_MainMenu_C.OnMatchFound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void QWE(); // Function PC_MainMenu.PC_MainMenu_C.QWE // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void AfterServerError(); // Function PC_MainMenu.PC_MainMenu_C.AfterServerError // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseTicket(); // Function PC_MainMenu.PC_MainMenu_C.CloseTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_PC_MainMenu(int32_t EntryPoint); // Function PC_MainMenu.PC_MainMenu_C.ExecuteUbergraph_PC_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
	void OnMatchFoundEvent__DelegateSignature(); // Function PC_MainMenu.PC_MainMenu_C.OnMatchFoundEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayfabReady__DelegateSignature(); // Function PC_MainMenu.PC_MainMenu_C.OnPlayfabReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

