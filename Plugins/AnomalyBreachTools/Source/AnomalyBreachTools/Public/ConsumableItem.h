#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "ConsumableItem.generated.h"

UENUM(BlueprintType)
enum class EConsumableType : uint8
{
    Health UMETA(DisplayName = "Health (Medkit/Pills)"),
    Stamina UMETA(DisplayName = "Stamina (Energy/Adrenaline)"),
    NightVision UMETA(DisplayName = "Wearable: Night Vision Goggles"),
    GasMask UMETA(DisplayName = "Wearable: Gas Mask"),
    Static UMETA(DisplayName = "Static/Prop (Does Nothing)") // <-- NEW: Added Static type
};

UCLASS()
class ANOMALYBREACHTOOLS_API AConsumableItem : public ABaseItem
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable Configuration")
    EConsumableType ConsumableType = EConsumableType::Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable Configuration", meta = (ToolTip = "How much health or stamina this restores. Ignored for Wearables and Static props."))
    float EffectValue = 50.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Consumable State")
    bool bIsEquipped = false;

    // ==========================================
    // ACTIONS
    // ==========================================

    UFUNCTION(BlueprintCallable, Category = "Consumable Actions")
    void UseConsumable(AActor* Player);

    UFUNCTION(BlueprintCallable, Category = "Consumable Actions")
    void EquipWearable(AActor* Player, FName HeadSocketName);

    UFUNCTION(BlueprintCallable, Category = "Consumable Actions")
    void UnequipWearable(AActor* Player);

    // ==========================================
    // EVENTS
    // ==========================================
    UFUNCTION(BlueprintImplementableEvent, Category = "Consumable Events")
    void OnItemConsumed(AActor* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "Consumable Events")
    void OnEquipped(AActor* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "Consumable Events")
    void OnUnequipped(AActor* Player);
};