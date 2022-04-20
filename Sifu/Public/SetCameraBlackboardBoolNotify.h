#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SetCameraBlackboardBoolNotify.generated.h"

UCLASS(Abstract, CollapseCategories)
class SIFU_API USetCameraBlackboardBoolNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_blackboardKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bValueToApply;
    
public:
    USetCameraBlackboardBoolNotify();
};

