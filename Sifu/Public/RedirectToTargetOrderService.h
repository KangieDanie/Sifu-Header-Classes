#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCRotationWay -FallbackName=ESCRotationWay
#include "EOrientationApplyMethod.h"
#include "ERedirectToTargetOrigin.h"
#include "RedirectToTargetOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API URedirectToTargetOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_StartAfterTargetService;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseAnimRootMotion;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyEvenIfNoRootRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAnimRotationWay;
    
    UPROPERTY(EditAnywhere)
    ESCRotationWay m_eRootRotationWay;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseTargetableActorComponentLocation;
    
    UPROPERTY(EditAnywhere)
    bool m_bWantLock;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseFakeDirIfNoTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertDirOnBackQuadrant;
    
    UPROPERTY(EditAnywhere)
    float m_fRedirectFrames;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAngleFromTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAngleFromStart;
    
    UPROPERTY(EditAnywhere)
    ERedirectToTargetOrigin m_eRedirectionOrigin;
    
    UPROPERTY(EditAnywhere)
    EOrientationApplyMethod m_eOrientationApplyMethod;
    
    URedirectToTargetOrderService();
    UFUNCTION(BlueprintPure)
    FVector BPF_GetRedirectionOrigin(const FVector& _target, const FBPOrderServiceInstance& _instance) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_GetMaxAngularSpeed(const FBPOrderServiceInstance& _instance) const;
    
};

