#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCLevelSequenceRoleData -FallbackName=SCLevelSequenceRoleData
#include "EQuadrantTypes.h"
#include "ELevelSequenceAIBehavior.h"
#include "WGLevelSequenceRoleData.generated.h"

UCLASS()
class SIFU_API UWGLevelSequenceRoleData : public USCLevelSequenceRoleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EQuadrantTypes m_ForcedQuadrant;
    
    UPROPERTY(EditAnywhere)
    ELevelSequenceAIBehavior m_ForcedAIBehavior;
    
    UWGLevelSequenceRoleData();
};

