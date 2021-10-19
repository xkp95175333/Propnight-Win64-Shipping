// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPrivilegesFunctionLibrary : UBlueprintFunctionLibrary {

	bool RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, struct FDelegate ResultDelegate); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xeff4b0
	bool RequestPrivilege(enum class EMagicLeapPrivilege Privilege); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xeff430
	bool CheckPrivilege(enum class EMagicLeapPrivilege Privilege); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xeff430
};

