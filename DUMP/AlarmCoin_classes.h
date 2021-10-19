// BlueprintGeneratedClass AlarmCoin.AlarmCoin_C
// Size: 0x300 (Inherited: 0x2f1)
struct AAlarmCoin_C : ACoinActor_C {
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)

	void ReceiveBeginPlay(); // Function AlarmCoin.AlarmCoin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void TakeCoinMulti(struct AActor* Actor, int32_t P); // Function AlarmCoin.AlarmCoin_C.TakeCoinMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_AlarmCoin(int32_t EntryPoint); // Function AlarmCoin.AlarmCoin_C.ExecuteUbergraph_AlarmCoin // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

