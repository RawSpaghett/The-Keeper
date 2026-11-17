// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TickableWorldSubsystem_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTickableWorldSubsystem_Main() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
THEKEEPER_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_Main();
THEKEEPER_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_Main_NoRegister();
THEKEEPER_API UFunction* Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TheKeeper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTimeStateChanged ***************************************************
struct Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTimeStateChanged constinit property declarations *******************
// ********** End Delegate FOnTimeStateChanged constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TheKeeper, nullptr, "OnTimeStateChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTimeStateChanged)
{
	OnTimeStateChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTimeStateChanged *****************************************************

// ********** Begin Class UTickableWorldSubsystem_Main Function GetWorldTime ***********************
struct Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics
{
	struct TickableWorldSubsystem_Main_eventGetWorldTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Clock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint functions, Declared and defined in header, so they dont need to be included in CPP\n" },
#endif
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint functions, Declared and defined in header, so they dont need to be included in CPP" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldTime constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldTime constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldTime Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TickableWorldSubsystem_Main_eventGetWorldTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::PropPointers) < 2048);
// ********** End Function GetWorldTime Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTickableWorldSubsystem_Main, nullptr, "GetWorldTime", 	Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::TickableWorldSubsystem_Main_eventGetWorldTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::TickableWorldSubsystem_Main_eventGetWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTickableWorldSubsystem_Main::execGetWorldTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWorldTime();
	P_NATIVE_END;
}
// ********** End Class UTickableWorldSubsystem_Main Function GetWorldTime *************************

// ********** Begin Class UTickableWorldSubsystem_Main Function PauseWorldTime *********************
struct Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PauseWorldTime constinit property declarations ************************
// ********** End Function PauseWorldTime constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTickableWorldSubsystem_Main, nullptr, "PauseWorldTime", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTickableWorldSubsystem_Main::execPauseWorldTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseWorldTime();
	P_NATIVE_END;
}
// ********** End Class UTickableWorldSubsystem_Main Function PauseWorldTime ***********************

// ********** Begin Class UTickableWorldSubsystem_Main Function ResumeWorldTime ********************
struct Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeWorldTime constinit property declarations ***********************
// ********** End Function ResumeWorldTime constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTickableWorldSubsystem_Main, nullptr, "ResumeWorldTime", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTickableWorldSubsystem_Main::execResumeWorldTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeWorldTime();
	P_NATIVE_END;
}
// ********** End Class UTickableWorldSubsystem_Main Function ResumeWorldTime **********************

