#pragma once
#include "CoreMinimal.h"
#include "CRSimLinearSpring.generated.h"

USTRUCT()
struct FCRSimLinearSpring {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SubjectA;
    
    UPROPERTY()
    int32 SubjectB;
    
    UPROPERTY()
    float Coefficient;
    
    UPROPERTY()
    float Equilibrium;
    
    CONTROLRIG_API FCRSimLinearSpring();
};

