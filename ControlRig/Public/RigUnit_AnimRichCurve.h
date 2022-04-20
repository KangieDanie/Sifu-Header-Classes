#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_AnimRichCurve.generated.h"

USTRUCT()
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRuntimeFloatCurve Curve;
    
    CONTROLRIG_API FRigUnit_AnimRichCurve();
};

