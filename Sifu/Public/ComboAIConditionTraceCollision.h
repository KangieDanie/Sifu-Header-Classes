#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvTraceShape -FallbackName=EEnvTraceShape
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
#include "AIComboCondition.h"
#include "EAIConditionTraceContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AIConditionTraceOffset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAIConditionTraceRotationContext.h"
#include "ComboAIConditionTraceCollision.generated.h"

class UAIFightingComponent;
class AActor;

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionTraceCollision : public UAIComboCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bShouldHit;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceContext m_eFrom;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceContext m_eTo;
    
    UPROPERTY(EditAnywhere)
    FAIConditionTraceOffset m_FromOffset;
    
    UPROPERTY(EditAnywhere)
    FAIConditionTraceOffset m_ToOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_TraceChannel;
    
    UPROPERTY(EditAnywhere)
    FCollisionResponseContainer m_TraceCollision;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTraceShape::Type> m_eShape;
    
    UPROPERTY(EditAnywhere)
    FVector m_vShapeExtents;
    
    UPROPERTY(EditAnywhere)
    EAIConditionTraceRotationContext m_ShapeRotationRelativeTo;
    
public:
    UComboAIConditionTraceCollision();
    UFUNCTION(BlueprintPure)
    bool BPF_TestEQCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
};

