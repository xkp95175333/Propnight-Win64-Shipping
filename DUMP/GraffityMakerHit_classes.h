// BlueprintGeneratedClass GraffityMakerHit.GraffityMakerHit_C
// Size: 0x10c (Inherited: 0xb9)
struct UGraffityMakerHit_C : UGraffityMaker_C {
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct FVector> v3Arr; // 0xc8(0x10)
	struct TArray<struct FRotator> rotArr; // 0xd8(0x10)
	struct FVector Impact Normal; // 0xe8(0x0c)
	struct FVector Actor Location; // 0xf4(0x0c)
	struct FVector Forward Vector; // 0x100(0x0c)

	void Draw(struct FVector actorLocation, struct FVector ForwardVector); // Function GraffityMakerHit.GraffityMakerHit_C.Draw // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GraffityMakerHit(int32_t EntryPoint); // Function GraffityMakerHit.GraffityMakerHit_C.ExecuteUbergraph_GraffityMakerHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

