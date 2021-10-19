// Class BlueprintFileUtils.BlueprintFileUtilsBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFileUtilsBPLibrary : UBlueprintFunctionLibrary {

	bool MoveFile(struct FString DestFilename, struct FString SrcFilename, bool bReplace, bool bEvenIfReadOnly); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2c2a0
	bool MakeDirectory(struct FString Path, bool bCreateTree); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2c1c0
	struct FString GetUserDirectory(); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb2c140
	bool FindRecursive(struct FString StartDirectory, struct TArray<struct FString> FoundPaths, struct FString Wildcard, bool bFindFiles, bool bFindDirectories); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2bf40
	bool FindFiles(struct FString Directory, struct TArray<struct FString> FoundFiles, struct FString FileExtension); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb2bdb0
	bool FileExists(struct FString Filename); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2bd10
	bool DirectoryExists(struct FString Directory); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2bc70
	bool DeleteFile(struct FString Filename, bool bMustExist, bool bEvenIfReadOnly); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2bb40
	bool DeleteDirectory(struct FString Directory, bool bMustExist, bool bDeleteRecursively); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2ba10
	bool CopyFile(struct FString DestFilename, struct FString SrcFilename, bool bReplace, bool bEvenIfReadOnly); // Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb2b890
};

