#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameplayTagBlueprintPropertyMapping.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayTagBlueprintPropertyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag TagToMap;
    
    UPROPERTY(VisibleAnywhere)
    TFieldPath<FProperty> PropertyToEdit;
    
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UPROPERTY(VisibleAnywhere)
    FGuid PropertyGuid;
    
    FGameplayTagBlueprintPropertyMapping();
};

