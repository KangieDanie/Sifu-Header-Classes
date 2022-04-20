#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "HittedDeathNotify.generated.h"

class UAnimSequence;

UCLASS(CollapseCategories)
class SIFU_API UHittedDeathNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_DeathAnimation;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DeathAnimType;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorDeathAnimation;
    
    UPROPERTY(EditAnywhere)
    bool m_bUnspawnNow;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiDeathTriggeredConditionMask;
    
    UHittedDeathNotify();
};

