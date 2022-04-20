#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EQuartzCommandQuantization -FallbackName=EQuartzCommandQuantization
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzMetronomeEventBP__DelegateSignature -FallbackName=OnQuartzMetronomeEventBPDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzQuantizationBoundary -FallbackName=QuartzQuantizationBoundary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzCommandEventBP__DelegateSignature -FallbackName=OnQuartzCommandEventBPDelegate
#include "QuartzClockHandle.generated.h"

UCLASS(BlueprintType, Transient)
class AUDIOMIXER_API UQuartzClockHandle : public UObject {
    GENERATED_BODY()
public:
    UQuartzClockHandle();
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromTimeDivision(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAllTimeDivisions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToQuantizationEvent(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToAllQuantizationEvents(const UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetTicksPerSecond(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float TicksPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetThirtySecondNotesPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float ThirtySecondsNotesPerMinute);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float SecondsPerTick);
    
    UFUNCTION(BlueprintCallable)
    void SetMillisecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float MillisecondsPerTick);
    
    UFUNCTION(BlueprintCallable)
    void SetBeatsPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, float BeatsPerMinute);
    
    UFUNCTION(BlueprintCallable)
    void ResumeClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PauseClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    float GetTicksPerSecond(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    float GetThirtySecondNotesPerMinute(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    float GetSecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    float GetMillisecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    float GetBeatsPerMinute(const UObject* WorldContextObject) const;
    
};

