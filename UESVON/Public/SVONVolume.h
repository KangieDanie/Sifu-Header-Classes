#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "ESVOGenerationStrategy.h"
#include "SVONVolume.generated.h"

class USVONVolumeRenderingComponent;

UCLASS()
class UESVON_API ASVONVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool myShowMortonCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool myShowNeighbourLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool myShowParentChildLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 myVoxelPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> myCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EObjectTypeQuery> myObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float myClearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESVOGenerationStrategy myGenerationStrategy;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 myNumLayers;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 myNumBytes;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    USVONVolumeRenderingComponent* RenderingComp;
    
    ASVONVolume();
};

