// AnimBlueprintGeneratedClass IsaacLobbyAnimBP.IsaacLobbyAnimBP_C
// Size: 0x561 (Inherited: 0x2c0)
struct UIsaacLobbyAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	struct ALobbyPlayerMesh_C* LPM; // 0x558(0x08)
	bool MvpAnim?; // 0x560(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IsaacLobbyAnimBP_AnimGraphNode_TransitionResult_C0B4DEBC43A077BCD87EDEA22C0F3D23(); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_IsaacLobbyAnimBP_AnimGraphNode_TransitionResult_C0B4DEBC43A077BCD87EDEA22C0F3D23 // (BlueprintEvent) // @ game+0x132e1a0
	void IsaacMorphs(); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.IsaacMorphs // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintBeginPlay(); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_IsaacLobbyAnimBP(int32_t EntryPoint); // Function IsaacLobbyAnimBP.IsaacLobbyAnimBP_C.ExecuteUbergraph_IsaacLobbyAnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x132e1a0
};

