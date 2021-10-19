// AnimBlueprintGeneratedClass Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C
// Size: 0x559 (Inherited: 0x2c0)
struct UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	bool MvpAnim?; // 0x558(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951(); // Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951 // (BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x132e1a0
};

