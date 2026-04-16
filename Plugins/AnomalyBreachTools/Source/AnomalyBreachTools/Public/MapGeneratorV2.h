// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// ALL OTHER INCLUDES MUST GO ABOVE THIS LINE. 
#include "MapGeneratorV2.generated.h" 
// DO NOT PUT ANY #include BELOW generated.h

// Event Dispatcher so modders know when generation finishes
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapGeneratedSignature, int32, MapSeed);

UENUM(BlueprintType)
enum class EMapGenZone : uint8
{
    None UMETA(DisplayName = "Select a Zone..."),
    LCZ UMETA(DisplayName = "Light Containment Zone"),
    HCZ UMETA(DisplayName = "Heavy Containment Zone"),
    EZ UMETA(DisplayName = "Entrance Zone"),
    Checkpoint_LCZ_HCZ UMETA(DisplayName = "Checkpoint LCZ-HCZ"),
    Checkpoint_HCZ_EZ UMETA(DisplayName = "Checkpoint HCZ-EZ")
};

UENUM(BlueprintType)
enum class EMapGenRoomShape : uint8
{
    None UMETA(DisplayName = "Any Shape / None"),
    SpawnRoom UMETA(DisplayName = "Spawn Room"),
    DeadEnd UMETA(DisplayName = "Dead End"),
    Straight UMETA(DisplayName = "Straight"),
    Corner UMETA(DisplayName = "Corner"),
    TShape UMETA(DisplayName = "T-Shape"),
    Crossroad UMETA(DisplayName = "Crossroad")
};

USTRUCT(BlueprintType)
struct FMapGenRoomVariant
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    TSubclassOf<AActor> RoomClass = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    bool bGuaranteeOnce = false;
};

USTRUCT(BlueprintType)
struct FMapGenRoomVariantList
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    TArray<FMapGenRoomVariant> RoomVariants;
};

USTRUCT(BlueprintType)
struct FMapGenZoneRoomData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    TSubclassOf<AActor> DoorPrefab = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    FVector DoorScale = FVector(1.0f, 1.0f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float DoorSpawnChance = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    TMap<EMapGenRoomShape, FMapGenRoomVariantList> ShapeMap;
};

USTRUCT(BlueprintType)
struct FMapGenPOIRequest
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    FName RoomTag = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    EMapGenZone TargetZone = EMapGenZone::LCZ;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI", meta = (ToolTip = "If set to None, it will place the room in ANY shape inside the target zone."))
    EMapGenRoomShape RequiredShape = EMapGenRoomShape::None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "POI")
    TSubclassOf<AActor> RoomClass = nullptr;
};

USTRUCT(BlueprintType)
struct FMapGenCell
{
    GENERATED_BODY()

    bool bIsOccupied = false;
    bool bIsSpawnRoom = false;
    EMapGenZone Zone = EMapGenZone::None;
    EMapGenRoomShape Shape = EMapGenRoomShape::None;
    int32 GridX = 0;
    int32 GridY = 0;
    float YawRotation = 0.0f;

    TSubclassOf<AActor> AssignedClass = nullptr;
    FName RoomTag = NAME_None;

    UPROPERTY()
    AActor* SpawnedRoomActor = nullptr;
};

UCLASS()
class ANOMALYBREACHTOOLS_API AMapGeneratorV2 : public AActor
{
    GENERATED_BODY()

public:
    AMapGeneratorV2();

    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
    // ==========================================
    // DELEGATES / EVENTS
    // ==========================================

    UPROPERTY(BlueprintAssignable, Category = "SCP Map Generation|Events")
    FOnMapGeneratedSignature OnMapGenerationComplete;

    // ==========================================
    // MAP GENERATION NODES
    // ==========================================

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SCP Map Generation|Actions")
    void GenerateMap();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SCP Map Generation|Actions")
    void RegenerateMap(int32 NewSeed);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SCP Map Generation|Actions")
    void ClearMap();

    // ==========================================
    // UTILITY NODES FOR MODDERS
    // ==========================================

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    AActor* GetSpawnRoom() const;

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    AActor* GetRoomByTag(FName Tag) const;

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    AActor* GetRoomAtGridLocation(int32 X, int32 Y) const;

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    TArray<AActor*> GetRoomsInZone(EMapGenZone Zone) const;

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    bool IsGridOccupied(int32 X, int32 Y) const;

    UFUNCTION(BlueprintPure, Category = "SCP Map Generation|Utility")
    FVector GetWorldLocationFromGrid(int32 X, int32 Y) const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "SCP Map Generation|Utility")
    void ForceAddCustomRoom(int32 X, int32 Y, EMapGenZone Zone, EMapGenRoomShape Shape, TSubclassOf<AActor> RoomClass, FName OptionalTag);

    // ==========================================
    // MAP CONFIGURATION
    // ==========================================

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Sizing")
    int32 GridWidth = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Sizing")
    int32 GridHeight = 50;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Sizing", meta = (ToolTip = "Base size of each room mesh"))
    float RoomSize = 1400.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Sizing", meta = (ToolTip = "Slight physical spacing between meshes to prevent co-planar z-fighting at doors"))
    float RoomSpacing = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Sizing")
    FVector MapOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Limits")
    int32 MaxLCZRooms = 48;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Limits")
    int32 MaxHCZRooms = 32;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Limits")
    int32 MaxEZRooms = 24;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Limits")
    int32 DistanceToHCZ = 6;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Limits")
    int32 DistanceToEZ = 6;

    // ==========================================
    // ADVANCED GENERATION
    // ==========================================

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Advanced", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float BranchingFactor = 0.60f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Advanced", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float RoomDensity = 0.40f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Advanced")
    bool bAllowLoops = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Config|Advanced")
    int32 MaxGenerationRetries = 1000;

    // ==========================================
    // PREFABS & INJECTIONS
    // ==========================================

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs")
    TMap<EMapGenZone, FMapGenZoneRoomData> RoomPrefabs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Prefabs|Points of Interest")
    TArray<FMapGenPOIRequest> PointsOfInterest;

private:
    UPROPERTY(ReplicatedUsing = OnRep_MapSeed)
    int32 MapSeed;

    bool bHasGeneratedMap;

    UFUNCTION()
    void OnRep_MapSeed();

    void BuildMapLogic(int32 InSeed);
    bool TryGenerateLayout(int32 InSeed);
    void CalculateRoomShapes();
    void AssignRoomClasses();
    void SpawnRoomActors();
    void SpawnDoors();

    TArray<FMapGenCell> MapGrid;

    UPROPERTY()
    TArray<AActor*> SpawnedActors;

    UPROPERTY()
    TMap<FName, AActor*> TaggedRoomsMap;

    FRandomStream RandStream;

    int32 GetIndex(int32 X, int32 Y) const;
    bool IsValidGrid(int32 X, int32 Y) const;
    int32 CountOccupiedNeighbors(int32 X, int32 Y) const;
    bool AreZonesCompatible(EMapGenZone ZoneA, EMapGenZone ZoneB) const;
    bool HasDeadEndMesh(EMapGenZone Zone) const;
};