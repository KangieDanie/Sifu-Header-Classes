#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TrackingBlueprintHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UTrackingBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTrackingBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_UnlockAllSkillsPermanently(int64 _iTimePlayed);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_HideoutStarted(const FString& _mapName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_HideoutCompleted(const FString& _mapName);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SendTrackingEvent_Ending(bool _bIsWudeEnding);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_OpenTrackingContext_GeographicalLocation(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_OpenTrackingContext_AISituation(const FString& _text);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CloseTrackingContext(const FString& _GuidString);
    
};

