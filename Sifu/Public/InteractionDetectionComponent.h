#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BaseActorTargetConditionInstance.h"
#include "InteractionHintInfo.h"
#include "InteractionDetectionComponent.generated.h"

class AActor;
class UInteractionObjectComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FBaseActorTargetConditionInstance m_CandidateObjectCondition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInteractionHintDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyVisibleHint;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyUsableHint;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractionObjectComponent*> m_interactionHintToShow;
    
    UPROPERTY(Transient)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> m_interactionHintInfos;
    
public:
    UInteractionDetectionComponent();
    UFUNCTION(BlueprintPure)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> BPF_GetInteractionHintInfos() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInteractionObjectComponent*> BPF_GetInteractionHintComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetCurrentInteractiveObject() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractiveComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableInteractionWithObjects(TSubclassOf<AActor> _actorToDisable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AllowInteractionWithObjects(TSubclassOf<AActor> _actorToEnable);
    
};

