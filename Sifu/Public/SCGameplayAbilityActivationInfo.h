#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilitySpecHandle -FallbackName=GameplayAbilitySpecHandle
#include "SCGameplayAbilityActorInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityActivationInfo -FallbackName=GameplayAbilityActivationInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "SCGameplayAbilityActivationInfo.generated.h"

class UAbilityPayload;
class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FSCGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilitySpecHandle m_Handle;
    
    UPROPERTY(BlueprintReadOnly)
    FSCGameplayAbilityActorInfo m_ActorInfos;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAbilityActivationInfo m_ActivationInfo;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayEventData m_EventData;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityPayload* m_Payload;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    FSCGameplayAbilityActivationInfo();
};

