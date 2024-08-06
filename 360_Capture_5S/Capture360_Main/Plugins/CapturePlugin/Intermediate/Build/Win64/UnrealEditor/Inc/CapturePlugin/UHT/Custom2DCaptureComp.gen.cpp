// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapturePlugin/Public/Custom2DCaptureComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustom2DCaptureComp() {}

// Begin Cross Module References
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_ACustom2DCaptureComp();
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_ACustom2DCaptureComp_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_CapturePlugin();
// End Cross Module References

// Begin Class ACustom2DCaptureComp Function CaptureSceneToCubemap
struct Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustom2DCaptureComp, nullptr, "CaptureSceneToCubemap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustom2DCaptureComp::execCaptureSceneToCubemap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureSceneToCubemap();
	P_NATIVE_END;
}
// End Class ACustom2DCaptureComp Function CaptureSceneToCubemap

// Begin Class ACustom2DCaptureComp
void ACustom2DCaptureComp::StaticRegisterNativesACustom2DCaptureComp()
{
	UClass* Class = ACustom2DCaptureComp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureSceneToCubemap", &ACustom2DCaptureComp::execCaptureSceneToCubemap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustom2DCaptureComp);
UClass* Z_Construct_UClass_ACustom2DCaptureComp_NoRegister()
{
	return ACustom2DCaptureComp::StaticClass();
}
struct Z_Construct_UClass_ACustom2DCaptureComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Custom2DCaptureComp.h" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Custom2DCaptureComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentPosX_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentNegX_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentPosY_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentNegY_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentPosZ_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentNegZ_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetPosX_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetNegX_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetPosY_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetNegY_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetPosZ_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetNegZ_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapTexture_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Custom2DCaptureComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentPosX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentNegX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentPosY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentNegY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentPosZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentNegZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetPosX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetNegX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetPosY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetNegY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetPosZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargetNegZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubemapTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustom2DCaptureComp_CaptureSceneToCubemap, "CaptureSceneToCubemap" }, // 857506145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustom2DCaptureComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosX = { "CaptureComponentPosX", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentPosX), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentPosX_MetaData), NewProp_CaptureComponentPosX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegX = { "CaptureComponentNegX", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentNegX), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentNegX_MetaData), NewProp_CaptureComponentNegX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosY = { "CaptureComponentPosY", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentPosY), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentPosY_MetaData), NewProp_CaptureComponentPosY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegY = { "CaptureComponentNegY", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentNegY), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentNegY_MetaData), NewProp_CaptureComponentNegY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosZ = { "CaptureComponentPosZ", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentPosZ), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentPosZ_MetaData), NewProp_CaptureComponentPosZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegZ = { "CaptureComponentNegZ", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CaptureComponentNegZ), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentNegZ_MetaData), NewProp_CaptureComponentNegZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosX = { "RenderTargetPosX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetPosX), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetPosX_MetaData), NewProp_RenderTargetPosX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegX = { "RenderTargetNegX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetNegX), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetNegX_MetaData), NewProp_RenderTargetNegX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosY = { "RenderTargetPosY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetPosY), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetPosY_MetaData), NewProp_RenderTargetPosY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegY = { "RenderTargetNegY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetNegY), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetNegY_MetaData), NewProp_RenderTargetNegY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosZ = { "RenderTargetPosZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetPosZ), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetPosZ_MetaData), NewProp_RenderTargetPosZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegZ = { "RenderTargetNegZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, RenderTargetNegZ), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetNegZ_MetaData), NewProp_RenderTargetNegZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CubemapTexture = { "CubemapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustom2DCaptureComp, CubemapTexture), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapTexture_MetaData), NewProp_CubemapTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustom2DCaptureComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentPosZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CaptureComponentNegZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetPosZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_RenderTargetNegZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustom2DCaptureComp_Statics::NewProp_CubemapTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustom2DCaptureComp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustom2DCaptureComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CapturePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustom2DCaptureComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustom2DCaptureComp_Statics::ClassParams = {
	&ACustom2DCaptureComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACustom2DCaptureComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustom2DCaptureComp_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustom2DCaptureComp_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustom2DCaptureComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustom2DCaptureComp()
{
	if (!Z_Registration_Info_UClass_ACustom2DCaptureComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustom2DCaptureComp.OuterSingleton, Z_Construct_UClass_ACustom2DCaptureComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustom2DCaptureComp.OuterSingleton;
}
template<> CAPTUREPLUGIN_API UClass* StaticClass<ACustom2DCaptureComp>()
{
	return ACustom2DCaptureComp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustom2DCaptureComp);
ACustom2DCaptureComp::~ACustom2DCaptureComp() {}
// End Class ACustom2DCaptureComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_Custom2DCaptureComp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustom2DCaptureComp, ACustom2DCaptureComp::StaticClass, TEXT("ACustom2DCaptureComp"), &Z_Registration_Info_UClass_ACustom2DCaptureComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustom2DCaptureComp), 3399962229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_Custom2DCaptureComp_h_4289661762(TEXT("/Script/CapturePlugin"),
	Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_Custom2DCaptureComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_Custom2DCaptureComp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
