// Class ImgMedia.ImgMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource {
	struct FFrameRate FrameRateOverride; // 0x88(0x08)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xa0(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0xf17050
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf16f90
	void GetProxies(struct TArray<struct FString> OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xf16ec0
};

