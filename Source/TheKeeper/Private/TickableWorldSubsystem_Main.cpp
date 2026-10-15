// Fill out your copyright notice in the Description page of Project Settings.


#include "TickableWorldSubsystem_Main.h"
#include "WorldClockSettings.h"
#include "Engine/World.h"

void UTickableWorldSubsystem_Main::Initialize(FSubsystemCollectionBase& Collection) 
{
	Super::Initialize(Collection);
	
	if(const UWorldClockSettings* Settings = GetDefault<UWorldClockSettings>())
	{
		SecondsPerHour = FMath::Max(1.0f, Settings->DefaultSecondsPerHour);
		InitializeTime = Settings->DefaultInitializeTime;
		DayStart = Settings->DefaultDayStart;
		NightStart = Settings->DefaultNightStart;
	}

	TimeSpeed = 24.0f / SecondsPerHour; // 24 hours in a day divided by seconds per hour gives the speed multiplier	
	CurrentTime = InitializeTime;
	bIsDay = CurrentTime >= DayStart && CurrentTime < NightStart;

}

void UTickableWorldSubsystem_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPaused || !GetWorld() || GetWorld()->IsPaused())
	{
		return;
	}

	CurrentTime = FMath::Fmod(CurrentTime + (DeltaTime * TimeSpeed), 24.0f); //keeps within 24 hour clock

	const bool bShouldBeDay = CurrentTime >= DayStart && CurrentTime < NightStart;

	if (bShouldBeDay != bIsDay)
	{
		bIsDay = bShouldBeDay;
		if (bIsDay)
		{
			OnDayStarted.Broadcast();
		}
		else
		{
			OnNightStarted.Broadcast();
		}
	}
}

	TStatId UTickableWorldSubsystem_Main::GetStatId() const //defines this stat group for the profiler, mandatory
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UWorldClockSubsystem, STATGROUP_Tickables);
	}

	void UTickableWorldSubsystem_Main::SetWorldTime(float NewTime, float NewTimeSpeed)
	{
		CurrentTime = FMath::Clamp(NewTime, 0.0f, 24.0f);
		TimeSpeed = NewTimeSpeed;
		bIsDay = CurrentTime >= DayStart && CurrentTime < NightStart;
	}
