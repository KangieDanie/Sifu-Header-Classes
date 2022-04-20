#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ESCSignificanceBuckets.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "FootStepAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, CollapseCategories)
class SIFU_API UFootStepAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_Foot;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> m_eChannel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bTraceComplex;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fRaycastOffsetUp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fRaycastOffsetDown;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    ESCSignificanceBuckets m_eMinSignifiance;
    
public:
    UFootStepAnimNotify();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetFoot(FName _Foot) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_NotifyFootStep(USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult) const;
    
};

