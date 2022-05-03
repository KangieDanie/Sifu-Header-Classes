#pragma once
#include "CoreMinimal.h"
#include "BTService_BlackboardBase.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BlackboardKeySelector.h"
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

