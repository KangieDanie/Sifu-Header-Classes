#include "SCEnvQueryTest_Trace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Item -FallbackName=EnvQueryContext_Item

USCEnvQueryTest_Trace::USCEnvQueryTest_Trace() {
    this->m_bCustomCollisionResponse = false;
    this->m_FromContext = UEnvQueryContext_Querier::StaticClass();
    this->m_ToContext = UEnvQueryContext_Item::StaticClass();
    this->m_bIgnoreQuerier = true;
}

