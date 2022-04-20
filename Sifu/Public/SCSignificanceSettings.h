#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCSignificanceSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SIFU_API USCSignificanceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fRecentlyRenderedLimit;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fHighBucketDist;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fMediumBucketDist;
    
    USCSignificanceSettings();
};

