#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Reach.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ChainHarmonics_Reach {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    FVector ReachTarget;
    
    UPROPERTY()
    FVector ReachAxis;
    
    UPROPERTY()
    float ReachMinimum;
    
    UPROPERTY()
    float ReachMaximum;
    
    UPROPERTY()
    EControlRigAnimEasingType ReachEase;
    
    CONTROLRIG_API FRigUnit_ChainHarmonics_Reach();
};

