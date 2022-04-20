#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "NetOrderStructGrab.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "TargetResult.h"
#include "NetOrderStructTakedown.h"
#include "AnimSyncContainer.h"
#include "TakedownAnimRequest.generated.h"

class AFightingCharacter;
class UActorComponent;

UCLASS(Blueprintable)
class SIFU_API UTakedownAnimRequest : public UObject {
    GENERATED_BODY()
public:
    UTakedownAnimRequest();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetPushFromGrabAnimation(const AFightingCharacter* _Instigator, const AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, ESCCardinalPoints _eCardinalDirection, const FNetOrderStructGrab& _grabInfos, const FNetOrderStructGrab& _grabbedInfos, const UActorComponent* _environment, FAnimContainer& _instigatorAnims, FAnimContainer& _victimAnim) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const AFightingCharacter* _Instigator, const AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal) const;
    
};

