// AnimBlueprintGeneratedClass GrannyLobbyABP.GrannyLobbyABP_C
// Size: 0x530 (Inherited: 0x2c0)
struct UGrannyLobbyABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2f8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x320(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x450(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x480(0xb0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function GrannyLobbyABP.GrannyLobbyABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GrannyLobbyABP_AnimGraphNode_TransitionResult_6127C7234AA59B8AE45CE5B43C10215E(); // Function GrannyLobbyABP.GrannyLobbyABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrannyLobbyABP_AnimGraphNode_TransitionResult_6127C7234AA59B8AE45CE5B43C10215E // (BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_GrannyLobbyABP(int32_t EntryPoint); // Function GrannyLobbyABP.GrannyLobbyABP_C.ExecuteUbergraph_GrannyLobbyABP // (Final|UbergraphFunction) // @ game+0x132e1a0
};

