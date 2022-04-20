#include "EnvQueryGenerator_ActorClassFromManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryGenerator_ActorClassFromManager::UEnvQueryGenerator_ActorClassFromManager() {
    this->m_SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_ActorClass = NULL;
}

