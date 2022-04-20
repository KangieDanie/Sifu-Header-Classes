#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatLawOfCosine.generated.h"

USTRUCT()
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float A;
    
    UPROPERTY()
    float B;
    
    UPROPERTY()
    float C;
    
    UPROPERTY()
    float AlphaAngle;
    
    UPROPERTY()
    float BetaAngle;
    
    UPROPERTY()
    float GammaAngle;
    
    UPROPERTY()
    bool bValid;
    
    CONTROLRIG_API FRigUnit_MathFloatLawOfCosine();
};

