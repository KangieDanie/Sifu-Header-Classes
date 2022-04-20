#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AttackFramesNotifyState.generated.h"

class UAttackDB;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAttackFramesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAttackDB* m_DB;
    
    UAttackFramesNotifyState();
};

