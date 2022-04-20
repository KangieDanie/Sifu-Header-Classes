#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SCCharacterHelpers.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class SCCORE_API USCCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCCharacterHelpers();
    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetRootBoneTransform(const ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetPelvisBoneTransform(const ACharacter* _character, FTransform& _outPevlisTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector BPF_GetFloorNormal(const ACharacter* _character);
    
};

