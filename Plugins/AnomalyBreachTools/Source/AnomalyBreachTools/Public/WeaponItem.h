#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"

// Forward declarations
class UArrowComponent;
class USoundBase;
class UParticleSystem;

#include "WeaponItem.generated.h"

UENUM(BlueprintType)
enum class EWeaponClass : uint8
{
    Ranged UMETA(DisplayName = "Ranged (Gun)"),
    Melee UMETA(DisplayName = "Melee")
};

UENUM(BlueprintType)
enum class EFireMode : uint8
{
    SemiAuto UMETA(DisplayName = "Semi-Auto"),
    FullAuto UMETA(DisplayName = "Full-Auto")
};

UCLASS()
class ANOMALYBREACHTOOLS_API AWeaponItem : public ABaseItem
{
    GENERATED_BODY()

public:
    AWeaponItem();

    // The exact point bullets/traces fire from
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon Components")
    UArrowComponent* MuzzleLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration")
    EWeaponClass WeaponType = EWeaponClass::Ranged;

    // ==========================================
    // COMBAT STATS
    // ==========================================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Combat")
    float BaseDamage = 25.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Combat")
    float HeadshotMultiplier = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Combat", meta = (ToolTip = "If hitting a bone with these names, applies Headshot Multiplier"))
    TArray<FName> HeadBoneNames;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Combat", meta = (ToolTip = "Maximum distance the bullet can travel (in cm)"))
    float WeaponRange = 10000.0f;

    // ==========================================
    // RANGED SETTINGS
    // ==========================================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Ranged")
    EFireMode FireMode = EFireMode::SemiAuto;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Ranged")
    int32 MaxMagazineSize = 30;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Ranged", meta = (ToolTip = "Rounds per minute (RPM)"))
    float FireRateRPM = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|Ranged")
    float ReloadDuration = 2.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Weapon State")
    int32 CurrentAmmo = 30;

    UPROPERTY(BlueprintReadOnly, Category = "Weapon State")
    bool bIsReloading = false;

    // ==========================================
    // PROJECTILES & FX (NEW)
    // ==========================================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX", meta = (ToolTip = "If set, weapon spawns this actor (e.g. Rocket). If empty, uses Hitscan/LineTrace for instant bullets."))
    TSubclassOf<AActor> ProjectileClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX")
    USoundBase* FireSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX")
    USoundBase* DryFireSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX")
    USoundBase* ReloadSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX")
    UParticleSystem* MuzzleFlashEffect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Configuration|FX")
    UParticleSystem* ImpactEffect;

    // ==========================================
    // ACTIONS
    // ==========================================
    UFUNCTION(BlueprintCallable, Category = "Weapon Actions")
    void StartAction();

    UFUNCTION(BlueprintCallable, Category = "Weapon Actions")
    void StopAction();

    UFUNCTION(BlueprintCallable, Category = "Weapon Actions")
    void ReloadWeapon();

    // ==========================================
    // EVENTS FOR MODDERS
    // ==========================================
    UFUNCTION(BlueprintImplementableEvent, Category = "Weapon Events")
    void OnFiredWeapon(); // Still fires so modders can add extra Blueprint logic (like recoil)

    UFUNCTION(BlueprintImplementableEvent, Category = "Weapon Events")
    void OnReloadFinished();

private:
    FTimerHandle FireTimerHandle;
    FTimerHandle ReloadTimerHandle;

    bool bCanSemiAutoFire = true;

    void ExecuteFire();
    void FinishReload();
    void PerformHitscan();
};