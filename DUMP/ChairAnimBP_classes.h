// AnimBlueprintGeneratedClass ChairAnimBP.ChairAnimBP_C
// Size: 0x658 (Inherited: 0x2c0)
struct UChairAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x448(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4c8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x588(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x608(0x30)
	float Speed; // 0x638(0x04)
	bool ResqueMode?; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	float L_hand; // 0x640(0x04)
	float R_hand; // 0x644(0x04)
	float L_leg; // 0x648(0x04)
	float R_leg; // 0x64c(0x04)
	bool Close; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t Stage; // 0x654(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ChairAnimBP.ChairAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ChairAnimBP.ChairAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void Close?(int32_t Stage); // Function ChairAnimBP.ChairAnimBP_C.Close? // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLeft(float L_hand); // Function ChairAnimBP.ChairAnimBP_C.CloseLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseRight(float R_hand); // Function ChairAnimBP.ChairAnimBP_C.CloseRight // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void CloseLeg(float Leg); // Function ChairAnimBP.ChairAnimBP_C.CloseLeg // (BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_ChairAnimBP(int32_t EntryPoint); // Function ChairAnimBP.ChairAnimBP_C.ExecuteUbergraph_ChairAnimBP // (Final|UbergraphFunction) // @ game+0x132e1a0
};

