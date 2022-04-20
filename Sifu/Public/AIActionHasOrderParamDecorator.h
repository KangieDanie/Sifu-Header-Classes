#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "AIActionHasOrderParamDecorator.generated.h"

UCLASS()
class SIFU_API UAIActionHasOrderParamDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_OrderParamsName;
    
public:
    UAIActionHasOrderParamDecorator();
};

