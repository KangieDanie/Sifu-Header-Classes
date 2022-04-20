#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "PelvisDirectionComputationParams.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FPelvisDirectionComputationParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bUseFeetLocation;
    
    UPROPERTY(EditAnywhere)
    bool m_bInverseAxis;
    
    UPROPERTY(EditAnywhere)
    FName m_boneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> m_eAxis;
    
public:
    FPelvisDirectionComputationParams();
};

