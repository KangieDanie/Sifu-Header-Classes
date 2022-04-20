#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCEnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvTraceData -FallbackName=EnvTraceData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
#include "SCEnvQueryTest_Trace.generated.h"

class UEnvQueryContext;

UCLASS()
class SCCORE_API USCEnvQueryTest_Trace : public USCEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData m_TraceData;
    
    UPROPERTY(EditAnywhere)
    bool m_bCustomCollisionResponse;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName m_CollisionProfile;
    
    UPROPERTY(EditDefaultsOnly)
    FCollisionResponseContainer m_CollisionSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_FromContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_ToContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue m_FromZOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue m_ToZOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreQuerier;
    
    USCEnvQueryTest_Trace();
};

