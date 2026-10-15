// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WorldClockSettings.generated.h"

UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "World Clock|Settings"))
class THEKEEPER_API UWorldClockSettings: public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UWorldClockSettings()
	{
		CategoryName = TEXT("Game");
		SectionName = TEXT("World Clock | Settings");
	}
	// UDeveloperSettings
	UPROPERTY(Config,EditAnywhere, BlueprintReadOnly, Category = "Time Control", meta = (ClampMin = "0.0"))
	float DefaultTimeSpeed = 1.0f;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Time Control", meta = (ClampMin = "0.0", ClampMax = "24.0"))
	float DefaultInitializeTime = 6.0f;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Time Control", meta = (ClampMin = "0.0", ClampMax = "24.0"))
	float DefaultDayStart = 6.0f;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Time Control", meta = (ClampMin = "0.0", ClampMax = "24.0"))
	float DefaultNightStart = 18.0f;

};
