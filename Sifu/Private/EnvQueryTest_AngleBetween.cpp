#include "EnvQueryTest_AngleBetween.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_AngleBetween::UEnvQueryTest_AngleBetween() {
    this->TestMode = ESCTestAngle::Oriented;
    this->m_bInDegree = false;
    this->ThreatsToEvaluate = UEnvQueryContext_Querier::StaticClass();
}

