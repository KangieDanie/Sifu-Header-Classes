#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActiveGameplayEffectQueryCustomMatch_DynamicDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayAttribute.h"
#include "GameplayEffectQuery.generated.h"

class UObject;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FActiveGameplayEffectQueryCustomMatch_Dynamic CustomMatchDelegate_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagQuery OwningTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagQuery EffectTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagQuery SourceTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttribute ModifyingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* EffectSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> EffectDefinition;
    
    FGameplayEffectQuery();
};

