// Verbose commenting, it helps me learn


#include "TickableWorldSubsystem_Main.h" //Header
#include "WorldClockSettings.h" //Settings file, UDeveloperSettings
#include "Engine/World.h"

void UTickableWorldSubsystem_Main::Initialize(FSubsystemCollectionBase& Collection) 
{
	Super::Initialize(Collection); //intializes the parent subsystem
	
	if(const UWorldClockSettings* Settings = GetDefault<UWorldClockSettings>())//if the settings file exists, then get values
	{
		SecondsPerHour = FMath::Max(1.0f, Settings->DefaultSecondsPerHour);
		InitializeTime = Settings->DefaultInitializeTime;
		DayStart = Settings->DefaultDayStart;
		NightStart = Settings->DefaultNightStart;
	}

	TimeSpeed = 1.0f / SecondsPerHour; 
	CurrentTime = InitializeTime;
	bIsDay = CurrentTime >= DayStart && CurrentTime < NightStart;

	#if WITH_EDITOR //print to screen in the editor, debug
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Every Second IRL is %.3f Hours %.3f minutes and %.3f Seconds Ingame"), TimeSpeed, (TimeSpeed * 60.0f), (TimeSpeed * 3600.0f)));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("One full day is %.1f minutes"), (24 * SecondsPerHour)/60.0f));
	}
	#endif

}

void UTickableWorldSubsystem_Main::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

	if (bIsPaused || !GetWorld() || GetWorld()->IsPaused())  //if the bool is true, GetWorld is null, or the world is paused do not tick
	{
		return;
	}

	CurrentTime = FMath::Fmod(CurrentTime + (DeltaTime * TimeSpeed), 24.0f); //keeps within 24 hour clock

	const bool bShouldBeDay = CurrentTime >= DayStart && CurrentTime < NightStart;//checks to see if the new time is in day or night, and broadcasts accordingly

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
	RETURN_QUICK_DECLARE_CYCLE_STAT(UTickableWorldSubsystem_Main, STATGROUP_Tickables);
}

void UTickableWorldSubsystem_Main::SetWorldTime(float NewTime, float NewTimeSpeed) //BP function to set world time
{
	CurrentTime = FMath::Clamp(NewTime, 0.0f, 24.0f);
	TimeSpeed = NewTimeSpeed;
	bIsDay = CurrentTime >= DayStart && CurrentTime < NightStart;
}
