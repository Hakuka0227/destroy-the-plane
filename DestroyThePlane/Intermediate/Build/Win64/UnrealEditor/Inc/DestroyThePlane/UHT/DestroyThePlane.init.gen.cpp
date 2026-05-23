// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyThePlane_init() {}
	DESTROYTHEPLANE_API UFunction* Z_Construct_UDelegateFunction_DestroyThePlane_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DestroyThePlane;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DestroyThePlane()
	{
		if (!Z_Registration_Info_UPackage__Script_DestroyThePlane.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DestroyThePlane_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DestroyThePlane",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x23AB08D1,
				0x57AFF025,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DestroyThePlane.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DestroyThePlane.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DestroyThePlane(Z_Construct_UPackage__Script_DestroyThePlane, TEXT("/Script/DestroyThePlane"), Z_Registration_Info_UPackage__Script_DestroyThePlane, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x23AB08D1, 0x57AFF025));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
