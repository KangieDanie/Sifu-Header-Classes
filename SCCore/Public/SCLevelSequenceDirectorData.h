#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SequenceRoleTypeDescription.h"
#include "MaterialParameterBlendSettings.h"
#include "ECinematicLayerTypes.h"
#include "SCLevelSequenceDirectorData.generated.h"

class USCLevelSequenceRoleData;

UCLASS(BlueprintType, CollapseCategories)
class SCCORE_API USCLevelSequenceDirectorData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<USCLevelSequenceRoleData*> m_Roles;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TMap<FGameplayTag, FSequenceRoleTypeDescription> m_RoleTypesMap;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendCharacterPositionTime;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseInAnimationTime;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseOutAnimationTime;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseInCamera;
    
    UPROPERTY(EditAnywhere)
    float m_fEaseOutCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCanSkip;
    
    UPROPERTY(EditAnywhere)
    bool m_bAnimateCameraSensor;
    
    UPROPERTY(EditAnywhere)
    bool m_bConstrainAspectRatio;
    
    UPROPERTY(EditAnywhere)
    ECinematicLayerTypes m_eCinematicLayerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialParameterBlendSettings> m_MaterialParameterBlendSettingsList;
    
    USCLevelSequenceDirectorData();
};

