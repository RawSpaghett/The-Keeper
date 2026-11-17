// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TickableWorldSubsystem_Main.h"

#ifdef THEKEEPER_TickableWorldSubsystem_Main_generated_h
#error "TickableWorldSubsystem_Main.generated.h already included, missing '#pragma once' in TickableWorldSubsystem_Main.h"
#endif
#define THEKEEPER_TickableWorldSubsystem_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnTimeStateChanged ***************************************************
#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_11_DELEGATE \
THEKEEPER_API void FOnTimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTimeStateChanged);


// ********** End Delegate FOnTimeStateChanged *****************************************************

// ********** Begin Class UTickableWorldSubsystem_Main *********************************************
#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWorldTime); \
	DECLARE_FUNCTION(execResumeWorldTime); \
	DECLARE_FUNCTION(execPauseWorldTime); \
	DECLARE_FUNCTION(execGetWorldTime);


struct Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics;
THEKEEPER_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_Main_NoRegister();

#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableWorldSubsystem_Main(); \
	friend struct ::Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEKEEPER_API UClass* ::Z_Construct_UClass_UTickableWorldSubsystem_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(UTickableWorldSubsystem_Main, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheKeeper"), Z_Construct_UClass_UTickableWorldSubsystem_Main_NoRegister) \
	DECLARE_SERIALIZER(UTickableWorldSubsystem_Main)


#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTickableWorldSubsystem_Main(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTickableWorldSubsystem_Main(UTickableWorldSubsystem_Main&&) = delete; \
	UTickableWorldSubsystem_Main(const UTickableWorldSubsystem_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickableWorldSubsystem_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableWorldSubsystem_Main); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTickableWorldSubsystem_Main) \
	NO_API virtual ~UTickableWorldSubsystem_Main();


#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_13_PROLOG
#define FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTickableWorldSubsystem_Main;

// ********** End Class UTickableWorldSubsystem_Main ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
