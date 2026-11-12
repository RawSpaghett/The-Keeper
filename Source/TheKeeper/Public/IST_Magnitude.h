// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IST_Magnitude.generated.h"

USTRUCT(BlueprintType)
struct FIST_Magnitude
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Magnitude")
	float Magnitude = 0.0f;
};
