#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "ReplayGameWorldFunctionLibrary.generated.h"

class AFightingCharacter;
class AActor;
class UObject;
class ASCPlayerController;
class UExponentialHeightFogComponent;
class ASCCharacterImpostor;

UCLASS(BlueprintType)
class SIFU_API UReplayGameWorldFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReplayGameWorldFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPhotomodeActivated(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetReplayActorUniqueID(const AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    static AFightingCharacter* BPF_GetMainCharacter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetFinalLevelPostProcessSettings(ASCPlayerController* _playerController, FPostProcessSettings& outPostProcessSettings);
    
    UFUNCTION(BlueprintPure)
    static UExponentialHeightFogComponent* BPF_GetExponentialHeightFog(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetApplicationDeltaTime();
    
    UFUNCTION(BlueprintPure)
    static TArray<ASCCharacterImpostor*> BPF_GetActiveImpostors(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<AFightingCharacter*> BPF_GetActiveAIs(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<AActor*> BPF_GetActiveAIAndImpostors(const UObject* _worldContextObject);
    
};

