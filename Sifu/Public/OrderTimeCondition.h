#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EditableOrderType.h"
#include "EOrderAccessMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "OrderTimeCondition.generated.h"

UCLASS()
class SIFU_API UOrderTimeCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_OrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderAccessMode m_eAccessMode;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ValidTimeRange;
    
    UOrderTimeCondition();
};

