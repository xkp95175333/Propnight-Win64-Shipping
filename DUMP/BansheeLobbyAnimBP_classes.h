// AnimBlueprintGeneratedClass BansheeLobbyAnimBP.BansheeLobbyAnimBP_C
// Size: 0x48a (Inherited: 0x2c0)
struct UBansheeLobbyAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2; // 0x2c8(0x78)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x340(0x78)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3b8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3e8(0xa0)
	bool Ready?; // 0x488(0x01)
	bool Reset?; // 0x489(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function BansheeLobbyAnimBP.BansheeLobbyAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function BansheeLobbyAnimBP.BansheeLobbyAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BansheeLobbyAnimBP(int32_t EntryPoint); // Function BansheeLobbyAnimBP.BansheeLobbyAnimBP_C.ExecuteUbergraph_BansheeLobbyAnimBP // (Final|UbergraphFunction) // @ game+0x132e1a0
};

