#pragma once
#include "CoreMinimal.h"
#include "ESCAICombatRoles.h"
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionRoleChange.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAIPhaseTransitionRoleChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESCAICombatRoles m_eRole;
    
public:
    UAIPhaseTransitionRoleChange();
};

