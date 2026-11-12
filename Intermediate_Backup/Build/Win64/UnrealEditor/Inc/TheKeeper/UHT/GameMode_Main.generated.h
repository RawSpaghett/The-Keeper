// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode_Main.h"

#ifdef THEKEEPER_GameMode_Main_generated_h
#error "GameMode_Main.generated.h already included, missing '#pragma once' in GameMode_Main.h"
#endif
#define THEKEEPER_GameMode_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameMode_Main ***********************************************************
struct Z_Construct_UClass_AGameMode_Main_Statics;
THEKEEPER_API UClass* Z_Construct_UClass_AGameMode_Main_NoRegister();

#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameMode_Main(); \
	friend struct ::Z_Construct_UClass_AGameMode_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEKEEPER_API UClass* ::Z_Construct_UClass_AGameMode_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameMode_Main, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheKeeper"), Z_Construct_UClass_AGameMode_Main_NoRegister) \
	DECLARE_SERIALIZER(AGameMode_Main)


#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameMode_Main(AGameMode_Main&&) = delete; \
	AGameMode_Main(const AGameMode_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMode_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMode_Main); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameMode_Main) \
	NO_API virtual ~AGameMode_Main();


#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_12_PROLOG
#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameMode_Main;

// ********** End Class AGameMode_Main *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_GameMode_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
