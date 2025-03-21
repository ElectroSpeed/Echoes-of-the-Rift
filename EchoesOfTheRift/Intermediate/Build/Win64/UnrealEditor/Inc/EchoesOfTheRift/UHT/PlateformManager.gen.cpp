// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EchoesOfTheRift/PlateformManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlateformManager() {}

// Begin Cross Module References
ECHOESOFTHERIFT_API UClass* Z_Construct_UClass_APlateformManager();
ECHOESOFTHERIFT_API UClass* Z_Construct_UClass_APlateformManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EchoesOfTheRift();
// End Cross Module References

// Begin Class APlateformManager
void APlateformManager::StaticRegisterNativesAPlateformManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlateformManager);
UClass* Z_Construct_UClass_APlateformManager_NoRegister()
{
	return APlateformManager::StaticClass();
}
struct Z_Construct_UClass_APlateformManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlateformManager.h" },
		{ "ModuleRelativePath", "PlateformManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformActivators_MetaData[] = {
		{ "Category", "Platforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True = Horizontal Platforms bougent, False = Vertical Platforms bougent\n" },
#endif
		{ "ModuleRelativePath", "PlateformManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True = Horizontal Platforms bougent, False = Vertical Platforms bougent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalPlatforms_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlateformManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalPlatforms_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlateformManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformActivators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformActivators;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalPlatforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalPlatforms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalPlatforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VerticalPlatforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateformManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_PlatformActivators_Inner = { "PlatformActivators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_PlatformActivators = { "PlatformActivators", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformManager, PlatformActivators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformActivators_MetaData), NewProp_PlatformActivators_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_HorizontalPlatforms_Inner = { "HorizontalPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_HorizontalPlatforms = { "HorizontalPlatforms", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformManager, HorizontalPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalPlatforms_MetaData), NewProp_HorizontalPlatforms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_VerticalPlatforms_Inner = { "VerticalPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlateformManager_Statics::NewProp_VerticalPlatforms = { "VerticalPlatforms", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformManager, VerticalPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalPlatforms_MetaData), NewProp_VerticalPlatforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlateformManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_PlatformActivators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_PlatformActivators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_HorizontalPlatforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_HorizontalPlatforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_VerticalPlatforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformManager_Statics::NewProp_VerticalPlatforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlateformManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EchoesOfTheRift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlateformManager_Statics::ClassParams = {
	&APlateformManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlateformManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlateformManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APlateformManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlateformManager()
{
	if (!Z_Registration_Info_UClass_APlateformManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlateformManager.OuterSingleton, Z_Construct_UClass_APlateformManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlateformManager.OuterSingleton;
}
template<> ECHOESOFTHERIFT_API UClass* StaticClass<APlateformManager>()
{
	return APlateformManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlateformManager);
APlateformManager::~APlateformManager() {}
// End Class APlateformManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PlateformManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlateformManager, APlateformManager::StaticClass, TEXT("APlateformManager"), &Z_Registration_Info_UClass_APlateformManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateformManager), 1326667041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PlateformManager_h_347640413(TEXT("/Script/EchoesOfTheRift"),
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PlateformManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PlateformManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
