// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestroyThePlaneCharacter.h"

#ifdef DESTROYTHEPLANE_DestroyThePlaneCharacter_generated_h
#error "DestroyThePlaneCharacter.generated.h already included, missing '#pragma once' in DestroyThePlaneCharacter.h"
#endif
#define DESTROYTHEPLANE_DestroyThePlaneCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADestroyThePlaneCharacter ************************************************
#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneCharacter_NoRegister();

#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyThePlaneCharacter(); \
	friend struct Z_Construct_UClass_ADestroyThePlaneCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestroyThePlaneCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DestroyThePlane"), Z_Construct_UClass_ADestroyThePlaneCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADestroyThePlaneCharacter)


#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestroyThePlaneCharacter(ADestroyThePlaneCharacter&&) = delete; \
	ADestroyThePlaneCharacter(const ADestroyThePlaneCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyThePlaneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyThePlaneCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADestroyThePlaneCharacter) \
	NO_API virtual ~ADestroyThePlaneCharacter();


#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_21_PROLOG
#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestroyThePlaneCharacter;

// ********** End Class ADestroyThePlaneCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
