#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "TimeHelper.generated.h"

class UWorld;
class UObject;

UCLASS(BlueprintType)
class SIFU_API UTimeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeHelper();
    UFUNCTION(BlueprintCallable)
    static float GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetCurrentSynchedTimeInDateTime(const UWorld* _world);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDeltaTimeSlowMotionIndependant(UObject* _worldContextObject, float _fCurrentDt, float _fSlowMotionFactor);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds);
    
};

