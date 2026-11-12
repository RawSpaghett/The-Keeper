// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldClockSettings.h"

#ifdef THEKEEPER_WorldClockSettings_generated_h
#error "WorldClockSettings.generated.h already included, missing '#pragma once' in WorldClockSettings.h"
#endif
#define THEKEEPER_WorldClockSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldClockSettings ******************************************************
struct Z_Construct_UClass_UWorldClockSettings_Statics;
THEKEEPER_API UClass* Z_Construct_UClass_UWorldClockSettings_NoRegister();

#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldClockSettings(); \
	friend struct ::Z_Construct_UClass_UWorldClockSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEKEEPER_API UClass* ::Z_Construct_UClass_UWorldClockSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldClockSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheKeeper"), Z_Construct_UClass_UWorldClockSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldClockSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldClockSettings(UWorldClockSettings&&) = delete; \
	UWorldClockSettings(const UWorldClockSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldClockSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldClockSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldClockSettings) \
	NO_API virtual ~UWorldClockSettings();


#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_9_PROLOG
#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldClockSettings;

// ********** End Class UWorldClockSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_WorldClockSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
