#pragma once
#include "CoreMinimal.h"
#include "EWallJumpAttackParameter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProvider_QueryParams -FallbackName=AIDataProvider_QueryParams
#include "AIDataProviderActionWallJumpAttack.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAIDataProviderActionWallJumpAttack : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWallJumpAttackParameter m_eParameter;
    
    UAIDataProviderActionWallJumpAttack();
};

