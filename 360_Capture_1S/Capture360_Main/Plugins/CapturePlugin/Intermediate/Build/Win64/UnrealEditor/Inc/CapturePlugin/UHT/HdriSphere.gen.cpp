// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapturePlugin/Public/HdriSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHdriSphere() {}

// Begin Cross Module References
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_AHdriSphere();
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_AHdriSphere_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CapturePlugin();
// End Cross Module References

// Begin Class AHdriSphere
void AHdriSphere::StaticRegisterNativesAHdriSphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHdriSphere);
UClass* Z_Construct_UClass_AHdriSphere_NoRegister()
{
	return AHdriSphere::StaticClass();
}
struct Z_Construct_UClass_AHdriSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HdriSphere.h" },
		{ "ModuleRelativePath", "Public/HdriSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "HdriSphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HdriSphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHdriSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHdriSphere_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHdriSphere, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHdriSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHdriSphere_Statics::NewProp_CubeMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHdriSphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHdriSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CapturePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHdriSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHdriSphere_Statics::ClassParams = {
	&AHdriSphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHdriSphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHdriSphere_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHdriSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_AHdriSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHdriSphere()
{
	if (!Z_Registration_Info_UClass_AHdriSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHdriSphere.OuterSingleton, Z_Construct_UClass_AHdriSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHdriSphere.OuterSingleton;
}
template<> CAPTUREPLUGIN_API UClass* StaticClass<AHdriSphere>()
{
	return AHdriSphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHdriSphere);
AHdriSphere::~AHdriSphere() {}
// End Class AHdriSphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_HdriSphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHdriSphere, AHdriSphere::StaticClass, TEXT("AHdriSphere"), &Z_Registration_Info_UClass_AHdriSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHdriSphere), 4121205944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_HdriSphere_h_81046484(TEXT("/Script/CapturePlugin"),
	Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_HdriSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_HdriSphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
