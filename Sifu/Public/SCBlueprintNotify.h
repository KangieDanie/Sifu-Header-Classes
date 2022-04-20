#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SCBlueprintNotify.generated.h"

class USkeletalMeshComponent;
class UAnimSequenceBase;

UCLASS(Abstract, CollapseCategories)
class SIFU_API USCBlueprintNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USCBlueprintNotify();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReceivedNotifyFromActiveOrder(USkeletalMeshComponent* _meshComp, UAnimSequenceBase* _animation) const;
    
};

