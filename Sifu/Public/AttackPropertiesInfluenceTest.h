#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AttackPropertiesInfluenceTest.generated.h"

UCLASS()
class SIFU_API UAttackPropertiesInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_AttackProperties;
    
public:
    UAttackPropertiesInfluenceTest();
};

