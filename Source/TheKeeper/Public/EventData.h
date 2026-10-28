// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NativeGameplayTags.h"
#include "EventData.generated.h"

USTRUCT(BlueprintType)
struct FEventDaily
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float baseChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PRCIncrement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Cooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsActive;
};

USTRUCT(BlueprintType)
struct FEventData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FString EventName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FString EventDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	int32 EventID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event Data")
	FGameplayTag EventTag;
	//Changeable by day
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3-Days")
	FEventDaily DailyData3;

};
