#include "FoliageStatistics.h"

class UStaticMesh;
class UObject;

int32 UFoliageStatistics::FoliageOverlappingSphereCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius) {
    return 0;
}

int32 UFoliageStatistics::FoliageOverlappingBoxCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FBox Box) {
    return 0;
}

UFoliageStatistics::UFoliageStatistics() {
}

