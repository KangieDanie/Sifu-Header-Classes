#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    int32 SortOrderHint;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bMotionBlurEnabled;
    
    UNiagaraRendererProperties();
};

