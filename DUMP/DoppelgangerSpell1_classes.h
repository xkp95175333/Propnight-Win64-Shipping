// BlueprintGeneratedClass DoppelgangerSpell1.DoppelgangerSpell1_C
// Size: 0x198 (Inherited: 0xe8)
struct UDoppelgangerSpell1_C : UKillerSpell_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct USkeletalMesh* DefaultSkeletalMesh; // 0xf0(0x08)
	struct USkeletalMesh* DefaultSkeletalMeshFPP; // 0xf8(0x08)
	struct UAnimInstance* DefaultAnimClassFPP; // 0x100(0x08)
	struct UAnimInstance* DefaultAnimClass; // 0x108(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMaterialsFPP; // 0x110(0x10)
	struct TArray<struct UMaterialInterface*> DefaultMaterials; // 0x120(0x10)
	struct FTransform DefaultMeshTransform; // 0x130(0x30)
	struct FTransform DefaultMeshTransformFPP; // 0x160(0x30)
	struct AActor* GetSurvPawn; // 0x190(0x08)

	void GetSurvMulticast(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* MeshFPP, struct UCapsuleComponent* CapsuleComponent, enum class SurvChars SurvChar, enum class SurvRole SurvRole); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurvServer(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* MeshFPP, struct UCapsuleComponent* CapsuleComponent, enum class SurvChars SurvChar, enum class SurvRole SurvRole); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetSurv(bool Clear?); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurv // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Cast(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveTick(float DeltaSeconds); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReceiveBeginPlay(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ReturnMulticast(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ReturnServ(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnServ // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Consume(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.Consume // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void RoleChange(enum class SurvRole Role, struct USurvRole_C* Widget, bool Off?); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.RoleChange // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNickname(bool Clear?); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNickname // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNicknameServer(struct UObject* Actor, bool Clear?); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void GetNicknameMulticast(struct UObject* Actor, bool Clear?); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void Timer(); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_DoppelgangerSpell1(int32_t EntryPoint); // Function DoppelgangerSpell1.DoppelgangerSpell1_C.ExecuteUbergraph_DoppelgangerSpell1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

