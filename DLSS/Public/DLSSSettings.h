#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DLSSSettings.generated.h"

UCLASS(DefaultConfig)
class DLSS_API UDLSSSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSD3D12;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSD3D11;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSVulkan;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableScreenpercentageManipulationInDLSSEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSInPlayInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDLSSSDebugOnScreenMessages;
    
    UPROPERTY(Config, VisibleAnywhere)
    FString GenericDLSSBinaryPath;
    
    UPROPERTY(Config, VisibleAnywhere)
    bool bGenericDLSSBinaryExists;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint32 NVIDIANGXApplicationId;
    
    UPROPERTY(AdvancedDisplay, Config, VisibleAnywhere)
    FString CustomDLSSBinaryPath;
    
    UPROPERTY(AdvancedDisplay, Config, VisibleAnywhere)
    bool bCustomDLSSBinaryExists;
    
    UDLSSSettings();
};

