#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "EQuadrantTypes.h"
#include "NetOrderStructDodge.h"
#include "DodgeAnimRequest.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UDodgeAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UDodgeAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct) const;
    
};

