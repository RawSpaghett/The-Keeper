// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EventData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEventData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
THEKEEPER_API UScriptStruct* Z_Construct_UScriptStruct_FEventDaily();
THEKEEPER_API UScriptStruct* Z_Construct_UScriptStruct_FEventData();
UPackage* Z_Construct_UPackage__Script_TheKeeper();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEventDaily *******************************************************
struct Z_Construct_UScriptStruct_FEventDaily_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEventDaily); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEventDaily); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseChance_MetaData[] = {
		{ "Category", "EventDaily" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PRCIncrement_MetaData[] = {
		{ "Category", "EventDaily" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "EventDaily" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "EventDaily" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEventDaily constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PRCIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEventDaily constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventDaily>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEventDaily_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEventDaily;
class UScriptStruct* FEventDaily::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEventDaily.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEventDaily.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventDaily, (UObject*)Z_Construct_UPackage__Script_TheKeeper(), TEXT("EventDaily"));
	}
	return Z_Registration_Info_UScriptStruct_FEventDaily.OuterSingleton;
	}

// ********** Begin ScriptStruct FEventDaily Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_baseChance = { "baseChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventDaily, baseChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseChance_MetaData), NewProp_baseChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_PRCIncrement = { "PRCIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventDaily, PRCIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PRCIncrement_MetaData), NewProp_PRCIncrement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventDaily, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
void Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FEventDaily*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEventDaily), &Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventDaily_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_baseChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_PRCIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventDaily_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventDaily_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEventDaily Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventDaily_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheKeeper,
	nullptr,
	&NewStructOps,
	"EventDaily",
	Z_Construct_UScriptStruct_FEventDaily_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventDaily_Statics::PropPointers),
	sizeof(FEventDaily),
	alignof(FEventDaily),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventDaily_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventDaily_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventDaily()
{
	if (!Z_Registration_Info_UScriptStruct_FEventDaily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEventDaily.InnerSingleton, Z_Construct_UScriptStruct_FEventDaily_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEventDaily.InnerSingleton);
}
// ********** End ScriptStruct FEventDaily *********************************************************

// ********** Begin ScriptStruct FEventData ********************************************************
struct Z_Construct_UScriptStruct_FEventData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEventData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEventData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDescription_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DailyData1_MetaData[] = {
		{ "Category", "3-Days" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Changeable by day\n" },
#endif
		{ "ModuleRelativePath", "Public/EventData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changeable by day" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DailyData2_MetaData[] = {
		{ "Category", "3-Days" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DailyData3_MetaData[] = {
		{ "Category", "3-Days" },
		{ "ModuleRelativePath", "Public/EventData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEventData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DailyData1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DailyData2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DailyData3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEventData constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEventData_Statics
static_assert(std::is_polymorphic<FEventData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEventData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEventData;
class UScriptStruct* FEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventData, (UObject*)Z_Construct_UPackage__Script_TheKeeper(), TEXT("EventData"));
	}
	return Z_Registration_Info_UScriptStruct_FEventData.OuterSingleton;
	}

// ********** Begin ScriptStruct FEventData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDescription = { "EventDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, EventDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDescription_MetaData), NewProp_EventDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData1 = { "DailyData1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, DailyData1), Z_Construct_UScriptStruct_FEventDaily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DailyData1_MetaData), NewProp_DailyData1_MetaData) }; // 2550909059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData2 = { "DailyData2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, DailyData2), Z_Construct_UScriptStruct_FEventDaily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DailyData2_MetaData), NewProp_DailyData2_MetaData) }; // 2550909059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData3 = { "DailyData3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventData, DailyData3), Z_Construct_UScriptStruct_FEventDaily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DailyData3_MetaData), NewProp_DailyData3_MetaData) }; // 2550909059
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_DailyData3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEventData Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheKeeper,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"EventData",
	Z_Construct_UScriptStruct_FEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::PropPointers),
	sizeof(FEventData),
	alignof(FEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEventData.InnerSingleton, Z_Construct_UScriptStruct_FEventData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEventData.InnerSingleton);
}
// ********** End ScriptStruct FEventData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_EventData_h__Script_TheKeeper_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEventDaily::StaticStruct, Z_Construct_UScriptStruct_FEventDaily_Statics::NewStructOps, TEXT("EventDaily"),&Z_Registration_Info_UScriptStruct_FEventDaily, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventDaily), 2550909059U) },
		{ FEventData::StaticStruct, Z_Construct_UScriptStruct_FEventData_Statics::NewStructOps, TEXT("EventData"),&Z_Registration_Info_UScriptStruct_FEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventData), 2962164598U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_EventData_h__Script_TheKeeper_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_EventData_h__Script_TheKeeper_427117163{
	TEXT("/Script/TheKeeper"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_EventData_h__Script_TheKeeper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jadon_Downloads_Github_The_Keeper_Source_TheKeeper_Public_EventData_h__Script_TheKeeper_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
