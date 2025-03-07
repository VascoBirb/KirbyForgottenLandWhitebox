// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForgottenLandWhitebx/ForgottenLandWhitebxGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForgottenLandWhitebxGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FORGOTTENLANDWHITEBX_API UClass* Z_Construct_UClass_AForgottenLandWhitebxGameMode();
FORGOTTENLANDWHITEBX_API UClass* Z_Construct_UClass_AForgottenLandWhitebxGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ForgottenLandWhitebx();
// End Cross Module References

// Begin Class AForgottenLandWhitebxGameMode
void AForgottenLandWhitebxGameMode::StaticRegisterNativesAForgottenLandWhitebxGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AForgottenLandWhitebxGameMode);
UClass* Z_Construct_UClass_AForgottenLandWhitebxGameMode_NoRegister()
{
	return AForgottenLandWhitebxGameMode::StaticClass();
}
struct Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ForgottenLandWhitebxGameMode.h" },
		{ "ModuleRelativePath", "ForgottenLandWhitebxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForgottenLandWhitebxGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ForgottenLandWhitebx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::ClassParams = {
	&AForgottenLandWhitebxGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AForgottenLandWhitebxGameMode()
{
	if (!Z_Registration_Info_UClass_AForgottenLandWhitebxGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AForgottenLandWhitebxGameMode.OuterSingleton, Z_Construct_UClass_AForgottenLandWhitebxGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AForgottenLandWhitebxGameMode.OuterSingleton;
}
template<> FORGOTTENLANDWHITEBX_API UClass* StaticClass<AForgottenLandWhitebxGameMode>()
{
	return AForgottenLandWhitebxGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AForgottenLandWhitebxGameMode);
AForgottenLandWhitebxGameMode::~AForgottenLandWhitebxGameMode() {}
// End Class AForgottenLandWhitebxGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_ForgottenLandWhitebx_Source_ForgottenLandWhitebx_ForgottenLandWhitebxGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AForgottenLandWhitebxGameMode, AForgottenLandWhitebxGameMode::StaticClass, TEXT("AForgottenLandWhitebxGameMode"), &Z_Registration_Info_UClass_AForgottenLandWhitebxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AForgottenLandWhitebxGameMode), 3078520917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_ForgottenLandWhitebx_Source_ForgottenLandWhitebx_ForgottenLandWhitebxGameMode_h_2245468982(TEXT("/Script/ForgottenLandWhitebx"),
	Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_ForgottenLandWhitebx_Source_ForgottenLandWhitebx_ForgottenLandWhitebxGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_OneDrive_Documents_Unreal_Projects_ForgottenLandWhitebx_Source_ForgottenLandWhitebx_ForgottenLandWhitebxGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
