// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TickableWorldSubsystem_Main.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeStateChanged);

UCLASS()
class THEKEEPER_API UTickableWorldSubsystem_Main : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
public: 
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

	virtual bool IsTickableInEditor() const override { return false; }

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "World Clock")
	float TimeSpeed = 1.0f;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	float CurrentTime = 0.0f;  //midnight

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float InitializeTime = 6.0f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float DayStart = 6.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float NightStart = 18.0f;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	bool bIsPaused = false;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	bool bIsDay = true;

	//events
	UPROPERTY(BlueprintAssignable, Category = "World Clock|Events")
	FOnTimeStateChanged OnDayStarted;

	UPROPERTY(BlueprintAssignable, Category = "World Clock|Events")
	FOnTimeStateChanged OnNightStarted;

	//Blueprint functions
	UFUNCTION(BlueprintPure, Category = "World Clock")
	float GetWorldTime() const { return CurrentTime; }

	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void PauseWorldTime() { bIsPaused = true; }

	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void ResumeWorldTime() { bIsPaused = false; }	

	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void SetWorldTime(float NewTime, float NewTimeSpeed = 1.0f);
};
