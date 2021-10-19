// BlueprintGeneratedClass BP_HTTP_Wrapper.BP_HTTP_Wrapper_C
// Size: 0xc0 (Inherited: 0xb8)
struct UBP_HTTP_Wrapper_C : UHTTP_Wrapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)

	void OnResponse(struct FString Content); // Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnResponse // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void OnError(); // Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnError // (Event|Public|BlueprintEvent) // @ game+0x132e1a0
	void ExecuteUbergraph_BP_HTTP_Wrapper(int32_t EntryPoint); // Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.ExecuteUbergraph_BP_HTTP_Wrapper // (Final|UbergraphFunction) // @ game+0x132e1a0
};

