#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAvoidTrackingTypes.h"
#include "EAvoidType.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "AvoidMatchCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UAvoidMatchCondition : public UObject {
    GENERATED_BODY()
public:
    UAvoidMatchCondition();
    UFUNCTION(BlueprintNativeEvent)
    EAvoidTrackingTypes BPE_GetAttackTrackingResponseFromAvoidType(EAvoidType _eAvoidType) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesAvoidMatch(EAvoidType _eAvoidType, const FHitBox& _hitbox, bool _bMirror) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesAvoidDismissesHit(EAvoidType _eAvoidType, ESCCardinalPoints _eCardPoint, const FHitBox& _hitbox, bool _bMirror) const;
    
};

