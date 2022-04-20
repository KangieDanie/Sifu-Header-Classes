#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRFourPointBezier.generated.h"

USTRUCT()
struct FCRFourPointBezier {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector A;
    
    UPROPERTY()
    FVector B;
    
    UPROPERTY()
    FVector C;
    
    UPROPERTY()
    FVector D;
    
    CONTROLRIG_API FCRFourPointBezier();
};

