#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SCConditionnalAnimContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "RandomAnimDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API URandomAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalAnimContainer> m_Anims;
    
    URandomAnimDB();
    UFUNCTION(BlueprintCallable)
    FAnimContainer BPF_PickRandomAnim(AActor* _requester);
    
};

