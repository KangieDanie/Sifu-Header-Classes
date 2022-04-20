#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAnimInstance -FallbackName=SCAnimInstance
#include "EOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PlayAnimSubAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UPlayAnimSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    uint8 m_uiSubStateId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Transient)
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(EditAnywhere)
    FName m_IKSubInstanceTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 m_iSubStateID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    uint8 m_uiOrderID;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float m_fGlobalAlpha;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool m_bIKEnabled;
    
    UPlayAnimSubAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetTargetVerticalOffset(float _fVerticalOffet);
    
};

