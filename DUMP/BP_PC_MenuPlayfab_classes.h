// BlueprintGeneratedClass BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C
// Size: 0x130 (Inherited: 0xb0)
struct UBP_PC_MenuPlayfab_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPlayFabJsonObject* ListServerRes; // 0xb8(0x08)
	bool PollTicket; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FString TicketId; // 0xc8(0x10)
	struct FString QueueName; // 0xd8(0x10)
	struct FString MatchId; // 0xe8(0x10)
	struct UPlayFabJsonObject* PlayerEntity; // 0xf8(0x08)
	struct UPlayFabJsonObject* LastData; // 0x100(0x08)
	int32_t Give Up After Seconds; // 0x108(0x04)
	int32_t ErrorsInARow; // 0x10c(0x04)
	float PollDelay; // 0x110(0x04)
	float InitialPollDelay; // 0x114(0x04)
	bool IsJoinRetry; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FString JoinTicketID; // 0x120(0x10)

	void GetQueueName(struct FString Name); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetQueueName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void MakePingRequest(struct FMultiplayerListQosServersForTitleResponse ListQosServers); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakePingRequest // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Ticket Member(struct UPlayFabJsonObject* Data, struct UPlayFabJsonObject* RMember); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Ticket Member // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void PlayersToEntities(struct TArray<struct FString> Players, struct TArray<struct UPlayFabJsonObject*> Entities); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.PlayersToEntities // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetPortByName(struct FString Name, struct UPlayFabJsonObject* ServerDetails, int32_t Port); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetPortByName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeInfoRequest(struct UPlayFabJsonObject* res); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeInfoRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeTicketCreator(struct UPlayFabJsonObject* Data, struct UPlayFabJsonObject* Result); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeTicketCreator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void MakeListRequest(struct UPlayFabJsonObject* Request); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeListRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetBuidID(struct FString BuildId); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetBuidID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x132e1a0
	void GetSteamID(struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetSteamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetDevID(struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetDevID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetID(struct FString Key, struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ObtainSteamID(struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainSteamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ObtainDevID(struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainDevID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SaveID(struct FString ID, struct FString Key); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SaveID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadSteamID(bool Has, struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadSteamID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadDevID(bool Has, struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadDevID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoadID(struct FString Key, bool Has, struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2 // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnPlayFabResponse_38B701DD4151EECD732D4887140B423E(struct FPlayFabBaseModel response, struct UObject* customData, bool successful); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_38B701DD4151EECD732D4887140B423E // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void LoginDev(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginDev // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServer(struct FString Cookie); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerOK(struct FMultiplayerRequestMultiplayerServerResponse Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CreateServerFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListServers(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServers // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListServersOK(struct FClientExecuteCloudScriptResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ListServersFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Search(struct FString Queue, struct UPlayFabJsonObject* Data); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Search // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchOK(struct FMultiplayerCreateMatchmakingTicketResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SearchFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void CheckTicket(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicket // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckTicketOK(struct FMultiplayerGetMatchmakingTicketResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CheckTicketFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelSearch(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelSearchOK(struct FMultiplayerCancelMatchmakingTicketResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelSearchFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMatch(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMatchOK(struct FMultiplayerGetMatchResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetMatchFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoginSteam(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginSteam // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Login(struct FString ID); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Login // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoginOK(struct FClientLoginResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void LoginFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelAllTickets(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTickets // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelAllTicketsOK(struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CancelAllTicketsFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinTicket(struct FString Ticket, struct UPlayFabJsonObject* DataObject); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicket // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinTicketOK(struct FMultiplayerJoinMatchmakingTicketResult Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketOK // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinTicketFail(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketFail // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnQosServersSuccess(struct FMultiplayerListQosServersForTitleResponse Result, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnQosServersFailure(struct FPlayFabError Error, struct UObject* customData); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CallPingRequest(bool Include All Regions); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CallPingRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnTicketCanceled(); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnTicketCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_PC_MenuPlayfab(int32_t EntryPoint); // Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ExecuteUbergraph_BP_PC_MenuPlayfab // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

