#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_GetWorldTime.generated.h"

USTRUCT()
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Year;
    
    UPROPERTY()
    float Month;
    
    UPROPERTY()
    float Day;
    
    UPROPERTY()
    float WeekDay;
    
    UPROPERTY()
    float Hours;
    
    UPROPERTY()
    float Minutes;
    
    UPROPERTY()
    float Seconds;
    
    UPROPERTY()
    float OverallSeconds;
    
    CONTROLRIG_API FRigUnit_GetWorldTime();
};

