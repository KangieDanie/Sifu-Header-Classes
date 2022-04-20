#pragma once
#include "CoreMinimal.h"
#include "ESlopeReaction.h"
#include "OrderService.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "HitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DetectFallOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDetectFallOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IgnoreWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bProjectVelocityOnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange m_VelocityFallRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlopeReaction m_eReactionOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlopeReaction m_eSlopeReactionWhenStartsOnSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEnterLeaveSlopeHitActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHasHitOnEnterSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitBox m_HitOnEnterSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHasHitOnLeaveSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitBox m_HitOnLeaveSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlopeReaction m_eSlopeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSteepSlopeAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlopeReaction m_eSteepSlopeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fFarSlopeHAngleMinDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESlopeReaction m_eFarSlopeHAngleReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_CustomFallAnimOnSlope;
    
    UDetectFallOrderService();
    UFUNCTION(BlueprintNativeEvent)
    FVector BPE_GetDirection(const FBPOrderServiceInstance& _instance) const;
    
};

