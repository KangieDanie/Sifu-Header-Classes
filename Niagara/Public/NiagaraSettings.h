#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraSettings.generated.h"

class UNiagaraEffectType;

UCLASS(DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FText> QualityLevels;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> ComponentRendererWarningsPerClass;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraGpuBufferFormat DefaultGridFormat;
    
private:
    UPROPERTY(Transient)
    UNiagaraEffectType* DefaultEffectTypePtr;
    
public:
    UNiagaraSettings();
};

