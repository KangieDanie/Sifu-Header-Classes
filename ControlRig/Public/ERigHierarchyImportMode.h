#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyImportMode.generated.h"

UENUM()
enum class ERigHierarchyImportMode {
    Append,
    Replace,
    ReplaceLocalTransform,
    ReplaceGlobalTransform,
    Max,
};

