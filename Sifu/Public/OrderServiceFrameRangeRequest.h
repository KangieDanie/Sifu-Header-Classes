#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "OrderServiceFrameRangeRequest.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceFrameRangeRequest : public UObject {
    GENERATED_BODY()
public:
    UOrderServiceFrameRangeRequest();
    UFUNCTION(BlueprintNativeEvent)
    FFloatRange BPE_GetFrameRange(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
};

