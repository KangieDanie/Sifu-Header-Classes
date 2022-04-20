#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HittedAnimContainer.h"
#include "OrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "ImpactResult.h"
#include "HittedAnimHelper.generated.h"

class UOrderHittedGenericDB;

UCLASS(BlueprintType)
class SIFU_API UHittedAnimHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHittedAnimHelper();
    UFUNCTION(BlueprintPure)
    static void BPF_MakeGenericHitAnimWithOrderType(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, const FOrderType& _OrderType);
    
    UFUNCTION(BlueprintPure)
    static void BPF_MakeGenericHitAnim(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, TSubclassOf<UOrderHittedGenericDB> _order);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetHitAnimDuration(const FHittedAnimContainer& _animContainer, const FImpactResult& _Impact);
    
};

