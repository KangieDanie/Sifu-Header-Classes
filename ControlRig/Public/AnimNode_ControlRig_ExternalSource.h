#pragma once
#include "CoreMinimal.h"
#include "AnimNode_ControlRigBase.h"
#include "AnimNode_ControlRig_ExternalSource.generated.h"

class UControlRig;

USTRUCT()
struct CONTROLRIG_API FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UControlRig> ControlRig;
    
public:
    FAnimNode_ControlRig_ExternalSource();
};

