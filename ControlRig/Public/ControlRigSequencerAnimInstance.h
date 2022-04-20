#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimSequencerInstance -FallbackName=AnimSequencerInstance
#include "ControlRigSequencerAnimInstance.generated.h"

UCLASS(NonTransient)
class CONTROLRIG_API UControlRigSequencerAnimInstance : public UAnimSequencerInstance {
    GENERATED_BODY()
public:
    UControlRigSequencerAnimInstance();
};

