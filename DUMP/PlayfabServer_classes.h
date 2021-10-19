// Class PlayfabServer.PlayfabServerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayfabServerComponent : UActorComponent {

	void UnregisterPlayer(struct FString PlayerId); // Function PlayfabServer.PlayfabServerComponent.UnregisterPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xb52720
	void ShutdownServer(); // Function PlayfabServer.PlayfabServerComponent.ShutdownServer // (Final|Native|Public|BlueprintCallable) // @ game+0xb52700
	void RegisterPlayer(struct FString PlayerId); // Function PlayfabServer.PlayfabServerComponent.RegisterPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xb52720
	void PlayfabReady(); // Function PlayfabServer.PlayfabServerComponent.PlayfabReady // (Final|Native|Public|BlueprintCallable) // @ game+0xb52700
	struct TArray<struct FString> GetStartPlayers(); // Function PlayfabServer.PlayfabServerComponent.GetStartPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0xb52620
	struct FString GetPlayfabSession(); // Function PlayfabServer.PlayfabServerComponent.GetPlayfabSession // (Final|Native|Public|BlueprintCallable) // @ game+0xb525a0
	struct FString GetPlayfabRegion(); // Function PlayfabServer.PlayfabServerComponent.GetPlayfabRegion // (Final|Native|Public|BlueprintCallable) // @ game+0xb525a0
	struct FString GetPlayfabCookie(); // Function PlayfabServer.PlayfabServerComponent.GetPlayfabCookie // (Final|Native|Public|BlueprintCallable) // @ game+0xb525a0
};

