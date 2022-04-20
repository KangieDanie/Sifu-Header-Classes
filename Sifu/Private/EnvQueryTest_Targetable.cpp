#include "EnvQueryTest_Targetable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_Targetable::UEnvQueryTest_Targetable() {
    this->m_TargetTo = UEnvQueryContext_Querier::StaticClass();
    this->m_fTargetRange = 300.00f;
}

