#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnAbilitySystemComponentTagsChangedDelegateDelegate.h"
#include "SCAbilitySystemComponentHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API USCAbilitySystemComponentHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCAbilitySystemComponentHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_AssignOnPlayerTagsChangedDelegate(const FGameplayTag& _matching, const FOnAbilitySystemComponentTagsChangedDelegate& _delegate);
    
};

