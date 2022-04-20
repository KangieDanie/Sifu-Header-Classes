#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UDLSSMode.h"
#include "UDLSSSupport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DLSSLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UDLSSLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDLSSLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetDLSSSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    static void SetDLSSMode(UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintPure)
    static UDLSSSupport QueryDLSSSupport();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSModeSupported(UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintPure)
    static TArray<UDLSSMode> GetSupportedDLSSModes();
    
    UFUNCTION(BlueprintPure)
    static float GetDLSSSharpness();
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    
    UFUNCTION(BlueprintPure)
    static UDLSSMode GetDLSSMode();
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintPure)
    static UDLSSMode GetDefaultDLSSMode();
    
};

