#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskOwnerInterface -FallbackName=GameplayTaskOwnerInterface
#include "BTNode.generated.h"

class UBehaviorTree;
class UBTCompositeNode;

UCLASS(Abstract, Config=Game)
class AIMODULE_API UBTNode : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString NodeName;
    
private:
    UPROPERTY()
    UBehaviorTree* TreeAsset;
    
    UPROPERTY()
    UBTCompositeNode* ParentNode;
    
public:
    UBTNode();
    
    // Fix for true pure virtual functions not being implemented
};

