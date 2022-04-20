#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "SCBTDecorator.generated.h"

UCLASS(Abstract)
class SCCORE_API USCBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEvaluateConditionOnTick;
    
    USCBTDecorator();
};

