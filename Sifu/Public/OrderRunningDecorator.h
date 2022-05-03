#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "OrderRunningDecorator.generated.h"

UCLASS()
class UOrderRunningDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_eOrders;
    
public:
    UOrderRunningDecorator();
};

