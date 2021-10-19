// Class SystemMicControl.SystemMicControlBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct USystemMicControlBPLibrary : UBlueprintFunctionLibrary {

	void SetMicVolume(float Value); // Function SystemMicControl.SystemMicControlBPLibrary.SetMicVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb204b0
	void SetMicMute(bool IsMuted); // Function SystemMicControl.SystemMicControlBPLibrary.SetMicMute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb20430
	bool SetMicDefaultDevice(struct FString DeviceID); // Function SystemMicControl.SystemMicControlBPLibrary.SetMicDefaultDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb20390
	void SetMicBoost(float Value); // Function SystemMicControl.SystemMicControlBPLibrary.SetMicBoost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb20310
	bool IsMicBoostSupported(); // Function SystemMicControl.SystemMicControlBPLibrary.IsMicBoostSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb202e0
	float GetMicVolume(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicVolume // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb202b0
	bool GetMicMute(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicMute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb20280
	void GetMicDeviceNameFromId(struct FString InDeviceId, struct FString OutDeviceName); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceNameFromId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb20190
	void GetMicDeviceIdFromName(struct FString InDeviceName, struct FString OutDeviceId); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceIdFromName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb200a0
	struct FString GetMicDefaultDeviceName(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb20020
	struct FString GetMicDefaultDeviceId(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1ffa0
	float GetMicBoostStep(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostStep // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1ff70
	float GetMicBoostMin(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1ff40
	float GetMicBoostMax(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMax // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1ff10
	float GetMicBoost(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoost // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1fee0
	struct TMap<struct FString, struct FString> GetMicActiveDevices(); // Function SystemMicControl.SystemMicControlBPLibrary.GetMicActiveDevices // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb1fdf0
};

