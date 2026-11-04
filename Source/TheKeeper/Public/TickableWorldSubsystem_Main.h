// Verbose commenting, it helps me learn
//https://dev.epicgames.com/documentation/unreal-engine/API/Runtime/Engine/UTickableWorldSubsystem?lang=en-US


#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h" //required for UTickableWorldSubsystem
#include "TickableWorldSubsystem_Main.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeStateChanged);

UCLASS()
class THEKEEPER_API UTickableWorldSubsystem_Main : public UTickableWorldSubsystem
{
	GENERATED_BODY() //required for unreal engine reflection system
	
public: 
	//CPP Functions, override declared but not defined 
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

	virtual bool IsTickableInEditor() const override { return false; } //Subsystem function, prevents ticking in editor

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float SecondsPerHour;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	float TimeSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	float CurrentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float InitializeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float DayStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Clock")
	float NightStart;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	bool bIsPaused = false;

	UPROPERTY(BlueprintReadOnly, Category = "World Clock")
	bool bIsDay = true;

	//events
	UPROPERTY(BlueprintAssignable, Category = "World Clock|Events")
	FOnTimeStateChanged OnDayStarted;

	UPROPERTY(BlueprintAssignable, Category = "World Clock|Events")
	FOnTimeStateChanged OnNightStarted;

	//Blueprint functions, Declared and defined in header, so they dont need to be included in CPP
	UFUNCTION(BlueprintPure, Category = "World Clock")
	float GetWorldTime() const { return CurrentTime; }

	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void PauseWorldTime() { bIsPaused = true; }

	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void ResumeWorldTime() { bIsPaused = false; }	

	//Blueprint function declared but not defined, finish in CPP
	UFUNCTION(BlueprintCallable, Category = "World Clock")
	void SetWorldTime(float NewTime, float NewTimeSpeed = 1.0f);
};
