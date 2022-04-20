#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "ChargedBuildUpStructGenericInfos.h"
#include "ChargedBuildUpStructByQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FChargedBuildUpStructByQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_BuildUpByQuadrant[4];
    
    UPROPERTY(EditAnywhere)
    FChargedBuildUpStructGenericInfos m_Infos;
    
    SIFU_API FChargedBuildUpStructByQuadrant();
};

