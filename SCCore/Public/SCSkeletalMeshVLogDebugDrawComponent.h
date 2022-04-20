#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SCSkeletalMeshVLogDebugDrawComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCSkeletalMeshVLogDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSet<FName> m_SetAllowDebugBones;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecordVLog;
    
public:
    USCSkeletalMeshVLogDebugDrawComponent();
};

