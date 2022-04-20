#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SequenceRoleTypeDescription.generated.h"

class UNameHandler;
class UAssociatedActorGetter;

USTRUCT(BlueprintType)
struct SCCORE_API FSequenceRoleTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNameHandler> m_NameHandler;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UAssociatedActorGetter>> m_RoleGettersMap;
    
    FSequenceRoleTypeDescription();
};

