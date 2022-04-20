#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "SCAnimInstanceBase.generated.h"

UCLASS(NonTransient)
class SCCORE_API USCAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsReplayScrubSnapshotCompatible;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AnimInstanceUpdateEnable)
    bool m_bAnimInstanceUpdateEnabled;
    
public:
    USCAnimInstanceBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_AnimInstanceUpdateEnable();
    
};

