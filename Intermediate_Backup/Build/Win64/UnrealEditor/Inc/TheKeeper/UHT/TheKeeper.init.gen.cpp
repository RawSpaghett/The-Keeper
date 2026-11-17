// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheKeeper_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	THEKEEPER_API UFunction* Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheKeeper;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheKeeper()
	{
		if (!Z_Registration_Info_UPackage__Script_TheKeeper.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TheKeeper",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xDFE5BEC0,
			0x7AC84340,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheKeeper.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TheKeeper.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheKeeper(Z_Construct_UPackage__Script_TheKeeper, TEXT("/Script/TheKeeper"), Z_Registration_Info_UPackage__Script_TheKeeper, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFE5BEC0, 0x7AC84340));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
