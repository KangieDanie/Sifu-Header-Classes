#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SCGameplayAbilityActorInfo.h"
#include "SCGameplayAbilityActorInfoHelper.generated.h"

class USCAbilitySystemComponent;
class AFightingPlayerController;
class AFightingCharacter;

UCLASS(BlueprintType)
class USCGameplayAbilityActorInfoHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCGameplayAbilityActorInfoHelper();
private:
    UFUNCTION(BlueprintPure)
    static USCAbilitySystemComponent* BPF_GetSCAbilitySystem(const FSCGameplayAbilityActorInfo& _info);
    
    UFUNCTION(BlueprintPure)
    static AFightingPlayerController* BPF_GetFightingPlayerController(const FSCGameplayAbilityActorInfo& _info);
    
    UFUNCTION(BlueprintPure)
    static AFightingCharacter* BPF_GetFightingCharacter(const FSCGameplayAbilityActorInfo& _info);
    
};

