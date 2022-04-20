#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorRemap.generated.h"

USTRUCT()
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Value;
    
    UPROPERTY()
    FVector SourceMinimum;
    
    UPROPERTY()
    FVector SourceMaximum;
    
    UPROPERTY()
    FVector TargetMinimum;
    
    UPROPERTY()
    FVector TargetMaximum;
    
    UPROPERTY()
    bool bClamp;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathVectorRemap();
};

