#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDodgeDirectionType.h"
#include "DodgeTypeUseCaseMatrix.generated.h"

class UArchetypeAsset;

UCLASS(Blueprintable)
class SIFU_API UDodgeTypeUseCaseMatrix : public UObject {
    GENERATED_BODY()
public:
    UDodgeTypeUseCaseMatrix();
    UFUNCTION(BlueprintNativeEvent)
    EDodgeDirectionType BPE_GetDodgeToUseFromHitbox(const FHitBox& _hitbox, const UArchetypeAsset* _archetype) const;
    
};

