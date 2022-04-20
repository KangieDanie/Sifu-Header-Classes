#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPoint.generated.h"

USTRUCT()
struct FCRSimPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Mass;
    
    UPROPERTY()
    float Size;
    
    UPROPERTY()
    float LinearDamping;
    
    UPROPERTY()
    float InheritMotion;
    
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FVector LinearVelocity;
    
    CONTROLRIG_API FCRSimPoint();
};

