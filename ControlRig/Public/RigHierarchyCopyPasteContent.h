#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigHierarchyCopyPasteContent.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigHierarchyCopyPasteContent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ERigElementType> Types;
    
    UPROPERTY()
    TArray<FString> Contents;
    
    UPROPERTY()
    TArray<FTransform> LocalTransforms;
    
    UPROPERTY()
    TArray<FTransform> GlobalTransforms;
    
    FRigHierarchyCopyPasteContent();
};

