// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortalSword.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOESOFTHERIFT_PortalSword_generated_h
#error "PortalSword.generated.h already included, missing '#pragma once' in PortalSword.h"
#endif
#define ECHOESOFTHERIFT_PortalSword_generated_h

#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlacePortal);


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalSword(); \
	friend struct Z_Construct_UClass_APortalSword_Statics; \
public: \
	DECLARE_CLASS(APortalSword, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EchoesOfTheRift"), NO_API) \
	DECLARE_SERIALIZER(APortalSword)


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APortalSword(APortalSword&&); \
	APortalSword(const APortalSword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalSword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalSword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalSword) \
	NO_API virtual ~APortalSword();


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_7_PROLOG
#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECHOESOFTHERIFT_API UClass* StaticClass<class APortalSword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_angyo_Documents_GitHub_Echoes_of_the_Rift_EchoesOfTheRift_Source_EchoesOfTheRift_PortalSword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
