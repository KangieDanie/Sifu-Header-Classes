#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "FootIkDamping.generated.h"

USTRUCT(BlueprintType)
struct FFootIkDamping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseLerp;
    
    UPROPERTY(EditAnywhere)
    float m_fDefaultValue;
    
    UPROPERTY(EditAnywhere)
    float m_fPlantedFootValue;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_curveByRelFootPos;
    
public:
    SCCORE_API FFootIkDamping();
};

