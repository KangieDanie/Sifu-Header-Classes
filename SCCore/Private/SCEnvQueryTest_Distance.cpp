#include "SCEnvQueryTest_Distance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Item -FallbackName=EnvQueryContext_Item

USCEnvQueryTest_Distance::USCEnvQueryTest_Distance() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->m_FromContext = UEnvQueryContext_Querier::StaticClass();
    this->m_ToContext = UEnvQueryContext_Item::StaticClass();
}

