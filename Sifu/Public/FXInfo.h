#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FXInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FFXInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vScale;
    
    SIFU_API FFXInfo();
};

