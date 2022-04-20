#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
#include "DynamicBlendSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDynamicBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption m_eBlendOption;
    
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_customCurve;
    
    SCCORE_API FDynamicBlendSettings();
};

