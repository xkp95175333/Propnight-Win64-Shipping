// BlueprintGeneratedClass BPI_GameInstanceListener.BPI_GameInstanceListener_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_GameInstanceListener_C : UInterface {

	void CloseTicket(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.CloseTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void JoinToTicket(struct FString Ticket); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.JoinToTicket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetServerId(struct FString ID); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.GetServerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnFoundSessions(struct TArray<struct FBlueprintSessionResult> Sessions); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnFoundSessions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailSessionList(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailSessionList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnTravelError(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnTravelError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnNetworkError(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnNetworkError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailJoin(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void FailCreateSession(); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailCreateSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void OnSessionCreated(struct FString Map); // Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnSessionCreated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
};

