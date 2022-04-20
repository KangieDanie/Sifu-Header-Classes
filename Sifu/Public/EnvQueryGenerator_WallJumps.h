#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator -FallbackName=EnvQueryGenerator
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "EnvQueryGenerator_WallJumps.generated.h"

class UActorComponent;
class AActor;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryGenerator_WallJumps : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorComponent> m_RequiredComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_SearchedActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> m_SearchCenter;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_SearchRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinAngleForwardToWall;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MaxAngleForwardToWall;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinSelfToWallJumpDist;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MaxSelfToWallJumpDist;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinTargetToWallJumpDist;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MaxTargetToWallJumpDist;
    
    UEnvQueryGenerator_WallJumps();
};

