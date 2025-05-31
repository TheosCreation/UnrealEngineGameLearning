// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineLearning/Player/PlayerCharater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharater() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UNREALENGINELEARNING_API UClass* Z_Construct_UClass_AGun_NoRegister();
UNREALENGINELEARNING_API UClass* Z_Construct_UClass_APlayerCharater();
UNREALENGINELEARNING_API UClass* Z_Construct_UClass_APlayerCharater_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealEngineLearning();
// End Cross Module References

// Begin Class APlayerCharater
void APlayerCharater::StaticRegisterNativesAPlayerCharater()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharater);
UClass* Z_Construct_UClass_APlayerCharater_NoRegister()
{
	return APlayerCharater::StaticClass();
}
struct Z_Construct_UClass_APlayerCharater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharater.h" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClasses_MetaData[] = {
		{ "Category", "PlayerCharater" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerCharater" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTiltAmount_MetaData[] = {
		{ "Category", "CameraTilt" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTiltSmoothTiming_MetaData[] = {
		{ "Category", "CameraTilt" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocket_MetaData[] = {
		{ "Category", "PlayerCharater" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharater.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTiltAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTiltSmoothTiming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponClasses_Inner = { "WeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponClasses = { "WeaponClasses", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharater, WeaponClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClasses_MetaData), NewProp_WeaponClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharater, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_CameraTiltAmount = { "CameraTiltAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharater, CameraTiltAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTiltAmount_MetaData), NewProp_CameraTiltAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_CameraTiltSmoothTiming = { "CameraTiltSmoothTiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharater, CameraTiltSmoothTiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTiltSmoothTiming_MetaData), NewProp_CameraTiltSmoothTiming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponSocket = { "WeaponSocket", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharater, WeaponSocket), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSocket_MetaData), NewProp_WeaponSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_CameraTiltAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_CameraTiltSmoothTiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharater_Statics::NewProp_WeaponSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharater_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineLearning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharater_Statics::ClassParams = {
	&APlayerCharater::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerCharater_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharater_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharater_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharater()
{
	if (!Z_Registration_Info_UClass_APlayerCharater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharater.OuterSingleton, Z_Construct_UClass_APlayerCharater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharater.OuterSingleton;
}
template<> UNREALENGINELEARNING_API UClass* StaticClass<APlayerCharater>()
{
	return APlayerCharater::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharater);
APlayerCharater::~APlayerCharater() {}
// End Class APlayerCharater

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Theo_UnrealEngineGameLearning_UnrealEngineLearning_Source_UnrealEngineLearning_Player_PlayerCharater_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharater, APlayerCharater::StaticClass, TEXT("APlayerCharater"), &Z_Registration_Info_UClass_APlayerCharater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharater), 3837446828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Theo_UnrealEngineGameLearning_UnrealEngineLearning_Source_UnrealEngineLearning_Player_PlayerCharater_h_2504265406(TEXT("/Script/UnrealEngineLearning"),
	Z_CompiledInDeferFile_FID_Users_Theo_UnrealEngineGameLearning_UnrealEngineLearning_Source_UnrealEngineLearning_Player_PlayerCharater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Theo_UnrealEngineGameLearning_UnrealEngineLearning_Source_UnrealEngineLearning_Player_PlayerCharater_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
