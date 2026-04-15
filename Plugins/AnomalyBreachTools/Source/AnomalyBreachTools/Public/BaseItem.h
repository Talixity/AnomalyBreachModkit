#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// Forward declarations MUST go above the generated.h
class UStaticMeshComponent;
class USceneComponent;

#include "BaseItem.generated.h"

UCLASS()
class ANOMALYBREACHTOOLS_API ABaseItem : public AActor
{
    GENERATED_BODY()

public:
    ABaseItem();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Components")
    USceneComponent* RootSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Components")
    UStaticMeshComponent* ItemMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Settings")
    bool bSimulatePhysicsOnDrop = true;

    UFUNCTION(BlueprintCallable, Category = "Item Actions")
    virtual void HandleGrab();

    UFUNCTION(BlueprintCallable, Category = "Item Actions")
    virtual void HandleDrop();

protected:
    FTimerHandle InactiveTimerHandle;
    FTimerHandle DespawnTimerHandle;

    UFUNCTION()
    void MakeItemInactive();

    UFUNCTION()
    void DespawnItem();
};