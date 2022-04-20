#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ImpactResult.h"
#include "HitAnimsPerDataTableContainer.h"
#include "HitRequest.h"
#include "HittedAnimContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "HitAnimRequest.generated.h"

class AFightingCharacter;
class UAnimSequence;

UCLASS(Blueprintable)
class SIFU_API UHitAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UHitAnimRequest();
    UFUNCTION(BlueprintPure)
    bool BPF_FindCustomHitAnimation(const FHitAnimsPerDataTableContainer& _data, const FHitRequest& _request, const FImpactResult& _Impact, FHittedAnimContainer& _result) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UAnimSequence*> BPE_GetHitDeathAnimations() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetHitAnimation(const FHitRequest& _request, const FImpactResult& _Impact, AFightingCharacter* _defender, FHittedAnimContainer& _result, FAnimContainer& _weaponResult) const;
    
};

