// AnimBlueprintGeneratedClass DoppelLobby.DoppelLobby_C
// Size: 0x659 (Inherited: 0x2c0)
struct UDoppelLobby_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x378(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x3a8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x458(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x508(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5b8(0xa0)
	bool Reset?; // 0x658(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function DoppelLobby.DoppelLobby_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x132e1a0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function DoppelLobby.DoppelLobby_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_DoppelLobby(int32_t EntryPoint); // Function DoppelLobby.DoppelLobby_C.ExecuteUbergraph_DoppelLobby // (Final|UbergraphFunction) // @ game+0x132e1a0
};

