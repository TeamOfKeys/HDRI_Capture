// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapturePlugin/Public/MovementCharecter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementCharecter() {}

// Begin Cross Module References
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_AMovementCharecter();
CAPTUREPLUGIN_API UClass* Z_Construct_UClass_AMovementCharecter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CapturePlugin();
// End Cross Module References

// Begin Class AMovementCharecter
void AMovementCharecter::StaticRegisterNativesAMovementCharecter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovementCharecter);
UClass* Z_Construct_UClass_AMovementCharecter_NoRegister()
{
	return AMovementCharecter::StaticClass();
}
struct Z_Construct_UClass_AMovementCharecter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovementCharecter.h" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MovementCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MovementCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "MovementCharecter" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "EnchancedInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mapping Menu\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping Menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "EnchancedInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Action Menu\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action Menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "EnchancedInput" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "EnchancedInput" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnyKeyAction_MetaData[] = {
		{ "Category", "EnchancedInput" },
		{ "ModuleRelativePath", "Public/MovementCharecter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnyKeyAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementCharecter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
void Z_Construct_UClass_AMovementCharecter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((AMovementCharecter*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovementCharecter), &Z_Construct_UClass_AMovementCharecter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementCharecter_Statics::NewProp_AnyKeyAction = { "AnyKeyAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementCharecter, AnyKeyAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnyKeyAction_MetaData), NewProp_AnyKeyAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementCharecter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementCharecter_Statics::NewProp_AnyKeyAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharecter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovementCharecter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CapturePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharecter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovementCharecter_Statics::ClassParams = {
	&AMovementCharecter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovementCharecter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharecter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementCharecter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovementCharecter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovementCharecter()
{
	if (!Z_Registration_Info_UClass_AMovementCharecter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovementCharecter.OuterSingleton, Z_Construct_UClass_AMovementCharecter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovementCharecter.OuterSingleton;
}
template<> CAPTUREPLUGIN_API UClass* StaticClass<AMovementCharecter>()
{
	return AMovementCharecter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementCharecter);
AMovementCharecter::~AMovementCharecter() {}
// End Class AMovementCharecter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_MovementCharecter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementCharecter, AMovementCharecter::StaticClass, TEXT("AMovementCharecter"), &Z_Registration_Info_UClass_AMovementCharecter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementCharecter), 1418376381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_MovementCharecter_h_3510495969(TEXT("/Script/CapturePlugin"),
	Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_MovementCharecter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_warlo_Documents_Unreal_Projects_360_Capture_1S_Capture360_Main_Plugins_CapturePlugin_Source_CapturePlugin_Public_MovementCharecter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
