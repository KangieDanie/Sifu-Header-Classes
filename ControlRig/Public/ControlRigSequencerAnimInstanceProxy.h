#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimSequencerInstanceProxy -FallbackName=AnimSequencerInstanceProxy
#include "ControlRigSequencerAnimInstanceProxy.generated.h"

USTRUCT()
struct CONTROLRIG_API FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy {
    GENERATED_BODY()
public:
    FControlRigSequencerAnimInstanceProxy();
};

