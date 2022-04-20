#include "PredictionKey.h"

FPredictionKey::FPredictionKey() {
    this->PredictiveConnection = NULL;
    this->Current = 0;
    this->Base = 0;
    this->bIsStale = false;
    this->bIsServerInitiated = false;
}

