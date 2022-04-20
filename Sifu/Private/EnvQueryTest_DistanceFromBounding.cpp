#include "EnvQueryTest_DistanceFromBounding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_DistanceFromBounding::UEnvQueryTest_DistanceFromBounding() {
    this->TestMode = ESCTestDistance::ItemLocationToContextBounding;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
}

