// AnimBlueprintGeneratedClass NewPropmachineAnimBP.NewPropmachineAnimBP_C
// Size: 0x8f0 (Inherited: 0x2c0)
struct UNewPropmachineAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x2f8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x3b8(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x438(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x4f8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x578(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x618(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x6d8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x758(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7d8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x858(0x80)
	bool Failed?; // 0x8d8(0x01)
	bool Finished?; // 0x8d9(0x01)
	char pad_8DA[0x2]; // 0x8da(0x02)
	float Reloading Time; // 0x8dc(0x04)
	float Reloading Time Rem; // 0x8e0(0x04)
	int32_t Creak Int; // 0x8e4(0x04)
	bool Reloading Starts?; // 0x8e8(0x01)
	bool FailedAnimStart?; // 0x8e9(0x01)
	bool Crack?; // 0x8ea(0x01)
	char pad_8EB[0x1]; // 0x8eb(0x01)
	int32_t Lvl; // 0x8ec(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_8C9B0F7D4D826C45E8C926AEA1CEFAFC(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_8C9B0F7D4D826C45E8C926AEA1CEFAFC // (BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_C1FEE5B34E6B62C0E1B52D93C9BF1650(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_C1FEE5B34E6B62C0E1B52D93C9BF1650 // (BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_569EDE11441A0EA73862B4B08E96AEE1(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_569EDE11441A0EA73862B4B08E96AEE1 // (BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_A386874C4984A0D4AC5605AFA8C1AB46(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_A386874C4984A0D4AC5605AFA8C1AB46 // (BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_BlendListByBool_8862E1AC423B2727A5ECDD8415BC8CD2(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_BlendListByBool_8862E1AC423B2727A5ECDD8415BC8CD2 // (BlueprintEvent) // @ game+0x132e1a0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_DA88E6CE451CEA5178168CBC72839568(); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_DA88E6CE451CEA5178168CBC72839568 // (BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_NewPropmachineAnimBP(int32_t EntryPoint); // Function NewPropmachineAnimBP.NewPropmachineAnimBP_C.ExecuteUbergraph_NewPropmachineAnimBP // (Final|UbergraphFunction) // @ game+0x132e1a0
};

