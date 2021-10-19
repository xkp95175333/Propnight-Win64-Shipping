// UserDefinedStruct S_LoadDescp.S_LoadDescp
// Size: 0x58 (Inherited: 0x00)
struct FS_LoadDescp {
	enum class E_Mode GameMode_3_C0AEE2B54C119A9CFC4DDC9F1E33D4F7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FText> SurvTips_9_B717DFEB4DA5BE66AA9020A1AE16D30D; // 0x08(0x10)
	struct TArray<struct FText> SurvDescrp_14_18A4AAB940D6E902DA7B0A8FE5D52617; // 0x18(0x10)
	struct TArray<struct FText> KillerTips_12_F3F943B641C6F03ED3631D946E0BC7A7; // 0x28(0x10)
	struct TArray<struct FText> KillerDescrp_16_E35E261140CCBD79424F4587E5C3F58C; // 0x38(0x10)
	struct TArray<struct UPaperSprite*> ImgTips_27_BF8E0ADF42D59C0A0D26EBBB1F81FA99; // 0x48(0x10)
};

