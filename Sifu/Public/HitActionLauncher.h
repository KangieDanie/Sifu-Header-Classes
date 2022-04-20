#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseActorTargetConditionInstance.h"
#include "HitActionLauncher.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UHitActionLauncher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBaseActorTargetConditionInstance m_hitActionCondition;
    
    UHitActionLauncher();
};