// ********** Begin Class UTickableWorldSubsystem_Main Function SetWorldTime ***********************
struct Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics
{
	struct TickableWorldSubsystem_Main_eventSetWorldTime_Parms
	{
		float NewTime;
		float NewTimeSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Clock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint function declared but not defined, finish in CPP\n" },
#endif
		{ "CPP_Default_NewTimeSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint function declared but not defined, finish in CPP" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetWorldTime constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWorldTime constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWorldTime Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TickableWorldSubsystem_Main_eventSetWorldTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::NewProp_NewTimeSpeed = { "NewTimeSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TickableWorldSubsystem_Main_eventSetWorldTime_Parms, NewTimeSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::NewProp_NewTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::NewProp_NewTimeSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::PropPointers) < 2048);
// ********** End Function SetWorldTime Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTickableWorldSubsystem_Main, nullptr, "SetWorldTime", 	Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::TickableWorldSubsystem_Main_eventSetWorldTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::TickableWorldSubsystem_Main_eventSetWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTickableWorldSubsystem_Main::execSetWorldTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldTime(Z_Param_NewTime,Z_Param_NewTimeSpeed);
	P_NATIVE_END;
}
// ********** End Class UTickableWorldSubsystem_Main Function SetWorldTime *************************

// ********** Begin Class UTickableWorldSubsystem_Main *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTickableWorldSubsystem_Main;
UClass* UTickableWorldSubsystem_Main::GetPrivateStaticClass()
{
	using TClass = UTickableWorldSubsystem_Main;
	if (!Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TickableWorldSubsystem_Main"),
			Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.InnerSingleton,
			StaticRegisterNativesUTickableWorldSubsystem_Main,
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
	return Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_UTickableWorldSubsystem_Main_NoRegister()
{
	return UTickableWorldSubsystem_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TickableWorldSubsystem_Main.h" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPerHour_MetaData[] = {
		{ "Category", "World Clock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSpeed_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeTime_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayStart_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NightStart_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDay_MetaData[] = {
		{ "Category", "World Clock" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDayStarted_MetaData[] = {
		{ "Category", "World Clock|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//events\n" },
#endif
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNightStarted_MetaData[] = {
		{ "Category", "World Clock|Events" },
		{ "ModuleRelativePath", "Public/TickableWorldSubsystem_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTickableWorldSubsystem_Main constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerHour;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitializeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NightStart;
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static void NewProp_bIsDay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDayStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNightStarted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTickableWorldSubsystem_Main constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetWorldTime"), .Pointer = &UTickableWorldSubsystem_Main::execGetWorldTime },
		{ .NameUTF8 = UTF8TEXT("PauseWorldTime"), .Pointer = &UTickableWorldSubsystem_Main::execPauseWorldTime },
		{ .NameUTF8 = UTF8TEXT("ResumeWorldTime"), .Pointer = &UTickableWorldSubsystem_Main::execResumeWorldTime },
		{ .NameUTF8 = UTF8TEXT("SetWorldTime"), .Pointer = &UTickableWorldSubsystem_Main::execSetWorldTime },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTickableWorldSubsystem_Main_GetWorldTime, "GetWorldTime" }, // 2413929136
		{ &Z_Construct_UFunction_UTickableWorldSubsystem_Main_PauseWorldTime, "PauseWorldTime" }, // 4270105065
		{ &Z_Construct_UFunction_UTickableWorldSubsystem_Main_ResumeWorldTime, "ResumeWorldTime" }, // 1797270997
		{ &Z_Construct_UFunction_UTickableWorldSubsystem_Main_SetWorldTime, "SetWorldTime" }, // 3537985147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableWorldSubsystem_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics

// ********** Begin Class UTickableWorldSubsystem_Main Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_SecondsPerHour = { "SecondsPerHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, SecondsPerHour), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsPerHour_MetaData), NewProp_SecondsPerHour_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_TimeSpeed = { "TimeSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, TimeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSpeed_MetaData), NewProp_TimeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_InitializeTime = { "InitializeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, InitializeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeTime_MetaData), NewProp_InitializeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_DayStart = { "DayStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, DayStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayStart_MetaData), NewProp_DayStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_NightStart = { "NightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, NightStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NightStart_MetaData), NewProp_NightStart_MetaData) };
void Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((UTickableWorldSubsystem_Main*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableWorldSubsystem_Main), &Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPaused_MetaData), NewProp_bIsPaused_MetaData) };
void Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsDay_SetBit(void* Obj)
{
	((UTickableWorldSubsystem_Main*)Obj)->bIsDay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsDay = { "bIsDay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableWorldSubsystem_Main), &Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsDay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDay_MetaData), NewProp_bIsDay_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_OnDayStarted = { "OnDayStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, OnDayStarted), Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDayStarted_MetaData), NewProp_OnDayStarted_MetaData) }; // 1356993739
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_OnNightStarted = { "OnNightStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableWorldSubsystem_Main, OnNightStarted), Z_Construct_UDelegateFunction_TheKeeper_OnTimeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNightStarted_MetaData), NewProp_OnNightStarted_MetaData) }; // 1356993739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_SecondsPerHour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_TimeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_InitializeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_DayStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_NightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_bIsDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_OnDayStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::NewProp_OnNightStarted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::PropPointers) < 2048);
// ********** End Class UTickableWorldSubsystem_Main Property Definitions **************************
UObject* (*const Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TheKeeper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::ClassParams = {
	&UTickableWorldSubsystem_Main::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::Class_MetaDataParams)
};
void UTickableWorldSubsystem_Main::StaticRegisterNativesUTickableWorldSubsystem_Main()
{
	UClass* Class = UTickableWorldSubsystem_Main::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTickableWorldSubsystem_Main()
{
	if (!Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.OuterSingleton, Z_Construct_UClass_UTickableWorldSubsystem_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableWorldSubsystem_Main.OuterSingleton;
}
UTickableWorldSubsystem_Main::UTickableWorldSubsystem_Main() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTickableWorldSubsystem_Main);
UTickableWorldSubsystem_Main::~UTickableWorldSubsystem_Main() {}
// ********** End Class UTickableWorldSubsystem_Main ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h__Script_TheKeeper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTickableWorldSubsystem_Main, UTickableWorldSubsystem_Main::StaticClass, TEXT("UTickableWorldSubsystem_Main"), &Z_Registration_Info_UClass_UTickableWorldSubsystem_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableWorldSubsystem_Main), 3839744003U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h__Script_TheKeeper_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h__Script_TheKeeper_170728165{
	TEXT("/Script/TheKeeper"),
	Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h__Script_TheKeeper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_TickableWorldSubsystem_Main_h__Script_TheKeeper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
