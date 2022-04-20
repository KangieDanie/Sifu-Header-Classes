#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAIPositioningOption.h"
#include "AISituationNamedActor.h"
#include "AIManagerHelpers.generated.h"

class AActor;
class UAIFightingComponent;
class AAIDirectorActor;
class AAISituationActor;

UCLASS(BlueprintType)
class SIFU_API UAIManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIManagerHelpers();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption, bool _bToggled);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetRemainingAisInActiveSituations(TArray<UAIFightingComponent*>& _outAiComponents);
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetRawLastManGauge();
    
    UFUNCTION(BlueprintPure)
    static AAIDirectorActor* BPF_GetDirectorActor();
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetDifficultyLevelGauge();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAllActiveAiSituations(TArray<AAISituationActor*>& _outAiSituations);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_GetAiSituationNamedActor(const UAIFightingComponent* _aiComponent, const FAISituationNamedActor& _name);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAiSituationActors(TArray<AAISituationActor*>& _outAiSituations, const UAIFightingComponent* _aiComponent, bool _bIncludeAlertedSpawners);
    
};

