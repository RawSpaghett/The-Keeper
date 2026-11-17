// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameMode_Main() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEKEEPER_API UClass* Z_Construct_UClass_AGameMode_Main();
THEKEEPER_API UClass* Z_Construct_UClass_AGameMode_Main_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheKeeper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameMode_Main ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGameMode_Main;
UClass* AGameMode_Main::GetPrivateStaticClass()
{
	using TClass = AGameMode_Main;
	if (!Z_Registration_Info_UClass_AGameMode_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameMode_Main"),
			Z_Registration_Info_UClass_AGameMode_Main.InnerSingleton,
			StaticRegisterNativesAGameMode_Main,
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
	return Z_Registration_Info_UClass_AGameMode_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameMode_Main_NoRegister()
{
	return AGameMode_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameMode_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode_Main.h" },
		{ "ModuleRelativePath", "Public/GameMode_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGameMode_Main constinit property declarations ***************************
// ********** End Class AGameMode_Main constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGameMode_Main_Statics
UObject* (*const Z_Construct_UClass_AGameMode_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheKeeper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMode_Main_Statics::ClassParams = {
	&AGameMode_Main::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameMode_Main_Statics::Class_MetaDataParams)
};
void AGameMode_Main::StaticRegisterNativesAGameMode_Main()
{
}
UClass* Z_Construct_UClass_AGameMode_Main()
{
	if (!Z_Registration_Info_UClass_AGameMode_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMode_Main.OuterSingleton, Z_Construct_UClass_AGameMode_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameMode_Main.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGameMode_Main);
AGameMode_Main::~AGameMode_Main() {}
// ********** End Class AGameMode_Main *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h__Script_TheKeeper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameMode_Main, AGameMode_Main::StaticClass, TEXT("AGameMode_Main"), &Z_Registration_Info_UClass_AGameMode_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMode_Main), 512990571U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h__Script_TheKeeper_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h__Script_TheKeeper_4260461364{
	TEXT("/Script/TheKeeper"),
	Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h__Script_TheKeeper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h__Script_TheKeeper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
