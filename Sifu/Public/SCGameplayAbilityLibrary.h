#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "SCGameplayAbilityLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class USCGameplayAbilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCGameplayAbilityLibrary();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetFloatAttribute(const AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    
};

