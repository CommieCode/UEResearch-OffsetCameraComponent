// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "OffsetCameraComponent.generated.h"

/**
 * 
 */
UCLASS()
class RESEARCH_API UOffsetCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable)
	void SetUseAdditiveOffset(bool bNewValue) { this->bUseAdditiveOffset = bNewValue; }
};
