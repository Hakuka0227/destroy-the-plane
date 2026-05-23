// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestroyThePlaneGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDestroyThePlaneGameMode() {}

// ********** Begin Cross Module References ********************************************************
DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneGameMode();
DESTROYTHEPLANE_API UClass* Z_Construct_UClass_ADestroyThePlaneGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DestroyThePlane();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADestroyThePlaneGameMode *************************************************
void ADestroyThePlaneGameMode::StaticRegisterNativesADestroyThePlaneGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADestroyThePlaneGameMode;
UClass* ADestroyThePlaneGameMode::GetPrivateStaticClass()
{
	using TClass = ADestroyThePlaneGameMode;
	if (!Z_Registration_Info_UClass_ADestroyThePlaneGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DestroyThePlaneGameMode"),
			Z_Registration_Info_UClass_ADestroyThePlaneGameMode.InnerSingleton,
			StaticRegisterNativesADestroyThePlaneGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADestroyThePlaneGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADestroyThePlaneGameMode_NoRegister()
{
	return ADestroyThePlaneGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADestroyThePlaneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DestroyThePlaneGameMode.h" },
		{ "ModuleRelativePath", "DestroyThePlaneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyThePlaneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DestroyThePlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::ClassParams = {
	&ADestroyThePlaneGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestroyThePlaneGameMode()
{
	if (!Z_Registration_Info_UClass_ADestroyThePlaneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestroyThePlaneGameMode.OuterSingleton, Z_Construct_UClass_ADestroyThePlaneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestroyThePlaneGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyThePlaneGameMode);
ADestroyThePlaneGameMode::~ADestroyThePlaneGameMode() {}
// ********** End Class ADestroyThePlaneGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h__Script_DestroyThePlane_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestroyThePlaneGameMode, ADestroyThePlaneGameMode::StaticClass, TEXT("ADestroyThePlaneGameMode"), &Z_Registration_Info_UClass_ADestroyThePlaneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestroyThePlaneGameMode), 202619414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h__Script_DestroyThePlane_2722293058(TEXT("/Script/DestroyThePlane"),
	Z_CompiledInDeferFile_FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h__Script_DestroyThePlane_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DestroyThePlane_Source_DestroyThePlane_DestroyThePlaneGameMode_h__Script_DestroyThePlane_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
