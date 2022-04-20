#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BTService_BlackboardBase.h"
#include "BTService_RunEQS.generated.h"

UCLASS()
class AIMODULE_API UBTService_RunEQS : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(EditAnywhere)
    bool bWantsBBResetOnQueryFailed;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EQSPauseBlackboardKey;
    
public:
    UBTService_RunEQS();
};

