#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IKFootLocation.generated.h"

USTRUCT()
struct FIKFootLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimbRootLocation;
    
    UPROPERTY(EditAnywhere)
    FVector OriginLocation;
    
    UPROPERTY(EditAnywhere)
    FVector ActualLocation;
    
    UPROPERTY(EditAnywhere)
    FVector NewLocation;
    
    CUSTOMANIMNODE_API FIKFootLocation();
};

