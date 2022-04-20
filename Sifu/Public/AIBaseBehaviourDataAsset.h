#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AIBaseBehaviourDataAsset.generated.h"

UCLASS()
class SIFU_API UAIBaseBehaviourDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fProbabilityDepletedPerSecond;
    
    UPROPERTY(EditAnywhere)
    float m_fMinProbability;
    
    UPROPERTY(EditAnywhere)
    float m_fInitialProbability;
    
    UPROPERTY(EditAnywhere)
    float m_fCooldown;
    
    UAIBaseBehaviourDataAsset();
};

