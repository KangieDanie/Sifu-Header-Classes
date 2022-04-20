#pragma once
#include "CoreMinimal.h"
#include "ECRSimConstraintType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPointConstraint.generated.h"

USTRUCT()
struct FCRSimPointConstraint {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECRSimConstraintType Type;
    
    UPROPERTY()
    int32 SubjectA;
    
    UPROPERTY()
    int32 SubjectB;
    
    UPROPERTY()
    FVector DataA;
    
    UPROPERTY()
    FVector DataB;
    
    CONTROLRIG_API FCRSimPointConstraint();
};

