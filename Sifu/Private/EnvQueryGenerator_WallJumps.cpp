#include "EnvQueryGenerator_WallJumps.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryGenerator_WallJumps::UEnvQueryGenerator_WallJumps() {
    this->m_RequiredComponentClass = NULL;
    this->m_SearchedActorClass = AActor::StaticClass();
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

