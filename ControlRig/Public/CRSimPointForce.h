#pragma once
#include "CoreMinimal.h"
#include "ECRSimPointForceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPointForce.generated.h"

USTRUCT(BlueprintType)
struct FCRSimPointForce {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECRSimPointForceType ForceType;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    float Coefficient;
    
    UPROPERTY()
    bool bNormalize;
    
    CONTROLRIG_API FCRSimPointForce();
};

