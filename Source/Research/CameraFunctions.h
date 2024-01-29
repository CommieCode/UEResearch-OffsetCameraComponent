// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "OffsetCameraComponent.h"
#include "CameraFunctions.generated.h"

/**
 * 
 */
UCLASS()
class RESEARCH_API UCameraFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Use Additive Offset (Camera)"))
	static void UseAdditiveOffset(UCameraComponent* CameraComponent, bool bUse, const FTransform AdditiveOffset, const float FieldOfView = 0.0);


	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Use Additive Offset (Offset Camera)"))
	static void UseAdditiveOffset_OffsetCameraComponent(UOffsetCameraComponent* CameraComponent, bool bUse, const FTransform AdditiveOffset, const float FieldOfView = 0.0);
	
};
