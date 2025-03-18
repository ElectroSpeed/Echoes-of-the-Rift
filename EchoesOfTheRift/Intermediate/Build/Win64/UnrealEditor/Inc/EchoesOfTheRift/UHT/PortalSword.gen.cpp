// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EchoesOfTheRift/PortalSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalSword() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ECHOESOFTHERIFT_API UClass* Z_Construct_UClass_APortalSword();
ECHOESOFTHERIFT_API UClass* Z_Construct_UClass_APortalSword_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EchoesOfTheRift();
// End Cross Module References

// Begin Class APortalSword Function PlacePortal
struct Z_Construct_UFunction_APortalSword_PlacePortal_Statics
{
	struct PortalSword_eventPlacePortal_Parms
	{
		int32 ZoneNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalSword.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortalSword_PlacePortal_Statics::NewProp_ZoneNumber = { "ZoneNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSword_eventPlacePortal_Parms, ZoneNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSword_PlacePortal_Statics::NewProp_ZoneNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSword_PlacePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalSword, nullptr, "PlacePortal", nullptr, nullptr, Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PortalSword_eventPlacePortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSword_PlacePortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSword_PlacePortal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortalSword_PlacePortal_Statics::PortalSword_eventPlacePortal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSword_PlacePortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSword_PlacePortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSword::execPlacePortal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ZoneNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlacePortal(Z_Param_ZoneNumber);
	P_NATIVE_END;
}
// End Class APortalSword Function PlacePortal

// Begin Class APortalSword
void APortalSword::StaticRegisterNativesAPortalSword()
{
	UClass* Class = APortalSword::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlacePortal", &APortalSword::execPlacePortal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortalSword);
UClass* Z_Construct_UClass_APortalSword_NoRegister()
{
	return APortalSword::StaticClass();
}
struct Z_Construct_UClass_APortalSword_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PortalSword.h" },
		{ "ModuleRelativePath", "PortalSword.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPortal_MetaData[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalSword.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondPortal_MetaData[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalSword.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalClass_MetaData[] = {
		{ "Category", "Portals" },
		{ "ModuleRelativePath", "PortalSword.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPortal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondPortal;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PortalClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalSword_PlacePortal, "PlacePortal" }, // 1176793910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalSword>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalSword_Statics::NewProp_FirstPortal = { "FirstPortal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSword, FirstPortal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPortal_MetaData), NewProp_FirstPortal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalSword_Statics::NewProp_SecondPortal = { "SecondPortal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSword, SecondPortal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondPortal_MetaData), NewProp_SecondPortal_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APortalSword_Statics::NewProp_PortalClass = { "PortalClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSword, PortalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalClass_MetaData), NewProp_PortalClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalSword_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSword_Statics::NewProp_FirstPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSword_Statics::NewProp_SecondPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSword_Statics::NewProp_PortalClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSword_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APortalSword_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EchoesOfTheRift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSword_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalSword_Statics::ClassParams = {
	&APortalSword::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APortalSword_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APortalSword_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSword_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalSword_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortalSword()
{
	if (!Z_Registration_Info_UClass_APortalSword.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalSword.OuterSingleton, Z_Construct_UClass_APortalSword_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortalSword.OuterSingleton;
}
template<> ECHOESOFTHERIFT_API UClass* StaticClass<APortalSword>()
{
	return APortalSword::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortalSword);
APortalSword::~APortalSword() {}
// End Class APortalSword

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortalSword, APortalSword::StaticClass, TEXT("APortalSword"), &Z_Registration_Info_UClass_APortalSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalSword), 377748032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_776849917(TEXT("/Script/EchoesOfTheRift"),
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
