#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "HittedAnimContainer.h"
#include "HitAnimsPerHitbox.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHitAnimsPerHitbox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_HitRow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseCustomHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHittedAnimContainer m_Hit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseCustomGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHittedAnimContainer m_OnGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseCustomDeath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHittedAnimContainer m_OnDeath;
    
    FHitAnimsPerHitbox();
};

