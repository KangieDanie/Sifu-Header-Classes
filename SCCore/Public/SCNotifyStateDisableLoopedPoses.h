#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SCNotifyStateDisableLoopedPoses.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SCCORE_API USCNotifyStateDisableLoopedPoses : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USCNotifyStateDisableLoopedPoses();
};

