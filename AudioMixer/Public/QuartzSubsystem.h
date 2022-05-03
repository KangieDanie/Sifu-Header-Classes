#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzClockSettings -FallbackName=QuartzClockSettings
#include "QuartzSubsystem.generated.h"

class UObject;
class UQuartzClockHandle;

UCLASS(BlueprintType)
class AUDIOMIXER_API UQuartzSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UQuartzSubsystem();
    UFUNCTION(BlueprintCallable)
    float GetRoundTripMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRoundTripMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRoundTripAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UQuartzClockHandle* GetHandleForClock(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMinLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMaxLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadAverageLatency();
    
    UFUNCTION(BlueprintCallable)
    bool DoesClockExist(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    UQuartzClockHandle* CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists);
    
};

