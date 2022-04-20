#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ESVONPathCostType.h"
#include "SVONNavigationComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UESVON_API USVONNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DebugPrintCurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DebugPrintMortonCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DebugDrawOpenNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseUnitCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnitCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EstimateWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NodeSizeCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESVONPathCostType PathCostType;
    
    USVONNavigationComponent();
};

