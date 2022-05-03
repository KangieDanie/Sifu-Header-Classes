#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TraversalInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "ESpeedState.h"
#include "TraversalAnimContainer.h"
#include "TraversalAnimRequest.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UTraversalAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UTraversalAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FTraversalAnimContainer& _outResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetCustomTraversalLandingAnimation(AActor* _requester, const FTraversalInfo& _request, const float _fFallHeight, const FAnimContainer& _defaultLandAnimContainer, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FAnimContainer& _outLandAnimContainer) const;
    
};

