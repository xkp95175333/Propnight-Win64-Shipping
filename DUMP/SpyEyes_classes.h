// BlueprintGeneratedClass SpyEyes.SpyEyes_C
// Size: 0xfc (Inherited: 0xb0)
struct USpyEyes_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AKillerMasterBP_C* Killer; // 0xb8(0x08)
	bool CD; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t Ammo; // 0xc4(0x04)
	struct TArray<struct ASpyEye_C*> EyesRef; // 0xc8(0x10)
	struct TArray<struct ASurvivorMasterBP_C*> SurvsRef; // 0xd8(0x10)
	struct TArray<struct AActor*> IgnorActors; // 0xe8(0x10)
	int32_t Count; // 0xf8(0x04)

	void ReceiveBeginPlay(); // Function SpyEyes.SpyEyes_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function SpyEyes.SpyEyes_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void On Invoke(); // Function SpyEyes.SpyEyes_C.On Invoke // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void SpyEyeCreateServ(); // Function SpyEyes.SpyEyes_C.SpyEyeCreateServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ClientCount(int32_t Count); // Function SpyEyes.SpyEyes_C.ClientCount // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_SpyEyes(int32_t EntryPoint); // Function SpyEyes.SpyEyes_C.ExecuteUbergraph_SpyEyes // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

