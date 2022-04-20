#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityTargetingLocationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameplayAbilityTargetingLocationInfo.generated.h"

class AActor;
class UMeshComponent;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityTargetingLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EGameplayAbilityTargetingLocationType::Type> LocationType;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform LiteralTransform;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMeshComponent* SourceComponent;
    
    UPROPERTY(BlueprintReadWrite)
    UGameplayAbility* SourceAbility;
    
    UPROPERTY(BlueprintReadWrite)
    FName SourceSocketName;
    
    FGameplayAbilityTargetingLocationInfo();
};

