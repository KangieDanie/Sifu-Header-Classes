#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "OrderPickupObjectHelper.generated.h"

class AFightingCharacter;
class AActor;
class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UOrderPickupObjectHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderPickupObjectHelper();
    UFUNCTION(BlueprintCallable)
    static bool BPF_SetupPickupOrderParamsAndPlay(AFightingCharacter* _fightingChar, AActor* _actorToPickup, UAnimSequence* _animSequence, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bPushPopActionState, bool _bMirror);
    
};

