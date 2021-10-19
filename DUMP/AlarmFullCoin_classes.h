// BlueprintGeneratedClass AlarmFullCoin.AlarmFullCoin_C
// Size: 0x301 (Inherited: 0x2f1)
struct AAlarmFullCoin_C : ACoinActor_C {
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	bool IsChair; // 0x300(0x01)

	void TakeCoinMulti(struct AActor* Actor, int32_t P); // Function AlarmFullCoin.AlarmFullCoin_C.TakeCoinMulti // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function AlarmFullCoin.AlarmFullCoin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_AlarmFullCoin(int32_t EntryPoint); // Function AlarmFullCoin.AlarmFullCoin_C.ExecuteUbergraph_AlarmFullCoin // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

