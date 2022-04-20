#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "GameplayCueParameters.generated.h"

class UObject;
class AActor;
class UPhysicalMaterial;
class USceneComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayCueParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float NormalizedMagnitude;
    
    UPROPERTY(BlueprintReadWrite)
    float RawMagnitude;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayEffectContextHandle EffectContext;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    FGameplayTag MatchedTagName;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    FGameplayTag OriginalTag;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer AggregatedSourceTags;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer AggregatedTargetTags;
    
    UPROPERTY(BlueprintReadWrite)
    FVector_NetQuantize10 Location;
    
    UPROPERTY(BlueprintReadWrite)
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> EffectCauser;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AbilityLevel;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<USceneComponent> TargetAttachComponent;
    
    FGameplayCueParameters();
};

