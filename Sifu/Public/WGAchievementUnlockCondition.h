#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AchievementUnlockCondition -FallbackName=AchievementUnlockCondition
#include "WGAchievementUnlockCondition.generated.h"

class AAISituationActor;

UCLASS()
class SIFU_API UWGAchievementUnlockCondition : public UAchievementUnlockCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString m_SpecificUnlockSituation;
    
public:
    UWGAchievementUnlockCondition();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationResolved(AAISituationActor* _situation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnSituationActivated(AAISituationActor* _situation);
    
};

