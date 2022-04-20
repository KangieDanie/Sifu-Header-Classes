#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "GameplayAbilityRepAnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityRepAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimMontage* AnimMontage;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY(NotReplicated)
    float Position;
    
    UPROPERTY()
    float BlendTime;
    
    UPROPERTY()
    uint8 NextSectionID;
    
    UPROPERTY()
    uint8 bRepPosition: 1;
    
    UPROPERTY()
    uint8 IsStopped: 1;
    
    UPROPERTY()
    uint8 ForcePlayBit: 1;
    
    UPROPERTY()
    uint8 SkipPositionCorrection: 1;
    
    UPROPERTY()
    uint8 bSkipPlayRate: 1;
    
    UPROPERTY()
    FPredictionKey PredictionKey;
    
    UPROPERTY(NotReplicated)
    uint8 SectionIdToPlay;
    
    FGameplayAbilityRepAnimMontage();
};

