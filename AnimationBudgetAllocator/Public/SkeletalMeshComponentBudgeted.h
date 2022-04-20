#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkeletalMeshComponentBudgeted.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANIMATIONBUDGETALLOCATOR_API USkeletalMeshComponentBudgeted : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterWithBudgetAllocator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoCalculateSignificance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldUseActorRenderedFlag: 1;
    
public:
    USkeletalMeshComponentBudgeted();
    UFUNCTION(BlueprintCallable)
    void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
    
};

