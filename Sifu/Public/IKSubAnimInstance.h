#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAnimInstance -FallbackName=SCAnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "IKPropertyEvaluation.h"
#include "PropertyFloorBoneRepartition.h"
#include "IKSubAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UIKSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_SlopeCurveName;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FRotator m_FloorAngleToTarget;
    
public:
    UIKSubAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindRepartitionProperty(UPARAM(Ref) FPropertyFloorBoneRepartition& _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindProperty(UPARAM(Ref) FIKPropertyEvaluation& _fProperty, uint8 _uiEnum);
    
};

