// AnimBlueprintGeneratedClass EndGameSurvAnimBP.EndGameSurvAnimBP_C
// Size: 0x1490 (Inherited: 0x2c0)
struct UEndGameSurvAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x2c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x348(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x3c8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x448(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x4c8(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x548(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x5f8(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x6a8(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x758(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x808(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x888(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x908(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0x9b8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xa68(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xae8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xb68(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xbe8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xc68(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xce8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xd68(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xde8(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0xe68(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0xf18(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0xfc8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1078(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x10f8(0x30)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x1128(0xb0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x11d8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1288(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1308(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1388(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1408(0x80)
	enum class EndGameStatus Status; // 0x1488(0x01)
	enum class SurvChars Surv Char; // 0x1489(0x01)
	enum class VictoryPoseEnum VictoryPose; // 0x148a(0x01)
	enum class DefeatPoseEnum DefeatPose; // 0x148b(0x01)
	int32_t TempRandom; // 0x148c(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function EndGameSurvAnimBP.EndGameSurvAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function EndGameSurvAnimBP.EndGameSurvAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_EndGameSurvAnimBP(int32_t EntryPoint); // Function EndGameSurvAnimBP.EndGameSurvAnimBP_C.ExecuteUbergraph_EndGameSurvAnimBP // (Final|UbergraphFunction) // @ game+0x132e1a0
};

