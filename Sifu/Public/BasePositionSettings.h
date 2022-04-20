#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CombatCircleDescription.h"
#include "BasePositionSettings.generated.h"

UCLASS(Abstract, DefaultConfig, Config=WuguanAI)
class SIFU_API UBasePositionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FCombatCircleDescription> m_CirclesDescriptions;
    
    UBasePositionSettings();
};

