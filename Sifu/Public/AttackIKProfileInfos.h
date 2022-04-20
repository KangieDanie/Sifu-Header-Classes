#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "AttackIKProfileInfos.generated.h"

USTRUCT(BlueprintType)
struct FAttackIKProfileInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimCurveName;
    
    SIFU_API FAttackIKProfileInfos();
};

