#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask -FallbackName=AITask
#include "SVONMoveTaskCompletedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIMoveRequest -FallbackName=AIMoveRequest
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIOptionFlag -FallbackName=EAIOptionFlag
#include "AITask_SVONMoveTo.generated.h"

class AActor;
class AAIController;
class UAITask_SVONMoveTo;

UCLASS()
class UESVON_API UAITask_SVONMoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FSVONMoveTaskCompletedSignature OnMoveFinished;
    
    UPROPERTY()
    FAIMoveRequest MoveRequest;
    
public:
    UAITask_SVONMoveTo();
    UFUNCTION(BlueprintCallable)
    static UAITask_SVONMoveTo* SVONAIMoveTo(AAIController* Controller, FVector GoalLocation, bool aUseAsyncPathfinding, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, bool bLockAILogic, bool bUseContinuosGoalTracking);
    
};

