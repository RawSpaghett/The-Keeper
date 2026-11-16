// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldClockSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWorldClockSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
THEKEEPER_API UClass* Z_Construct_UClass_UWorldClockSettings();
THEKEEPER_API UClass* Z_Construct_UClass_UWorldClockSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheKeeper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWorldClockSettings ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWorldClockSettings;
UClass* UWorldClockSettings::GetPrivateStaticClass()
{
	using TClass = UWorldClockSettings;
	if (!Z_Registration_Info_UClass_UWorldClockSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WorldClockSettings"),
			Z_Registration_Info_UClass_UWorldClockSettings.InnerSingleton,
			StaticRegisterNativesUWorldClockSettings,
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
	return Z_Registration_Info_UClass_UWorldClockSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UWorldClockSettings_NoRegister()
{
	return UWorldClockSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWorldClockSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "World Clock|Settings" },
		{ "IncludePath", "WorldClockSettings.h" },
		{ "ModuleRelativePath", "Public/WorldClockSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondsPerHour_MetaData[] = {
		{ "Category", "Time Control" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UDeveloperSettings\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldClockSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UDeveloperSettings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInitializeTime_MetaData[] = {
		{ "Category", "Time Control" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/WorldClockSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDayStart_MetaData[] = {
		{ "Category", "Time Control" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/WorldClockSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNightStart_MetaData[] = {
		{ "Category", "Time Control" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/WorldClockSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWorldClockSettings constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSecondsPerHour;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInitializeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDayStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultNightStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWorldClockSettings constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldClockSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWorldClockSettings_Statics

// ********** Begin Class UWorldClockSettings Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultSecondsPerHour = { "DefaultSecondsPerHour", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldClockSettings, DefaultSecondsPerHour), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSecondsPerHour_MetaData), NewProp_DefaultSecondsPerHour_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultInitializeTime = { "DefaultInitializeTime", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldClockSettings, DefaultInitializeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInitializeTime_MetaData), NewProp_DefaultInitializeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultDayStart = { "DefaultDayStart", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldClockSettings, DefaultDayStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDayStart_MetaData), NewProp_DefaultDayStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultNightStart = { "DefaultNightStart", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldClockSettings, DefaultNightStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNightStart_MetaData), NewProp_DefaultNightStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldClockSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultSecondsPerHour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultInitializeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultDayStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldClockSettings_Statics::NewProp_DefaultNightStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldClockSettings_Statics::PropPointers) < 2048);
// ********** End Class UWorldClockSettings Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UWorldClockSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_TheKeeper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldClockSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldClockSettings_Statics::ClassParams = {
	&UWorldClockSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldClockSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldClockSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldClockSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldClockSettings_Statics::Class_MetaDataParams)
};
void UWorldClockSettings::StaticRegisterNativesUWorldClockSettings()
{
}
UClass* Z_Construct_UClass_UWorldClockSettings()
{
	if (!Z_Registration_Info_UClass_UWorldClockSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldClockSettings.OuterSingleton, Z_Construct_UClass_UWorldClockSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldClockSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWorldClockSettings);
UWorldClockSettings::~UWorldClockSettings() {}
// ********** End Class UWorldClockSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h__Script_TheKeeper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldClockSettings, UWorldClockSettings::StaticClass, TEXT("UWorldClockSettings"), &Z_Registration_Info_UClass_UWorldClockSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldClockSettings), 265666215U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h__Script_TheKeeper_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h__Script_TheKeeper_137772391{
	TEXT("/Script/TheKeeper"),
	Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h__Script_TheKeeper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h__Script_TheKeeper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
