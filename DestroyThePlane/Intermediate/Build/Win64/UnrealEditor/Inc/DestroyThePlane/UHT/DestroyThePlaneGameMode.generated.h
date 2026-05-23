// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestroyThePlaneGameMode.h"

#ifdef DESTROYTHEPLANE_DestroyThePlaneGameMode_generated_h
#error "DestroyThePlaneGameMode.generated.h already included, missing '#pragma once' in DestroyThePlaneGameMode.h"
#endif
#define DESTROYTHEPLANE_DestroyThePlaneGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADestroyThePlaneGameMode *************************************************
DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneGameMode_NoRegister();

#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyThePlaneGameMode(); \
	friend struct Z_Construct_UClass_ADestroyThePlaneGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestroyThePlaneGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DestroyThePlane"), Z_Construct_UClass_ADestroyThePlaneGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADestroyThePlaneGameMode)


#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestroyThePlaneGameMode(ADestroyThePlaneGameMode&&) = delete; \
	ADestroyThePlaneGameMode(const ADestroyThePlaneGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyThePlaneGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyThePlaneGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADestroyThePlaneGameMode) \
	NO_API virtual ~ADestroyThePlaneGameMode();


#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_12_PROLOG
#define FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestroyThePlaneGameMode;

// ********** End Class ADestroyThePlaneGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
