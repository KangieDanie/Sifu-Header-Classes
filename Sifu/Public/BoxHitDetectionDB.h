#pragma once
#include "CoreMinimal.h"
#include "BaseShapeHitDetectionDB.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoxHitDetectionDB.generated.h"

UCLASS()
class SIFU_API UBoxHitDetectionDB : public UBaseShapeHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_Extent;
    
    UBoxHitDetectionDB();
};

