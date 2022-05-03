#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCBTDecorator.h"
#include "SCAIExecutePendingActionDecorator.generated.h"

UCLASS()
class SCCORE_API USCAIExecutePendingActionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USCAIExecutePendingActionDecorator();
};

