#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "BoxWithNavComponent.generated.h"

class UNavArea;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UBoxWithNavComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoxWithNavComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetAreaClass(TSubclassOf<UNavArea> _navArea);
    
};

