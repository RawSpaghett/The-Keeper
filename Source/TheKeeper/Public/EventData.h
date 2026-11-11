// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"
#include "IST_Magnitude.h"
#include "StructUtils/InstancedStruct.h"
#include "EventData.generated.h"

UENUM(BlueprintType)
enum class EConditionComparison : uint8
{
	None,
	LessThan,
	LessThanOrEqual,
	GreaterThan,
	GreaterThanOrEqual,
	Equal
};

USTRUCT(BlueprintType)
struct FEventConditions
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConditionComparison Comparison = EConditionComparison::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThresholdValue = 0.0f;
};

USTRUCT(BlueprintType) //for blueprint instanced struct access
struct FEventMessageEnvelope
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
	FString EventID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
	FInstancedStruct OutgoingData;
};


USTRUCT(BlueprintType)
struct FEventDaily
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float baseChance = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PRCIncrement = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Cooldown = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnce;
};

USTRUCT(BlueprintType)
struct FEventData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FString EventID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FString EventDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FGameplayTag ListenChannel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data|Channels")
	FGameplayTag BroadcastChannel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FGameplayTagQuery TagQuery;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	bool bPlayerTagContainer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FEventConditions ConditionData;

	//Changeable by day
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData3;

};
