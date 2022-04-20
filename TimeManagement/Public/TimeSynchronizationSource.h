#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TimeSynchronizationSource.generated.h"

UCLASS(Abstract)
class TIMEMANAGEMENT_API UTimeSynchronizationSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseForSynchronization;
    
    UPROPERTY(EditAnywhere)
    int32 FrameOffset;
    
    UTimeSynchronizationSource();
};

