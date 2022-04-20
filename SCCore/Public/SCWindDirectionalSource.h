#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WindDirectionalSource -FallbackName=WindDirectionalSource
#include "SCWindDirectionalSource.generated.h"

class UMaterialParameterCollection;

UCLASS()
class SCCORE_API ASCWindDirectionalSource : public AWindDirectionalSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_windDirectionName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_windSpeedName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_windMinGustName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_windMaxGustName;
    
    ASCWindDirectionalSource();
};

